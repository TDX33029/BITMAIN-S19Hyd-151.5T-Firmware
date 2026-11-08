// FUN_0134a8c0 @ 0134a8c0 size=48 calls_out=0 calls_in=2
// strings: getrandom: this target is not supported

longlong FUN_0134a8c0(uint param_1)

{
  if ((param_1 & 0x7fffffff) < 0xf) {
    return CONCAT44(*(undefined4 *)(&DAT_0053672c + param_1 * 4),
                    (&PTR_s_getrandom__this_target_is_not_su_01d31e34)[param_1]);
  }
  return (ulonglong)(param_1 & 0x7fffffff) << 0x20;
}

