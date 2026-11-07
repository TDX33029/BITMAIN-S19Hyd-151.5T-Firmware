// FUN_01876ee8 @ 01876ee8 size=300 calls_out=4 calls_in=3
// strings: 

void FUN_01876ee8(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar3 = *(int *)(param_2 + 0x4c);
  iVar4 = *(int *)(param_2 + 0x50);
  *(undefined1 *)(param_2 + 0x59) = 0;
  if ((uint)(iVar4 - iVar3) < *(uint *)(param_2 + 0x34)) {
    FUN_01283c9c(param_2 + 0x48);
    iVar3 = *(int *)(param_2 + 0x4c);
    iVar4 = *(int *)(param_2 + 0x50);
  }
  if (iVar4 == iVar3) {
    FUN_01283c9c(param_2 + 0x48,0x40);
    iVar3 = *(int *)(param_2 + 0x4c);
    iVar4 = *(int *)(param_2 + 0x50);
  }
  uVar2 = iVar4 - iVar3;
  local_34 = 0;
  local_40 = *(int *)(param_2 + 0x48) + iVar3;
  local_38 = 0;
  local_3c = uVar2;
  (**(code **)(*(int *)(param_2 + 0x40) + 0xc))
            (&local_30,*(undefined4 *)(param_2 + 0x3c),param_3,&local_40);
  uVar1 = local_38;
  if ((local_30 & 0xff) == 4) {
    if (local_3c < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_38,local_3c,&DAT_01d20c0c);
    }
    if (uVar2 < local_38) {
      local_28 = local_38;
      local_24 = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_28);
    }
    *(uint *)(param_2 + 0x4c) = iVar3 + local_38;
    FUN_01424790(param_2 + 0x30,local_38);
    param_1[1] = uVar1;
    *(undefined1 *)param_1 = 4;
  }
  else if ((local_30 & 0xff) == 5) {
    *(undefined1 *)param_1 = 5;
    *(undefined1 *)(param_2 + 0x59) = 1;
  }
  else {
    *param_1 = local_30;
    param_1[1] = local_2c;
  }
  return;
}

