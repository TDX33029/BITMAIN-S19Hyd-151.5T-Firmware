// FUN_01be2134 @ 01be2134 size=344 calls_out=7 calls_in=1
// strings: libunwind: __unw_set_fpreg(cursor=%p; regNum=%d; value=%llX)  | LIBUNWIND_PRINT_APIS

uint FUN_01be2134(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint uVar4;
  uint *extraout_r2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar6;
  longlong lVar7;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_38;
  uint uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  int iStack_24;
  
  if (DAT_01d53488 == '\0') {
    iVar1 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    DAT_01d53487 = iVar1 != 0;
    DAT_01d53488 = '\x01';
  }
  if (DAT_01d53487 != '\0') {
    local_28 = param_3;
    iStack_24 = param_4;
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_set_fpreg(cursor=%p, regNum=%d, value=%llX)\n",
                 param_1,param_2);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x14);
  if (UNRECOVERED_JUMPTABLE == (code *)&LAB_01be1344_1) {
    if (0x1f < param_2 - 0x100U) {
      return 0xffffe672;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c);
  }
  else {
    iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    if (iVar1 == 0) {
      return 0xffffe672;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c);
  }
  if (UNRECOVERED_JUMPTABLE != FUN_01be1710 + 1) {
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return 0;
  }
  if (param_2 - 0x100U < 0x10) {
    if (*(char *)((int)param_1 + 0x4d) == '\0') {
      *(undefined1 *)((int)param_1 + 0x4d) = 1;
      if ((char)param_1[0x13] == '\0') {
        FUN_01bdfb8c(param_1 + 0x14);
      }
      else {
        FUN_01bdfb94();
      }
    }
    param_1[(param_2 + -0xf7) * 2 + 2] = param_3;
    param_1[(param_2 + -0xf7) * 2 + 3] = param_4;
    return 0;
  }
  if (param_2 - 0x110U < 0x10) {
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
      *(undefined1 *)((int)param_1 + 0x4e) = 1;
      FUN_01bdfb9c(param_1 + 0x36);
    }
    param_1[(param_2 + -0xf6) * 2 + 2] = param_3;
    param_1[(param_2 + -0xf6) * 2 + 3] = param_4;
    return 0;
  }
  uVar6 = FUN_01be149c();
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  piVar2 = (int *)(((int)uVar6 >> 0xd) * 0x40);
  iStack_38 = param_2 << 0xd;
  *extraout_r2 = uVar4;
  extraout_r2[1] = (uint)extraout_r2;
  extraout_r2[2] = (int)extraout_r2 >> 0xc;
  extraout_r2[3] = (uint)extraout_r2;
  extraout_r2[4] = param_3;
  extraout_r2[5] = (uint)extraout_r2;
  coprocessor_function2(0xb,9,6,in_cr12,in_cr13,in_cr6);
  coprocessor_function2(2,9,5,in_cr1,in_cr13,in_cr7);
  uStack_2c = 0x1be2267;
  uStack_3c = DAT_01d53560;
  uStack_30 = param_3;
  if (DAT_01d53488 == '\0') {
    uVar6 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
    DAT_01d53487 = (int)uVar6 != 0;
    DAT_01d53488 = '\x01';
  }
  lVar7 = (ulonglong)uVar4 << 0x20;
  if (DAT_01d53487 != '\0') {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_step(cursor=%p)\n",piVar2);
    lVar7 = FUN_01beb1cc(&DAT_01d50fd8);
  }
  uVar4 = (uint)((ulonglong)lVar7 >> 0x20);
  uVar5 = (uint)lVar7;
  UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)&LAB_01be14dc_1) {
    uVar4 = DAT_01d53560 ^ uStack_3c;
    if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01be236a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(piVar2,0,UNRECOVERED_JUMPTABLE,0);
      return uVar4;
    }
    goto LAB_01be236c;
  }
  uVar5 = (uint)*(byte *)(piVar2 + 0x60);
  if (uVar5 == 0) {
    uStack_44 = uVar5;
    uStack_40 = uVar5;
    uVar3 = FUN_01be0148(piVar2[0x5e],&uStack_40,&uStack_44);
    uVar6 = FUN_01be0df8(piVar2,uVar3,uStack_40,uStack_44);
    uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 8) goto LAB_01be22ca;
    (**(code **)(*piVar2 + 0x34))(piVar2,1);
    uVar5 = *(byte *)(piVar2 + 0x60) ^ 1;
    uVar4 = extraout_r1;
  }
  else {
LAB_01be22ca:
    uVar5 = 0;
  }
  UNRECOVERED_JUMPTABLE = (code *)(DAT_01d53560 ^ uStack_3c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return uVar5;
  }
LAB_01be236c:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4(uVar5,uVar4,UNRECOVERED_JUMPTABLE,0);
}

