// FUN_01333d3c @ 01333d3c size=212 calls_out=2 calls_in=0
// strings: 

void FUN_01333d3c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puStack_38;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  uint local_28;
  code *local_24;
  
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar4 < *(uint *)(param_2 + 0x2c)) {
    uVar1 = *(uint *)(param_2 + 0xc);
    uVar2 = uVar1;
    if (uVar4 == uVar1) {
      uVar2 = param_2 + 0xcU;
    }
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    if (uVar4 == uVar1) {
      FUN_018c4418(uVar2);
    }
    puVar3 = (undefined4 *)(*(int *)(param_2 + 0x10) + uVar4 * 0xc);
    *puVar3 = param_3;
    puVar3[1] = param_4;
    puVar3[2] = uVar5;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(uint *)(param_2 + 0x14) = uVar4 + 1;
    puStack_38 = &DAT_0056f118;
    uStack_34 = 4;
    if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
      local_2c = &LAB_018a13b8;
      local_24 = FUN_0133c540;
      local_30 = (undefined1 *)&puStack_38;
      local_28 = param_2 + 0xcU;
      FUN_019a7988(&DAT_005bd369,&local_30);
    }
    uVar5 = 0x12;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    uVar5 = 0x11;
  }
  *param_1 = uVar5;
  return;
}

