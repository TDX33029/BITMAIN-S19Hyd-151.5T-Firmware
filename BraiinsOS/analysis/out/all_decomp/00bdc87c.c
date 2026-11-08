// FUN_00bdc87c @ 00bdc87c size=1856 calls_out=17 calls_in=2
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

longlong FUN_00bdc87c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  undefined1 uVar19;
  int *piVar20;
  int *piVar21;
  byte *local_84;
  int *local_78;
  byte *local_74;
  int *local_70;
  int local_6c;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  FUN_00fab1e0(&local_78,param_3,param_4);
  piVar10 = local_70;
  pbVar2 = local_74;
  if (local_78 == (int *)0x1) {
    piVar10 = (int *)param_1[0x1e];
    iVar7 = param_1[0x1f] << 4;
    uVar3 = 0xffffffff;
    do {
      if (iVar7 == 0) {
        puVar14 = (undefined4 *)0x0;
        goto LAB_00bdcc78;
      }
      iVar12 = *piVar10;
      piVar21 = piVar10 + 1;
      iVar7 = iVar7 + -0x10;
      piVar20 = piVar10 + 2;
      piVar16 = piVar10 + 3;
      uVar3 = uVar3 + 1;
      piVar10 = piVar10 + 4;
    } while ((iVar12 != -0x7e2dea42 || *piVar20 != -0x2f8246a2) ||
             (*piVar21 != 0x4c65521b || *piVar16 != 0x76f4a2ad));
    if ((uint)param_1[0x22] <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,param_1[0x22],&DAT_01880824);
    }
    piVar10 = (int *)(param_1[0x21] + uVar3 * 0x18);
    iVar7 = piVar10[1];
    puVar14 = (undefined4 *)(*piVar10 + (*(int *)(iVar7 + 8) - 1U & 0xfffffff8) + 8);
    (**(code **)(iVar7 + 0xc))(&local_78,puVar14);
    if ((local_78 != (int *)0x81d215be || local_70 != (int *)0xd07db95e) ||
        (local_74 != (byte *)0x4c65521b || local_6c != 0x76f4a2ad)) {
      puVar14 = (undefined4 *)0x0;
    }
    if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_00bdcc78:
    local_74 = (byte *)&DAT_0035dc52;
    if (puVar14 != (undefined4 *)0x0) {
      local_74 = (byte *)puVar14;
    }
    local_70 = (int *)0x0;
    local_78 = param_1;
    FUN_00fa04ec(&local_34,&local_78,4,0);
    uVar5 = FUN_00bdd0ac(param_1,&local_34);
    return CONCAT44(uVar5,1);
  }
  FUN_00fb6cfc(&local_78,local_74,local_70,"0x",2);
  do {
    FUN_00bd41dc(&local_34,&local_78);
  } while (local_34 == 0);
  if (local_34 == 1) {
    piVar20 = local_30;
  }
  else {
    piVar20 = local_70;
  }
  local_74 = &DAT_00000001;
  uVar18 = (int)local_70 - (int)piVar20;
  uVar3 = 0;
  local_70 = (int *)0x0;
  local_78 = (int *)0x0;
  local_84 = &DAT_00000001;
  uVar13 = uVar3;
LAB_00bdca60:
  do {
    uVar11 = uVar18 - uVar3;
    iVar7 = (int)piVar20 + uVar3 + (int)pbVar2;
    if (uVar11 < 8) {
      if (uVar18 == uVar3) break;
      iVar12 = 0;
      while (*(char *)(iVar7 - iVar12) != '_') {
        iVar12 = iVar12 + -1;
        if ((int)piVar20 + (uVar3 - (int)piVar10) == iVar12) goto LAB_00bdcc10;
      }
      uVar17 = -iVar12;
    }
    else {
      uVar8 = (iVar7 + 3U & 0xfffffffc) - iVar7;
      if (uVar8 == 0) {
        uVar8 = 0;
        goto LAB_00bdcb08;
      }
      uVar17 = 0;
      do {
        if (*(char *)(iVar7 + uVar17) == '_') goto joined_r0x00bdcb8c;
        uVar17 = uVar17 + 1;
      } while (uVar8 != uVar17);
      for (; uVar8 <= uVar11 - 8; uVar8 = uVar8 + 8) {
LAB_00bdcb08:
        uVar15 = *(uint *)(iVar7 + uVar8);
        uVar17 = ((uint *)(iVar7 + uVar8))[1] ^ 0x5f5f5f5f;
        if (((0x1010100 - (uVar15 ^ 0x5f5f5f5f) | uVar15) & 0x80808080 &
            (0x1010100 - uVar17 | uVar17)) != 0x80808080) break;
      }
      if (uVar11 == uVar8) {
        uVar3 = uVar13;
        goto LAB_00bdcc14;
      }
      iVar12 = 0;
      while (*(char *)(iVar7 + uVar8 + iVar12) != '_') {
        iVar12 = iVar12 + 1;
        if ((uVar18 - uVar8) - uVar3 == iVar12) goto LAB_00bdcc10;
      }
      uVar17 = iVar12 + uVar8;
    }
joined_r0x00bdcb8c:
    uVar17 = uVar17 + uVar3;
    uVar3 = uVar17 + 1;
    if ((uVar17 < uVar18) && (*(char *)((int)piVar20 + uVar17 + (int)pbVar2) == '_')) {
      uVar17 = uVar17 - uVar13;
      if ((uint)((int)local_78 - (int)local_70) < uVar17) {
        FUN_00d653ec(&local_78,local_70,uVar17,1,1);
        local_84 = local_74;
      }
      piVar16 = local_70;
      FUN_016dd1aa(local_84 + (int)local_70,(int)piVar20 + uVar13 + (int)pbVar2,uVar17);
      local_70 = (int *)((int)piVar16 + uVar17);
      uVar13 = uVar3;
      if (uVar18 < uVar3) goto LAB_00bdcc14;
      goto LAB_00bdca60;
    }
  } while (uVar3 <= uVar18);
LAB_00bdcc10:
  uVar3 = uVar13;
LAB_00bdcc14:
  uVar18 = uVar18 - uVar3;
  if ((uint)((int)local_78 - (int)local_70) < uVar18) {
    FUN_00d653ec(&local_78,local_70,uVar18,1,1);
    local_84 = local_74;
  }
  piVar16 = local_70;
  piVar21 = local_78;
  FUN_016dd1aa(local_84 + (int)local_70,(int)piVar20 + uVar3 + (int)pbVar2,uVar18);
  puVar4 = (undefined1 *)((int)piVar16 + uVar18);
  if (puVar4 == (undefined1 *)0x0) {
    bVar1 = true;
    uVar19 = 0;
  }
  else if (puVar4 == (undefined1 *)0x1) {
    bVar6 = *local_84;
    uVar3 = 1;
    uVar19 = 1;
    if (bVar6 == 0x2b) {
LAB_00bdcd8c:
      uVar19 = 1;
      bVar1 = true;
    }
    else {
      bVar1 = true;
      if (bVar6 != 0x2d) goto LAB_00bdcce4;
    }
  }
  else {
    bVar6 = *local_84;
LAB_00bdcce4:
    uVar19 = (undefined1)uVar3;
    pbVar9 = local_84;
    if (bVar6 == 0x2b) {
      pbVar9 = local_84 + 1;
      puVar4 = puVar4 + -1;
    }
    piVar16 = (int *)0x0;
    if (puVar4 < (undefined1 *)0x9) {
      if (puVar4 == (undefined1 *)0x0) {
        bVar1 = false;
        goto joined_r0x00bdcf38;
      }
      do {
        uVar13 = (uint)*pbVar9;
        uVar3 = uVar13 - 0x30;
        if (0x39 < uVar13) {
          uVar3 = (uVar13 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar3) goto LAB_00bdcd8c;
        piVar16 = (int *)(uVar3 | (int)piVar16 << 4);
        pbVar9 = pbVar9 + 1;
        puVar4 = puVar4 + -1;
      } while (puVar4 != (undefined1 *)0x0);
    }
    else {
      do {
        uVar13 = (uint)*pbVar9;
        uVar3 = uVar13 - 0x30;
        if ((undefined1 *)0xfffffff < piVar16) {
          if (0x39 < uVar13) {
            uVar3 = (uVar13 - 0x41 & 0xffffffde) + 10;
          }
          uVar19 = 1;
          bVar1 = true;
          if (uVar3 < 0x10) {
            uVar19 = 2;
          }
          goto joined_r0x00bdcf38;
        }
        if (0x39 < uVar13) {
          uVar3 = (uVar13 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar3) goto LAB_00bdcd8c;
        piVar16 = (int *)(uVar3 | (int)piVar16 << 4);
        pbVar9 = pbVar9 + 1;
        puVar4 = puVar4 + -1;
      } while (puVar4 != (undefined1 *)0x0);
    }
    bVar1 = false;
    uVar19 = 1;
  }
joined_r0x00bdcf38:
  if (piVar21 != (int *)0x0) {
    thunk_FUN_016d3fb4(local_84);
  }
  if (!bVar1) {
    return ZEXT48(piVar16) << 0x20;
  }
  if (param_2 == 0) {
    uVar5 = 3;
    local_30 = (int *)thunk_FUN_016d4a50(3);
    if (local_30 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)((int)local_30 + 2) = 0x2e;
    local_34 = 3;
    *(undefined2 *)local_30 = 0x2e2e;
  }
  else {
    local_2c = 0;
    local_34 = 0;
    local_6c = 0;
    local_30 = (int *)&DAT_00000001;
    local_70 = (int *)&DAT_60000020;
    local_78 = &local_34;
    local_74 = &DAT_018725a4;
    iVar7 = FUN_00f9d654(param_2,&local_78);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_25,
                   &DAT_018725bc,&DAT_018af130);
    }
    uVar5 = local_2c;
  }
  local_2c = uVar5;
  if ((int)piVar10 < 0) {
    uVar5 = 0;
LAB_00bdce74:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,piVar10);
  }
  if (piVar10 == (int *)0x0) {
    iVar7 = 1;
    piVar20 = (int *)0x0;
  }
  else {
    iVar7 = thunk_FUN_016d4a50(piVar10);
    if (iVar7 == 0) {
      uVar5 = 1;
      goto LAB_00bdce74;
    }
    piVar20 = piVar10;
  }
  FUN_016dd1aa(iVar7,pbVar2,piVar10);
  local_78 = piVar20;
  local_74 = (byte *)iVar7;
  puVar4 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *puVar4 = uVar19;
  uVar5 = FUN_00bdd250(&local_34,&local_78,puVar4,&DAT_01873520);
  FUN_00bdd4d8(uVar5,param_1);
  return CONCAT44(uVar5,1);
}

