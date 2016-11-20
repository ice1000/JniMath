///
/// Created by ice1000 on 2016/11/19.
///

#include "org_ice1000_graph_FrontStarGraph.h"

JNIEXPORT jlongArray JNICALL Java_org_ice1000_graph_FrontStarGraph_spfa(
		JNIEnv *env,
		jobject jo,
		jint source,
		jlongArray _next,
		jlongArray _head,
		jlongArray _target,
		jlongArray _value,
		jint edge_count,
		jint node_count) {
	auto _dis = env->NewLongArray(node_count);
	auto dis = new jlong[node_count];
	auto inq = new jboolean[node_count];
	auto vis = new jint[node_count];
	auto queue = new jlong[edge_count];
	jsize begin = 0, end = 0;
	jlong i, j;
	auto option = new jboolean(false);
	auto looped = false;
	auto next = env->GetLongArrayElements(_next, option);
	auto head = env->GetLongArrayElements(_head, option);
	auto target = env->GetLongArrayElements(_target, option);
	auto value = env->GetLongArrayElements(_value, option);
	memset(dis, org_ice1000_graph_FrontStarGraph_INFINITY_FILLING, sizeof(dis[0]) * node_count);
	memset(vis, 0, sizeof(vis[0]) * node_count);
	memset(inq, false, sizeof(inq[0]) * node_count);
	dis[source] = 0;
	dis[0] = -1;
	inq[source] = true;
	queue[end++] = source;
	while (begin < end and !looped) {
		i = queue[begin++ % edge_count];
		for (j = head[i]; ~j; j = next[j]) {
			if (dis[target[j]] > dis[i] + value[j]) {
				dis[target[j]] = dis[i] + value[j];
				if (!inq[target[j]]) {
					inq[target[j]] = true;
					queue[end++ % edge_count] = target[j];
					if (++vis[target[j]] >= node_count) {
					  memset(dis, -1, sizeof(dis[0]) * node_count);
						looped = true;
						break;
					}
				}
			}
		}
		inq[i] = false;
	}
	env->ReleaseLongArrayElements(_next, next, 0);
	env->ReleaseLongArrayElements(_head, head, 0);
	env->ReleaseLongArrayElements(_target, target, 0);
	env->ReleaseLongArrayElements(_value, value, 0);
	env->SetLongArrayRegion(_dis, 0, node_count, dis);
	delete option;
	delete dis;
	delete inq;
	delete vis;
	delete queue;
	return _dis;
}

JNIEXPORT jlong JNICALL Java_org_ice1000_graph_FrontStarGraph_kruskal(
		JNIEnv *env,
		jobject jo,
		jlongArray _next,
		jlongArray _head,
		jlongArray _target,
		jlongArray _value,
		jint edge_count,
		jint node_count) {
	auto option = new jboolean(false);
	auto looped = false;
	auto next = env->GetLongArrayElements(_next, option);
	auto head = env->GetLongArrayElements(_head, option);
	auto target = env->GetLongArrayElements(_target, option);
	auto value = env->GetLongArrayElements(_value, option);
	auto uset = new jint[node_count]();
	auto depth = new jint[node_count]();
	auto edges = new FrontStarNode[edge_count]();
	jlong min_len = 0;
	jlong find_res_1;
	jlong find_res_2;
	for (auto i = 0; i < node_count; ++i) {
	  uset[i] = i;
	  for (auto j = head[i]; ~j; j = next[j]) {
		  edges[i].setValue(value[j], target[j], i);
		}
	}
	env->ReleaseLongArrayElements(_next, next, 0);
	env->ReleaseLongArrayElements(_head, head, 0);
	env->ReleaseLongArrayElements(_target, target, 0);
	env->ReleaseLongArrayElements(_value, value, 0);
	ice1000_util::quick_sort(edges, edge_count);
	for (auto i = 0; i < edge_count; ++i) {
	  find_res_1 = ice1000_uset::find(uset, edges[i].from);
	  find_res_2 = ice1000_uset::find(uset, edges[i].to);
		if (find_res_1 != find_res_2) {
		  uset[find_res_1] = find_res_2;
		}
	}
	delete option;
	delete depth;
	delete uset;
	delete edges;
	return NULL;
}


