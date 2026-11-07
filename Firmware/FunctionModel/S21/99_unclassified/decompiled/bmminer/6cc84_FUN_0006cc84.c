// FUN_0006cc84 @ 0006cc84  size=284  callers=2
// program: bmminer


undefined * FUN_0006cc84(undefined *param_1)

{
  uint in_fpscr;
  double dVar1;
  undefined *local_c;
  
  if (param_1 == (undefined *)0x1c200) {
    local_c = (undefined *)0x1a;
  }
  else if (param_1 == &DAT_000f4240) {
    local_c = (undefined *)0x2;
  }
  else {
    dVar1 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    if (dVar1 == 1500000.0) {
      local_c = (undefined *)0x1;
    }
    else if (param_1 == &DAT_002dc6c0) {
      local_c = (undefined *)0x0;
    }
    else if (param_1 == &DAT_005b8d80) {
      local_c = (undefined *)0x3;
    }
    else if (param_1 == &DAT_00b71b00) {
      local_c = (undefined *)0x4;
    }
    else if (param_1 == (undefined *)0x17d7840) {
      local_c = (undefined *)0x5;
    }
    else {
      local_c = param_1;
    }
  }
  return local_c;
}

