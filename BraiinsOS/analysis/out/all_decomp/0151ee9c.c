// FUN_0151ee9c @ 0151ee9c size=268 calls_out=7 calls_in=1
// strings: 

void FUN_0151ee9c(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_e0 [64];
  uint local_a0;
  undefined4 local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  (**(code **)(param_2[6] + 0x14))(auStack_e0,param_2[5]);
  if (0x40 < local_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_a0,0x40,&DAT_018a7f14);
  }
  iVar3 = 1;
  uVar1 = 0;
  if ((local_a0 != 0) && (iVar3 = thunk_FUN_016d4a50(local_a0), uVar1 = local_a0, iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,local_a0);
  }
  FUN_016dd1aa(iVar3,auStack_e0,local_a0);
  local_90 = local_a0;
  uVar2 = *param_2;
  local_9c = 0x80000014;
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  local_98 = uVar1;
  local_94 = iVar3;
  FUN_0150e524(&local_9c,&local_30,0x80000000);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  *(bool *)(param_1 + 3) = uVar2 != 0x80000000;
  FUN_0151cb64(&local_9c);
  if ((uVar2 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(param_2[1]);
  return;
}

