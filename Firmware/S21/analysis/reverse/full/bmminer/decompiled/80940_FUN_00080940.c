// FUN_00080940 @ 00080940  size=168  callers=3
// program: bmminer


int FUN_00080940(void)

{
  int iVar1;
  double in_d0;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((NAN(in_d0)) || (1.7976931348623157e+308 < ABS(in_d0))) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0007d8a0(0x10);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_0007e9c8(iVar1,4);
      local_18 = SUB84(in_d0,0);
      uStack_14 = (undefined4)((ulonglong)in_d0 >> 0x20);
      *(undefined4 *)(iVar1 + 8) = local_18;
      *(undefined4 *)(iVar1 + 0xc) = uStack_14;
    }
  }
  return iVar1;
}

