// FUN_01be1ff8 @ 01be1ff8 size=316 calls_out=7 calls_in=1
// strings: libunwind: __unw_get_fpreg(cursor=%p; regNum=%d; &value=%p)  | LIBUNWIND_PRINT_APIS

uint FUN_01be1ff8(int *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_r2;
  uint *extraout_r2_00;
  code *pcVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined8 uVar8;
  longlong lVar9;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_4c;
  code *pcStack_44;
  int iStack_3c;
  undefined4 uStack_34;
  undefined *puStack_2c;
  
  puVar7 = &DAT_01d53488;
  if (DAT_01d53488 == '\0') {
    iVar1 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    DAT_01d53487 = iVar1 != 0;
    DAT_01d53488 = '\x01';
  }
  if (DAT_01d53487 != '\0') {
    puVar7 = &DAT_01d50fd8;
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_get_fpreg(cursor=%p, regNum=%d, &value=%p)\n",
                 param_1,param_2);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x14);
  if (UNRECOVERED_JUMPTABLE == (code *)&LAB_01be1344_1) {
    if (0x1f < param_2 - 0x100) {
      return 0xffffe672;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
    if (UNRECOVERED_JUMPTABLE == (code *)&DAT_01be16a1) {
LAB_01be203c:
      if (param_2 - 0x100 < 0x10) {
        if (*(char *)((int)param_1 + 0x4d) == '\0') {
          *(undefined1 *)((int)param_1 + 0x4d) = 1;
          if ((char)param_1[0x13] == '\0') {
            FUN_01bdfb8c(param_1 + 0x14);
          }
          else {
            FUN_01bdfb94();
          }
        }
        uVar8 = *(undefined8 *)(param_1 + (param_2 - 0xf7) * 2 + 2);
        goto LAB_01be205e;
      }
      if (param_2 - 0x110 < 0x10) {
        if (*(char *)((int)param_1 + 0x4e) == '\0') {
          *(undefined1 *)((int)param_1 + 0x4e) = 1;
          FUN_01bdfb9c(param_1 + 0x36);
        }
        uVar8 = *(undefined8 *)(param_1 + (param_2 - 0xf6) * 2 + 2);
        goto LAB_01be205e;
      }
      FUN_01be145c();
      param_3 = (undefined8 *)&DAT_000000e9;
      UNRECOVERED_JUMPTABLE = (code *)((int)extraout_r2 >> 0x11);
      param_1 = (int *)(param_2 * 0x40);
      uVar4 = param_2 & 0x2000000;
      iStack_3c = param_2 << 7;
      param_2 = extraout_r1;
      if (uVar4 == 0 || param_1 == (int *)0x0) goto LAB_01be20e4;
      coprocessor_function2(0xd,9,0,in_cr12,in_cr13,in_cr12);
      coprocessor_function2(3,9,7,in_cr1,in_cr13,in_cr13);
      uStack_34 = 0xe9;
      puStack_2c = puVar7;
      if (DAT_01d53488 == '\0') {
        iVar1 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
        DAT_01d53487 = iVar1 != 0;
        DAT_01d53488 = '\x01';
      }
      if (DAT_01d53487 != '\0') {
        pcStack_44 = UNRECOVERED_JUMPTABLE;
        FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_set_fpreg(cursor=%p, regNum=%d, value=%llX)\n",
                     param_1,extraout_r1);
        FUN_01beb1cc(&DAT_01d50fd8);
      }
      pcVar5 = *(code **)(*param_1 + 0x14);
      if (pcVar5 == (code *)&LAB_01be1344_1) {
        if (0x1f < extraout_r1 - 0x100) {
          return 0xffffe672;
        }
        pcVar5 = *(code **)(*param_1 + 0x1c);
      }
      else {
        iVar1 = (*pcVar5)(param_1,extraout_r1);
        if (iVar1 == 0) {
          return 0xffffe672;
        }
        pcVar5 = *(code **)(*param_1 + 0x1c);
      }
      if (pcVar5 != FUN_01be1710 + 1) {
        (*pcVar5)(param_1,extraout_r1,extraout_r2,UNRECOVERED_JUMPTABLE);
        return 0;
      }
      if (extraout_r1 - 0x100 < 0x10) {
        if (*(char *)((int)param_1 + 0x4d) == '\0') {
          *(undefined1 *)((int)param_1 + 0x4d) = 1;
          if ((char)param_1[0x13] == '\0') {
            FUN_01bdfb8c(param_1 + 0x14);
          }
          else {
            FUN_01bdfb94();
          }
        }
        param_1[(extraout_r1 - 0xf7) * 2 + 2] = extraout_r2;
        param_1[(extraout_r1 - 0xf7) * 2 + 3] = (int)UNRECOVERED_JUMPTABLE;
        return 0;
      }
      if (extraout_r1 - 0x110 < 0x10) {
        if (*(char *)((int)param_1 + 0x4e) == '\0') {
          *(undefined1 *)((int)param_1 + 0x4e) = 1;
          FUN_01bdfb9c(param_1 + 0x36);
        }
        param_1[(extraout_r1 - 0xf6) * 2 + 2] = extraout_r2;
        param_1[(extraout_r1 - 0xf6) * 2 + 3] = (int)UNRECOVERED_JUMPTABLE;
        return 0;
      }
      uVar8 = FUN_01be149c();
      uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
      piVar2 = (int *)(((int)uVar8 >> 0xd) * 0x40);
      iStack_58 = extraout_r1 << 0xd;
      *extraout_r2_00 = uVar4;
      extraout_r2_00[1] = (uint)extraout_r2_00;
      extraout_r2_00[2] = (int)extraout_r2_00 >> 0xc;
      extraout_r2_00[3] = (uint)extraout_r2_00;
      extraout_r2_00[4] = extraout_r2;
      extraout_r2_00[5] = (uint)extraout_r2_00;
      coprocessor_function2(0xb,9,6,in_cr12,in_cr13,in_cr6);
      coprocessor_function2(2,9,5,in_cr1,in_cr13,in_cr7);
      uStack_4c = 0x1be2267;
      uStack_5c = DAT_01d53560;
      if (DAT_01d53488 == '\0') {
        uVar8 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
        uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
        DAT_01d53487 = (int)uVar8 != 0;
        DAT_01d53488 = '\x01';
      }
      lVar9 = (ulonglong)uVar4 << 0x20;
      if (DAT_01d53487 != '\0') {
        FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_step(cursor=%p)\n",piVar2);
        lVar9 = FUN_01beb1cc(&DAT_01d50fd8);
      }
      uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
      uVar6 = (uint)lVar9;
      UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)&LAB_01be14dc_1) {
        uVar4 = DAT_01d53560 ^ uStack_5c;
        if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01be236a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*UNRECOVERED_JUMPTABLE)(piVar2,0,UNRECOVERED_JUMPTABLE,0);
          return uVar4;
        }
        goto LAB_01be236c;
      }
      uVar6 = (uint)*(byte *)(piVar2 + 0x60);
      if (uVar6 == 0) {
        uStack_64 = uVar6;
        uStack_60 = uVar6;
        uVar3 = FUN_01be0148(piVar2[0x5e],&uStack_60,&uStack_64);
        uVar8 = FUN_01be0df8(piVar2,uVar3,uStack_60,uStack_64);
        uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 != 8) goto LAB_01be22ca;
        (**(code **)(*piVar2 + 0x34))(piVar2,1);
        uVar6 = *(byte *)(piVar2 + 0x60) ^ 1;
        uVar4 = extraout_r1_00;
      }
      else {
LAB_01be22ca:
        uVar6 = 0;
      }
      UNRECOVERED_JUMPTABLE = (code *)(DAT_01d53560 ^ uStack_5c);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return uVar6;
      }
LAB_01be236c:
                    /* WARNING: Subroutine does not return */
      FUN_01be31f4(uVar6,uVar4,UNRECOVERED_JUMPTABLE,0);
    }
  }
  else {
    iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    if (iVar1 == 0) {
      return 0xffffe672;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
    if (UNRECOVERED_JUMPTABLE == (code *)&DAT_01be16a1) goto LAB_01be203c;
  }
LAB_01be20e4:
  uVar8 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
LAB_01be205e:
  *param_3 = uVar8;
  return 0;
}

