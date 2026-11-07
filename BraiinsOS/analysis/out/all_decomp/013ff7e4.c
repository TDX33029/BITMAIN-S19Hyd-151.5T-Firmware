// FUN_013ff7e4 @ 013ff7e4 size=436 calls_out=6 calls_in=1
// strings: attempt to join into collection with len > usize::MAX

void FUN_013ff7e4(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  param_3 = param_3 * 0xc;
  uVar9 = param_3 - 0xc;
  uVar7 = (uVar9 >> 2) * -0x55555555;
  iVar5 = param_2;
  while (param_3 != 0) {
    puVar1 = (uint *)(iVar5 + 8);
    param_3 = param_3 + -0xc;
    iVar5 = iVar5 + 0xc;
    bVar11 = CARRY4(*puVar1,uVar7);
    uVar7 = *puVar1 + uVar7;
    if (bVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
    }
  }
  local_30 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar7);
  }
  if (uVar7 == 0) {
    local_2c = 1;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar7);
    local_30 = uVar7;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar7);
    }
  }
  uVar10 = *(uint *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 4);
  local_28 = 0;
  if (local_30 < uVar10) {
    FUN_01401968(&local_30,0,uVar10,1,1);
  }
  iVar3 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28,uVar6,uVar10);
  iVar5 = uVar7 - (iVar3 + uVar10);
  puVar4 = (undefined1 *)(uVar2 + iVar3 + uVar10);
  puVar8 = (undefined4 *)(param_2 + 0x10);
  while( true ) {
    if (uVar9 == 0) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = uVar7 - iVar5;
      return;
    }
    if (iVar5 == 0) break;
    uVar6 = *puVar8;
    uVar10 = puVar8[1];
    *puVar4 = 10;
    if (iVar5 - 1U < uVar10) break;
    FUN_016dd1aa(puVar4 + 1,uVar6,uVar10);
    iVar5 = (iVar5 - 1U) - uVar10;
    puVar4 = puVar4 + 1 + uVar10;
    uVar9 = uVar9 - 0xc;
    puVar8 = puVar8 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
}

