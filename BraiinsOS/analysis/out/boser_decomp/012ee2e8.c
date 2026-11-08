// FUN_012ee2e8 @ 012ee2e8 size=120 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_012ee2e8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  iVar2 = *(int *)(param_1 + 4);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  puVar1[3] = uVar5;
  puVar1[4] = uVar7;
  puVar1[5] = uVar8;
  if (iVar2 == 2) {
    FUN_006676f8(param_1 + 8);
  }
  thunk_FUN_01be4678(param_1);
  return CONCAT44(&UNK_01ce3d68,puVar1);
}

