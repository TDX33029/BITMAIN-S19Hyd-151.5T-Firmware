// FUN_01014574 @ 01014574 size=32 calls_out=0 calls_in=0
// strings: accept

undefined8 FUN_01014574(uint param_1)

{
  return CONCAT44(*(undefined4 *)(&DAT_0041f3d4 + (param_1 & 0xff) * 4),
                  (&PTR_s_accept_018b12bc)[param_1 & 0xff]);
}

