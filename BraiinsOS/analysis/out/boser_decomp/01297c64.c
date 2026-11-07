// FUN_01297c64 @ 01297c64 size=40 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_01297c64(uint param_1)

{
  return CONCAT44(*(undefined4 *)(&DAT_00535ba4 + (param_1 & 0xffff) * 4),
                  (&PTR_DAT_01d31378)[param_1 & 0xffff]);
}

