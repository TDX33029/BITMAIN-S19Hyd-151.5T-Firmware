// FUN_01be228c @ 01be228c size=228 calls_out=6 calls_in=3
// strings: libunwind: __unw_step(cursor=%p)  | LIBUNWIND_PRINT_APIS

void FUN_01be228c(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint extraout_r1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  
  local_14 = DAT_01d53560;
  if (DAT_01d53488 == '\0') {
    uVar4 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    param_2 = (uint)((ulonglong)uVar4 >> 0x20);
    DAT_01d53487 = (int)uVar4 != 0;
    DAT_01d53488 = '\x01';
  }
  lVar5 = (ulonglong)param_2 << 0x20;
  if (DAT_01d53487 != '\0') {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_step(cursor=%p)\n",param_1);
    lVar5 = FUN_01beb1cc(&DAT_01d50fd8);
  }
  uVar2 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar3 = (uint)lVar5;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)&LAB_01be14dc_1) {
    uVar2 = DAT_01d53560 ^ local_14;
    if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01be236a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,0,UNRECOVERED_JUMPTABLE,0);
      return;
    }
    goto LAB_01be236c;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x60);
  if (uVar3 == 0) {
    local_1c = uVar3;
    uStack_18 = uVar3;
    uVar1 = FUN_01be0148(param_1[0x5e],&uStack_18,&local_1c);
    uVar4 = FUN_01be0df8(param_1,uVar1,uStack_18,local_1c);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 8) goto LAB_01be22ca;
    (**(code **)(*param_1 + 0x34))(param_1,1);
    uVar3 = *(byte *)(param_1 + 0x60) ^ 1;
    uVar2 = extraout_r1;
  }
  else {
LAB_01be22ca:
    uVar3 = 0;
  }
  UNRECOVERED_JUMPTABLE = (code *)(DAT_01d53560 ^ local_14);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
LAB_01be236c:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4(uVar3,uVar2,UNRECOVERED_JUMPTABLE,0);
}

