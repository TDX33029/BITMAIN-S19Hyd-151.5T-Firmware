// FUN_009d39b4 @ 009d39b4 size=444 calls_out=6 calls_in=2
// strings: attempt to join into collection with len > usize::MAX

void FUN_009d39b4(uint *param_1,int param_2,int param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
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
  uVar10 = param_3 - 0xc;
  uVar8 = (uVar10 >> 2) * -0x55555555;
  iVar5 = param_2;
  while (param_3 != 0) {
    puVar1 = (uint *)(iVar5 + 8);
    param_3 = param_3 + -0xc;
    iVar5 = iVar5 + 0xc;
    bVar11 = CARRY4(*puVar1,uVar8);
    uVar8 = *puVar1 + uVar8;
    if (bVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
    }
  }
  local_30 = 0;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar8);
  }
  if (uVar8 == 0) {
    local_2c = 1;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar8);
    local_30 = uVar8;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar8);
    }
  }
  uVar6 = *(uint *)(param_2 + 8);
  uVar9 = *(undefined4 *)(param_2 + 4);
  local_28 = 0;
  if (local_30 < uVar6) {
    FUN_009b6da4(&local_30,0,uVar6,1,1);
  }
  iVar3 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28,uVar9,uVar6);
  puVar7 = (undefined4 *)(param_2 + 0x10);
  iVar5 = uVar8 - (iVar3 + uVar6);
  puVar4 = (undefined1 *)(uVar2 + iVar3 + uVar6);
  while( true ) {
    if (uVar10 == 0) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = uVar8 - iVar5;
      return;
    }
    if (iVar5 == 0) break;
    uVar9 = *puVar7;
    uVar6 = puVar7[1];
    *puVar4 = *param_4;
    if (iVar5 - 1U < uVar6) break;
    FUN_016dd1aa(puVar4 + 1,uVar9,uVar6);
    iVar5 = (iVar5 - 1U) - uVar6;
    puVar4 = puVar4 + 1 + uVar6;
    uVar10 = uVar10 - 0xc;
    puVar7 = puVar7 + 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
}

