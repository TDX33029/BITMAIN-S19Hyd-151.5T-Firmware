// FUN_0133b670 @ 0133b670 size=2796 calls_out=19 calls_in=24
// strings: not a message | assertion failed: index_by_number.insert(f.proto().get_number() as u32; i).is_none() | assertion failed: index_by_name.insert(f.proto().get_name().to_owned(); i).is_none() | assertion failed: index_by_name_or_json_name.insert(f.proto().get_name().to_owned();         i).is_none() | assertion failed: index_by_name_or_json_name.insert(json_name; i).is_none()

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0133b670(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 uint *param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  char *pcVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined *puVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined1 *puVar27;
  undefined4 *puVar28;
  int *piVar29;
  uint *puVar30;
  uint *puVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  uint local_150;
  uint *local_114;
  uint *local_110;
  uint *local_10c;
  undefined4 *local_100;
  uint local_fc;
  uint *local_f8;
  int local_f4;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint local_e4;
  undefined4 *local_e0;
  uint local_dc;
  uint *local_d8;
  int local_d4;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint local_c4;
  undefined4 *local_c0;
  uint local_bc;
  uint *puStack_b8;
  int iStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  undefined4 *local_a0;
  uint local_9c;
  uint *puStack_98;
  int iStack_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  int *local_80;
  int *local_7c;
  undefined4 local_78;
  int *local_74;
  undefined4 **local_70;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  int *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_0133446c(&local_58,param_5,param_2,param_3);
  iVar2 = local_48;
  puVar6 = local_50;
  puVar5 = local_54;
  puVar4 = local_58;
  if (local_4c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("not a message",0xd,&DAT_01891f08);
  }
  uVar34 = thunk_FUN_016de0ee(local_54,0x2c0);
  puVar31 = (uint *)((int)uVar34 + (int)((ulonglong)uVar34 >> 0x20));
  if ((char)puVar31[4] == '\0') {
    FUN_015f62e4(&local_58);
    *puVar31 = (uint)local_58;
    puVar31[1] = (uint)local_54;
    puVar31[2] = (uint)local_50;
    puVar31[3] = local_4c;
    *(undefined1 *)(puVar31 + 4) = 1;
  }
  local_110 = &local_f0;
  local_f0 = *puVar31;
  uStack_ec = puVar31[1];
  local_e4 = puVar31[3];
  puVar14 = puVar31 + 2;
  local_e8 = *puVar14;
  uVar26 = *(uint *)(iVar2 + 0x18);
  uVar15 = *(uint *)(iVar2 + 0x1c);
  *puVar31 = local_f0 + 1;
  puVar31[1] = uStack_ec + (0xfffffffe < local_f0);
  uVar22 = 0;
  local_10c = (uint *)0x0;
  iVar24 = 0;
  local_100 = &DAT_005674cc;
  local_fc = uVar22;
  local_f8 = local_10c;
  local_f4 = iVar24;
  if (uVar26 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar15,uVar26,&DAT_0188f948);
  }
  iVar21 = *(int *)(iVar2 + 0x14);
  puVar28 = (undefined4 *)(iVar21 + 0x14);
  for (iVar25 = uVar15 * 0x74; iVar25 != 0; iVar25 = iVar25 + -0x74) {
    if (*(char *)(iVar21 + 0x1c) == '\0') {
      uVar16 = 1;
      uVar19 = 0;
    }
    else {
      uVar16 = *puVar28;
      uVar19 = puVar28[1];
    }
    puVar28 = puVar28 + 0x1d;
    iVar21 = iVar21 + 0x74;
    FUN_013364f4(&local_100,uVar16,uVar19);
  }
  if ((char)puVar31[4] == '\0') {
    FUN_015f62e4(&local_58);
    *puVar31 = (uint)local_58;
    puVar31[1] = (uint)local_54;
    *puVar14 = (uint)local_50;
    puVar31[3] = local_4c;
    *(undefined1 *)(puVar31 + 4) = 1;
  }
  local_d0 = *puVar31;
  uStack_cc = puVar31[1];
  local_b0 = local_d0 + 1;
  local_c8 = *puVar14;
  local_c4 = puVar31[3];
  uStack_ac = uStack_cc + (0xfffffffe < local_d0);
  *puVar31 = local_b0;
  puVar31[1] = uStack_ac;
  local_90 = local_d0 + 2;
  uStack_8c = uStack_cc + (0xfffffffd < local_d0);
  *puVar31 = local_90;
  puVar31[1] = uStack_8c;
  *puVar31 = local_d0 + 3;
  puVar31[1] = uStack_cc + (0xfffffffc < local_d0);
  local_e0 = &DAT_005674cc;
  local_dc = uVar22;
  local_d8 = local_10c;
  local_d4 = iVar24;
  local_c0 = &DAT_005674cc;
  local_bc = uVar22;
  puStack_b8 = local_10c;
  iStack_b4 = iVar24;
  local_a8 = local_c8;
  local_a4 = local_c4;
  local_a0 = &DAT_005674cc;
  local_9c = uVar22;
  puStack_98 = local_10c;
  iStack_94 = iVar24;
  local_88 = local_c8;
  local_84 = local_c4;
  if ((char)param_5[7] == '\0') {
    puVar14 = (uint *)&DAT_00000001;
    puVar31 = (uint *)0x0;
    uVar15 = 1;
  }
  else {
    puVar31 = (uint *)param_5[6];
    if ((int)puVar31 < 0) {
      uVar16 = 0;
      puVar31 = param_5;
LAB_0133b8a4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar16,puVar31);
    }
    uVar15 = param_5[5];
    if (puVar31 == (uint *)0x0) {
      puVar14 = (uint *)&DAT_00000001;
      puVar31 = (uint *)0x0;
    }
    else {
      puVar14 = (uint *)thunk_FUN_016d4a50(puVar31);
      if (puVar14 == (uint *)0x0) {
        uVar16 = 1;
        goto LAB_0133b8a4;
      }
    }
  }
  FUN_016dd1aa(puVar14,uVar15,puVar31);
  local_58 = puVar31;
  local_54 = puVar14;
  local_50 = puVar31;
  if (puVar6 == (uint *)0x0) {
    if (puVar31 == (uint *)0x0) goto LAB_0133b928;
LAB_0133b97c:
    puVar6 = local_50;
    if (local_58 == local_50) {
      FUN_0132f8cc(&local_58,local_58,1,1,1);
    }
    *(undefined1 *)((int)local_54 + (int)local_50) = 0x2e;
    puVar6 = (uint *)((int)puVar6 + 1);
    cVar1 = *(char *)(iVar2 + 0xc);
    local_50 = puVar6;
  }
  else {
    if (puVar31 == (uint *)0x0) {
      local_50 = (uint *)0x0;
      if (puVar6 != (uint *)0x0) goto LAB_0133c030;
    }
    else {
      FUN_0132f8cc(&local_58,puVar31,1,1,1);
      puVar27 = (undefined1 *)((int)puVar31 + 1);
      *(undefined1 *)((int)local_54 + (int)local_50) = 0x2e;
      local_50 = (uint *)puVar27;
      if ((uint)((int)local_58 - (int)puVar27) < puVar6) {
LAB_0133c030:
        FUN_0132f8cc(&local_58,local_50,puVar6,1,1);
      }
    }
    puVar31 = local_50;
    FUN_016dd1aa((undefined1 *)((int)local_54 + (int)local_50),puVar5,puVar6);
    local_50 = (uint *)((int)puVar31 + (int)puVar6);
    if (local_50 != (uint *)0x0) goto LAB_0133b97c;
LAB_0133b928:
    puVar6 = (uint *)0x0;
    cVar1 = *(char *)(iVar2 + 0xc);
  }
  uVar15 = 0;
  uVar16 = 1;
  if (cVar1 == '\x01') {
    uVar16 = *(undefined4 *)(iVar2 + 4);
    uVar15 = *(uint *)(iVar2 + 8);
    if ((uint)((int)local_58 - (int)puVar6) < uVar15) {
      FUN_0132f8cc(&local_58,puVar6,uVar15,1,1);
      puVar6 = local_50;
    }
  }
  puVar14 = local_54;
  puVar31 = local_58;
  FUN_016dd1aa((undefined1 *)((int)local_54 + (int)puVar6),uVar16,uVar15);
  local_78 = *param_4;
  local_80 = (int *)param_4[1];
  local_150 = param_4[2];
  local_74 = local_80 + local_150 * 4;
  uVar16 = 0;
  local_7c = local_80;
  local_70 = &local_100;
  if (0x3ffffff < local_150) {
LAB_0133ba08:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar16,local_150 << 5);
  }
  iVar24 = 0;
  if (local_150 == 0) {
    iVar21 = 4;
    local_150 = 0;
  }
  else {
    iVar21 = thunk_FUN_016d4a50(local_150 << 5);
    if (iVar21 == 0) {
      uVar16 = 4;
      goto LAB_0133ba08;
    }
  }
  piVar3 = local_74;
  local_5c = local_74;
  local_60 = local_78;
  local_64 = local_7c;
  local_68 = local_80;
  if (local_7c != local_74) {
    iVar24 = 0;
    piVar29 = local_7c;
LAB_0133ba8c:
    piVar17 = piVar29 + 4;
    if (local_f4 != 0) {
      local_10c = (uint *)*piVar29;
      iVar25 = piVar29[1];
      uVar7 = FUN_01333c64(local_f0,uStack_ec,local_e8,local_e4,local_10c,iVar25);
      uVar26 = local_fc;
      puVar28 = local_100;
      uVar22 = uVar7 >> 0x19;
      iVar33 = 0;
      while( true ) {
        uVar7 = uVar26 & uVar7;
        uVar8 = *(uint *)((int)puVar28 + uVar7);
        uVar9 = uVar8 ^ uVar22 * 0x1010101;
        for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9
            ) {
          uVar10 = uVar7 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                   uVar26;
          if ((iVar25 == (puVar28 + uVar10 * -3 + -3)[1]) &&
             (iVar11 = thunk_FUN_016dd50a(local_10c,puVar28[uVar10 * -3 + -3]), iVar11 == 0)) {
            local_38 = *piVar29;
            iStack_34 = piVar29[1];
            iStack_30 = piVar29[2];
            iStack_2c = piVar29[3];
            FUN_01339d3c(&local_58,&local_38,puVar28[uVar10 * -3 + -1]);
            puVar28 = (undefined4 *)(iVar21 + iVar24 * 0x20);
            iVar24 = iVar24 + 1;
            *puVar28 = local_58;
            puVar28[1] = local_54;
            puVar28[2] = local_50;
            puVar28[3] = local_4c;
            puVar28[4] = local_48;
            puVar28[5] = uStack_44;
            puVar28[6] = uStack_40;
            puVar28[7] = uStack_3c;
            piVar29 = piVar17;
            if (piVar17 != piVar3) goto LAB_0133ba8c;
            local_64 = piVar17;
            goto LAB_0133bc28;
          }
        }
        if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) break;
        iVar33 = iVar33 + 4;
        uVar7 = uVar7 + iVar33;
      }
    }
    local_64 = piVar17;
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01890e60);
  }
LAB_0133bc28:
  FUN_00ee3edc(&local_68);
  if (iVar24 != 0) {
    iVar25 = iVar24 << 5;
    iVar33 = 0;
    local_114 = &local_e8;
    do {
      iVar32 = iVar21 + iVar33 * 0x20;
      iVar11 = 0;
      if (**(int **)(iVar32 + 0xc) != 0) {
        iVar11 = (*(int **)(iVar32 + 0xc))[1];
      }
      iVar11 = FUN_01336cac(&local_a0,iVar11,iVar33);
      uVar16 = 0x54;
      if (iVar11 != 0) {
        pcVar13 = 
        "assertion failed: index_by_number.insert(f.proto().get_number() as u32, i).is_none()";
        puVar20 = &DAT_01891ec8;
        goto LAB_0133c0e8;
      }
      iVar11 = *(int *)(iVar32 + 0xc);
      if (*(char *)(iVar11 + 0x1c) == '\0') {
        local_10c = (uint *)&DAT_00000001;
        puVar23 = (uint *)0x0;
        uVar19 = 1;
      }
      else {
        puVar23 = *(uint **)(iVar11 + 0x18);
        uVar19 = 0;
        puVar18 = local_10c;
        if ((int)puVar23 < 0) goto LAB_0133c120;
        uVar19 = *(undefined4 *)(iVar11 + 0x14);
        if (puVar23 == (uint *)0x0) {
          puVar23 = (uint *)0x0;
          local_10c = (uint *)&DAT_00000001;
        }
        else {
          local_10c = (uint *)thunk_FUN_016d4a50(puVar23,local_10c);
          if (local_10c == (uint *)0x0) {
            uVar19 = 1;
            puVar18 = puVar23;
            goto LAB_0133c120;
          }
        }
      }
      FUN_016dd1aa(local_10c,uVar19,puVar23);
      local_58 = puVar23;
      local_54 = local_10c;
      local_50 = puVar23;
      iVar11 = FUN_0133740c(&local_e0,&local_58,iVar33);
      if (iVar11 != 0) {
        pcVar13 = 
        "assertion failed: index_by_name.insert(f.proto().get_name().to_owned(), i).is_none()";
        puVar20 = &DAT_01891ed8;
        goto LAB_0133c0e8;
      }
      iVar11 = *(int *)(iVar32 + 0xc);
      if (*(char *)(iVar11 + 0x1c) != '\x01') {
        local_110 = (uint *)&DAT_00000001;
        puVar23 = (uint *)0x0;
        uVar16 = 1;
        goto LAB_0133bd48;
      }
      puVar23 = *(uint **)(iVar11 + 0x18);
      uVar19 = 0;
      puVar18 = local_110;
      if ((int)puVar23 < 0) goto LAB_0133c120;
      uVar16 = *(undefined4 *)(iVar11 + 0x14);
      if (puVar23 != (uint *)0x0) {
        local_110 = (uint *)thunk_FUN_016d4a50(puVar23,local_110);
        puVar18 = puVar23;
        if (local_110 != (uint *)0x0) goto LAB_0133bd48;
LAB_0133c11c:
        uVar19 = 1;
LAB_0133c120:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar19,puVar18);
      }
      puVar23 = (uint *)0x0;
      local_110 = (uint *)&DAT_00000001;
LAB_0133bd48:
      FUN_016dd1aa(local_110,uVar16,puVar23);
      local_58 = puVar23;
      local_54 = local_110;
      local_50 = puVar23;
      iVar11 = FUN_0133740c(&local_c0,&local_58,iVar33);
      if (iVar11 != 0) {
        uVar16 = 0x69;
        pcVar13 = 
        "assertion failed: index_by_name_or_json_name.insert(f.proto().get_name().to_owned(),\n        i).is_none()"
        ;
        puVar20 = &DAT_01891ee8;
LAB_0133c0e8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(pcVar13,uVar16,puVar20);
      }
      puVar23 = *(uint **)(iVar32 + 8);
      uVar19 = 0;
      puVar18 = local_114;
      if ((int)puVar23 < 0) goto LAB_0133c120;
      uVar19 = *(undefined4 *)(iVar32 + 4);
      uVar16 = 1;
      puVar12 = (uint *)&DAT_00000001;
      puVar30 = (uint *)0x0;
      puVar18 = (uint *)0x0;
      if (puVar23 != (uint *)0x0) {
        puVar12 = (uint *)thunk_FUN_016d4a50(puVar23,local_114);
        puVar18 = puVar23;
        if (puVar12 == (uint *)0x0) goto LAB_0133c11c;
      }
      FUN_016dd1aa(puVar12,uVar19,puVar23);
      iVar11 = *(int *)(iVar32 + 0xc);
      if (*(char *)(iVar11 + 0x1c) == '\x01') {
        uVar16 = *(undefined4 *)(iVar11 + 0x14);
        puVar30 = *(uint **)(iVar11 + 0x18);
      }
      if ((puVar23 == puVar30) && (iVar11 = thunk_FUN_016dd50a(puVar12,uVar16,puVar23), iVar11 == 0)
         ) {
        if (puVar18 != (uint *)0x0) {
          thunk_FUN_016d3fb4(puVar12);
        }
      }
      else {
        local_58 = puVar18;
        local_54 = puVar12;
        local_50 = puVar23;
        iVar11 = FUN_0133740c(&local_c0,&local_58,iVar33);
        if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: index_by_name_or_json_name.insert(json_name, i).is_none()"
                       ,0x4b,&DAT_01891ef8);
        }
      }
      iVar33 = iVar33 + 1;
      iVar25 = iVar25 + -0x20;
      local_114 = puVar12;
    } while (iVar25 != 0);
  }
  param_1[0x20] = iVar24;
  param_1[0x1d] = (undefined1 *)((int)puVar6 + uVar15);
  param_1[0x1f] = iVar21;
  param_1[0x1e] = local_150;
  param_1[0x1c] = puVar14;
  param_1[0x1b] = puVar31;
  *param_1 = local_e0;
  param_1[1] = local_dc;
  param_1[2] = local_d8;
  param_1[3] = local_d4;
  param_1[4] = local_d0;
  param_1[5] = uStack_cc;
  param_1[6] = local_c8;
  param_1[7] = local_c4;
  param_1[8] = local_c0;
  param_1[9] = local_bc;
  param_1[10] = puStack_b8;
  param_1[0xb] = iStack_b4;
  param_1[0xc] = local_b0;
  param_1[0xd] = uStack_ac;
  param_1[0xe] = local_a8;
  param_1[0xf] = local_a4;
  param_1[0x10] = local_a0;
  param_1[0x11] = local_9c;
  param_1[0x12] = puStack_98;
  param_1[0x13] = iStack_94;
  param_1[0x14] = local_90;
  param_1[0x15] = uStack_8c;
  param_1[0x16] = local_88;
  param_1[0x17] = local_84;
  param_1[0x19] = param_6;
  param_1[0x18] = 1;
  param_1[0x1a] = iVar2;
  iVar24 = 0;
  if (local_fc != 0) {
    iVar2 = local_fc * 3;
    iVar24 = local_fc * 0xd;
  }
  if (local_fc != 0 && iVar24 != -0x11) {
    thunk_FUN_016d3fb4(local_100 + (-3 - iVar2));
  }
  if (puVar4 != (uint *)0x0) {
    thunk_FUN_016d3fb4(puVar5);
  }
  return;
}

