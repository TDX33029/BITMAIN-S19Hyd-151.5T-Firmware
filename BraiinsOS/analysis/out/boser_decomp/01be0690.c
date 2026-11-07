// FUN_01be0690 @ 01be0690 size=410 calls_out=8 calls_in=13
// strings: unsupported register class | _Unwind_VRS_Get_Internal | libunwind: %s - %s  | libunwind: _Unwind_VRS_Get(context=%p; regclass=%d; reg=%d; rep=%d; value=0x%llX; result = %d) 

int FUN_01be0690(uint param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  iVar1 = DAT_01d53560;
  uVar4 = 0;
  if (param_2 == 1) {
    if ((param_4 & 0xfffffffb) != 1) goto LAB_01be07cc;
    if (param_4 == 1) {
      if (param_3 < 0x10) {
        FUN_01be267c();
        goto LAB_01be06f8;
      }
      iVar2 = FUN_01be2734(param_1,0);
      if (iVar2 == 0) goto LAB_01be07d2;
      iVar2 = 2;
      param_2 = 1;
    }
    else {
      if (param_3 < 0x20) {
LAB_01be06f8:
        uVar8 = FUN_01be1ff8(param_1,param_3 + 0x100,param_5);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar5 = (uint)((int)uVar8 != 0);
        iVar2 = uVar5 << 1;
      }
      else {
        iVar2 = 2;
        uVar5 = param_1;
      }
      iVar3 = FUN_01be2734(uVar5,uVar4);
      if (iVar3 == 0) goto LAB_01be0780;
      param_2 = 1;
LAB_01be0726:
      uVar5 = 1 << (param_4 & 0xff);
      if ((uVar5 & 0x2a) == 0) {
        if ((uVar5 & 0x11) != 0) goto LAB_01be0736;
        uVar4 = 0;
        uVar6 = 0;
        goto LAB_01be0742;
      }
    }
    uVar4 = *param_5;
    uVar6 = param_5[1];
  }
  else if (param_2 == 5) {
    if (!(param_3 != 0 || param_4 != 0)) {
      iVar2 = FUN_01be1d04(param_1,0x8f,param_5);
      iVar3 = FUN_01be2734();
      goto joined_r0x01be07b8;
    }
LAB_01be07cc:
    iVar2 = FUN_01be2734(param_1,0);
    if (iVar2 == 0) {
LAB_01be07d2:
      iVar2 = 2;
      goto LAB_01be0780;
    }
    uVar4 = 0;
    iVar2 = 2;
    uVar6 = 0;
    if (param_4 < 6) goto LAB_01be0726;
  }
  else {
    if (param_2 != 0) {
      FUN_01beb3de(&DAT_01d50fd8,"libunwind: %s - %s\n","_Unwind_VRS_Get_Internal",
                   "unsupported register class");
      FUN_01beb1cc(&DAT_01d50fd8);
                    /* WARNING: Subroutine does not return */
      FUN_01be32a0();
    }
    bVar7 = param_3 == 0xf;
    if (param_3 < 0x10) {
      bVar7 = param_4 == 0;
    }
    if (!bVar7) goto LAB_01be07cc;
    iVar2 = FUN_01be1d04(param_1,param_3,param_5);
    iVar3 = FUN_01be2734();
joined_r0x01be07b8:
    iVar2 = (uint)(iVar2 != 0) << 1;
    if (iVar3 == 0) goto LAB_01be0780;
LAB_01be0736:
    uVar4 = *param_5;
    uVar6 = 0;
  }
LAB_01be0742:
  FUN_01beb3de(&DAT_01d50fd8,
               "libunwind: _Unwind_VRS_Get(context=%p, regclass=%d, reg=%d, rep=%d, value=0x%llX, result = %d)\n"
               ,param_1,param_2,param_3,param_4,uVar4,uVar6,iVar2);
  FUN_01beb1cc(&DAT_01d50fd8);
LAB_01be0780:
  if (DAT_01d53560 != iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar2;
}

