// FUN_00049df8 @ 00049df8  size=172  callers=2
// program: bmminer


undefined * FUN_00049df8(undefined *param_1)

{
  uint in_fpscr;
  double dVar1;
  
  if (param_1 == (undefined *)0x1c200) {
    return (undefined *)0x1a;
  }
  if (param_1 == &DAT_000f4240) {
    return (undefined *)0x2;
  }
  dVar1 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  if (dVar1 == 1500000.0) {
    return (undefined *)0x1;
  }
  if (param_1 == &DAT_002dc6c0) {
    return (undefined *)0x0;
  }
  if (param_1 == &DAT_005b8d80) {
    return (undefined *)0x3;
  }
  if (param_1 == (undefined *)0xb71b00) {
    return (undefined *)0x4;
  }
  if (param_1 == (undefined *)0x17d7840) {
    param_1 = (undefined *)0x5;
  }
  return param_1;
}

