// FUN_01844ce0 @ 01844ce0 size=228 calls_out=5 calls_in=3
// strings: libunwind: __unw_step(cursor=%p)  | LIBUNWIND_PRINT_APIS

void FUN_01844ce0(int *param_1,uint param_2)

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
  
  local_14 = DAT_018ddaf8;
  if (DAT_018dffe0 == '\0') {
    uVar4 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    param_2 = (uint)((ulonglong)uVar4 >> 0x20);
    DAT_018dffdf = (int)uVar4 != 0;
    DAT_018dffe0 = '\x01';
  }
  lVar5 = (ulonglong)param_2 << 0x20;
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_step(cursor=%p)\n",param_1);
    lVar5 = FUN_016daeb4(&DAT_018db5c0);
  }
  uVar2 = (uint)((ulonglong)lVar5 >> 0x20);
  uVar3 = (uint)lVar5;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)&LAB_01843f30_1) {
    uVar2 = DAT_018ddaf8 ^ local_14;
    if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01844dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,0,UNRECOVERED_JUMPTABLE,0);
      return;
    }
    goto LAB_01844dc0;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x60);
  if (uVar3 == 0) {
    local_1c = uVar3;
    uStack_18 = uVar3;
    uVar1 = func_0x01842b9c(param_1[0x5e],&uStack_18,&local_1c);
    uVar4 = FUN_0184384c(param_1,uVar1,uStack_18,local_1c);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 8) goto LAB_01844d1e;
    (**(code **)(*param_1 + 0x34))(param_1,1);
    uVar3 = *(byte *)(param_1 + 0x60) ^ 1;
    uVar2 = extraout_r1;
  }
  else {
LAB_01844d1e:
    uVar3 = 0;
  }
  UNRECOVERED_JUMPTABLE = (code *)(DAT_018ddaf8 ^ local_14);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
LAB_01844dc0:
                    /* WARNING: Subroutine does not return */
  FUN_016d2b78(uVar3,uVar2,UNRECOVERED_JUMPTABLE,0);
}

