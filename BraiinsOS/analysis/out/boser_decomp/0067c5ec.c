// FUN_0067c5ec @ 0067c5ec size=556 calls_out=1 calls_in=3
// strings: 

void FUN_0067c5ec(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint local_14;
  
  local_14 = (uint)*(byte *)(param_1 + 0x80);
  FUN_015df058(param_2,&local_14,4);
  local_14 = *(uint *)(param_1 + 0x34);
  FUN_015df058(param_2,&local_14,4);
  iVar2 = *(int *)(param_1 + 0x38);
  local_14 = (uint)(iVar2 != -0x80000000);
  FUN_015df058(param_2,&local_14,4);
  if (iVar2 != -0x80000000) {
    FUN_015df058(param_2,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    local_14 = CONCAT31(local_14._1_3_,0xff);
    FUN_015df058(param_2,&local_14,1);
  }
  iVar2 = *(int *)(param_1 + 0x44);
  local_14 = (uint)(iVar2 != -0x80000000);
  FUN_015df058(param_2,&local_14,4);
  if (iVar2 != -0x80000000) {
    FUN_015df058(param_2,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    local_14 = CONCAT31(local_14._1_3_,0xff);
    FUN_015df058(param_2,&local_14,1);
  }
  iVar2 = *(int *)(param_1 + 0x50);
  local_14 = (uint)(iVar2 != -0x80000000);
  FUN_015df058(param_2,&local_14,4);
  if (iVar2 != -0x80000000) {
    FUN_015df058(param_2,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    local_14 = CONCAT31(local_14._1_3_,0xff);
    FUN_015df058(param_2,&local_14,1);
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  local_14 = (uint)(uVar3 != 2);
  FUN_015df058(param_2,&local_14,4);
  if (uVar3 == 2) {
    uVar3 = *(uint *)(param_1 + 0x24);
    local_14 = uVar3;
    FUN_015df058(param_2,&local_14,4);
    if (uVar3 != 1) {
      return;
    }
    local_14 = *(uint *)(param_1 + 0x28);
    uVar1 = 4;
  }
  else {
    local_14 = uVar3;
    FUN_015df058(param_2,&local_14,4);
    if ((uVar3 & 1) != 0) {
      local_14 = *(uint *)(param_1 + 0x24);
      FUN_015df058(param_2,&local_14,4);
    }
    iVar2 = *(int *)(param_1 + 0x28);
    local_14 = (uint)(iVar2 != -0x80000000);
    FUN_015df058(param_2,&local_14,4);
    if (iVar2 == -0x80000000) {
      return;
    }
    FUN_015df058(param_2,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    local_14 = CONCAT31(local_14._1_3_,0xff);
    uVar1 = 1;
  }
  FUN_015df058(param_2,&local_14,uVar1);
  return;
}

