// FUN_0109fbfc @ 0109fbfc size=32 calls_out=0 calls_in=0
// strings: accept

undefined8 FUN_0109fbfc(uint param_1)

{
  return CONCAT44(*(undefined4 *)(&DAT_0041f930 + (param_1 & 0xff) * 4),
                  (&PTR_s_accept_018b1770)[param_1 & 0xff]);
}

