// FUN_01283ad4 @ 01283ad4 size=488 calls_out=8 calls_in=2
// strings: 

void FUN_01283ad4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_28;
  
  uVar12 = 1;
  FUN_015f3b0c(&local_38,1);
  uVar5 = local_30;
  uVar3 = local_34;
  uVar2 = local_38;
  iVar6 = param_1 * 3 + -1;
  uVar10 = 0;
  if (param_1 * 3 != 0 && iVar6 != 0) {
    uVar12 = (0xffffffffU >> LZCOUNT(iVar6)) + 1;
  }
  bVar13 = 0x3fffffe < uVar12;
  uVar1 = uVar12 * 0x40;
  if (uVar12 < 0x4000000) {
    bVar13 = 0x7fffffc0 < uVar1;
  }
  if (bVar13) {
LAB_01283b1c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar10,uVar1);
  }
  if (uVar1 == 0) {
    local_38 = 0;
    uVar9 = 0x40;
    uVar11 = local_38;
  }
  else {
    local_38 = 0;
    uVar10 = 0x40;
    iVar6 = FUN_016d51b0(&local_38,0x40,uVar1);
    if ((iVar6 != 0) || (uVar9 = local_38, uVar11 = uVar12, local_38 == 0)) goto LAB_01283b1c;
  }
  local_38 = uVar11;
  local_30 = 0;
  uVar11 = 0;
  local_34 = uVar9;
  if (uVar12 != 0) {
    local_30 = 0;
    iVar6 = 0;
    do {
      uVar11 = local_30;
      if (local_30 == local_38) {
        FUN_01286fbc(&local_38);
        uVar9 = local_34;
      }
      uVar4 = local_34;
      local_30 = uVar11 + 1;
      puVar7 = (uint *)(uVar9 + iVar6);
      *puVar7 = uVar2;
      iVar6 = iVar6 + 0x40;
      puVar7[1] = uVar3;
      iVar8 = uVar9 + uVar11 * 0x40;
      *(undefined4 *)(iVar8 + 0x18) = 0;
      *(undefined4 *)(iVar8 + 0x1c) = 0;
      *(undefined4 *)(iVar8 + 0x20) = 0;
      *(uint *)(iVar8 + 0x10) = local_30;
      *(uint *)(iVar8 + 8) = uVar5;
    } while (uVar12 != local_30);
    uVar11 = uVar12;
    if (uVar12 < local_38) {
      local_28 = 0;
      iVar6 = FUN_016d51b0(&local_28,0x40,uVar1);
      uVar9 = local_28;
      if ((iVar6 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0x40,uVar1);
      }
      FUN_016dd1aa(local_28,uVar4,uVar1);
      thunk_FUN_016d3fb4(uVar4);
    }
    else {
      uVar9 = local_34;
    }
  }
  puVar7 = (uint *)thunk_FUN_016d4a50(0x10);
  if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar7 = uVar9;
  puVar7[1] = uVar11;
  puVar7[2] = 0x1f - LZCOUNT(uVar12);
  puVar7[3] = param_2;
  return;
}

