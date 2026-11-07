// FUN_00073e10 @ 00073e10  size=228  callers=1
// program: bmminer


undefined4 FUN_00073e10(undefined4 param_1)

{
  uint in_fpscr;
  double dVar1;
  
  if (DAT_009451f8 < 0x78) {
    if ((0x74 < DAT_009451f8) || (DAT_009451f8 == 0x71)) {
      dVar1 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      return SUB84(dVar1 * 0.015876,0);
    }
    if (DAT_009451f8 == 0x73) {
LAB_00073e94:
      dVar1 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      return SUB84(dVar1 * 0.018957,0);
    }
  }
  else {
    if (DAT_009451f8 == 0x78) goto LAB_00073e94;
    if (DAT_009451f8 - 0xc1 < 2) {
      dVar1 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      return SUB84(dVar1 * 0.003965,0);
    }
  }
  return 0;
}

