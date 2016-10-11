package com.ndkjnidemo;

/**
 * Created by liheng on 16/10/10.
 */
public class NdkJniUtils {

    static {
        System.loadLibrary("NdkJniDemo");
    }

    public static native String getStringFormC();
}
