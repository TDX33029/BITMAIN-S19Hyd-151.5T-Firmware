// FUN_00f08984 @ 00f08984 size=120 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00f08984(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x1c);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  *puVar1 = *(undefined4 *)(param_1 + 0x1c);
  puVar1[1] = uVar4;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1[4] = uVar3;
  puVar1[5] = uVar6;
  puVar1[6] = uVar5;
  if (iVar2 == 2) {
    FUN_00ea0c8c(param_1 + 8);
  }
  thunk_FUN_016d3fb4(param_1);
  return CONCAT44(&UNK_0187cd50,puVar1);
}

