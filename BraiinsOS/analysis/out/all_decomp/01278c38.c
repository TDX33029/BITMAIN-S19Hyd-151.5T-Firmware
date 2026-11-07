// FUN_01278c38 @ 01278c38 size=484 calls_out=4 calls_in=1
// strings: 

void FUN_01278c38(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_3 == 0) {
    uVar2 = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = LZCOUNT(*(undefined4 *)(param_2 + param_3 * 4 + -4));
    uVar2 = param_3 * 0x20 - uVar1;
    iVar3 = (param_3 >> 0x1b) - (uint)(param_3 * 0x20 < uVar1);
  }
  local_30 = uVar2 >> 3 | iVar3 << 0x1d;
  if ((uVar2 & 7) != 0) {
    local_30 = local_30 + 1;
  }
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_30);
  }
  if (local_30 == 0) {
    uVar2 = 1;
    local_30 = 0;
  }
  else {
    uVar2 = thunk_FUN_016d4a50(local_30);
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_30);
    }
  }
  local_28 = 0;
  local_2c = uVar2;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0xffffffff,0,&DAT_0188b734);
  }
  while (uVar1 = local_28, param_3 * 4 - 4 != local_28) {
    uVar4 = *(undefined4 *)(param_2 + local_28);
    if (local_28 == local_30) {
      FUN_006029c0(&local_30);
      uVar2 = local_2c;
    }
    *(char *)(uVar2 + uVar1) = (char)uVar4;
    local_28 = uVar1 + 1;
    if (local_28 == local_30) {
      FUN_006029c0(&local_30);
      uVar2 = local_2c;
    }
    *(char *)(uVar2 + uVar1 + 1) = (char)((uint)uVar4 >> 8);
    local_28 = uVar1 + 2;
    if (local_28 == local_30) {
      FUN_006029c0(&local_30);
      uVar2 = local_2c;
    }
    *(char *)(uVar2 + uVar1 + 2) = (char)((uint)uVar4 >> 0x10);
    local_28 = uVar1 + 3;
    if (local_28 == local_30) {
      FUN_006029c0(&local_30);
      uVar2 = local_2c;
    }
    local_28 = uVar1 + 4;
    *(char *)(uVar2 + uVar1 + 3) = (char)((uint)uVar4 >> 0x18);
  }
  for (uVar2 = *(uint *)(param_2 + (param_3 - 1) * 4); uVar2 != 0; uVar2 = uVar2 >> 8) {
    if (uVar1 == local_30) {
      local_28 = uVar1;
      FUN_006029c0(&local_30);
    }
    *(char *)(local_2c + uVar1) = (char)uVar2;
    uVar1 = uVar1 + 1;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar1;
  return;
}

