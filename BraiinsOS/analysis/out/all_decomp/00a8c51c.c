// FUN_00a8c51c @ 00a8c51c size=292 calls_out=5 calls_in=3
// strings: 

void FUN_00a8c51c(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint unaff_r7;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar2 = param_2[3] + param_2[1];
  bVar5 = 0x1ffffffe < uVar2;
  if (uVar2 < 0x20000000) {
    unaff_r7 = uVar2 * 8;
    bVar5 = 0x7ffffffc < unaff_r7;
  }
  if (bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  if (unaff_r7 == 0) {
    local_2c = 4;
    uVar2 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(unaff_r7);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,unaff_r7);
    }
  }
  uVar3 = param_2[1];
  uVar4 = *param_2;
  local_28 = 0;
  local_30 = uVar2;
  if (uVar2 < uVar3) {
    FUN_00a8a86c(&local_30,0,uVar3,4,8);
  }
  iVar1 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28 * 8,uVar4,uVar3 << 3);
  local_28 = iVar1 + uVar3;
  uVar4 = param_2[2];
  uVar3 = param_2[3];
  if (local_30 - local_28 < uVar3) {
    FUN_00a8a86c(&local_30,local_28,uVar3,4,8);
    uVar2 = local_2c;
  }
  iVar1 = local_28;
  FUN_016dd1aa(uVar2 + local_28 * 8,uVar4,uVar3 << 3);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = iVar1 + uVar3;
  return;
}

