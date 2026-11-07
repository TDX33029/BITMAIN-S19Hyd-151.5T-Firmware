// FUN_01292bf0 @ 01292bf0 size=412 calls_out=6 calls_in=0
// strings: attempt to join into collection with len > usize::MAX

void FUN_01292bf0(uint *param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  param_3 = param_3 * 8;
  uVar9 = param_3 - 8;
  uVar8 = uVar9 >> 3;
  puVar5 = param_2;
  while (param_3 != 0) {
    puVar1 = puVar5 + 1;
    param_3 = param_3 + -8;
    puVar5 = puVar5 + 2;
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
  uVar7 = *param_2;
  uVar10 = param_2[1];
  local_28 = 0;
  if (local_30 < uVar10) {
    FUN_0129268c(&local_30,0,uVar10,1,1);
  }
  iVar3 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28,uVar7,uVar10);
  iVar6 = uVar8 - (iVar3 + uVar10);
  puVar4 = (undefined1 *)(uVar2 + iVar3 + uVar10);
  while( true ) {
    if (uVar9 == 0) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = uVar8 - iVar6;
      return;
    }
    if (iVar6 == 0) break;
    uVar7 = param_2[2];
    uVar10 = param_2[3];
    *puVar4 = 0x20;
    if (iVar6 - 1U < uVar10) break;
    FUN_016dd1aa(puVar4 + 1,uVar7,uVar10);
    iVar6 = (iVar6 - 1U) - uVar10;
    puVar4 = puVar4 + 1 + uVar10;
    uVar9 = uVar9 - 8;
    param_2 = param_2 + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
}

