// FUN_00ec0200 @ 00ec0200 size=300 calls_out=4 calls_in=2
// strings: 

void FUN_00ec0200(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint local_30;
  uint local_2c;
  int local_28;
  
  uVar2 = param_2[3] + param_2[1];
  bVar6 = 0x1ffffffe < uVar2;
  bVar5 = uVar2 == 0x1fffffff;
  uVar4 = uVar2 * 8;
  if (uVar2 < 0x20000000) {
    bVar6 = 0x7ffffffb < uVar4;
    bVar5 = uVar4 == 0x7ffffffc;
  }
  if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar4 == 0) {
    local_2c = 4;
    uVar2 = 0;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar4);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar4);
    }
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  local_28 = 0;
  local_30 = uVar2;
  if (uVar2 < uVar4) {
    FUN_00edff4c(&local_30,0,uVar4,4,8);
  }
  iVar1 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28 * 8,uVar3,uVar4 << 3);
  uVar3 = param_2[2];
  local_28 = iVar1 + uVar4;
  uVar4 = param_2[3];
  if (local_30 - local_28 < uVar4) {
    FUN_00edff4c(&local_30,local_28,uVar4,4,8);
    uVar2 = local_2c;
  }
  iVar1 = local_28;
  FUN_016dd1aa(uVar2 + local_28 * 8,uVar3,uVar4 << 3);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = iVar1 + uVar4;
  return;
}

