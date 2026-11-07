// FUN_00f8df9c @ 00f8df9c size=2192 calls_out=13 calls_in=4
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly

void FUN_00f8df9c(undefined1 **param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 **ppuVar11;
  undefined *puVar12;
  int *piVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 *unaff_r5;
  undefined4 *puVar16;
  undefined1 **unaff_r7;
  undefined4 uVar17;
  bool bVar18;
  int *piVar19;
  uint local_c0;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined1 *local_a8;
  undefined1 *local_a4;
  int local_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  int iStack_94;
  uint uStack_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *local_68;
  undefined1 *local_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 *local_50;
  uint local_4c;
  undefined1 **local_48;
  code *local_44;
  undefined1 **local_40;
  undefined4 *local_3c;
  undefined1 **local_38;
  undefined4 *local_34;
  undefined1 *local_30;
  int local_2c;
  uint local_28;
  
  puVar14 = param_1[0x51];
  if (-1 < (int)puVar14) {
    unaff_r5 = param_1[0x52];
    unaff_r7 = param_1;
  }
  if (-1 >= (int)puVar14 || (int)unaff_r5 < 0) {
    return;
  }
  local_ac = (undefined1 *)thunk_FUN_016d4a50(1);
  if (local_ac == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,1);
  }
  uVar7 = 0x20;
  bVar18 = ((uint)puVar14 & 0x1000) == 0;
  *local_ac = 0x20;
  puVar3 = local_ac;
  if (bVar18) {
    uVar7 = (uint)unaff_r5 & 0x3000;
    puVar3 = (undefined1 *)((uint)puVar14 & 0x2000);
  }
  local_a8 = (undefined1 *)0x1;
  local_b0 = (undefined1 *)0x1;
  if (bVar18 && (uVar7 == 0 && puVar3 == (undefined1 *)0x0)) {
    piVar13 = (int *)unaff_r7[0x1e];
    iVar8 = (int)unaff_r7[0x1f] << 4;
    puVar14 = (undefined1 *)0xffffffff;
    do {
      if (iVar8 == 0) {
        puVar16 = (undefined4 *)0x0;
        goto LAB_00f8e170;
      }
      iVar9 = *piVar13;
      piVar19 = piVar13 + 1;
      iVar8 = iVar8 + -0x10;
      piVar1 = piVar13 + 2;
      piVar2 = piVar13 + 3;
      puVar14 = puVar14 + 1;
      piVar13 = piVar13 + 4;
    } while ((iVar9 != -0x7e2dea42 || *piVar1 != -0x2f8246a2) ||
             (*piVar19 != 0x4c65521b || *piVar2 != 0x76f4a2ad));
    if (unaff_r7[0x22] <= puVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(puVar14,unaff_r7[0x22],&DAT_01880824);
    }
    iVar8 = *(int *)((int)(unaff_r7[0x21] + (int)puVar14 * 0x18) + 4);
    puVar16 = (undefined4 *)
              (*(int *)(unaff_r7[0x21] + (int)puVar14 * 0x18) +
               (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8);
    (**(code **)(iVar8 + 0xc))(&local_48,puVar16);
    if ((local_48 != (undefined1 **)0x81d215be || local_40 != (undefined1 **)0xd07db95e) ||
        (local_44 != (code *)0x4c65521b || local_3c != (undefined4 *)0x76f4a2ad)) {
      puVar16 = (undefined4 *)0x0;
    }
    if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_00f8e170:
    local_40 = (undefined1 **)0x0;
    local_44 = (code *)&DAT_0035dc52;
    if (puVar16 != (undefined4 *)0x0) {
      local_44 = (code *)puVar16;
    }
    local_48 = unaff_r7;
    FUN_00fa0620(&local_a4,&local_48,4,0,0);
    if (local_9c != (undefined1 *)0x0) {
      iVar8 = (int)local_9c * 0xc;
      puVar16 = (undefined4 *)(local_a0 + 4);
      do {
        local_28 = 0;
        local_2c = 1;
        local_30 = (undefined1 *)0x0;
        local_3c = (undefined4 *)0x0;
        local_40 = (undefined1 **)&DAT_60000020;
        local_44 = (code *)&DAT_018804e4;
        local_48 = &local_30;
        iVar4 = FUN_00faace8(&local_48,*puVar16,puVar16[1]);
        uVar7 = local_28;
        iVar9 = local_2c;
        puVar14 = local_30;
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_68,
                       &DAT_0188054c,&DAT_018af130);
        }
        if ((uint)((int)local_b0 - (int)local_a8) < local_28) {
          FUN_00f991dc(&local_b0,local_a8,local_28,1,1);
        }
        FUN_016dd1aa(local_ac + (int)local_a8,iVar9,uVar7);
        local_a8 = local_a8 + uVar7;
        if (puVar14 != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(iVar9);
        }
        puVar14 = local_a8;
        if (local_b0 == local_a8) {
          FUN_00f991dc(&local_b0,local_a8,1,1,1);
        }
        puVar16 = puVar16 + 3;
        iVar8 = iVar8 + -0xc;
        local_ac[(int)local_a8] = 0x20;
        local_a8 = puVar14 + 1;
      } while (iVar8 != 0);
    }
    puVar16 = (undefined4 *)(local_a0 + 4);
    for (puVar14 = local_9c; puVar14 != (undefined1 *)0x0;
        puVar14 = (undefined1 *)((int)puVar14 + -1)) {
      if (puVar16[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar16);
      }
      puVar16 = puVar16 + 3;
    }
    if (local_a4 != (undefined1 *)0x0) {
      thunk_FUN_016d3fb4(local_a0);
    }
    if (((uint)unaff_r7[0x51] & 0x800) == 0) goto LAB_00f8e00c;
LAB_00f8e344:
    local_c0 = 1;
LAB_00f8e34c:
    puVar14 = unaff_r7[0x27];
    if (unaff_r7[0x26] != (undefined1 *)0x80000000) {
      puVar3 = unaff_r7[0x28];
      goto joined_r0x00f8e050;
    }
    puVar14 = (undefined1 *)0x1;
  }
  else {
    if (((uint)puVar14 & 0x800) != 0) goto LAB_00f8e344;
LAB_00f8e00c:
    local_c0 = ((uint)unaff_r7[0x52] & 0xfff) >> 0xb;
    if (((uint)unaff_r7[0x52] & 0x800) != 0) goto LAB_00f8e34c;
    iVar8 = 0xa0;
    if (unaff_r7[0x26] == (undefined1 *)0x80000000) {
      iVar8 = 0x120;
    }
    iVar9 = 0x9c;
    if (unaff_r7[0x26] == (undefined1 *)0x80000000) {
      iVar9 = 0x11c;
    }
    puVar14 = *(undefined1 **)((int)unaff_r7 + iVar9);
    local_c0 = 0;
    puVar3 = *(undefined1 **)((int)unaff_r7 + iVar8);
joined_r0x00f8e050:
    if ((int)puVar3 < 0) {
      uVar17 = 0;
LAB_00f8e7ac:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar17,puVar3);
    }
    if (puVar3 != (undefined1 *)0x0) {
      iVar8 = thunk_FUN_016d4a50(puVar3);
      if (iVar8 == 0) {
        uVar17 = 1;
        goto LAB_00f8e7ac;
      }
      goto LAB_00f8e368;
    }
  }
  iVar8 = 1;
  puVar3 = (undefined1 *)0x0;
LAB_00f8e368:
  FUN_016dd1aa(iVar8,puVar14,puVar3);
  puVar14 = unaff_r7[0x18];
  puVar10 = unaff_r7[0x19];
  iVar9 = 0;
  local_a4 = puVar3;
  local_a0 = iVar8;
  local_9c = puVar3;
  do {
    if ((int)puVar10 * 0x16c == iVar9) {
      unaff_r7[0x51] = (undefined1 *)((uint)unaff_r7[0x51] | 0x80000000);
      if (local_a4 != (undefined1 *)0x0) {
        thunk_FUN_016d3fb4(local_a0);
      }
      if (local_b0 == (undefined1 *)0x0) {
        return;
      }
      thunk_FUN_016d3fb4(local_ac);
      return;
    }
    puVar3 = puVar14 + iVar9;
    puVar15 = (uint *)(puVar3 + 0xf8);
    if (*puVar15 == 0x80000000) {
      local_28 = 0;
      local_2c = 1;
      local_30 = (undefined1 *)0x0;
      iVar8 = *(int *)(puVar3 + 0x120);
      uVar17 = *(undefined4 *)(puVar3 + 0x11c);
      if (iVar8 != 0) {
        FUN_00f991dc(&local_30,0,iVar8,1,1);
      }
      FUN_016dd1aa(local_2c + local_28,uVar17,iVar8);
      local_28 = local_28 + iVar8;
      if (*(undefined1 **)(puVar3 + 0x124) == (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(puVar3 + 0x1c);
        if (puVar5 != &DAT_00110000) {
LAB_00f8e4a0:
          local_44 = FUN_00faaf34;
          local_48 = &local_50;
          local_50 = puVar5;
          iVar8 = FUN_00fa948c(&local_30,&DAT_018804e4,&DAT_00593c1c,&local_48);
          if (iVar8 != 0) {
            puVar12 = &DAT_0188053c;
LAB_00f8e7cc:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_0188054c,puVar12);
          }
          goto LAB_00f8e4dc;
        }
      }
      else {
        local_4c = *(uint *)(puVar3 + 0x128);
        local_48 = &local_50;
        local_44 = (code *)&DAT_0157d360;
        local_50 = *(undefined1 **)(puVar3 + 0x124);
        iVar8 = FUN_00fa948c(&local_30,&DAT_018804e4,&DAT_005831a8,&local_48);
        if (iVar8 != 0) {
          puVar12 = &DAT_0188052c;
          goto LAB_00f8e7cc;
        }
        puVar5 = *(undefined1 **)(puVar3 + 0x1c);
        if (puVar5 != &DAT_00110000) goto LAB_00f8e4a0;
LAB_00f8e4dc:
        local_44 = (code *)&DAT_006043a8;
        local_48 = &local_30;
        FUN_00600d2c(&local_98,&DAT_00584e46,&local_48);
        if (local_30 != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(local_2c);
        }
        local_30 = local_98;
        local_2c = iStack_94;
        local_28 = uStack_90;
      }
      local_40 = &local_b0;
      local_48 = &local_a4;
      local_34 = &DAT_006043a8;
      local_3c = &DAT_006043a8;
      local_44 = (code *)&DAT_006043a8;
      local_38 = &local_30;
      FUN_00600d2c(&local_88,&DAT_0057fce6,&local_48);
      if ((*puVar15 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(puVar3 + 0xfc));
      }
      *puVar15 = local_88;
      *(undefined4 *)(puVar3 + 0xfc) = uStack_84;
      *(undefined4 *)(puVar3 + 0x100) = uStack_80;
      if (local_30 != (undefined1 *)0x0) {
        thunk_FUN_016d3fb4(local_2c);
      }
    }
    puVar15 = (uint *)(puVar3 + 0x98);
    if (*puVar15 == 0x80000000) {
      local_50 = (undefined1 *)0x1;
      if (local_9c != (undefined1 *)0x0) {
        local_50 = &DAT_0041545b;
      }
      local_4c = (uint)(local_9c != (undefined1 *)0x0);
      local_30 = *(undefined1 **)(puVar3 + 0x11c);
      local_2c = *(int *)(puVar3 + 0x120);
      local_40 = &local_50;
      local_34 = &DAT_0157d360;
      local_3c = &DAT_0157d360;
      local_44 = (code *)&DAT_006043a8;
      local_48 = &local_a4;
      local_38 = &local_30;
      FUN_00600d2c(&local_78,&DAT_0057fce6,&local_48);
      if ((*puVar15 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(puVar3 + 0x9c));
      }
      *puVar15 = local_78;
      *(undefined4 *)(puVar3 + 0x9c) = uStack_74;
      *(undefined4 *)(puVar3 + 0xa0) = uStack_70;
    }
    puVar15 = (uint *)(puVar3 + 0x8c);
    if (*puVar15 == 0x80000000) {
      puVar5 = unaff_r7[0x23];
      if (local_c0 == 0) {
        iVar8 = 0x90;
        if (puVar5 == (undefined1 *)0x80000000) {
          iVar8 = 0x11c;
        }
        ppuVar11 = (undefined1 **)((int)unaff_r7 + iVar8);
        iVar8 = 0x94;
        if (puVar5 == (undefined1 *)0x80000000) {
          iVar8 = 0x120;
        }
        ppuVar6 = (undefined1 **)((int)unaff_r7 + iVar8);
LAB_00f8e6a0:
        local_64 = *ppuVar6;
        local_68 = *ppuVar11;
        local_4c = 0;
        local_50 = (undefined1 *)0x1;
        if (local_64 != (undefined1 *)0x0) {
          local_4c = 1;
          local_50 = &DAT_00410f51;
        }
      }
      else {
        ppuVar6 = unaff_r7 + 0x25;
        ppuVar11 = unaff_r7 + 0x24;
        if (puVar5 != (undefined1 *)0x80000000) goto LAB_00f8e6a0;
        local_4c = 0;
        local_64 = (undefined1 *)0x0;
        local_68 = (undefined1 *)0x1;
        local_50 = (undefined1 *)0x1;
      }
      local_30 = *(undefined1 **)(puVar3 + 0x11c);
      local_2c = *(int *)(puVar3 + 0x120);
      local_40 = &local_50;
      local_48 = &local_68;
      local_34 = &DAT_0157d360;
      local_3c = &DAT_0157d360;
      local_44 = (code *)&DAT_0157d360;
      local_38 = &local_30;
      FUN_00600d2c(&local_60,&DAT_0057fce6,&local_48);
      if ((*puVar15 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(puVar3 + 0x90));
      }
      *puVar15 = local_60;
      *(undefined4 *)(puVar3 + 0x90) = uStack_5c;
      *(undefined4 *)(puVar3 + 0x94) = uStack_58;
    }
    iVar9 = iVar9 + 0x16c;
    FUN_00f8df9c(puVar3);
  } while( true );
}

