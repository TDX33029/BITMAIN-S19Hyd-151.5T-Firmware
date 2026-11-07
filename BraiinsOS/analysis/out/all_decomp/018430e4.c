// FUN_018430e4 @ 018430e4 size=410 calls_out=8 calls_in=13
// strings: unsupported register class | _Unwind_VRS_Get_Internal | libunwind: %s - %s  | libunwind: _Unwind_VRS_Get(context=%p; regclass=%d; reg=%d; rep=%d; value=0x%llX; result = %d) 

int FUN_018430e4(uint param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  iVar1 = DAT_018ddaf8;
  uVar4 = 0;
  if (param_2 == 1) {
    if ((param_4 & 0xfffffffb) != 1) goto LAB_01843220;
    if (param_4 == 1) {
      if (param_3 < 0x10) {
        FUN_018450d0();
        goto LAB_0184314c;
      }
      iVar2 = FUN_01845188(param_1,0);
      if (iVar2 == 0) goto LAB_01843226;
      iVar2 = 2;
      param_2 = 1;
    }
    else {
      if (param_3 < 0x20) {
LAB_0184314c:
        uVar8 = FUN_01844a4c(param_1,param_3 + 0x100,param_5);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uVar5 = (uint)((int)uVar8 != 0);
        iVar2 = uVar5 << 1;
      }
      else {
        iVar2 = 2;
        uVar5 = param_1;
      }
      iVar3 = FUN_01845188(uVar5,uVar4);
      if (iVar3 == 0) goto LAB_018431d4;
      param_2 = 1;
LAB_0184317a:
      uVar5 = 1 << (param_4 & 0xff);
      if ((uVar5 & 0x2a) == 0) {
        if ((uVar5 & 0x11) != 0) goto LAB_0184318a;
        uVar4 = 0;
        uVar6 = 0;
        goto LAB_01843196;
      }
    }
    uVar4 = *param_5;
    uVar6 = param_5[1];
  }
  else if (param_2 == 5) {
    if (!(param_3 != 0 || param_4 != 0)) {
      iVar2 = FUN_01844758(param_1,0x8f,param_5);
      iVar3 = FUN_01845188();
      goto joined_r0x0184320c;
    }
LAB_01843220:
    iVar2 = FUN_01845188(param_1,0);
    if (iVar2 == 0) {
LAB_01843226:
      iVar2 = 2;
      goto LAB_018431d4;
    }
    uVar4 = 0;
    iVar2 = 2;
    uVar6 = 0;
    if (param_4 < 6) goto LAB_0184317a;
  }
  else {
    if (param_2 != 0) {
      FUN_016db0c6(&DAT_018db5c0,"libunwind: %s - %s\n","_Unwind_VRS_Get_Internal",
                   "unsupported register class");
      FUN_016daeb4(&DAT_018db5c0);
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24();
    }
    bVar7 = param_3 == 0xf;
    if (param_3 < 0x10) {
      bVar7 = param_4 == 0;
    }
    if (!bVar7) goto LAB_01843220;
    iVar2 = FUN_01844758(param_1,param_3,param_5);
    iVar3 = FUN_01845188();
joined_r0x0184320c:
    iVar2 = (uint)(iVar2 != 0) << 1;
    if (iVar3 == 0) goto LAB_018431d4;
LAB_0184318a:
    uVar4 = *param_5;
    uVar6 = 0;
  }
LAB_01843196:
  FUN_016db0c6(&DAT_018db5c0,
               "libunwind: _Unwind_VRS_Get(context=%p, regclass=%d, reg=%d, rep=%d, value=0x%llX, result = %d)\n"
               ,param_1,param_2,param_3,param_4,uVar4,uVar6,iVar2);
  FUN_016daeb4(&DAT_018db5c0);
LAB_018431d4:
  if (DAT_018ddaf8 != iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar2;
}

