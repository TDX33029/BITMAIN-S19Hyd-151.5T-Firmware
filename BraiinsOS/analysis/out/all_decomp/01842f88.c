// FUN_01842f88 @ 01842f88 size=310 calls_out=8 calls_in=4
// strings: unsupported register class | _Unwind_VRS_Set | libunwind: %s - %s  | libunwind: _Unwind_VRS_Set(context=%p; regclass=%d; reg=%d; rep=%d; value=0x%llX) 

void FUN_01842f88(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_018ddaf8;
  uVar6 = FUN_01845188();
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
    FUN_016db0c6(&DAT_018db5c0,
                 "libunwind: _Unwind_VRS_Set(context=%p, regclass=%d, reg=%d, rep=%d, value=0x%llX)\n"
                 ,param_1,param_2,param_3,param_4,uVar4,uVar7,uVar4,uVar7);
    FUN_016daeb4(&DAT_018db5c0);
    uVar4 = extraout_r1;
  }
  if (param_2 == 1) {
    if ((param_4 & 0xfffffffb) == 1) {
      if (param_4 == 1) {
        if (param_3 < 0x10) {
          FUN_018450d0(param_1);
          goto LAB_01842ff2;
        }
      }
      else if (param_3 < 0x20) {
LAB_01842ff2:
        uVar6 = FUN_01844b88(param_1,param_3 + 0x100,*param_5,param_5[1]);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        iVar2 = (uint)((int)uVar6 != 0) << 1;
        goto LAB_0184300c;
      }
    }
LAB_0184300a:
    iVar2 = 2;
  }
  else {
    if (param_2 == 5) {
      if (param_4 != 0 || param_3 != 0) goto LAB_0184300a;
      uVar4 = *param_5;
      param_3 = 0x8f;
    }
    else {
      if (param_2 != 0) {
        FUN_016db0c6(&DAT_018db5c0,"libunwind: %s - %s\n","_Unwind_VRS_Set",
                     "unsupported register class");
        FUN_016daeb4(&DAT_018db5c0);
                    /* WARNING: Subroutine does not return */
        FUN_016d2c24();
      }
      bVar5 = param_3 == 0xf;
      if (param_3 < 0x10) {
        bVar5 = param_4 == 0;
      }
      if (!bVar5) goto LAB_0184300a;
      uVar4 = *param_5;
    }
    uVar6 = FUN_01844864(param_1,param_3,uVar4);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    iVar2 = (uint)((int)uVar6 != 0) << 1;
  }
LAB_0184300c:
  if ((DAT_018ddaf8 ^ uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(iVar2,uVar4,DAT_018ddaf8 ^ uVar1,0);
  }
  return;
}

