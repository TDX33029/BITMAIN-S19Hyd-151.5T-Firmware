// FUN_00f061d8 @ 00f061d8 size=104 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00f061d8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  if (iVar2 == 2) {
    FUN_00ea0c8c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0187ca48,puVar1);
}

