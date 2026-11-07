// FUN_010a84b4 @ 010a84b4 size=32 calls_out=0 calls_in=4
// strings: accept

undefined8 FUN_010a84b4(uint param_1)

{
  return CONCAT44(*(undefined4 *)(&DAT_0041fb98 + (param_1 & 0xff) * 4),
                  (&PTR_s_accept_018b1a40)[param_1 & 0xff]);
}

