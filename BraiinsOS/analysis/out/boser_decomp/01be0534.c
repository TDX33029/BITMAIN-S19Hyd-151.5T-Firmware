// FUN_01be0534 @ 01be0534 size=310 calls_out=7 calls_in=4
// strings: unsupported register class | _Unwind_VRS_Set | libunwind: %s - %s  | libunwind: _Unwind_VRS_Set(context=%p; regclass=%d; reg=%d; rep=%d; value=0x%llX) 

void FUN_01be0534(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_01d53560;
  uVar6 = FUN_01be2734();
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 != 0) {
    uVar4 = 0;
    uVar7 = 0;
    if (param_4 < 6) {
      uVar3 = 1 << (param_4 & 0xff);
      if ((uVar3 & 0x2a) == 0) {
        if ((uVar3 & 0x11) != 0) {
          uVar4 = *param_5;
        }
      }
      else {
        uVar4 = *param_5;
        uVar7 = param_5[1];
      }
    }
    FUN_01beb3de(&DAT_01d50fd8,
                 "libunwind: _Unwind_VRS_Set(context=%p, regclass=%d, reg=%d, rep=%d, value=0x%llX)\n"
                 ,param_1,param_2,param_3,param_4,uVar4,uVar7,uVar4,uVar7);
    FUN_01beb1cc(&DAT_01d50fd8);
    uVar4 = extraout_r1;
  }
  if (param_2 == 1) {
    if ((param_4 & 0xfffffffb) == 1) {
      if (param_4 == 1) {
        if (param_3 < 0x10) {
          FUN_01be267c(param_1);
          goto LAB_01be059e;
        }
      }
      else if (param_3 < 0x20) {
LAB_01be059e:
        uVar6 = FUN_01be2134(param_1,param_3 + 0x100,*param_5,param_5[1]);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        iVar2 = (uint)((int)uVar6 != 0) << 1;
        goto LAB_01be05b8;
      }
    }
LAB_01be05b6:
    iVar2 = 2;
  }
  else {
    if (param_2 == 5) {
      if (param_4 != 0 || param_3 != 0) goto LAB_01be05b6;
      uVar4 = *param_5;
      param_3 = 0x8f;
    }
    else {
      if (param_2 != 0) {
        FUN_01beb3de(&DAT_01d50fd8,"libunwind: %s - %s\n","_Unwind_VRS_Set",
                     "unsupported register class");
        FUN_01beb1cc(&DAT_01d50fd8);
                    /* WARNING: Subroutine does not return */
        FUN_01be32a0();
      }
      bVar5 = param_3 == 0xf;
      if (param_3 < 0x10) {
        bVar5 = param_4 == 0;
      }
      if (!bVar5) goto LAB_01be05b6;
      uVar4 = *param_5;
    }
    uVar6 = func_0x01be1e10(param_1,param_3,uVar4);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    iVar2 = (uint)((int)uVar6 != 0) << 1;
  }
LAB_01be05b8:
  if ((DAT_01d53560 ^ uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(iVar2,uVar4,DAT_01d53560 ^ uVar1,0);
  }
  return;
}

