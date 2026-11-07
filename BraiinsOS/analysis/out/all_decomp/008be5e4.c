// FUN_008be5e4 @ 008be5e4 size=196 calls_out=5 calls_in=0
// strings: internal error: entered unreachable code: invalid Once state

undefined8 FUN_008be5e4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  *puVar2 = *(undefined4 *)(param_1 + 0x1c);
  puVar2[1] = uVar5;
  puVar2[2] = uVar7;
  puVar2[3] = uVar9;
  if (*(int *)(param_1 + 4) == 2) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 != 0) {
      if (iVar3 == 2) goto LAB_008be668;
      if (iVar3 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,
                     &DAT_018a9874,uVar9,uVar1,uVar4,uVar6,uVar8);
      }
    }
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    FUN_008cfe04(uVar1,*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 8) != 0) {
      thunk_FUN_016d3fb4(uVar1);
    }
  }
LAB_008be668:
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0186401c,puVar2);
}

