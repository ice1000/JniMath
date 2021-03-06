package org.algo4j.error;

import org.jetbrains.annotations.Contract;
import org.jetbrains.annotations.Nls;
import org.jetbrains.annotations.NotNull;

/**
 * Created by ice1000 on 2017/1/10.
 *
 * @author ice1000
 */
@SuppressWarnings({"WeakerAccess", "unused"})
public class StackException extends RuntimeException {
	public StackException(@NotNull @Nls String message) {
		super(message);
	}

	public StackException() {
		this("Stack error!");
	}

	@Contract(pure = true)
	public static StackException overflow() {
		return new StackException("stack overflow!");
	}
}
