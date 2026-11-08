// FUN_01273a6c @ 01273a6c size=468 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01273a6c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 *local_2c;
  code *local_28;
  
  local_2c = (undefined1 *)&local_40;
  local_40 = *(undefined4 *)(param_1 + 0x18);
  uStack_3c = *(undefined4 *)(param_1 + 0x1c);
  uStack_38 = *(undefined4 *)(param_1 + 0x20);
  uStack_34 = *(undefined4 *)(param_1 + 0x24);
  local_30 = *(undefined1 *)(param_1 + 0x28);
  uVar4 = *param_2;
  iVar2 = param_2[1];
  local_28 = FUN_01273430;
  iVar1 = FUN_00fa948c(uVar4,iVar2,&DAT_00590e71,&local_2c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xc) == -0x7fffffff) {
      pcVar3 = *(code **)(iVar2 + 0xc);
      iVar1 = (*pcVar3)(uVar4,&DAT_005671ec,4);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar3)(uVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar3)(uVar4,&DAT_003b653a,2);
    }
    else if (*(int *)(param_1 + 0xc) == -0x7ffffffe) {
      iVar1 = (**(code **)(iVar2 + 0xc))
                        (uVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    }
    else {
      pcVar3 = *(code **)(iVar2 + 0xc);
      iVar1 = (*pcVar3)(uVar4,&DAT_003b653c,5);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar3)(uVar4,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar3)(uVar4,&DAT_003b653a,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar3)(uVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (*pcVar3)(uVar4,&DAT_003b6541,7);
    }
    if (iVar1 == 0) {
      local_40 = *(undefined4 *)(param_1 + 0x18);
      uStack_3c = *(undefined4 *)(param_1 + 0x1c);
      uStack_38 = *(undefined4 *)(param_1 + 0x20);
      uStack_34 = *(undefined4 *)(param_1 + 0x24);
      local_30 = *(undefined1 *)(param_1 + 0x28);
      local_28 = (code *)&LAB_012739a8;
      local_2c = (undefined1 *)&local_40;
      uVar4 = FUN_00fa948c(uVar4,iVar2,&DAT_00590e71,&local_2c);
      return uVar4;
    }
  }
  return 1;
}

