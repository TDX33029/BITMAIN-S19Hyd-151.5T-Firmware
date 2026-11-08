// FUN_00d4c828 @ 00d4c828 size=10816 calls_out=29 calls_in=1
// strings: origin | idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections | idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections | idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections | origin | origin

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00d4c828(int *param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  byte *pbVar5;
  short *psVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  byte *pbVar11;
  char *******pppppppcVar12;
  char *******pppppppcVar13;
  undefined1 *extraout_r1;
  undefined1 *extraout_r1_00;
  undefined1 *extraout_r1_01;
  undefined1 *extraout_r1_02;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  char ******ppppppcVar18;
  char *******pppppppcVar19;
  char ******ppppppcVar20;
  uint uVar21;
  char unaff_r5;
  char *******pppppppcVar22;
  char ******ppppppcVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  char ******ppppppcVar27;
  undefined4 uVar28;
  uint uVar29;
  char ******ppppppcVar30;
  uint uVar31;
  char *******pppppppcVar32;
  byte *pbVar33;
  byte *pbVar34;
  int iVar35;
  int unaff_r9;
  undefined1 *puVar36;
  int *piVar37;
  char ******unaff_r10;
  int iVar38;
  char ******unaff_r11;
  char *******pppppppcVar39;
  int iVar40;
  int iVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  uint in_fpscr;
  double unaff_d8;
  double unaff_d9;
  double unaff_d10;
  double unaff_d11;
  undefined8 uVar46;
  double dVar47;
  ulonglong uVar48;
  char *******local_34c;
  char ******local_340;
  char *******local_328;
  char *******local_324;
  char *******local_320;
  undefined1 *local_31c;
  char *******local_314;
  char *******local_310;
  char *******local_30c;
  char *******local_308;
  char *******local_304;
  char *******local_300;
  char ******local_2fc;
  undefined1 *local_2f4;
  char *******local_2e4;
  char *******local_2d0;
  char ******local_2c0;
  char ******ppppppcStack_2bc;
  char *******local_2b8;
  undefined1 *puStack_2b4;
  char *******pppppppcStack_2b0;
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  char ******local_290;
  undefined4 local_28c;
  int local_288;
  undefined4 local_284;
  char ******local_280;
  undefined4 local_27c;
  int local_278;
  undefined4 local_274;
  int local_270;
  int local_268;
  undefined4 uStack_263;
  undefined4 uStack_25f;
  char *******local_1c8;
  char *******local_1c4;
  undefined1 *local_1c0;
  undefined1 auStack_1bc [56];
  int local_184;
  int local_180;
  int local_17c;
  char *******local_170;
  char *******local_16c;
  undefined1 *local_168;
  char *******pppppppcStack_164;
  undefined1 *puStack_160;
  char *******pppppppcStack_15c;
  char ******ppppppcStack_158;
  char *******local_120;
  char *******local_11c;
  undefined1 *local_118;
  char *******local_114;
  undefined1 *local_110;
  char *******pppppppcStack_10c;
  char ******local_108;
  undefined4 local_104;
  undefined1 *local_100;
  char *******local_fc;
  char ******local_f8;
  undefined4 local_f4;
  undefined1 *local_f0;
  char *******local_ec;
  char *******local_e8;
  char local_c8 [4];
  int local_c4;
  byte *local_c0;
  char ******local_bc;
  byte *local_ac;
  byte *local_a8;
  int local_a4;
  byte *local_a0;
  char ******local_9c;
  char *******local_98;
  char ******local_94;
  char *******local_90;
  undefined1 *local_8c;
  char *******local_88;
  char *******local_84;
  char *******local_78;
  char *******local_74;
  undefined1 *local_70;
  char *******local_6c;
  undefined1 *puStack_68;
  char *******pppppppcStack_64;
  char ******ppppppcStack_60;
  int local_58 [2];
  int local_50;
  undefined1 uStack_49;
  
  iVar26 = *(int *)(param_2 + 0x18);
  psVar6 = *(short **)(param_2 + 0x1c);
  if (*(int *)(param_2 + 0x20) == 2) {
    bVar42 = false;
    if (*psVar6 == 0x3353) {
      unaff_r5 = '\0';
      goto joined_r0x00d4cc18;
    }
    if (*psVar6 == 0x3453) {
      unaff_r5 = '\x01';
      goto joined_r0x00d4cc18;
    }
    if (*psVar6 == 0x3853) {
      unaff_r5 = '\x02';
      goto joined_r0x00d4cc18;
    }
  }
  unaff_r9 = FUN_00c498dc(psVar6,*(int *)(param_2 + 0x20),&DAT_01877e40,3);
  bVar42 = true;
joined_r0x00d4cc18:
  if (iVar26 != 0) {
    thunk_FUN_016d3fb4(psVar6);
  }
  if (bVar42) {
    if (*param_2 != '\x06') {
      FUN_00d4fc54(param_2);
    }
    param_1[1] = 0;
    param_1[2] = unaff_r9;
    *param_1 = 4;
    return;
  }
  cVar2 = *param_2;
  if (unaff_r5 == '\0') {
    if (cVar2 != '\x05') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(cVar2) {
      case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        local_268 = CONCAT31(local_268._1_3_,0xd);
        iVar26 = FUN_0157cc00(&local_268,&DAT_01878140,&DAT_018ab990);
        *param_1 = 4;
        param_1[1] = 0;
        param_1[2] = iVar26;
        return;
      }
    }
    local_288 = *(int *)(param_2 + 4);
    local_284 = *(undefined4 *)(param_2 + 8);
    iVar26 = *(int *)(param_2 + 0xc);
    pppppppcVar19 = (char *******)0x0;
    local_270 = 0;
    if (local_288 != 0) {
      local_270 = iVar26;
    }
    local_290 = (char ******)(uint)(local_288 != 0);
    pppppppcVar22 = (char *******)&DAT_00000005;
    uVar7 = (uint)&local_120 | 1;
    puVar8 = (uint *)((uint)&local_170 | 4);
    puVar9 = (undefined4 *)((uint)&local_120 | 4);
    uVar14 = (uint)&local_2a8 | 1;
    local_2fc = (char ******)0x2;
    puVar36 = &DAT_3b9aca00;
    local_2a8 = CONCAT31(local_2a8._1_3_,6);
    local_27c = 0;
    local_304 = (char *******)0x0;
    local_28c = 0;
    local_2f4 = &DAT_3b9aca00;
    bVar43 = false;
    bVar42 = false;
    local_280 = local_290;
    local_278 = local_288;
    local_274 = local_284;
LAB_00d4ccfc:
    pppppppcVar32 = pppppppcVar22;
LAB_00d4cd04:
    FUN_00c3b8fc(&local_78,&local_290);
    pppppppcVar39 = &local_290;
    if (local_78 != (char *******)0x0) {
      pppppppcVar13 = local_78 + (int)local_70 * 6;
      pppppppcVar39 = (char *******)local_78[(int)local_70 * 3 + 0x43];
      unaff_r10 = local_78[(int)local_70 * 3 + 0x44];
      pppppppcVar32 = (char *******)local_78[(int)local_70 * 3 + 0x45];
      ppppppcVar18 = pppppppcVar13[1];
      ppppppcVar20 = pppppppcVar13[2];
      ppppppcVar23 = pppppppcVar13[3];
      ppppppcVar27 = pppppppcVar13[4];
      ppppppcVar30 = pppppppcVar13[5];
      *puVar9 = *pppppppcVar13;
      puVar9[1] = ppppppcVar18;
      puVar9[2] = ppppppcVar20;
      puVar9[3] = ppppppcVar23;
      puVar9[4] = ppppppcVar27;
      puVar9[5] = ppppppcVar30;
      local_170 = local_120;
      local_16c = local_11c;
      local_168 = local_118;
      pppppppcStack_164 = local_114;
      puStack_160 = local_110;
      pppppppcStack_15c = pppppppcStack_10c;
      ppppppcStack_158 = local_108;
    }
    if (local_78 == (char *******)0x0 || pppppppcVar39 == (char *******)&DAT_80000000) {
switchD_00d4ce2c_caseD_7:
      local_1c0 = local_31c;
      if (pppppppcVar22 == (char *******)&DAT_00000005 && pppppppcVar19 == (char *******)0x0) {
        local_11c = (char *******)&DAT_0157d360;
        local_120 = (char *******)&local_170;
        local_16c = (char *******)&DAT_0000000f;
        local_170 = (char *******)&DAT_003577e8;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
        *param_1 = 4;
        param_1[1] = 0;
        param_1[2] = iVar26;
        goto LAB_00d4e818;
      }
      if (bVar42) {
        if (bVar43) {
          if (local_2fc == (char ******)0x2) {
            local_2fc = (char ******)0x0;
          }
          if (local_2f4 == &DAT_3b9aca00) {
            local_11c = (char *******)&DAT_0157d360;
            local_120 = (char *******)&local_170;
            local_16c = (char *******)&DAT_00000006;
            local_170 = (char *******)0x409554;
            local_1c8 = pppppppcVar22;
            local_1c4 = pppppppcVar19;
            iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
          }
          else {
            if (puVar36 != &DAT_3b9aca00) {
              local_1c8 = pppppppcVar22;
              local_1c4 = pppppppcVar19;
              FUN_016dd1aa(param_1 + 4,&local_1c8,0x58);
              param_1[0x1a] = (int)local_324;
              param_1[0x1b] = (int)local_328;
              param_1[0x1c] = (int)local_2f4;
              param_1[0x1d] = (int)local_2b8;
              param_1[0x1e] = (int)puStack_2b4;
              param_1[0x1f] = (int)pppppppcStack_2b0;
              param_1[0x20] = (int)local_320;
              param_1[0x21] = (int)local_304;
              *param_1 = (int)local_2fc;
              param_1[1] = 0;
              *(double *)(param_1 + 0x24) = unaff_d9;
              *(double *)(param_1 + 0x26) = unaff_d8;
              param_1[0x22] = (int)puVar36;
              *(double *)(param_1 + 2) = unaff_d11;
              FUN_016dd1aa(&local_268,param_1,0xa0);
              if (local_270 != 0) {
                iVar26 = FUN_00f2c2f0(iVar26,&DAT_01887430,&DAT_018ab990);
                param_1[2] = iVar26;
                *param_1 = 4;
                param_1[1] = 0;
                FUN_00c2db98(&local_268);
              }
              FUN_00c494c8(&local_290);
              goto LAB_00d4e8f4;
            }
            local_11c = (char *******)&DAT_0157d360;
            local_120 = (char *******)&local_170;
            local_16c = (char *******)&DAT_0000000f;
            local_170 = (char *******)0x359fde;
            local_1c8 = pppppppcVar22;
            local_1c4 = pppppppcVar19;
            iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
          }
        }
        else {
          local_11c = (char *******)&DAT_0157d360;
          local_120 = (char *******)&local_170;
          local_16c = (char *******)&DAT_0000000b;
          local_170 = (char *******)&DAT_00357804;
          local_1c8 = pppppppcVar22;
          local_1c4 = pppppppcVar19;
          iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
        }
      }
      else {
        local_11c = (char *******)&DAT_0157d360;
        local_120 = (char *******)&local_170;
        local_16c = (char *******)&DAT_0000000d;
        local_170 = (char *******)&DAT_003577f7;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
      }
      iVar10 = 0;
      *param_1 = 4;
      param_1[1] = 0;
      param_1[2] = iVar26;
      while (iVar10 != local_17c) {
        iVar26 = local_180 + iVar10 * 0x48;
        iVar35 = *(int *)(iVar26 + 0x3c);
        puVar9 = (undefined4 *)(iVar35 + 0x10);
        for (iVar41 = *(int *)(iVar26 + 0x40); iVar41 != 0; iVar41 = iVar41 + -1) {
          if (puVar9[-4] != 0) {
            thunk_FUN_016d3fb4(puVar9[-3]);
          }
          if (puVar9[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar9);
          }
          puVar9 = puVar9 + 6;
        }
        iVar10 = iVar10 + 1;
        if (*(int *)(iVar26 + 0x38) != 0) {
          thunk_FUN_016d3fb4(iVar35);
        }
      }
      if (local_184 != 0) goto LAB_00d4e814;
      goto LAB_00d4e818;
    }
    if ((char)local_2a8 != '\x06') {
      FUN_00d4fc54(&local_2a8);
    }
    local_2a8 = *puVar8;
    uStack_2a4 = puVar8[1];
    uStack_2a0 = puVar8[2];
    uStack_29c = puVar8[3];
    uStack_298 = puVar8[4];
    uStack_294 = puVar8[5];
    FUN_00d654b8(&local_120,unaff_r10,pppppppcVar32);
    if (pppppppcVar39 != (char *******)0x0) {
      thunk_FUN_016d3fb4(unaff_r10);
    }
    pppppppcVar39 = local_11c;
    if ((char)local_120 != '\0') goto LAB_00d4ea68;
    cVar2 = (char)local_2a8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((uint)local_120 >> 8 & 0xff) {
    case 0:
      goto switchD_00d4ce2c_caseD_0;
    case 1:
      if (bVar42) {
        local_1c0 = local_31c;
        local_11c = (char *******)&DAT_0157d360;
        local_120 = (char *******)&local_170;
        local_16c = (char *******)&DAT_0000000d;
        local_170 = (char *******)&DAT_003577f7;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_120);
        goto LAB_00d4ea68;
      }
      bVar42 = (char)local_2a8 == '\x06';
      local_2a8 = CONCAT31(local_2a8._1_3_,6);
      if (bVar42) {
        local_1c0 = local_31c;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
        goto LAB_00d4ea68;
      }
      local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
      FUN_016dd1aa(uVar7,uVar14,0x17);
      uVar48 = FUN_00c64b70(&local_120);
      pppppppcVar39 = (char *******)(uVar48 >> 0x20);
      if ((uVar48 & 1) != 0) goto LAB_00d4ea68;
      bVar42 = true;
      dVar47 = (double)VectorUnsignedToFloat(pppppppcVar39,(byte)(in_fpscr >> 0x16) & 3);
      unaff_d9 = dVar47 / 1000.0;
      pppppppcVar32 = pppppppcVar22;
      goto LAB_00d4cd04;
    case 2:
      if (bVar43) {
        local_1c0 = local_31c;
        local_11c = (char *******)&DAT_0157d360;
        local_120 = (char *******)&local_170;
        local_16c = (char *******)&DAT_0000000b;
        local_170 = (char *******)&DAT_00357804;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_120);
        goto LAB_00d4ea68;
      }
      bVar43 = (char)local_2a8 == '\x06';
      local_2a8 = CONCAT31(local_2a8._1_3_,6);
      if (bVar43) {
        local_1c0 = local_31c;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
        goto LAB_00d4ea68;
      }
      local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
      FUN_016dd1aa(uVar7,uVar14,0x17);
      uVar48 = FUN_00c64b70(&local_120);
      pppppppcVar39 = (char *******)(uVar48 >> 0x20);
      if ((uVar48 & 1) != 0) goto LAB_00d4ea68;
      bVar43 = true;
      dVar47 = (double)VectorUnsignedToFloat(pppppppcVar39,(byte)(in_fpscr >> 0x16) & 3);
      unaff_d8 = dVar47 / 1000.0;
      pppppppcVar32 = pppppppcVar22;
      goto LAB_00d4cd04;
    case 3:
      if (local_2fc != (char ******)0x2) {
        local_1c0 = local_31c;
        local_11c = (char *******)&DAT_0157d360;
        local_120 = (char *******)&local_170;
        local_16c = (char *******)&DAT_0000000f;
        local_170 = (char *******)&DAT_0035780f;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_120);
        goto LAB_00d4ea68;
      }
      uVar16 = local_2a8 & 0xff;
      local_2a8 = CONCAT31(local_2a8._1_3_,6);
      if (uVar16 == 6) {
        local_1c0 = local_31c;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
        goto LAB_00d4ea68;
      }
      local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
      FUN_016dd1aa(uVar7,uVar14,0x17);
      if (uVar16 == 0) {
        local_2fc = (char ******)0x0;
        FUN_00c01f94(&local_120);
        pppppppcVar32 = pppppppcVar22;
      }
      else {
        uVar48 = FUN_00c64b70(&local_120);
        pppppppcVar39 = (char *******)(uVar48 >> 0x20);
        if ((uVar48 & 1) != 0) goto LAB_00d4ea68;
        dVar47 = (double)VectorUnsignedToFloat(pppppppcVar39,(byte)(in_fpscr >> 0x16) & 3);
        local_2fc = (char ******)0x1;
        unaff_d11 = dVar47 / 1000.0;
        pppppppcVar32 = pppppppcVar22;
      }
      goto LAB_00d4cd04;
    case 4:
      if (local_2f4 != &DAT_3b9aca00) {
        local_1c0 = local_31c;
        local_11c = (char *******)&DAT_0157d360;
        local_120 = (char *******)&local_170;
        local_16c = (char *******)&DAT_00000006;
        local_170 = (char *******)0x409554;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_120);
        goto LAB_00d4ea68;
      }
      bVar44 = (char)local_2a8 == '\x06';
      local_2a8 = CONCAT31(local_2a8._1_3_,6);
      if (bVar44) {
        local_1c0 = local_31c;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
        goto LAB_00d4ea68;
      }
      local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
      FUN_016dd1aa(uVar7,uVar14,0x17);
      FUN_00c65aa8(&local_170,&local_120);
      local_2f4 = local_168;
      pppppppcVar39 = local_170;
      if (local_168 == &DAT_3b9aca00) goto LAB_00d4ea68;
      local_324 = local_170;
      local_2b8 = pppppppcStack_164;
      puStack_2b4 = puStack_160;
      pppppppcStack_2b0 = pppppppcStack_15c;
      local_328 = local_16c;
      pppppppcVar32 = pppppppcVar22;
      goto LAB_00d4cd04;
    case 5:
      if (puVar36 != &DAT_3b9aca00) {
        local_1c0 = local_31c;
        local_11c = (char *******)&DAT_0157d360;
        local_120 = (char *******)&local_170;
        local_16c = (char *******)&DAT_0000000f;
        local_170 = (char *******)0x359fde;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_120);
        goto LAB_00d4ea68;
      }
      bVar44 = (char)local_2a8 == '\x06';
      local_2a8 = CONCAT31(local_2a8._1_3_,6);
      if (bVar44) {
        local_1c0 = local_31c;
        local_1c8 = pppppppcVar22;
        local_1c4 = pppppppcVar19;
        pppppppcVar39 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
        goto LAB_00d4ea68;
      }
      local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
      FUN_016dd1aa(uVar7,uVar14,0x17);
      FUN_00c4b958(&local_170,&local_120);
      pppppppcVar39 = local_170;
      if (local_168 == &DAT_3b9aca00) goto LAB_00d4ea68;
      local_320 = local_170;
      local_304 = local_16c;
      puVar36 = local_168;
      pppppppcVar32 = pppppppcVar22;
      goto LAB_00d4cd04;
    case 6:
      goto switchD_00d4ce2c_caseD_6;
    case 7:
      goto switchD_00d4ce2c_caseD_7;
    default:
      local_2a8 = CONCAT31(local_2a8._1_3_,6);
      if (cVar2 != '\x06') goto code_r0x00d4cdfc;
      local_1c0 = local_31c;
      local_1c8 = pppppppcVar22;
      local_1c4 = pppppppcVar19;
      pppppppcVar39 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
      goto LAB_00d4ea68;
    }
  }
  if (unaff_r5 == '\x01') {
    if (cVar2 == '\x05') {
      local_288 = *(int *)(param_2 + 4);
      local_284 = *(undefined4 *)(param_2 + 8);
      iVar26 = *(int *)(param_2 + 0xc);
      pppppppcVar19 = (char *******)0x0;
      local_270 = 0;
      if (local_288 != 0) {
        local_270 = iVar26;
      }
      local_290 = (char ******)(uint)(local_288 != 0);
      uVar7 = (uint)&local_120 | 1;
      puVar8 = (uint *)((uint)&local_170 | 4);
      puVar9 = (undefined4 *)((uint)&local_120 | 4);
      pppppppcVar22 = (char *******)&DAT_00000005;
      puVar36 = &DAT_3b9aca00;
      local_2a8 = CONCAT31(local_2a8._1_3_,6);
      local_27c = 0;
      local_28c = 0;
      local_280 = local_290;
      local_278 = local_288;
      local_274 = local_284;
      do {
LAB_00d4c9c8:
        FUN_00c3b8fc(&local_78,&local_290);
        pppppppcVar32 = &local_290;
        if (local_78 != (char *******)0x0) {
          pppppppcVar39 = local_78 + (int)local_70 * 6;
          unaff_r10 = local_78[(int)local_70 * 3 + 0x43];
          unaff_r11 = local_78[(int)local_70 * 3 + 0x44];
          pppppppcVar32 = (char *******)local_78[(int)local_70 * 3 + 0x45];
          ppppppcVar18 = pppppppcVar39[1];
          ppppppcVar20 = pppppppcVar39[2];
          ppppppcVar23 = pppppppcVar39[3];
          ppppppcVar27 = pppppppcVar39[4];
          ppppppcVar30 = pppppppcVar39[5];
          *puVar9 = *pppppppcVar39;
          puVar9[1] = ppppppcVar18;
          puVar9[2] = ppppppcVar20;
          puVar9[3] = ppppppcVar23;
          puVar9[4] = ppppppcVar27;
          puVar9[5] = ppppppcVar30;
          local_170 = local_120;
          local_16c = local_11c;
          local_168 = local_118;
          pppppppcStack_164 = local_114;
          puStack_160 = local_110;
          pppppppcStack_15c = pppppppcStack_10c;
          ppppppcStack_158 = local_108;
        }
        if (local_78 == (char *******)0x0 || unaff_r10 == (char ******)0x80000000) {
LAB_00d4e06c:
          local_1c0 = (undefined1 *)local_2e4;
          if (pppppppcVar22 != (char *******)&DAT_00000005 || pppppppcVar19 != (char *******)0x0) {
            if (puVar36 != &DAT_3b9aca00) {
              param_1[0x1b] = (int)local_90;
              param_1[0x1c] = (int)local_8c;
              param_1[0x1d] = (int)local_88;
              local_1c8 = pppppppcVar22;
              local_1c4 = pppppppcVar19;
              FUN_016dd1aa(param_1 + 2,&local_1c8,0x58);
              *param_1 = 2;
              param_1[1] = 0;
              param_1[0x18] = (int)local_300;
              param_1[0x19] = (int)local_304;
              param_1[0x1a] = (int)puVar36;
              FUN_016dd1aa(&local_268,param_1,0xa0);
              if (local_270 != 0) {
                iVar26 = FUN_00f2c2f0(iVar26,&DAT_01887430,&DAT_018ab990);
                param_1[2] = iVar26;
                *param_1 = 4;
                param_1[1] = 0;
                FUN_00c2db98(&local_268);
              }
              while( true ) {
                FUN_00c3b8fc(&local_268,&local_290);
                iVar26 = local_268;
                if (local_268 == 0) break;
                iVar10 = CONCAT31((undefined3)uStack_25f,uStack_263._3_1_);
                iVar35 = local_268 + iVar10 * 0xc;
                local_120 = &local_290;
                if (*(int *)(iVar35 + 0x10c) != 0) {
                  thunk_FUN_016d3fb4(*(undefined4 *)(iVar35 + 0x110));
                }
                FUN_00c436d0(iVar26 + iVar10 * 0x18);
              }
              goto LAB_00d4e8f4;
            }
            local_16c = (char *******)&DAT_00000006;
            local_11c = (char *******)&DAT_0157d360;
            local_120 = (char *******)&local_170;
            local_170 = (char *******)0x409554;
            local_1c8 = pppppppcVar22;
            local_1c4 = pppppppcVar19;
            iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
            iVar10 = 0;
            *param_1 = 4;
            param_1[1] = 0;
            param_1[2] = iVar26;
            while (iVar10 != local_17c) {
              iVar26 = local_180 + iVar10 * 0x48;
              iVar35 = *(int *)(iVar26 + 0x3c);
              puVar9 = (undefined4 *)(iVar35 + 0x10);
              for (iVar41 = *(int *)(iVar26 + 0x40); iVar41 != 0; iVar41 = iVar41 + -1) {
                if (puVar9[-4] != 0) {
                  thunk_FUN_016d3fb4(puVar9[-3]);
                }
                if (puVar9[-1] != 0) {
                  thunk_FUN_016d3fb4(*puVar9);
                }
                puVar9 = puVar9 + 6;
              }
              iVar10 = iVar10 + 1;
              if (*(int *)(iVar26 + 0x38) != 0) {
                thunk_FUN_016d3fb4(iVar35);
              }
            }
            goto joined_r0x00d4e478;
          }
          local_16c = (char *******)&DAT_00000013;
          local_11c = (char *******)&DAT_0157d360;
          local_120 = (char *******)&local_170;
          local_170 = (char *******)&DAT_00357820;
          local_1c8 = pppppppcVar22;
          local_1c4 = pppppppcVar19;
          iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
          *param_1 = 4;
          param_1[1] = 0;
          param_1[2] = iVar26;
          goto LAB_00d4e484;
        }
        if ((char)local_2a8 != '\x06') {
          FUN_00d4fc54(&local_2a8);
        }
        local_2a8 = *puVar8;
        uStack_2a4 = puVar8[1];
        uStack_2a0 = puVar8[2];
        uStack_29c = puVar8[3];
        uStack_298 = puVar8[4];
        uStack_294 = puVar8[5];
        if (pppppppcVar32 == (char *******)&DAT_00000006) {
          iVar10 = thunk_FUN_016dd50a(unaff_r11,"origin",6);
          if (iVar10 != 0) goto LAB_00d4caa8;
          iVar10 = 1;
        }
        else if ((pppppppcVar32 == (char *******)&DAT_00000013) &&
                (iVar10 = thunk_FUN_016dd50a(unaff_r11,&DAT_00357820,0x13), iVar10 == 0)) {
          iVar10 = 0;
        }
        else {
LAB_00d4caa8:
          iVar10 = 2;
        }
        if (unaff_r10 != (char ******)0x0) {
          thunk_FUN_016d3fb4(unaff_r11);
        }
        cVar2 = (char)local_2a8;
        if (iVar10 == 2) {
          local_2a8 = CONCAT31(local_2a8._1_3_,6);
          if (cVar2 != '\x06') goto code_r0x00d4cad8;
          local_1c0 = (undefined1 *)local_2e4;
          local_1c8 = pppppppcVar22;
          local_1c4 = pppppppcVar19;
          pppppppcVar32 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
          goto LAB_00d4e96c;
        }
        if (iVar10 != 0) {
          if (iVar10 != 1) goto LAB_00d4e06c;
          if (puVar36 != &DAT_3b9aca00) {
            local_1c0 = (undefined1 *)local_2e4;
            local_16c = (char *******)&DAT_00000006;
            local_11c = (char *******)&DAT_0157d360;
            local_120 = (char *******)&local_170;
            local_170 = (char *******)0x409554;
            local_1c8 = pppppppcVar22;
            local_1c4 = pppppppcVar19;
            pppppppcVar32 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_120);
            goto LAB_00d4e96c;
          }
          bVar42 = (char)local_2a8 == '\x06';
          local_2a8 = CONCAT31(local_2a8._1_3_,6);
          if (bVar42) {
            local_1c0 = (undefined1 *)local_2e4;
            local_1c8 = pppppppcVar22;
            local_1c4 = pppppppcVar19;
            pppppppcVar32 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
            goto LAB_00d4e96c;
          }
          local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
          FUN_016dd1aa(uVar7,(uint)&local_2a8 | 1,0x17);
          FUN_00c65aa8(&local_170,&local_120);
          pppppppcVar32 = local_170;
          if (local_168 == &DAT_3b9aca00) goto LAB_00d4e96c;
          local_300 = local_170;
          local_90 = pppppppcStack_164;
          local_8c = puStack_160;
          local_88 = pppppppcStack_15c;
          local_304 = local_16c;
          puVar36 = local_168;
          goto LAB_00d4c9c8;
        }
        if (pppppppcVar22 != (char *******)&DAT_00000005 || pppppppcVar19 != (char *******)0x0) {
          local_1c0 = (undefined1 *)local_2e4;
          local_16c = (char *******)&DAT_00000013;
          local_11c = (char *******)&DAT_0157d360;
          local_120 = (char *******)&local_170;
          local_170 = (char *******)&DAT_00357820;
          local_1c8 = pppppppcVar22;
          local_1c4 = pppppppcVar19;
          pppppppcVar32 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_120);
LAB_00d4e96c:
          *param_1 = 4;
          param_1[1] = 0;
          param_1[2] = (int)pppppppcVar32;
          if (pppppppcVar22 != (char *******)&DAT_00000005 || pppppppcVar19 != (char *******)0x0) {
            iVar26 = 0;
            while (iVar26 != local_17c) {
              iVar10 = local_180 + iVar26 * 0x48;
              iVar35 = *(int *)(iVar10 + 0x3c);
              puVar9 = (undefined4 *)(iVar35 + 0x10);
              for (iVar41 = *(int *)(iVar10 + 0x40); iVar41 != 0; iVar41 = iVar41 + -1) {
                if (puVar9[-4] != 0) {
                  thunk_FUN_016d3fb4(puVar9[-3]);
                }
                if (puVar9[-1] != 0) {
                  thunk_FUN_016d3fb4(*puVar9);
                }
                puVar9 = puVar9 + 6;
              }
              iVar26 = iVar26 + 1;
              if (*(int *)(iVar10 + 0x38) != 0) {
                thunk_FUN_016d3fb4(iVar35);
              }
            }
joined_r0x00d4e478:
            if (local_184 != 0) {
              thunk_FUN_016d3fb4(local_180);
            }
          }
          goto LAB_00d4e484;
        }
        FUN_00d65744(&local_120,&local_2a8);
        pppppppcVar19 = local_11c;
        pppppppcVar22 = local_120;
        local_2e4 = (char *******)local_118;
        if (local_120 == (char *******)&DAT_00000005 && local_11c == (char *******)0x0)
        goto LAB_00d4ed44;
        FUN_016dd1aa(&local_170,&local_114,0x4c);
        FUN_016dd1aa(auStack_1bc,&local_170,0x4c);
      } while( true );
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(cVar2) {
    case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (cVar2 == '\x05') {
      local_288 = *(int *)(param_2 + 4);
      local_284 = *(undefined4 *)(param_2 + 8);
      iVar26 = *(int *)(param_2 + 0xc);
      local_270 = 0;
      if (local_288 != 0) {
        local_270 = iVar26;
      }
      local_290 = (char ******)(uint)(local_288 != 0);
      local_1c8 = (char *******)&DAT_00000005;
      uVar7 = (uint)&local_120 | 1;
      local_27c = 0;
      local_28c = 0;
      local_1c4 = (char *******)0x0;
      uVar14 = (uint)&local_170 | 1;
      puVar8 = (uint *)((uint)&local_170 | 4);
      local_2a8 = CONCAT31(local_2a8._1_3_,6);
      puVar9 = (undefined4 *)((uint)&local_120 | 4);
      local_2fc = (char ******)0x80000000;
      puVar15 = (undefined4 *)((uint)&local_78 | 4);
      local_280 = local_290;
      local_278 = local_288;
      local_274 = local_284;
LAB_00d4d1fc:
      local_2d0 = local_1c4;
      local_2e4 = (char *******)local_1c0;
      pppppppcVar19 = local_1c8;
      do {
        FUN_00c3b8fc(&local_78,&local_290);
        pppppppcVar22 = &local_290;
        if (local_78 != (char *******)0x0) {
          pppppppcVar32 = local_78 + (int)local_70 * 6;
          unaff_r11 = local_78[(int)local_70 * 3 + 0x43];
          pppppppcVar22 = (char *******)local_78[(int)local_70 * 3 + 0x44];
          unaff_r10 = local_78[(int)local_70 * 3 + 0x45];
          ppppppcVar18 = pppppppcVar32[1];
          ppppppcVar20 = pppppppcVar32[2];
          ppppppcVar23 = pppppppcVar32[3];
          ppppppcVar27 = pppppppcVar32[4];
          ppppppcVar30 = pppppppcVar32[5];
          *puVar9 = *pppppppcVar32;
          puVar9[1] = ppppppcVar18;
          puVar9[2] = ppppppcVar20;
          puVar9[3] = ppppppcVar23;
          puVar9[4] = ppppppcVar27;
          puVar9[5] = ppppppcVar30;
          local_170 = local_120;
          local_16c = local_11c;
          local_168 = local_118;
          pppppppcStack_164 = local_114;
          puStack_160 = local_110;
          pppppppcStack_15c = pppppppcStack_10c;
          ppppppcStack_158 = local_108;
        }
        if (local_78 == (char *******)0x0 || unaff_r11 == (char ******)0x80000000) {
switchD_00d4d308_caseD_3:
          iVar41 = local_17c;
          iVar35 = local_180;
          iVar10 = local_184;
          local_1c0 = (undefined1 *)local_2e4;
          local_1c4 = local_2d0;
          if (pppppppcVar19 != (char *******)&DAT_00000005 || local_2d0 != (char *******)0x0) {
            if (local_2fc != (char ******)0x80000000) {
              local_1c8 = pppppppcVar19;
              FUN_016dd1aa(param_1 + 2,&local_1c8,0x58);
              *param_1 = 3;
              param_1[1] = 0;
              param_1[0x19] = (int)local_308;
              param_1[0x1a] = (int)local_340;
              param_1[0x18] = (int)local_2fc;
              FUN_016dd1aa(&local_268,param_1,0xa0);
              if (local_270 != 0) {
                iVar26 = FUN_00f2c2f0(iVar26,&DAT_01887430,&DAT_018ab990);
                param_1[2] = iVar26;
                *param_1 = 4;
                param_1[1] = 0;
                FUN_00c2db98(&local_268);
              }
              while( true ) {
                FUN_00c3b8fc(&local_268,&local_290);
                iVar26 = local_268;
                if (local_268 == 0) break;
                iVar10 = CONCAT31((undefined3)uStack_25f,uStack_263._3_1_);
                iVar35 = local_268 + iVar10 * 0xc;
                local_120 = &local_290;
                if (*(int *)(iVar35 + 0x10c) != 0) {
                  thunk_FUN_016d3fb4(*(undefined4 *)(iVar35 + 0x110));
                }
                FUN_00c436d0(iVar26 + iVar10 * 0x18);
              }
              goto LAB_00d4e8f4;
            }
            local_16c = (char *******)&DAT_00000008;
            local_170 = (char *******)&DAT_0056aa60;
            local_11c = (char *******)&DAT_0157d360;
            local_120 = (char *******)&local_170;
            local_1c8 = pppppppcVar19;
            iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
            iVar25 = 0;
            puVar36 = &DAT_00000004;
            *param_1 = 4;
            param_1[1] = 0;
            param_1[2] = iVar26;
            while (iVar25 != iVar41) {
              iVar26 = iVar35 + iVar25 * 0x48;
              iVar38 = *(int *)(iVar26 + 0x3c);
              puVar9 = (undefined4 *)(iVar38 + 0x10);
              for (iVar40 = *(int *)(iVar26 + 0x40); iVar40 != 0; iVar40 = iVar40 + -1) {
                if (puVar9[-4] != 0) {
                  thunk_FUN_016d3fb4(puVar9[-3]);
                  puVar36 = extraout_r1;
                }
                if (puVar9[-1] != 0) {
                  thunk_FUN_016d3fb4(*puVar9);
                  puVar36 = extraout_r1_00;
                }
                puVar9 = puVar9 + 6;
              }
              iVar25 = iVar25 + 1;
              if (*(int *)(iVar26 + 0x38) != 0) {
                thunk_FUN_016d3fb4(iVar38);
                puVar36 = extraout_r1_01;
              }
            }
            uVar4 = false;
            if (iVar10 != 0) {
              thunk_FUN_016d3fb4(iVar35);
              puVar36 = extraout_r1_02;
            }
            uVar48 = CONCAT44(puVar36,local_308);
            goto LAB_00d4e5a0;
          }
          local_16c = (char *******)&DAT_00000013;
          local_170 = (char *******)&DAT_00357820;
          local_11c = (char *******)&DAT_0157d360;
          local_120 = (char *******)&local_170;
          local_1c8 = pppppppcVar19;
          iVar26 = FUN_00f56780(&DAT_0057a25d,&local_120);
LAB_00d4e040:
          puVar36 = (undefined1 *)0x0;
          uVar48 = ZEXT48(local_308);
          *param_1 = 4;
          uVar4 = true;
          param_1[1] = 0;
          param_1[2] = iVar26;
          if (local_2fc == (char ******)0x80000000) goto LAB_00d4e5a0;
LAB_00d4e594:
          uVar48 = CONCAT44(puVar36,local_308);
          goto joined_r0x00d4f4d0;
        }
        if ((char)local_2a8 != '\x06') {
          FUN_00d4fc54(&local_2a8);
        }
        local_2a8 = *puVar8;
        uStack_2a4 = puVar8[1];
        uStack_2a0 = puVar8[2];
        uStack_29c = puVar8[3];
        uStack_298 = puVar8[4];
        uStack_294 = puVar8[5];
        if (unaff_r10 == (char ******)0x8) {
          iVar10 = thunk_FUN_016dd50a(pppppppcVar22,&DAT_0056aa60,8);
          if (iVar10 != 0) goto LAB_00d4d2e8;
          uVar28 = 1;
        }
        else if ((unaff_r10 == (char ******)0x13) &&
                (iVar10 = thunk_FUN_016dd50a(pppppppcVar22,&DAT_00357820,0x13), iVar10 == 0)) {
          uVar28 = 0;
        }
        else {
LAB_00d4d2e8:
          uVar28 = 2;
        }
        if (unaff_r11 != (char ******)0x0) {
          thunk_FUN_016d3fb4(pppppppcVar22);
        }
        cVar2 = (char)local_2a8;
        switch(uVar28) {
        case 0:
          if (pppppppcVar19 != (char *******)&DAT_00000005 || local_2d0 != (char *******)0x0) {
            local_1c0 = (undefined1 *)local_2e4;
            local_1c4 = local_2d0;
            local_16c = (char *******)&DAT_00000013;
            local_170 = (char *******)&DAT_00357820;
            local_11c = (char *******)&DAT_0157d360;
            local_120 = (char *******)&local_170;
            local_1c8 = pppppppcVar19;
            iVar26 = FUN_00f56780(&DAT_00582dbd,&local_120);
            goto LAB_00d4e040;
          }
          FUN_00d65744(&local_120,&local_2a8);
          puVar36 = local_118;
          pppppppcVar32 = local_11c;
          pppppppcVar22 = local_120;
          if (local_120 == (char *******)&DAT_00000005 && local_11c == (char *******)0x0) {
            puVar36 = &DAT_00000004;
            local_1c0 = (undefined1 *)local_2e4;
            local_1c4 = local_2d0;
            *param_1 = 4;
            param_1[1] = 0;
            param_1[2] = (int)local_118;
            local_1c8 = pppppppcVar19;
LAB_00d4eb9c:
            uVar48 = CONCAT44(puVar36,local_308);
            uVar4 = true;
            if (local_2fc != (char ******)0x80000000) goto LAB_00d4e594;
            goto LAB_00d4e5a0;
          }
          FUN_016dd1aa(&local_170,&local_114,0x4c);
          FUN_016dd1aa(auStack_1bc,&local_170,0x4c);
          local_2e4 = (char *******)puVar36;
          local_2d0 = pppppppcVar32;
          pppppppcVar19 = pppppppcVar22;
          break;
        case 1:
          goto switchD_00d4d308_caseD_1;
        case 2:
          local_2a8 = CONCAT31(local_2a8._1_3_,6);
          if (cVar2 == '\x06') {
            local_1c0 = (undefined1 *)local_2e4;
            local_1c4 = local_2d0;
            local_1c8 = pppppppcVar19;
            iVar26 = FUN_00c4c3ec(&DAT_00565810,0x10);
            puVar36 = (undefined1 *)0x0;
            *param_1 = 4;
            param_1[1] = 0;
            param_1[2] = iVar26;
            goto LAB_00d4eb9c;
          }
          local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
          FUN_016dd1aa(uVar7,(uint)&local_2a8 | 1,0x17);
          FUN_00c01f94(&local_120);
          break;
        case 3:
          goto switchD_00d4d308_caseD_3;
        }
      } while( true );
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(cVar2) {
    case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  local_268 = CONCAT31(local_268._1_3_,0xd);
  iVar26 = FUN_0157cc00(&local_268,&DAT_01878140,&DAT_018ab990);
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = iVar26;
  return;
code_r0x00d4cdfc:
  local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
  FUN_016dd1aa(uVar7,uVar14,0x17);
  FUN_00c01f94(&local_120);
  goto LAB_00d4cd04;
switchD_00d4ce2c_caseD_0:
  if (pppppppcVar22 != (char *******)&DAT_00000005 || pppppppcVar19 != (char *******)0x0) {
    local_11c = (char *******)&DAT_0157d360;
    local_120 = (char *******)&local_170;
    local_1c0 = local_31c;
    local_16c = (char *******)&DAT_0000000f;
    local_170 = (char *******)&DAT_003577e8;
    local_1c8 = pppppppcVar22;
    local_1c4 = pppppppcVar19;
    pppppppcVar39 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_120);
LAB_00d4ea68:
    *param_1 = 4;
    param_1[1] = 0;
    param_1[2] = (int)pppppppcVar39;
    if (pppppppcVar22 != (char *******)&DAT_00000005 || pppppppcVar19 != (char *******)0x0) {
      iVar26 = 0;
      while (iVar26 != local_17c) {
        iVar10 = local_180 + iVar26 * 0x48;
        iVar35 = *(int *)(iVar10 + 0x3c);
        puVar9 = (undefined4 *)(iVar35 + 0x10);
        for (iVar41 = *(int *)(iVar10 + 0x40); iVar41 != 0; iVar41 = iVar41 + -1) {
          if (puVar9[-4] != 0) {
            thunk_FUN_016d3fb4(puVar9[-3]);
          }
          if (puVar9[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar9);
          }
          puVar9 = puVar9 + 6;
        }
        iVar26 = iVar26 + 1;
        if (*(int *)(iVar10 + 0x38) != 0) {
          thunk_FUN_016d3fb4(iVar35);
        }
      }
      if (local_184 != 0) {
LAB_00d4e814:
        thunk_FUN_016d3fb4(local_180);
      }
    }
    goto LAB_00d4e818;
  }
  FUN_00d65744(&local_120,&local_2a8);
  pppppppcVar19 = local_11c;
  pppppppcVar22 = local_120;
  local_31c = local_118;
  if (local_120 == (char *******)&DAT_00000005 && local_11c == (char *******)0x0) goto LAB_00d4ee38;
  FUN_016dd1aa(&local_170,&local_114,0x4c);
  FUN_016dd1aa(auStack_1bc,&local_170,0x4c);
  goto LAB_00d4ccfc;
LAB_00d4ee38:
  param_1[1] = 0;
  *param_1 = 4;
  param_1[2] = (int)local_118;
LAB_00d4e818:
  while( true ) {
    FUN_00c3b8fc(&local_268,&local_290);
    iVar26 = local_268;
    if (local_268 == 0) break;
    iVar10 = CONCAT31((undefined3)uStack_25f,uStack_263._3_1_);
    iVar35 = local_268 + iVar10 * 0xc;
    local_120 = &local_290;
    if (*(int *)(iVar35 + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar35 + 0x110));
    }
    FUN_00c436d0(iVar26 + iVar10 * 0x18);
  }
  goto LAB_00d4e8f4;
code_r0x00d4cad8:
  local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
  FUN_016dd1aa(uVar7,(uint)&local_2a8 | 1,0x17);
  FUN_00c01f94(&local_120);
  goto LAB_00d4c9c8;
LAB_00d4ed44:
  param_1[1] = 0;
  *param_1 = 4;
  param_1[2] = (int)local_118;
LAB_00d4e484:
  while( true ) {
    FUN_00c3b8fc(&local_268,&local_290);
    iVar26 = local_268;
    if (local_268 == 0) break;
    iVar10 = CONCAT31((undefined3)uStack_25f,uStack_263._3_1_);
    iVar35 = local_268 + iVar10 * 0xc;
    local_120 = &local_290;
    if (*(int *)(iVar35 + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar35 + 0x110));
    }
    FUN_00c436d0(iVar26 + iVar10 * 0x18);
  }
  goto LAB_00d4e8f4;
switchD_00d4d308_caseD_1:
  local_1c0 = (undefined1 *)local_2e4;
  local_1c4 = local_2d0;
  if (local_2fc != (char ******)0x80000000) {
    local_16c = (char *******)&DAT_00000008;
    local_170 = (char *******)&DAT_0056aa60;
    local_11c = (char *******)&DAT_0157d360;
    local_120 = (char *******)&local_170;
    local_1c8 = pppppppcVar19;
    iVar26 = FUN_00f56780(&DAT_00582dbd,&local_120);
    param_1[2] = iVar26;
    uVar48 = ZEXT48(local_308);
    *param_1 = 4;
    param_1[1] = 0;
joined_r0x00d4f4d0:
    uVar4 = true;
    if (local_2fc != (char ******)0x0) {
      uVar4 = true;
      uVar48 = thunk_FUN_016d3fb4();
    }
    goto LAB_00d4e5a0;
  }
  uVar16 = local_2a8 & 0xff;
  local_2a8 = CONCAT31(local_2a8._1_3_,6);
  if (uVar16 == 6) {
    local_1c8 = pppppppcVar19;
    local_308 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
    goto LAB_00d4ef48;
  }
  local_c8[0] = cVar2;
  local_1c8 = pppppppcVar19;
  FUN_016dd1aa((uint)local_c8 | 1,(uint)&local_2a8 | 1,0x17);
  ppppppcVar18 = local_bc;
  pbVar5 = local_c0;
  iVar10 = local_c4;
  if (uVar16 != 4) {
    local_308 = (char *******)FUN_00f36124(local_c8,&uStack_49,&DAT_01873db8);
    local_2fc = (char ******)0x80000000;
    FUN_00c01f94(local_c8);
    goto LAB_00d4df20;
  }
  local_a4 = local_c4;
  local_a8 = local_c0;
  pbVar33 = local_c0 + (int)local_bc * 0x18;
  local_ac = local_c0;
  ppppppcVar20 = (char ******)0xaaaa;
  if (local_bc < (char ******)0xaaaa) {
    ppppppcVar20 = local_bc;
  }
  local_a0 = pbVar33;
  if (local_bc == (char ******)0x0) {
    local_2e4 = (char *******)&DAT_00000008;
    ppppppcVar20 = (char ******)0x0;
  }
  else {
    local_2e4 = (char *******)thunk_FUN_016d4a50((int)ppppppcVar20 * 0x18);
    if (local_2e4 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,(int)ppppppcVar20 * 0x18);
    }
  }
  pbVar11 = pbVar5;
  ppppppcVar23 = (char ******)0x0;
  local_9c = ppppppcVar20;
  local_98 = local_2e4;
  while( true ) {
    pppppppcVar19 = local_98;
    ppppppcVar20 = local_9c;
    local_94 = ppppppcVar23;
    if (pbVar11 == pbVar33) break;
    pbVar34 = pbVar11 + 0x18;
    bVar3 = *pbVar11;
    local_a8 = pbVar34;
    if (bVar3 == 6) {
      local_340 = ppppppcVar23;
      goto LAB_00d4de6c;
    }
    local_90 = (char *******)CONCAT31(local_90._1_3_,bVar3);
    FUN_016dd1aa((uint)&local_90 | 1,pbVar11 + 1,0x17);
    pppppppcVar22 = local_84;
    pppppppcVar19 = local_88;
    puVar36 = local_8c;
    dVar47 = unaff_d9;
    if (bVar3 != 4) {
      if (bVar3 == 5) {
        local_f4 = 0;
        local_ec = local_88;
        local_fc = local_88;
        bVar42 = false;
        local_120 = (char *******)CONCAT31(local_120._1_3_,6);
        local_f0 = local_8c;
        local_e8 = (char *******)0x0;
        if (local_8c != (undefined1 *)0x0) {
          local_e8 = local_84;
        }
        local_100 = local_8c;
        local_108 = (char ******)(uint)(local_8c != (undefined1 *)0x0);
        bVar44 = false;
        local_104 = 0;
        bVar43 = false;
        local_2fc = (char ******)0x0;
        local_f8 = local_108;
LAB_00d4d5a8:
        FUN_00c3b8fc(local_58,&local_108);
        piVar37 = param_1;
        if (local_58[0] != 0) {
          puVar17 = (uint *)(local_58[0] + local_50 * 0x18);
          iVar35 = local_58[0] + local_50 * 0xc;
          unaff_r10 = *(char *******)(iVar35 + 0x10c);
          piVar37 = *(int **)(iVar35 + 0x110);
          unaff_r11 = *(char *******)(iVar35 + 0x114);
          uVar16 = puVar17[1];
          uVar21 = puVar17[2];
          uVar24 = puVar17[3];
          uVar29 = puVar17[4];
          uVar31 = puVar17[5];
          *puVar8 = *puVar17;
          puVar8[1] = uVar16;
          puVar8[2] = uVar21;
          puVar8[3] = uVar24;
          puVar8[4] = uVar29;
          puVar8[5] = uVar31;
          local_78 = local_170;
          local_74 = local_16c;
          local_70 = local_168;
          local_6c = pppppppcStack_164;
          puStack_68 = puStack_160;
          pppppppcStack_64 = pppppppcStack_15c;
          ppppppcStack_60 = ppppppcStack_158;
        }
        if (local_58[0] == 0 || unaff_r10 == (char ******)0x80000000) {
switchD_00d4d71c_caseD_5:
          if (local_2fc == (char ******)0x0) {
            local_74 = (char *******)&SUB_00000002;
            local_78 = (char *******)&DAT_0035783c;
            local_16c = (char *******)&DAT_0157d360;
            local_170 = (char *******)&local_78;
            local_308 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_170);
          }
          else if (bVar43) {
            if (bVar44) {
              if (bVar42) {
                bVar42 = local_e8 != (char *******)0x0;
                if (bVar42) {
                  local_30c = (char *******)FUN_00f2c2f0(pppppppcVar22,&DAT_01887430,&DAT_018ab990);
                }
                unaff_r10 = (char ******)(uint)bVar42;
                unaff_r11 = SUB84(unaff_d11,0);
                while( true ) {
                  FUN_00c3b8fc(&local_170,&local_108);
                  puVar36 = local_168;
                  pppppppcVar19 = local_170;
                  if (local_170 == (char *******)0x0) break;
                  local_78 = &local_108;
                  if (local_170[(int)local_168 * 3 + 0x43] != (char ******)0x0) {
                    thunk_FUN_016d3fb4(local_170[(int)local_168 * 3 + 0x44]);
                  }
                  FUN_00c436d0(pppppppcVar19 + (int)puVar36 * 6);
                }
                unaff_d8 = unaff_d10;
                dVar47 = unaff_d11;
                local_310 = local_308;
                local_314 = local_34c;
                goto joined_r0x00d4db1c;
              }
              local_74 = (char *******)0x3;
              local_78 = (char *******)0x359e03;
              local_16c = (char *******)&DAT_0157d360;
              local_170 = (char *******)&local_78;
              local_308 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_170);
            }
            else {
              local_74 = (char *******)&DAT_0000000b;
              local_78 = (char *******)&DAT_0035783e;
              local_16c = (char *******)&DAT_0157d360;
              local_170 = (char *******)&local_78;
              local_308 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_170);
            }
          }
          else {
            local_74 = (char *******)0x3;
            local_78 = (char *******)0x3855fc;
            local_16c = (char *******)&DAT_0157d360;
            local_170 = (char *******)&local_78;
            local_308 = (char *******)FUN_00f56780(&DAT_0057a25d,&local_170);
          }
          goto LAB_00d4dd60;
        }
        if ((char)local_120 != '\x06') {
          FUN_00d4fc54(&local_120);
        }
        local_120 = (char *******)*puVar15;
        local_11c = (char *******)puVar15[1];
        local_118 = (undefined1 *)puVar15[2];
        local_114 = (char *******)puVar15[3];
        local_110 = (undefined1 *)puVar15[4];
        pppppppcStack_10c = (char *******)puVar15[5];
        if (unaff_r11 == (char ******)0xb) {
          iVar35 = thunk_FUN_016dd50a(piVar37,&DAT_0035783e,0xb);
          if (iVar35 == 0) {
            uVar28 = 2;
          }
          else {
LAB_00d4d6b4:
            uVar28 = 4;
          }
        }
        else if (unaff_r11 == (char ******)0x3) {
          iVar35 = thunk_FUN_016dd50a(piVar37,
                                      "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections"
                                      ,3);
          if (iVar35 == 0) {
            uVar28 = 1;
          }
          else {
            uVar28 = 3;
            iVar35 = thunk_FUN_016dd50a(piVar37,"mcr",3);
            if (iVar35 != 0) {
              uVar28 = 4;
            }
          }
        }
        else {
          if ((unaff_r11 != (char ******)0x2) || ((short)*piVar37 != 0x6268)) goto LAB_00d4d6b4;
          uVar28 = 0;
        }
        if (unaff_r10 != (char ******)0x0) {
          thunk_FUN_016d3fb4(piVar37);
        }
        cVar2 = (char)local_120;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar28) {
        case 0:
          if (local_2fc == (char ******)0x0) {
            local_120 = (char *******)CONCAT31(local_120._1_3_,6);
            if (cVar2 == '\x06') {
              local_308 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
              goto LAB_00d4dd60;
            }
            local_170 = (char *******)CONCAT31(local_170._1_3_,cVar2);
            FUN_016dd1aa(uVar14,uVar7,0x17);
            uVar48 = FUN_00c64c8c(&local_170);
            local_308 = (char *******)(uVar48 >> 0x20);
            if ((uVar48 & 1) != 0) goto LAB_00d4dd60;
            local_2fc = (char ******)0x1;
            goto LAB_00d4d5a8;
          }
          local_74 = (char *******)&SUB_00000002;
          local_78 = (char *******)&DAT_0035783c;
          break;
        case 1:
          if (!bVar43) {
            local_120 = (char *******)CONCAT31(local_120._1_3_,6);
            if (cVar2 == '\x06') {
              uVar28 = FUN_00c4c3ec(&DAT_00565810,0x10);
              uVar48 = CONCAT44(uVar28,1);
            }
            else {
              local_170 = (char *******)CONCAT31(local_170._1_3_,cVar2);
              FUN_016dd1aa(uVar14,uVar7,0x17);
              uVar48 = FUN_00c64c8c(&local_170);
            }
            local_34c = (char *******)(uVar48 >> 0x20);
            if ((uVar48 & 1) != 0) {
              local_308 = local_34c;
              goto LAB_00d4dd60;
            }
            bVar43 = true;
            goto LAB_00d4d5a8;
          }
          local_74 = (char *******)0x3;
          local_78 = (char *******)0x3855fc;
          break;
        case 2:
          if (!bVar44) {
            FUN_00d65650(&local_170,&local_120);
            if (local_170 == (char *******)&DAT_00000001) {
LAB_00d4dc18:
              local_308 = local_16c;
              goto LAB_00d4dd60;
            }
            unaff_d11 = (double)CONCAT44(pppppppcStack_164,local_168);
            bVar44 = true;
            goto LAB_00d4d5a8;
          }
          local_74 = (char *******)&DAT_0000000b;
          local_78 = (char *******)&DAT_0035783e;
          break;
        case 3:
          if (!bVar42) {
            FUN_00d65650(&local_170,&local_120);
            if (local_170 == (char *******)&DAT_00000001) goto LAB_00d4dc18;
            unaff_d10 = (double)CONCAT44(pppppppcStack_164,local_168);
            bVar42 = true;
            goto LAB_00d4d5a8;
          }
          local_74 = (char *******)0x3;
          local_78 = (char *******)0x359e03;
          break;
        case 4:
          goto switchD_00d4ce2c_caseD_6;
        case 5:
          goto switchD_00d4d71c_caseD_5;
        default:
          bVar45 = (char)local_120 != '\x06';
          local_120 = (char *******)CONCAT31(local_120._1_3_,6);
          if (bVar45) goto code_r0x00d4d6ec;
          local_308 = (char *******)FUN_00c4c3ec(&DAT_00565810,0x10);
LAB_00d4dd60:
          while( true ) {
            FUN_00c3b8fc(&local_170,&local_108);
            puVar36 = local_168;
            pppppppcVar19 = local_170;
            if (local_170 == (char *******)0x0) break;
            local_78 = &local_108;
            if (local_170[(int)local_168 * 3 + 0x43] != (char ******)0x0) {
              thunk_FUN_016d3fb4(local_170[(int)local_168 * 3 + 0x44]);
            }
            FUN_00c436d0(pppppppcVar19 + (int)puVar36 * 6);
          }
          unaff_r10 = (char ******)0x1;
          local_30c = local_308;
joined_r0x00d4db1c:
          if ((char)local_120 != '\x06') {
            FUN_00c01f94(&local_120);
          }
          goto LAB_00d4ddc0;
        }
        local_16c = (char *******)&DAT_0157d360;
        local_170 = (char *******)&local_78;
        local_308 = (char *******)FUN_00f56780(&DAT_00582dbd,&local_170);
        goto LAB_00d4dd60;
      }
      local_30c = (char *******)FUN_00f36124(&local_90,&uStack_49,&DAT_01873e18);
      if ((bVar3 & 6) != 4) {
        FUN_00c01f94(&local_90);
      }
joined_r0x00d4debc:
      if (local_9c != (char ******)0x0) {
        thunk_FUN_016d3fb4(local_98);
      }
      local_308 = local_30c;
      goto LAB_00d4ded4;
    }
    local_70 = local_8c;
    local_74 = local_88;
    pppppppcVar32 = local_88 + (int)local_84 * 6;
    local_78 = local_88;
    local_6c = pppppppcVar32;
    if (local_84 == (char *******)0x0) {
LAB_00d4d8b4:
      uVar28 = 0;
      pppppppcVar39 = local_74;
      dVar47 = unaff_d10;
LAB_00d4d8b8:
      local_30c = (char *******)FUN_00f2c2f0(uVar28,&DAT_01878064,&DAT_018ab990);
      unaff_d10 = dVar47;
LAB_00d4d8d0:
      unaff_r10 = (char ******)0x1;
      dVar47 = unaff_d9;
    }
    else {
      pppppppcVar39 = local_88 + 6;
      local_74 = pppppppcVar39;
      if (*(char *)local_88 == '\x06') goto LAB_00d4d8b4;
      local_120 = (char *******)CONCAT31(local_120._1_3_,*(char *)local_88);
      local_308 = local_84;
      FUN_016dd1aa(uVar7,(char *)((int)local_88 + 1),0x17);
      uVar48 = FUN_00c64c8c(&local_120);
      pppppppcVar12 = (char *******)(uVar48 >> 0x20);
      unaff_r10 = (char ******)0x1;
      pppppppcVar13 = pppppppcVar12;
      if ((uVar48 & 1) == 0) {
        if (pppppppcVar22 == (char *******)&DAT_00000001) {
LAB_00d4da2c:
          uVar28 = 1;
          dVar47 = unaff_d10;
          goto LAB_00d4d8b8;
        }
        pppppppcVar39 = pppppppcVar19 + 0xc;
        local_74 = pppppppcVar39;
        if (*(char *)(pppppppcVar19 + 6) == '\x06') goto LAB_00d4da2c;
        local_120 = (char *******)CONCAT31(local_120._1_3_,*(char *)(pppppppcVar19 + 6));
        FUN_016dd1aa(uVar7,(char *)((int)pppppppcVar19 + 0x19),0x17);
        uVar46 = FUN_00c64c8c(&local_120);
        pppppppcVar13 = (char *******)((ulonglong)uVar46 >> 0x20);
        uVar16 = (int)uVar46 + 1;
        if (uVar16 == 2) goto LAB_00d4db50;
        if ((uVar16 & 1) == 0) goto LAB_00d4da2c;
        if (pppppppcVar22 == (char *******)&SUB_00000002) {
LAB_00d4db98:
          uVar28 = 2;
          dVar47 = unaff_d10;
          goto LAB_00d4d8b8;
        }
        cVar2 = *(char *)(pppppppcVar19 + 0xc);
        pppppppcVar39 = pppppppcVar19 + 0x12;
        local_74 = pppppppcVar39;
        if (cVar2 == '\x06') goto LAB_00d4db98;
        local_120 = (char *******)CONCAT31(local_120._1_3_,cVar2);
        FUN_016dd1aa(uVar7,(char *)((int)pppppppcVar19 + 0x31),0x17);
        dVar47 = (double)CONCAT44(pppppppcStack_10c,local_110);
        if (cVar2 == '\x02') {
          if (local_118 == (undefined1 *)0x0) {
            dVar47 = (double)FUN_01845f30();
          }
          else if (local_118 == (undefined1 *)0x1) {
            dVar47 = (double)FUN_01845d5c();
          }
          if (pppppppcVar22 != (char *******)0x3) {
            pppppppcVar39 = pppppppcVar19 + 0x18;
            local_74 = pppppppcVar39;
            if (*(char *)(pppppppcVar19 + 0x12) != '\x06') {
              local_120 = (char *******)CONCAT31(local_120._1_3_,*(char *)(pppppppcVar19 + 0x12));
              FUN_016dd1aa(uVar7,(char *)((int)pppppppcVar19 + 0x49),0x17);
              FUN_00c64ac4(&local_170,&local_120);
              unaff_d10 = dVar47;
              if (local_170 != (char *******)0x0) {
                local_30c = local_16c;
                goto LAB_00d4d8d0;
              }
              unaff_d8 = (double)CONCAT44(pppppppcStack_164,local_168);
              local_314 = pppppppcVar13;
              local_310 = pppppppcVar12;
              local_2fc = SUB84(dVar47,0);
              if (pppppppcVar22 == (char *******)&DAT_00000004) {
                unaff_r10 = (char ******)0x0;
              }
              else {
                local_30c = (char *******)FUN_00f2c2f0(pppppppcVar22,&DAT_0188738c,&DAT_018ab990);
                unaff_r10 = (char ******)0x1;
              }
              goto LAB_00d4d8d4;
            }
          }
          uVar28 = 3;
          goto LAB_00d4d8b8;
        }
        local_30c = (char *******)FUN_00f36124(&local_120,&uStack_49,&DAT_01873d48);
        FUN_00c01f94(&local_120);
        goto LAB_00d4d8d0;
      }
LAB_00d4db50:
      local_30c = pppppppcVar13;
    }
LAB_00d4d8d4:
    FUN_00ce0380(pppppppcVar39,((uint)((int)pppppppcVar32 - (int)pppppppcVar39) >> 3) * -0x55555555)
    ;
    if (puVar36 != (undefined1 *)0x0) {
      thunk_FUN_016d3fb4(pppppppcVar19);
    }
    unaff_r11 = local_2fc;
LAB_00d4ddc0:
    unaff_d9 = dVar47;
    if (unaff_r10 != (char ******)0x0) goto joined_r0x00d4debc;
    if (ppppppcVar23 == local_9c) {
      FUN_00d64d60(&local_9c);
      local_2e4 = local_98;
    }
    local_2c0 = SUB84(unaff_d8,0);
    ppppppcStack_2bc = (char ******)((ulonglong)unaff_d8 >> 0x20);
    pppppppcVar19 = local_2e4 + (int)ppppppcVar23 * 6;
    *pppppppcVar19 = unaff_r11;
    pppppppcVar19[4] = (char ******)local_310;
    pppppppcVar19[5] = (char ******)local_314;
    pppppppcVar19[1] = (char ******)((ulonglong)dVar47 >> 0x20);
    pppppppcVar19[2] = local_2c0;
    pppppppcVar19[3] = ppppppcStack_2bc;
    pbVar11 = pbVar34;
    ppppppcVar23 = (char ******)((int)ppppppcVar23 + 1);
  }
  local_340 = ppppppcVar18;
  pbVar34 = pbVar33;
LAB_00d4de6c:
  if (local_9c == (char ******)0x80000000) {
    local_308 = local_98;
LAB_00d4ded4:
    local_2fc = (char ******)0x80000000;
  }
  else {
    if (pbVar33 != pbVar34) {
      local_308 = (char *******)FUN_00f2c2f0(ppppppcVar18,&DAT_0188738c,&DAT_018ab990);
      if (ppppppcVar20 != (char ******)0x0) {
        thunk_FUN_016d3fb4(pppppppcVar19);
      }
      goto LAB_00d4ded4;
    }
    local_2fc = local_9c;
    local_308 = local_98;
    pbVar34 = pbVar33;
  }
  FUN_00ce0380(pbVar34,((uint)((int)pbVar33 - (int)pbVar34) >> 3) * -0x55555555);
  if (iVar10 != 0) {
    thunk_FUN_016d3fb4(pbVar5);
  }
LAB_00d4df20:
  if (local_2fc == (char ******)0x80000000) goto LAB_00d4ef48;
  goto LAB_00d4d1fc;
code_r0x00d4d6ec:
  local_170 = (char *******)CONCAT31(local_170._1_3_,cVar2);
  FUN_016dd1aa(uVar14,uVar7,0x17);
  FUN_00c01f94(&local_170);
  goto LAB_00d4d5a8;
switchD_00d4ce2c_caseD_6:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xd4f580);
  (*pcVar1)();
LAB_00d4ef48:
  uVar48 = CONCAT44(&DAT_00000004,local_308);
  param_1[1] = 0;
  uVar4 = true;
  *param_1 = 4;
  param_1[2] = (int)local_308;
LAB_00d4e5a0:
  if ((bool)uVar4) {
    uVar48 = CONCAT44(local_1c4,local_1c8) ^ 5;
  }
  if ((bool)uVar4 && uVar48 != 0) {
    iVar26 = 0;
    while (iVar26 != local_17c) {
      iVar10 = local_180 + iVar26 * 0x48;
      iVar35 = *(int *)(iVar10 + 0x3c);
      puVar9 = (undefined4 *)(iVar35 + 0x10);
      for (iVar41 = *(int *)(iVar10 + 0x40); iVar41 != 0; iVar41 = iVar41 + -1) {
        if (puVar9[-4] != 0) {
          thunk_FUN_016d3fb4(puVar9[-3]);
        }
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 6;
      }
      iVar26 = iVar26 + 1;
      if (*(int *)(iVar10 + 0x38) != 0) {
        thunk_FUN_016d3fb4(iVar35);
      }
    }
    if (local_184 != 0) {
      thunk_FUN_016d3fb4(local_180);
    }
  }
  while( true ) {
    FUN_00c3b8fc(&local_268,&local_290);
    iVar26 = local_268;
    if (local_268 == 0) break;
    iVar10 = CONCAT31((undefined3)uStack_25f,uStack_263._3_1_);
    iVar35 = local_268 + iVar10 * 0xc;
    local_120 = &local_290;
    if (*(int *)(iVar35 + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar35 + 0x110));
    }
    FUN_00c436d0(iVar26 + iVar10 * 0x18);
  }
LAB_00d4e8f4:
  if ((char)local_2a8 == '\x06') {
    return;
  }
  FUN_00c01f94(&local_2a8);
  return;
}

