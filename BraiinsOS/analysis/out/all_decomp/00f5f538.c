// FUN_00f5f538 @ 00f5f538 size=700 calls_out=7 calls_in=63
// strings: 

void FUN_00f5f538(uint *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint local_2c;
  uint local_28;
  int local_24;
  
  puVar6 = (uint *)param_1[3];
  uVar4 = param_1[1];
  if (((uint)puVar6 & 1) != 0) {
    uVar5 = (uint)puVar6 >> 5;
    uVar9 = param_1[2] + ((uint)puVar6 >> 5);
    if ((uVar4 <= (uint)puVar6 >> 5) && (param_2 <= uVar9 - uVar4)) {
      uVar4 = *param_1;
      FUN_016dd1aa(uVar4 - uVar5);
      *param_1 = uVar4 - uVar5;
      param_1[2] = uVar9;
      param_1[3] = (uint)puVar6 & 0x1f;
      return;
    }
    local_24 = uVar5 + uVar4;
    local_28 = *param_1 - uVar5;
    local_2c = uVar9;
    if (param_1[2] - uVar4 < param_2) {
      FUN_010e02bc(&local_2c,local_24,param_2);
    }
    param_1[2] = local_2c - uVar5;
    *param_1 = local_28 + uVar5;
    return;
  }
  uVar5 = uVar4 + param_2;
  if (CARRY4(uVar4,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056a0b0,0x11,&DAT_0187fa3c);
  }
  DataMemoryBarrier(0xb);
  if (puVar6[4] == 1) {
    uVar3 = *puVar6;
    uVar10 = puVar6[1];
    uVar7 = *param_1 - uVar10;
    uVar9 = uVar7 + uVar5;
    if (uVar9 <= uVar3) {
      param_1[2] = uVar5;
      return;
    }
    if (uVar5 <= uVar3 && uVar4 <= uVar7) {
      FUN_016dd1aa(uVar10);
      uVar4 = *puVar6;
      *param_1 = uVar10;
      param_1[2] = uVar4;
      return;
    }
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0056a0b0,8,&DAT_0187fa2c);
    }
    uVar4 = uVar7 + uVar4;
    if (uVar9 <= uVar3 * 2) {
      uVar9 = uVar3 << 1;
    }
    puVar6[2] = uVar4;
    if (uVar3 - uVar4 < uVar9 - uVar4) {
      FUN_010e02bc(puVar6);
      uVar3 = *puVar6;
      uVar10 = puVar6[1];
    }
    param_1[2] = uVar3 - uVar7;
    *param_1 = uVar10 + uVar7;
    return;
  }
  uVar3 = puVar6[3];
  uVar9 = uVar3 + 9 & 0x1f;
  local_28 = 1;
  uVar4 = uVar5;
  if (uVar5 < (uint)(1 << uVar9)) {
    uVar4 = 1 << uVar9;
  }
  if (uVar3 == 0) {
    uVar4 = uVar5;
  }
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar4);
  }
  local_2c = 0;
  if (uVar4 != 0) {
    local_28 = thunk_FUN_016d4a50(uVar4);
    if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar4);
    }
    local_2c = uVar4;
  }
  uVar4 = param_1[1];
  uVar5 = *param_1;
  local_24 = 0;
  if (local_2c < uVar4) {
    FUN_010e02bc(&local_2c,0,uVar4);
  }
  iVar2 = local_24;
  puVar8 = puVar6 + 4;
  FUN_016dd1aa(local_28 + local_24,uVar5,uVar4);
  local_24 = iVar2 + uVar4;
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *puVar8;
    bVar1 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar1);
  *puVar8 = uVar4 - 1;
  if (uVar4 == 1) {
    DataMemoryBarrier(0xb);
    if (*puVar6 != 0) {
      thunk_FUN_016d3fb4(puVar6[1]);
    }
    thunk_FUN_016d3fb4(puVar6);
  }
  param_1[2] = local_2c;
  *param_1 = local_28;
  param_1[3] = uVar3 << 2 | 1;
  return;
}

