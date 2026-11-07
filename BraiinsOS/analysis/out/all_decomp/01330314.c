// FUN_01330314 @ 01330314 size=836 calls_out=8 calls_in=2
// strings: 

void FUN_01330314(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  int local_50;
  uint *local_4c;
  int local_48;
  uint *local_44;
  uint *local_40;
  int local_3c;
  uint *local_38;
  uint local_34;
  uint local_30;
  uint **local_2c;
  uint local_28;
  
  uVar8 = param_1[2];
  piVar12 = (int *)*param_2;
  if (uVar8 == 0) {
    uVar3 = param_1[3];
    uVar7 = *(uint *)(uVar3 + 0x60);
    uVar9 = *(uint *)(uVar3 + 100);
    if (uVar7 < uVar9) goto LAB_01330608;
    puVar2 = (uint *)(uVar3 + 0x5c);
    if (uVar9 == 0) goto LAB_0133044c;
LAB_0133035c:
    uVar7 = *puVar2;
    uVar3 = thunk_FUN_016d4a50(uVar9 * 0x14);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar9 * 0x14);
    }
    uVar5 = param_1[1];
    uVar13 = 0;
    uVar6 = param_1[3];
    puVar2 = (uint *)(uVar3 + 8);
    iVar1 = uVar8 << 2;
    local_34 = uVar9;
    local_30 = uVar3;
    do {
      if (uVar8 == 0) {
        uVar4 = 4;
        uVar10 = 0;
      }
      else {
        uVar4 = thunk_FUN_016d4a50(iVar1);
        uVar10 = uVar8;
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,iVar1);
        }
      }
      FUN_016dd1aa(uVar4,uVar5,iVar1);
      uVar13 = uVar13 + 1;
      puVar2[-2] = uVar10;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      uVar7 = uVar7 + 0x50;
      *puVar2 = uVar8;
      puVar2[-1] = uVar4;
      puVar2 = puVar2 + 5;
    } while (uVar9 != uVar13);
  }
  else {
    iVar1 = *(int *)(param_1[1] + uVar8 * 4 + -4);
    uVar7 = *(uint *)(iVar1 + 0x48);
    uVar9 = *(uint *)(iVar1 + 0x4c);
    if (uVar7 < uVar9) {
LAB_01330608:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar9,uVar7,&DAT_0188f948);
    }
    puVar2 = (uint *)(iVar1 + 0x44);
    if (uVar9 != 0) goto LAB_0133035c;
LAB_0133044c:
    uVar3 = 4;
    uVar9 = 0;
  }
  iVar1 = piVar12[2];
  local_28 = uVar3 + uVar9 * 0x14;
  local_34 = uVar3;
  local_30 = uVar3;
  local_2c = (uint **)uVar9;
  if ((uint)(*piVar12 - iVar1) < uVar9) {
    FUN_0132f8cc(piVar12,iVar1,uVar9,4,0x14);
    iVar1 = piVar12[2];
  }
  FUN_016dd1aa(piVar12[1] + iVar1 * 0x14,uVar3,uVar9 * 0x14);
  piVar12[2] = iVar1 + uVar9;
  if (uVar9 != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  local_44 = param_1;
  if (uVar8 == 0) {
    uVar8 = param_1[3];
    uVar7 = *(uint *)(uVar8 + 0x50);
    uVar3 = *(uint *)(uVar8 + 0x54);
    if (uVar7 < uVar3) goto LAB_0133061c;
    puVar2 = (uint *)(uVar8 + 0x4c);
  }
  else {
    iVar1 = *(int *)(param_1[1] + uVar8 * 4 + -4);
    uVar7 = *(uint *)(iVar1 + 0x38);
    uVar3 = *(uint *)(iVar1 + 0x3c);
    if (uVar7 < uVar3) {
LAB_0133061c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,uVar7,&DAT_0188f948);
    }
    puVar2 = (uint *)(iVar1 + 0x34);
  }
  local_34 = *puVar2;
  local_30 = local_34 + uVar3 * 0xa0;
  local_2c = &local_44;
  FUN_013264b4(&local_50,&local_34);
  puVar14 = local_4c + local_48 * 4;
  local_3c = local_50;
  local_40 = local_4c;
  local_44 = local_4c;
  puVar2 = local_4c;
  local_38 = puVar14;
  if (local_48 != 0) {
    do {
      puVar11 = puVar2 + 4;
      uVar8 = *puVar2;
      if (uVar8 == 0x80000000) goto LAB_013305b4;
      local_30 = puVar2[1];
      local_2c = (uint **)puVar2[2];
      local_28 = puVar2[3];
      local_34 = uVar8;
      FUN_01330314(&local_34,param_2);
      if (uVar8 != 0) {
        thunk_FUN_016d3fb4(local_30);
      }
      puVar2 = puVar11;
    } while (puVar11 != puVar14);
    puVar11 = puVar14;
LAB_013305b4:
    local_40 = puVar11;
  }
  puVar2 = local_40 + 1;
  for (uVar8 = (uint)((int)puVar14 - (int)local_40) >> 4; uVar8 != 0; uVar8 = uVar8 - 1) {
    if (puVar2[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar2);
    }
    puVar2 = puVar2 + 4;
  }
  if (local_50 != 0) {
    thunk_FUN_016d3fb4(local_4c);
  }
  return;
}

