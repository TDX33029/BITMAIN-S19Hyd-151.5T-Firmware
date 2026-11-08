// FUN_008cb3fc @ 008cb3fc size=120 calls_out=4 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

void FUN_008cb3fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) == 2) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      if (iVar1 == 2) goto LAB_008cb450;
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
LAB_008cb450:
  FUN_008bcbf8(param_1 + 0x1c);
  return;
}

