// FUN_0155c778 @ 0155c778 size=296 calls_out=4 calls_in=3
// strings: 

void FUN_0155c778(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar2 = param_2[3] + param_2[1];
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar2);
  }
  if (uVar2 == 0) {
    local_2c = 1;
    uVar2 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar2);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
  }
  uVar3 = param_2[1];
  uVar4 = *param_2;
  local_28 = 0;
  local_30 = uVar2;
  if (uVar2 < uVar3) {
    FUN_0154e5f8(&local_30,0,uVar3,1,1);
  }
  iVar1 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28,uVar4,uVar3);
  local_28 = iVar1 + uVar3;
  uVar4 = param_2[2];
  uVar3 = param_2[3];
  if (local_30 - local_28 < uVar3) {
    FUN_0154e5f8(&local_30,local_28,uVar3,1,1);
    uVar2 = local_2c;
  }
  iVar1 = local_28;
  FUN_016dd1aa(uVar2 + local_28,uVar4,uVar3);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = iVar1 + uVar3;
  return;
}

