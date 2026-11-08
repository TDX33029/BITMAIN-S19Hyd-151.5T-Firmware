// FUN_008cbd10 @ 008cbd10 size=148 calls_out=3 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

void FUN_008cbd10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) == 2) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_008cbd64;
      if (iVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                     &DAT_018a9874);
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    FUN_008cfe04(uVar2,*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 8) != 0) {
      thunk_FUN_016d3fb4(uVar2);
    }
  }
LAB_008cbd64:
  if (*(int *)(param_1 + 0x1c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x008cbd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined4 **)(param_1 + 0x28))();
  return;
}

