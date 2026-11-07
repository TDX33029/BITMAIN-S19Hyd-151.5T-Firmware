// FUN_00eabd70 @ 00eabd70 size=312 calls_out=5 calls_in=4
// strings: 

void FUN_00eabd70(uint *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  local_38 = *(int *)(param_2 + 0x60);
  iVar2 = *(int *)(param_2 + 100);
  *(undefined1 *)(param_2 + 0x6d) = 0;
  if ((uint)(iVar2 - local_38) < *(uint *)(param_2 + 0x54)) {
    FUN_01283c9c(param_2 + 0x5c);
    local_38 = *(int *)(param_2 + 0x60);
    iVar2 = *(int *)(param_2 + 100);
  }
  if (iVar2 == local_38) {
    FUN_01283c9c(param_2 + 0x5c,0x40);
    local_38 = *(int *)(param_2 + 0x60);
    iVar2 = *(int *)(param_2 + 100);
  }
  local_2c = 0;
  local_30 = 0;
  local_34 = iVar2 - local_38;
  local_38 = *(int *)(param_2 + 0x5c) + local_38;
  FUN_00eabeac(&local_28,param_2,param_3,&local_38);
  uVar1 = local_30;
  if ((local_28 & 0xff) == 4) {
    if (local_34 < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_30,local_34,&DAT_01d20c0c);
    }
    local_1c = *(int *)(param_2 + 100) - *(int *)(param_2 + 0x60);
    if (local_1c < local_30) {
      local_20 = local_30;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_20);
    }
    *(uint *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + local_30;
    FUN_01424790(param_2 + 0x50,local_30);
    param_1[1] = uVar1;
    *(undefined1 *)param_1 = 4;
  }
  else if ((local_28 & 0xff) == 5) {
    *(undefined1 *)param_1 = 5;
    *(undefined1 *)(param_2 + 0x6d) = 1;
  }
  else {
    *param_1 = local_28;
    param_1[1] = local_24;
  }
  return;
}

