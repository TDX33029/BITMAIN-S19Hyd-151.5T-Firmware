// FUN_01620eb0 @ 01620eb0 size=1372 calls_out=9 calls_in=2
// strings: 

void FUN_01620eb0(undefined4 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  ushort *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  ushort *puVar16;
  int *piVar17;
  bool bVar18;
  int local_48;
  ushort *local_44;
  uint local_40;
  int *local_3c;
  int *local_38;
  ushort *local_34;
  uint local_30;
  int *local_2c;
  int *local_28;
  
  piVar13 = &local_48;
  FUN_0166558c(piVar13);
  piVar17 = local_3c;
  uVar3 = local_40;
  if (local_48 == 1) {
    *param_1 = 1;
    param_1[1] = &DAT_80000008;
    param_1[2] = local_44;
    param_1[3] = local_40;
    return;
  }
  if (local_44 == (ushort *)0x0) {
    *param_1 = 0;
    param_1[1] = 0x80000000;
    return;
  }
  local_2c = local_3c;
  local_30 = local_40;
  local_34 = local_44;
  local_28 = local_38;
  if (local_40 < 6) {
    uVar3 = thunk_FUN_016d4a50(0x1a);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x1a);
    }
    FUN_016dd1aa(uVar3,&DAT_00411938,0x1a);
    local_3c = (int *)&DAT_0000001a;
    local_44 = (ushort *)0x1a;
    local_48 = 2;
    local_40 = uVar3;
    FUN_0161e5e4(&local_48);
    param_1[1] = 0x80000002;
LAB_01620f64:
    *param_1 = 1;
    if (((uint)local_28 & 1) != 0) {
      if ((undefined1 *)((int)local_2c + ((uint)local_28 >> 5)) == (undefined1 *)0x0) {
        return;
      }
      piVar17 = (int *)((int)local_34 - ((uint)local_28 >> 5));
      goto LAB_01621010;
    }
    piVar17 = local_28 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar17;
      bVar18 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar18);
    *piVar17 = iVar9 + -1;
    if (iVar9 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    piVar17 = local_28;
    if (*local_28 != 0) {
      iVar9 = local_28[1];
      goto LAB_01621008;
    }
  }
  else {
    uVar1 = *local_44;
    if (((uint)local_38 & 1) != 0) {
      if (local_38 < (int *)0xffffffc0) {
        piVar4 = local_38 + 0x10;
      }
      else {
        puVar10 = (undefined1 *)((int)local_3c + ((uint)local_38 >> 5));
        piVar4 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        piVar4[4] = 1;
        piVar4[3] = ((uint)local_38 & 0x1f) >> 2;
        piVar4[2] = uVar3 + ((uint)local_38 >> 5);
        piVar4[1] = (int)local_44 - ((uint)local_38 >> 5);
        *piVar4 = (int)puVar10;
      }
      local_28 = piVar4;
    }
    piVar4 = local_28;
    local_34 = local_44 + 1;
    uVar2 = *local_34;
    iVar9 = uVar3 - 2;
    local_2c = (int *)((int)piVar17 + -2);
    if (uVar3 < 2) {
      iVar9 = 0;
    }
    if (((uint)local_28 & 1) == 0) {
    }
    else {
      if (local_28 < (int *)0xffffffe0) {
        piVar6 = local_28 + 8;
      }
      else {
        iVar11 = (int)local_34 - ((uint)local_28 >> 5);
        puVar10 = (undefined1 *)((int)local_2c + ((uint)local_28 >> 5));
        local_30 = iVar9;
        piVar6 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        piVar6[4] = 1;
        piVar6[2] = iVar9 + ((uint)piVar4 >> 5);
        piVar6[1] = iVar11;
        piVar6[3] = ((uint)piVar4 & 0x1f) >> 2;
        *piVar6 = (int)puVar10;
      }
      local_28 = piVar6;
    }
    uVar14 = uVar3 - 3;
    piVar17 = (int *)((int)piVar17 + -3);
    puVar12 = (ushort *)((int)local_44 + 3);
    if (uVar3 < 3) {
      uVar14 = 0;
    }
    local_44 = (ushort *)0x0;
    local_48 = 0;
    local_34 = puVar12;
    local_30 = uVar14;
    local_2c = piVar17;
    if (uVar14 < 3) {
      local_48 = 3;
      local_44 = (ushort *)uVar14;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_48);
    }
    uVar3 = 3;
    piVar4 = local_28;
    do {
      while( true ) {
        uVar15 = uVar14;
        if (uVar3 < uVar14) {
          uVar15 = uVar3;
        }
        FUN_016dd1aa(piVar13,puVar12,uVar15);
        if (uVar14 == 0) break;
        piVar6 = piVar4;
        if (((uint)piVar4 & 1) != 0) {
          uVar5 = uVar15 + ((uint)piVar4 >> 5);
          if (uVar5 < 0x8000000) {
            piVar6 = (int *)((uint)piVar4 & 0x1f | uVar5 * 0x20);
          }
          else {
            uVar5 = (uint)piVar4 >> 5;
            piVar6 = (int *)thunk_FUN_016d4a50(0x14);
            if (piVar6 == (int *)0x0) {
              local_34 = puVar12;
              local_30 = uVar14;
              local_2c = piVar17;
              local_28 = piVar4;
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x14);
            }
            piVar6[4] = 1;
            piVar6[3] = ((uint)piVar4 & 0x1f) >> 2;
            piVar6[2] = uVar14 + uVar5;
            piVar6[1] = (int)puVar12 - uVar5;
            *piVar6 = (int)((int)piVar17 + uVar5);
          }
        }
        bVar18 = uVar14 < uVar15;
        uVar14 = uVar14 - uVar15;
        piVar17 = (int *)((int)piVar17 - uVar15);
        puVar12 = (ushort *)((int)puVar12 + uVar15);
        if (bVar18) {
          uVar14 = 0;
        }
        uVar3 = uVar3 - uVar15;
        piVar13 = (int *)((int)piVar13 + uVar15);
        piVar4 = piVar6;
        if (uVar3 == 0) goto LAB_016211fc;
      }
      uVar14 = 0;
      uVar3 = uVar3 - uVar15;
      piVar13 = (int *)((int)piVar13 + uVar15);
    } while (uVar3 != 0);
LAB_016211fc:
    iVar9 = local_48;
    local_34 = puVar12;
    local_30 = uVar14;
    local_2c = piVar17;
    local_28 = piVar4;
    FUN_00f5f8dc(&local_48,&local_34,uVar14);
    puVar12 = local_44;
    iVar11 = local_48;
    uVar7 = 0;
    if ((int)local_44 < 0) {
LAB_01621230:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar7,puVar12);
    }
    if (local_44 == (ushort *)0x0) {
      puVar16 = (ushort *)0x0;
      iVar8 = 1;
    }
    else {
      iVar8 = thunk_FUN_016d4a50(local_44);
      if (iVar8 == 0) {
        uVar7 = 1;
        goto LAB_01621230;
      }
      puVar16 = puVar12;
    }
    FUN_016dd1aa(iVar8,iVar11,puVar12);
    piVar17 = local_3c;
    if (((uint)local_3c & 1) == 0) {
      piVar13 = local_3c + 4;
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar13;
        bVar18 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar18);
      *piVar13 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        if (*local_3c != 0) {
          thunk_FUN_016d3fb4(local_3c[1]);
        }
        goto LAB_01621308;
      }
    }
    else if (local_40 + ((uint)local_3c >> 5) != 0) {
      piVar17 = (int *)(iVar11 - ((uint)local_3c >> 5));
LAB_01621308:
      thunk_FUN_016d3fb4(piVar17);
    }
    param_1[1] = puVar16;
    param_1[2] = iVar8;
    param_1[3] = puVar12;
    param_1[4] = iVar9;
    param_1[5] = (uVar1 & 0x8000) << 9 | (uint)(byte)uVar2 << 0x10 | uVar1 & 0x7fff;
    if (puVar12 != (ushort *)iVar9) goto LAB_01620f64;
    *param_1 = 0;
    if (((uint)local_28 & 1) != 0) {
      if ((undefined1 *)((int)local_2c + ((uint)local_28 >> 5)) == (undefined1 *)0x0) {
        return;
      }
      piVar17 = (int *)((int)local_34 - ((uint)local_28 >> 5));
      goto LAB_01621010;
    }
    piVar17 = local_28 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar17;
      bVar18 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar18);
    *piVar17 = iVar9 + -1;
    if (iVar9 != 1) {
      return;
    }
    DataMemoryBarrier(0xb);
    piVar17 = local_28;
    if (*local_28 == 0) goto LAB_01621010;
    iVar9 = local_28[1];
LAB_01621008:
    piVar17 = local_28;
    thunk_FUN_016d3fb4(iVar9);
  }
LAB_01621010:
  thunk_FUN_016d3fb4(piVar17);
  return;
}

