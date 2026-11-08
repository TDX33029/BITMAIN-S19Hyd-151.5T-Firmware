// FUN_01844b88 @ 01844b88 size=344 calls_out=7 calls_in=1
// strings: libunwind: __unw_set_fpreg(cursor=%p; regNum=%d; value=%llX)  | LIBUNWIND_PRINT_APIS

uint FUN_01844b88(int *param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint extraout_r1;
  uint uVar6;
  uint extraout_r2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr11;
  undefined8 uVar8;
  longlong lVar9;
  
  if (DAT_018dffe0 == '\0') {
    iVar4 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar4 != 0;
    DAT_018dffe0 = '\x01';
  }
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_set_fpreg(cursor=%p, regNum=%d, value=%llX)\n",
                 param_1,param_2,param_3,param_4);
    FUN_016daeb4(&DAT_018db5c0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x14);
  if (UNRECOVERED_JUMPTABLE == (code *)&LAB_01843d98_1) {
    if (0x1f < param_2 - 0x100U) {
      return 0xffffe672;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c);
  }
  else {
    iVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    if (iVar4 == 0) {
      return 0xffffe672;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c);
  }
  if (UNRECOVERED_JUMPTABLE != FUN_01844164 + 1) {
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return 0;
  }
  if (param_2 - 0x100U < 0x10) {
    if (*(char *)((int)param_1 + 0x4d) == '\0') {
      *(undefined1 *)((int)param_1 + 0x4d) = 1;
      if ((char)param_1[0x13] == '\0') {
        FUN_018425e0(param_1 + 0x14);
      }
      else {
        FUN_018425e8();
      }
    }
    param_1[(param_2 + -0xf7) * 2 + 2] = param_3;
    param_1[(param_2 + -0xf7) * 2 + 3] = param_4;
    return 0;
  }
  if (param_2 - 0x110U < 0x10) {
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
      *(undefined1 *)((int)param_1 + 0x4e) = 1;
      FUN_018425f0(param_1 + 0x36);
    }
    param_1[(param_2 + -0xf6) * 2 + 2] = param_3;
    param_1[(param_2 + -0xf6) * 2 + 3] = param_4;
    return 0;
  }
  uVar8 = FUN_01843ef0();
  uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
  puVar1 = (uint *)uVar8;
  piVar2 = (int *)((int)puVar1 * 0x80);
  *puVar1 = uVar6;
  puVar1[1] = extraout_r2;
  puVar1[2] = param_3;
  puVar1[3] = (uint)puVar1;
  iVar7 = coprocessor_movefromRt(5,6,4,in_cr5,in_cr2);
  coprocessor_function2(3,0xd,5,in_cr11,in_cr5,in_cr11);
  *(undefined4 *)(iVar7 + -4) = 0x1844cbb;
  *(uint *)(iVar7 + -8) = param_3;
  *(int *)(iVar7 + -0xc) = param_4;
  *(uint *)(iVar7 + -0x10) = param_3 << 1;
  *(uint *)(iVar7 + -0x14) = DAT_018ddaf8;
  if (DAT_018dffe0 == '\0') {
    uVar8 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS",uVar6);
    uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
    DAT_018dffdf = (int)uVar8 != 0;
    DAT_018dffe0 = '\x01';
  }
  lVar9 = (ulonglong)uVar6 << 0x20;
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_step(cursor=%p)\n",piVar2);
    lVar9 = FUN_016daeb4(&DAT_018db5c0);
  }
  uVar6 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar3 = (uint)lVar9;
  UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)&LAB_01843f30_1) {
    uVar6 = DAT_018ddaf8 ^ *(uint *)(iVar7 + -0x14);
    if (uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01844dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(piVar2,0,UNRECOVERED_JUMPTABLE,0);
      return uVar6;
    }
    goto LAB_01844dc0;
  }
  if ((char)piVar2[0x60] == '\0') {
    iVar4 = piVar2[0x5e];
    *(undefined4 *)(iVar7 + -0x1c) = 0;
    *(undefined4 *)(iVar7 + -0x18) = 0;
    uVar5 = func_0x01842b9c(iVar4,iVar7 + -0x18,iVar7 + -0x1c);
    uVar8 = FUN_0184384c(piVar2,uVar5,*(undefined4 *)(iVar7 + -0x18),*(undefined4 *)(iVar7 + -0x1c))
    ;
    uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 8) goto LAB_01844d1e;
    (**(code **)(*piVar2 + 0x34))(piVar2,1);
    uVar3 = *(byte *)(piVar2 + 0x60) ^ 1;
    uVar6 = extraout_r1;
  }
  else {
LAB_01844d1e:
    uVar3 = 0;
  }
  UNRECOVERED_JUMPTABLE = (code *)(DAT_018ddaf8 ^ *(uint *)(iVar7 + -0x14));
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return uVar3;
  }
LAB_01844dc0:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78(uVar3,uVar6,UNRECOVERED_JUMPTABLE,0);
}

