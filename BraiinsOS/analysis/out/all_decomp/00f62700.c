// FUN_00f62700 @ 00f62700 size=2756 calls_out=16 calls_in=3
// strings: remaining data after end of TZif v1 data block | remaining data after end of TZif v1 data block | too short for i64 | invalid time zone name char index | invalid DST indicator | invalid couple of standard/wall and UT/local indicators

void FUN_00f62700(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int extraout_r1;
  byte *pbVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  char cVar19;
  uint *puVar20;
  byte bVar21;
  byte bVar22;
  int unaff_r4;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  undefined4 *puVar26;
  char *pcVar27;
  int iVar28;
  byte *pbVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  undefined4 *puVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  int extraout_r12;
  bool bVar37;
  bool bVar38;
  undefined8 uVar39;
  int local_148;
  char *local_140;
  uint *local_138;
  undefined *local_134;
  uint local_124;
  uint *local_120;
  int local_114;
  int local_110;
  undefined4 local_10c;
  uint *local_108;
  uint *local_104;
  uint *local_100;
  uint *local_fc;
  uint *local_f8;
  uint *local_f4;
  int local_f0;
  uint *local_ec;
  uint *local_e8;
  int local_e4;
  byte *local_e0;
  undefined4 local_dc;
  char *local_d8;
  int local_d4;
  uint local_d0;
  uint local_c4;
  uint *local_c0;
  uint local_bc;
  uint *local_b8;
  char local_b4;
  uint *local_ac;
  int local_a8;
  uint *local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  uint *local_88;
  uint *puStack_84;
  uint *puStack_80;
  uint *puStack_7c;
  uint *puStack_78;
  uint *local_74;
  int iStack_70;
  uint *puStack_6c;
  uint *puStack_68;
  int iStack_64;
  byte *pbStack_60;
  undefined1 local_5c;
  char local_5b;
  undefined2 local_5a;
  uint *local_58;
  uint *local_54;
  uint *puStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint *local_44;
  int iStack_40;
  uint *puStack_3c;
  uint *puStack_38;
  int iStack_34;
  byte *pbStack_30;
  undefined1 local_2c;
  undefined4 uStack_28;
  
  local_10c = 0;
  local_114 = param_2;
  local_110 = param_3;
  FUN_00f632d8(&local_108,&local_114,1);
  if (local_b4 == '\x03') {
    param_1[2] = local_108;
    param_1[3] = local_104;
    param_1[4] = local_100;
    param_1[5] = local_fc;
    *param_1 = 1;
    return;
  }
  if (local_b4 == '\0') {
    if (local_110 != 0) {
      *param_1 = 1;
      param_1[2] = "remaining data after end of TZif v1 data block";
      param_1[3] = 0x2e;
      param_1[4] = &DAT_3b9aca04;
      return;
    }
    iVar14 = 0;
    cVar19 = '\0';
    local_138 = local_b8;
    local_124 = local_bc;
    local_148 = local_d4;
    local_140 = local_d8;
    puVar17 = local_c0;
    uVar34 = local_d0;
    iVar13 = extraout_r12;
    uVar32 = local_c4;
  }
  else {
    FUN_00f632d8(&local_108,&local_114,0);
    if (local_b4 == '\x03') {
      param_1[4] = local_100;
      param_1[2] = local_108;
      param_1[3] = local_104;
      param_1[5] = local_fc;
      *param_1 = 1;
      return;
    }
    local_138 = local_b8;
    local_124 = local_bc;
    local_148 = local_d4;
    local_140 = local_d8;
    puVar17 = local_c0;
    iVar14 = local_114;
    uVar34 = local_d0;
    iVar13 = local_110;
    uVar32 = local_c4;
    cVar19 = local_b4;
  }
  iVar30 = local_dc;
  pbVar10 = local_e0;
  iVar28 = local_e4;
  local_120 = local_e8;
  puVar4 = local_ec;
  iVar9 = local_f0;
  puVar3 = local_f4;
  puVar25 = local_f8;
  puVar7 = local_fc;
  puVar2 = local_100;
  puVar6 = local_104;
  puVar36 = local_108;
  uVar23 = (int)puVar17 * 0x10;
  bVar38 = (uint *)0xffffffe < puVar17;
  bVar37 = puVar17 == (uint *)0xfffffff;
  if (puVar17 < (uint *)0x10000000) {
    bVar38 = 0x7ffffff7 < uVar23;
    bVar37 = uVar23 == 0x7ffffff8;
  }
  if (bVar38 && !bVar37) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  if (uVar23 == 0) {
    iVar5 = 8;
    puVar17 = (uint *)0x0;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(uVar23);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar23);
    }
  }
  local_a4 = (uint *)0x0;
  local_ac = puVar17;
  local_a8 = iVar5;
  if (uVar34 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("chunk size must be non-zero",0x37,&DAT_0187fc2c);
  }
  puVar6 = (uint *)FUN_018462e8(puVar6,uVar34);
  if (puVar7 < puVar6) {
    puVar6 = puVar7;
  }
  if (puVar6 != (uint *)0x0) {
    if (cVar19 == '\0') {
      if (uVar34 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,4,uVar34,&DAT_0187fc1c);
      }
      iVar31 = 0;
      puVar17 = (uint *)0x0;
      do {
        uVar23 = *puVar36;
        puVar7 = (uint *)(uint)*(byte *)((int)puVar2 + (int)puVar17);
        if (puVar17 == local_ac) {
          FUN_00f6b5bc(&local_ac);
          iVar5 = local_a8;
        }
        uVar23 = uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
                 uVar23 >> 0x18;
        puVar20 = (uint *)(iVar5 + iVar31);
        *puVar20 = uVar23;
        local_a4 = (uint *)((int)puVar17 + 1);
        iVar31 = iVar31 + 0x10;
        puVar20[1] = (int)uVar23 >> 0x1f;
        *(uint **)(iVar5 + (int)puVar17 * 0x10 + 8) = puVar7;
        puVar17 = local_a4;
        puVar36 = (uint *)((int)puVar36 + uVar34);
      } while (local_a4 < puVar6);
    }
    else {
      if (uVar34 != 8) {
        *param_1 = 1;
        param_1[2] = "too short for i64";
        param_1[3] = 0x11;
        param_1[4] = 0x3b9aca03;
        goto LAB_00f630ac;
      }
      iVar31 = 0;
      puVar17 = (uint *)0x0;
      do {
        uVar23 = *puVar36;
        uVar35 = puVar36[1];
        bVar21 = *(byte *)((int)puVar2 + (int)puVar17);
        if (puVar17 == local_ac) {
          FUN_00f6b5bc(&local_ac);
          iVar5 = local_a8;
        }
        *(uint *)(iVar5 + iVar31) =
             uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 | (uVar35 >> 0x10 & 0xff) << 8 |
             uVar35 >> 0x18;
        puVar7 = (uint *)((int)puVar17 + 1);
        ((uint *)(iVar5 + iVar31))[1] =
             uVar23 << 0x18 | (uVar23 >> 8 & 0xff) << 0x10 | (uVar23 >> 0x10 & 0xff) << 8 |
             uVar23 >> 0x18;
        iVar31 = iVar31 + 0x10;
        puVar36 = puVar36 + 2;
        *(uint *)(iVar5 + (int)puVar17 * 0x10 + 8) = (uint)bVar21;
        puVar17 = puVar7;
        local_a4 = puVar7;
      } while (puVar7 < puVar6);
    }
  }
  uVar8 = 0;
  if ((0xfffffff < local_124) || (puVar7 = (uint *)(local_124 * 0x10), (uint *)0x7ffffffc < puVar7))
  {
LAB_00f62ac0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar8,puVar7);
  }
  if (puVar7 == (uint *)0x0) {
    iVar5 = 4;
    local_a0 = 0;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(puVar7);
    if (iVar5 == 0) {
      uVar8 = 4;
      goto LAB_00f62ac0;
    }
    local_a0 = local_124;
  }
  local_98 = 0;
  uVar23 = ((uint)puVar3 / 6) * 6;
  local_9c = iVar5;
  puVar17 = (uint *)((int)puVar3 * -0x55555555);
  if (5 < uVar23) {
    uVar23 = (uVar23 - 6) / 6;
    puVar33 = (undefined4 *)((uint)&local_108 | 4);
    local_134 = &DAT_0187fc6c;
    do {
      uVar35 = local_98;
      uVar8 = 0;
      uVar12 = *puVar25;
      if ((char)puVar25[1] != '\0') {
        if ((char)puVar25[1] == '\x01') {
          uVar8 = 1;
          goto LAB_00f62bd0;
        }
        uVar8 = 0x15;
        pcVar11 = "invalid DST indicator";
LAB_00f62ccc:
        param_1[2] = pcVar11;
        *param_1 = 1;
        param_1[3] = uVar8;
        param_1[4] = &DAT_3b9aca04;
        goto LAB_00f63094;
      }
LAB_00f62bd0:
      puVar17 = (uint *)(uint)*(byte *)((int)puVar25 + 5);
      if (local_138 <= puVar17) {
LAB_00f62cb8:
        uVar8 = 0x21;
        pcVar11 = "invalid time zone name char index";
        goto LAB_00f62ccc;
      }
      if (puVar4 < puVar17) {
        puVar7 = puVar4;
LAB_00f6316c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(puVar17,puVar7,puVar4,local_134);
      }
      if (puVar4 == puVar17) goto LAB_00f62cb8;
      puVar25 = (uint *)((int)puVar25 + 6);
      pcVar11 = (char *)(iVar9 + (int)puVar17);
      uVar18 = 0;
      while (pcVar11[uVar18] != '\0') {
        uVar18 = uVar18 + 1;
        if ((int)puVar4 - (int)puVar17 == uVar18) goto LAB_00f62cb8;
      }
      puVar7 = (uint *)(uVar18 + (int)puVar17);
      if ((CARRY4(uVar18,(uint)puVar17)) || (puVar4 < puVar7)) {
        local_134 = &DAT_0187fc5c;
        goto LAB_00f6316c;
      }
      if (uVar18 == 0) {
        pcVar11 = (char *)0x0;
      }
      FUN_00f6785c(&local_108,
                   uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                   uVar12 >> 0x18,uVar8,pcVar11,uVar18);
      if (local_108 == (uint *)&DAT_00000001) {
        local_54 = local_100;
        puStack_50 = local_fc;
        puStack_4c = local_f8;
        puStack_48 = local_f4;
        param_1[2] = local_100;
        param_1[3] = local_fc;
        param_1[4] = local_f8;
        param_1[5] = local_f4;
        *param_1 = 1;
        goto LAB_00f63094;
      }
      local_58 = (uint *)*puVar33;
      local_54 = (uint *)puVar33[1];
      puStack_50 = (uint *)puVar33[2];
      puStack_4c = (uint *)puVar33[3];
      if (uVar35 == local_a0) {
        FUN_00f6b61c(&local_a0);
        iVar5 = local_9c;
      }
      puVar26 = (undefined4 *)(iVar5 + uVar35 * 0x10);
      *puVar26 = local_58;
      local_98 = uVar35 + 1;
      puVar26[1] = local_54;
      puVar26[2] = puStack_50;
      puVar26[3] = puStack_4c;
      puVar17 = puStack_50;
    } while (uVar35 != uVar23);
  }
  uVar8 = 0;
  if ((0xfffffff < uVar32) || (puVar7 = (uint *)(uVar32 * 0x10), (uint *)0x7ffffff8 < puVar7)) {
LAB_00f62ce4:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar8,puVar7);
  }
  if (puVar7 == (uint *)0x0) {
    iVar9 = 8;
    uVar32 = 0;
  }
  else {
    iVar9 = thunk_FUN_016d4a50(puVar7,uVar23,puVar17);
    if (iVar9 == 0) {
      uVar8 = 8;
      goto LAB_00f62ce4;
    }
  }
  local_8c = 0;
  uVar23 = uVar34 + 4;
  local_94 = uVar32;
  local_90 = iVar9;
  if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("chunk size must be non-zero",0x37,&DAT_0187fc3c);
  }
  FUN_0184606c(iVar28,uVar23);
  uVar32 = iVar28 - extraout_r1;
  if (uVar23 <= uVar32) {
    if (0xfffffffb < uVar34) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar34,uVar23,&DAT_0187fc4c);
    }
    iVar28 = 0;
    uVar35 = 0;
    do {
      if (cVar19 == '\0') {
        if (uVar34 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,4,uVar34,&DAT_0187fc1c);
        }
        uVar12 = *local_120;
        uVar18 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18;
        uVar12 = (int)uVar18 >> 0x1f;
      }
      else {
        if (uVar34 != 8) {
          uVar8 = 0x11;
          pcVar11 = "too short for i64";
          puVar16 = (undefined1 *)0x3b9aca03;
          goto LAB_00f6306c;
        }
        uVar12 = *local_120;
        uVar18 = local_120[1];
        uVar12 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
                 uVar12 >> 0x18;
        uVar18 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                 uVar18 >> 0x18;
      }
      uVar24 = *(uint *)((int)local_120 + uVar34);
      if (uVar35 == local_94) {
        FUN_00f6b5bc(&local_94);
        iVar9 = local_90;
      }
      uVar32 = uVar32 - uVar23;
      local_120 = (uint *)((int)local_120 + uVar23);
      puVar17 = (uint *)(iVar9 + iVar28);
      *puVar17 = uVar18;
      iVar28 = iVar28 + 0x10;
      puVar17[1] = uVar12;
      iVar5 = uVar35 * 0x10;
      uVar35 = uVar35 + 1;
      *(uint *)(iVar9 + iVar5 + 8) =
           uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
      local_8c = uVar35;
    } while (uVar23 <= uVar32);
  }
  if (local_124 == 0) {
LAB_00f62e08:
    if (iVar14 == 0) {
LAB_00f62f24:
      local_5b = '\x03';
LAB_00f62f28:
      FUN_00f67b34(param_1,&local_ac,&local_a0,&local_94,&local_88);
      return;
    }
    FUN_00fab1e0(&local_108,iVar14,iVar13);
    if (local_108 == (uint *)0x0) {
      if (((local_100 != (uint *)0x0) && ((char)*local_104 == '\n')) &&
         (((char *)((int)local_104 + (int)local_100))[-1] == '\n')) {
        uVar39 = FUN_00f6ad2c();
        iVar14 = (int)((ulonglong)uVar39 >> 0x20);
        pcVar11 = (char *)uVar39;
        if (iVar14 == 0) {
          iVar14 = FUN_00f637b4(pcVar11,0);
          if (iVar14 == 0) goto LAB_00f62f24;
        }
        else if ((*pcVar11 != ':') && (iVar13 = FUN_00f637b4(pcVar11,iVar14), iVar13 == 0)) {
          FUN_00f65be8(&local_108,pcVar11,iVar14,cVar19 == '\x02');
          if (local_dc._1_1_ != '\x03') {
            local_58 = local_108;
            local_54 = local_104;
            puStack_50 = local_100;
            puStack_4c = local_fc;
            puStack_48 = local_f8;
            local_44 = local_f4;
            iStack_40 = local_f0;
            puStack_3c = local_ec;
            puStack_38 = local_e8;
            iStack_34 = local_e4;
            pbStack_30 = local_e0;
            local_2c = (undefined1)local_dc;
            local_88 = local_108;
            puStack_84 = local_104;
            puStack_80 = local_100;
            puStack_7c = local_fc;
            puStack_78 = local_f8;
            local_74 = local_f4;
            iStack_70 = local_f0;
            puStack_6c = local_ec;
            puStack_68 = local_e8;
            iStack_64 = local_e4;
            pbStack_60 = local_e0;
            local_5c = (undefined1)local_dc;
            local_5a = local_dc._2_2_;
            local_5b = local_dc._1_1_;
            goto LAB_00f62f28;
          }
          local_58 = local_108;
          local_54 = local_104;
          puStack_50 = local_100;
          puStack_4c = local_fc;
          param_1[2] = local_108;
          param_1[3] = local_104;
          param_1[4] = local_100;
          param_1[5] = local_fc;
          goto LAB_00f62e4c;
        }
      }
      puVar16 = &DAT_3b9aca04;
      uVar8 = 0xe;
      pcVar11 = "invalid footer";
      goto LAB_00f6306c;
    }
    param_1[2] = local_104;
    param_1[3] = local_100;
    param_1[4] = 0x3b9aca0f;
LAB_00f62e4c:
    *param_1 = 1;
  }
  else {
    pbVar15 = pbVar10 + iVar30;
    pcVar11 = local_140;
    do {
      local_124 = local_124 - 1;
      bVar21 = 1;
      pcVar27 = (char *)0x0;
      if (pbVar10 == (byte *)0x0) {
        pbVar10 = (byte *)0x0;
        if (pcVar11 != (char *)0x0) goto LAB_00f62d6c;
LAB_00f62de0:
        bVar37 = false;
      }
      else {
        bVar37 = pbVar10 != pbVar15;
        pbVar29 = pbVar10;
        if (bVar37) {
          pbVar29 = pbVar10 + 1;
          bVar21 = *pbVar10;
        }
        pbVar10 = (byte *)0x0;
        if (bVar37) {
          bVar21 = bVar21 == 0;
          pbVar10 = pbVar29;
        }
        if (pcVar11 == (char *)0x0) goto LAB_00f62de0;
LAB_00f62d6c:
        bVar37 = false;
        if (pcVar11 != local_140 + local_148) {
          pcVar27 = pcVar11 + 1;
          bVar37 = *pcVar11 == '\x01';
        }
      }
      bVar22 = 2;
      if ((bVar21 & bVar37) != 0) {
        bVar22 = 1;
      }
      if (local_124 == 0) {
        bVar22 = bVar21 & bVar37;
      }
      pcVar11 = pcVar27;
    } while (bVar22 == 2);
    if ((bVar22 & 1) == 0) goto LAB_00f62e08;
    puVar16 = &DAT_3b9aca04;
    uVar8 = 0x37;
    pcVar11 = "invalid couple of standard/wall and UT/local indicators";
LAB_00f6306c:
    *param_1 = 1;
    param_1[2] = pcVar11;
    param_1[3] = uVar8;
    param_1[4] = puVar16;
  }
  if (local_94 != 0) {
    thunk_FUN_016d3fb4(local_90);
  }
LAB_00f63094:
  if (local_a0 != 0) {
    thunk_FUN_016d3fb4(local_9c);
  }
  puVar17 = local_ac;
LAB_00f630ac:
  iVar14 = local_a8;
  if (puVar17 == (uint *)0x0) {
    return;
  }
  if (local_a8 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar34 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar32 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar9 = uVar32 - 0x10, uVar32 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar32 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar30 = *(int *)(iVar13 + 8) + 0x10;
  iVar28 = iVar9 * uVar34 + iVar9 + -4;
  iVar9 = iVar30 + iVar28;
  if (4 < uVar32) {
    if (uVar32 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar32 = *(uint *)(iVar9 + -4);
    if (uVar32 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar9 - iVar14) < uVar32) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar32) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar30 + iVar28) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar21 = *(byte *)(iVar13 + 0x14);
  uVar32 = 1 << uVar34;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar35 = *(uint *)(iVar13 + 0x10);
    uVar23 = *(uint *)(iVar13 + 0xc) | uVar35;
    if ((uVar32 & uVar23) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar35 == 0) || (uVar23 + uVar32 == (2 << (bVar21 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar34);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar33 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar33;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar33 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar32 + uVar35;
      return;
    }
    puVar17 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar23 = *puVar17;
      if (uVar35 != uVar23) goto LAB_016d409c;
      bVar37 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar37);
    *puVar17 = uVar32 + uVar35;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar35 == uVar23) {
      return;
    }
  } while( true );
}

