// FUN_008bed2c @ 008bed2c size=184 calls_out=5 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

undefined8 FUN_008bed2c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar5;
  if (iVar2 == 2) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 != 0) {
      if (iVar2 == 2) goto LAB_008beda8;
      if (iVar2 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                     &DAT_018a9874);
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    FUN_008cfe04(uVar3,*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 8) != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
  }
LAB_008beda8:
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_018640c0,puVar1);
}

