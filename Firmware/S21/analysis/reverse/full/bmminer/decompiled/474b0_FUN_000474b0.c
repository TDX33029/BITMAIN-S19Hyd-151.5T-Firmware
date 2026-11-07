// FUN_000474b0 @ 000474b0  size=88  callers=1
// program: bmminer


undefined4 FUN_000474b0(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = 0x7f6 < param_3;
  bVar1 = param_3 == 0x7f7;
  if (param_3 < 0x7f8) {
    bVar2 = 0xfe < param_2;
    bVar1 = param_2 == 0xff;
  }
  if (param_1 < 4 && (!bVar2 || bVar1)) {
    return *(undefined4 *)
            (&DAT_000cb678 + (param_1 * 0x7f800 + param_2 * 0x7f8 + param_3 + 0x404) * 4);
  }
  return 0;
}

