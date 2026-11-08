// FUN_01581a4c @ 01581a4c size=116 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01581a4c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  iVar6 = *(int *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *puVar1 = *(undefined4 *)(param_1 + 0x1c);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar7;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  if (iVar6 == 2) {
    FUN_0113d66c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_018a9670,puVar1);
}

