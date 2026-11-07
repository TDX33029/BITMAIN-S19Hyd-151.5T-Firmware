// FUN_0152b020 @ 0152b020 size=3548 calls_out=13 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0152b020(uint *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 char *param_6)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  byte *****pppppbVar10;
  undefined4 *****pppppuVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  byte *****pppppbVar15;
  byte *****pppppbVar16;
  byte *****extraout_r1;
  byte *****extraout_r1_00;
  byte *****extraout_r1_01;
  byte *****extraout_r1_02;
  byte *****extraout_r1_03;
  byte *****extraout_r1_04;
  byte *****extraout_r1_05;
  byte *****extraout_r1_06;
  byte *****pppppbVar17;
  uint *puVar18;
  byte *****pppppbVar19;
  byte *****extraout_r2;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined2 *puVar26;
  undefined4 *puVar27;
  bool bVar28;
  bool bVar29;
  ulonglong uVar30;
  undefined4 *local_3a4;
  undefined4 *local_39c;
  byte *****local_388;
  byte *****local_384;
  byte *****local_380;
  byte *****local_37c;
  byte *****pppppbStack_378;
  byte *****local_308;
  byte *****local_304;
  byte *****local_300;
  byte *****local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  int local_28c;
  int local_288;
  undefined2 local_284;
  undefined1 local_282;
  uint local_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint local_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  byte *****local_200;
  uint local_1fc;
  byte *****local_1f8;
  byte *****local_1f4;
  byte *****local_1f0;
  byte *****local_1ec;
  byte *****local_1e8;
  byte *****local_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  byte *****local_180;
  undefined4 local_17c;
  byte *****local_178;
  byte *****local_174;
  byte *****local_170;
  byte *****local_16c;
  byte *****local_168;
  byte *****local_164;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined4 *****local_94;
  byte *****local_90;
  byte *****local_80;
  byte *****local_7c;
  undefined2 local_78;
  char local_76;
  undefined2 local_74;
  undefined1 local_72;
  undefined4 *****local_70;
  byte *****local_6c;
  byte *****local_68;
  byte *****local_64;
  undefined4 *local_60;
  byte *****local_5c;
  undefined4 local_58;
  byte *****local_54;
  byte *****local_50;
  undefined4 local_48;
  byte ****local_44;
  byte ****local_40;
  undefined4 *****local_3c;
  byte *****local_38;
  byte *****local_34;
  undefined4 *****local_30;
  undefined1 *local_2c;
  
  FUN_016cce5c(&local_100,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (local_100 == 1) {
    puVar18 = (uint *)((uint)&local_180 | 4);
    *puVar18 = local_f8;
    puVar18[1] = uStack_f4;
    puVar18[2] = local_f0;
    puVar18[3] = uStack_ec;
    puVar18[4] = local_e8;
    puVar18[5] = uStack_e4;
    puVar18[6] = uStack_e0;
    puVar18[7] = uStack_dc;
    local_1f8 = (byte *****)*puVar18;
    local_1f4 = (byte *****)puVar18[1];
    local_1f0 = (byte *****)puVar18[2];
    local_1ec = (byte *****)puVar18[3];
    local_1e8 = (byte *****)puVar18[4];
    local_1e4 = (byte *****)puVar18[5];
    uStack_1e0 = puVar18[6];
    uStack_1dc = puVar18[7];
    local_200 = (byte *****)0x1;
    FUN_0152f154(&local_100);
    puVar18 = (uint *)((uint)&local_280 | 4);
    *puVar18 = local_100;
    puVar18[1] = local_fc;
    puVar18[2] = local_f8;
    puVar18[3] = uStack_f4;
    puVar18[4] = local_f0;
    puVar18[5] = uStack_ec;
    puVar18[6] = local_e8;
    puVar18[7] = uStack_e4;
    puVar14 = (uint *)((uint)&local_308 | 4);
    uVar22 = puVar18[1];
    uVar24 = puVar18[2];
    uVar25 = puVar18[3];
    *puVar14 = *puVar18;
    puVar14[1] = uVar22;
    puVar14[2] = uVar24;
    puVar14[3] = uVar25;
    uVar22 = puVar18[5];
    uVar24 = puVar18[6];
    uVar25 = puVar18[7];
    puVar7 = (uint *)((uint)&local_388 | 4);
    puVar14[4] = puVar18[4];
    puVar14[5] = uVar22;
    puVar14[6] = uVar24;
    puVar14[7] = uVar25;
    uVar22 = puVar14[1];
    uVar24 = puVar14[2];
    uVar25 = puVar14[3];
    *puVar7 = *puVar14;
    puVar7[1] = uVar22;
    puVar7[2] = uVar24;
    puVar7[3] = uVar25;
    uVar22 = puVar14[5];
    uVar24 = puVar14[6];
    uVar25 = puVar14[7];
    puVar7[4] = puVar14[4];
    puVar7[5] = uVar22;
    puVar7[6] = uVar24;
    puVar7[7] = uVar25;
    uVar22 = puVar7[1];
    uVar24 = puVar7[2];
    uVar25 = puVar7[3];
    *param_1 = *puVar7;
    param_1[1] = uVar22;
    param_1[2] = uVar24;
    param_1[3] = uVar25;
    uVar22 = puVar7[5];
    uVar24 = puVar7[6];
    uVar25 = puVar7[7];
    param_1[4] = puVar7[4];
    param_1[5] = uVar22;
    param_1[6] = uVar24;
    param_1[7] = uVar25;
    return;
  }
  FUN_016dd1aa(&local_180,(uint)&local_100 | 4,0x7c);
  FUN_016dd1aa((uint)&local_200 | 4,&local_180,0x7c);
  FUN_016dd1aa(&local_280,(uint)&local_200 | 4,0x7c);
  FUN_016dd1aa(&local_308,&local_280,0x7c);
  FUN_016dd1aa(&local_388,&local_308,0x7c);
  FUN_016dd1aa(&local_100,&local_388,0x7c);
  uVar24 = *(uint *)(param_2 + 8);
  uVar8 = 0;
  bVar29 = 0x3ffffffe < uVar24;
  bVar28 = uVar24 == 0x3fffffff;
  uVar22 = uVar24 * 4;
  if (uVar24 < 0x40000000) {
    bVar29 = 0x7ffffffb < uVar22;
    bVar28 = uVar22 == 0x7ffffffc;
  }
  if (bVar29 && !bVar28) {
LAB_0152b1a0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar8,uVar22);
  }
  iVar23 = *(int *)(param_2 + 4);
  if (uVar22 == 0) {
    uVar25 = 0;
    iVar9 = 4;
  }
  else {
    iVar9 = thunk_FUN_016d4a50(uVar22);
    uVar25 = uVar24;
    if (iVar9 == 0) {
      uVar8 = 4;
      goto LAB_0152b1a0;
    }
  }
  if (uVar24 == 0) {
    local_282 = 2;
  }
  else {
    iVar21 = uVar24 * 0x50;
    local_288 = 0;
    do {
      *(int *)(iVar9 + local_288 * 4) = iVar23;
      iVar23 = iVar23 + 0x50;
      local_288 = local_288 + 1;
      iVar21 = iVar21 + -0x50;
    } while (iVar21 != 0);
    local_282 = *(undefined1 *)(param_2 + 0x22);
    local_284 = *(undefined2 *)(param_2 + 0x20);
    local_28c = iVar9;
  }
  FUN_0152863c(&local_200,&local_100,*(undefined4 *)(*(int *)(param_2 + 0xc) + 0xc),
               *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x10),param_4,param_5,&local_28c);
  if (local_200 == (byte *****)0x80000029) {
    if (*param_6 == '\x01') {
      local_38 = local_90;
      pppppbVar15 = (byte *****)&DAT_00000004;
      puVar26 = (undefined2 *)((uint)&local_200 | 5);
      if (param_6[1] != '\0') {
        pppppbVar15 = (byte *****)&DAT_00000010;
      }
      local_34 = (byte *****)0x0;
      local_3c = local_94;
      pppppbVar16 = pppppbVar15;
LAB_0152b2ec:
      pppppbVar10 = (byte *****)0x0;
      if (local_3c != (undefined4 *****)0x0) {
        pppppbVar16 = local_34;
        pppppbVar10 = local_38;
      }
      if (local_3c != (undefined4 *****)0x0 && pppppbVar16 != pppppbVar10) {
        FUN_016cd97c(&local_200,&local_3c);
        uVar3 = *puVar26;
        uVar22 = local_1fc & 0xff;
        if (local_200 != (byte *****)0x8000002d) {
          local_3c = (undefined4 *****)0x0;
        }
        uVar1 = *(undefined1 *)(puVar26 + 1);
        local_48._0_3_ = CONCAT12(uVar1,uVar3);
        local_308 = local_1f0;
        local_304 = local_1ec;
        local_300 = local_1e8;
        local_2fc = local_1e4;
        if (local_200 == (byte *****)0x8000002d) goto code_r0x0152b360;
        local_388 = local_1f0;
        local_384 = local_1ec;
        local_380 = local_1e8;
        local_37c = local_1e4;
        local_74 = uVar3;
        local_72 = uVar1;
LAB_0152b9a0:
        local_17c._0_3_ = CONCAT21(local_74,(char)local_1fc);
        local_17c = (undefined4 *)CONCAT13(local_72,(undefined3)local_17c);
        local_178 = local_1f8;
        local_174 = local_1f4;
        local_180 = local_200;
        local_170 = local_388;
        local_16c = local_384;
        local_168 = local_380;
        local_164 = local_37c;
        goto joined_r0x0152b95c;
      }
      puVar27 = (undefined4 *)((uint)&local_200 | 4);
      pppppbVar15 = *(byte ******)(param_6 + 4);
      pppppbVar16 = *(byte ******)(param_6 + 8);
      local_80 = *(byte ******)(param_6 + 0xc);
      local_68 = (byte *****)0x0;
      puVar12 = (undefined4 *)((uint)&local_308 | 1);
      local_76 = param_6[3];
      local_6c = local_90;
      local_78 = *(undefined2 *)(param_6 + 1);
      puVar13 = (undefined4 *)((uint)&local_3c | 1);
      uVar30 = (ulonglong)CONCAT24(*(undefined2 *)(param_6 + 0x10),&local_3c) | 1;
      local_70 = local_94;
      local_7c = (byte *****)CONCAT22(local_7c._2_2_,*(undefined2 *)(param_6 + 0x10));
      goto LAB_0152b7d4;
    }
    uVar8 = *(undefined4 *)(param_6 + 8);
    local_34 = (byte *****)0x0;
    puVar26 = (undefined2 *)((uint)&local_200 | 5);
    uVar20 = *(undefined4 *)(param_6 + 0xc);
    local_38 = local_90;
    local_3c = local_94;
    pppppbVar15 = local_90;
LAB_0152b4a0:
    do {
      do {
        pppppbVar16 = (byte *****)0x0;
        if (local_3c != (undefined4 *****)0x0) {
          pppppbVar15 = local_34;
          pppppbVar16 = local_38;
        }
        if (local_3c == (undefined4 *****)0x0 || pppppbVar15 == pppppbVar16) {
          FUN_01574b00((uint)&local_388 | 4,param_6 + 4);
          puVar27 = (undefined4 *)((uint)&local_200 | 4);
          local_6c = local_90;
          puVar12 = (undefined4 *)((uint)&local_308 | 1);
          puVar13 = (undefined4 *)((uint)&local_3c | 1);
          uVar30 = ZEXT48(puVar13);
          local_68 = (byte *****)0x0;
          local_70 = local_94;
          local_388 = (byte *****)((uint)local_388 & 0xffffff00);
          goto LAB_0152b614;
        }
        pppppuVar11 = (undefined4 *****)FUN_016cd97c(&local_200,&local_3c);
        uVar3 = *puVar26;
        if (local_200 != (byte *****)0x8000002d) {
          pppppuVar11 = (undefined4 *****)0x0;
        }
        if (local_200 != (byte *****)0x8000002d) {
          local_3c = pppppuVar11;
        }
        uVar1 = *(undefined1 *)(puVar26 + 1);
        local_58._0_3_ = CONCAT12(uVar1,uVar3);
        local_388 = local_1f0;
        local_384 = local_1ec;
        local_380 = local_1e8;
        local_37c = local_1e4;
        if (local_200 != (byte *****)0x8000002d) {
          local_48 = (byte ****)CONCAT22(CONCAT11(local_48._3_1_,uVar1),uVar3);
LAB_0152b8fc:
          local_308 = local_1f0;
          local_304 = local_1ec;
          local_300 = local_1e8;
          local_2fc = local_1e4;
          goto LAB_0152b90c;
        }
        pppppbVar15 = local_1f8;
      } while ((char)local_1fc != '\0');
      FUN_016cf590(&local_200,local_1f8,local_1f4,0,uVar8,uVar20);
      if (local_200 != (byte *****)0x8000002d) {
        if (local_200 != (byte *****)0x80000011) {
          local_48._0_3_ = (undefined3)(local_1fc >> 8);
          goto LAB_0152b8fc;
        }
        FUN_016c3a1c(&local_200);
        pppppbVar15 = extraout_r1_00;
        goto LAB_0152b4a0;
      }
      pppppbVar15 = extraout_r1;
    } while ((char)local_1fc == '\0');
    local_1fc._0_1_ = '\0';
    local_200 = (byte *****)0x8000002d;
    local_1f8 = extraout_r1;
    local_1f4 = extraout_r2;
LAB_0152b90c:
    local_17c._0_3_ = CONCAT21((undefined2)local_48,(char)local_1fc);
    local_17c = (undefined4 *)CONCAT13(local_48._2_1_,(undefined3)local_17c);
    local_178 = local_1f8;
    local_174 = local_1f4;
    local_180 = local_200;
    local_170 = local_308;
    local_16c = local_304;
    local_168 = local_300;
    local_164 = local_2fc;
joined_r0x0152b95c:
    if (local_180 != (byte *****)0x8000002d) goto LAB_0152b850;
    goto LAB_0152b86c;
  }
  *param_1 = (uint)local_200;
  param_1[1] = local_1fc;
  param_1[2] = (uint)local_1f8;
  param_1[3] = (uint)local_1f4;
  param_1[4] = (uint)local_1f0;
  param_1[5] = (uint)local_1ec;
  param_1[6] = (uint)local_1e8;
  param_1[7] = (uint)local_1e4;
  if (uVar25 == 0) goto LAB_0152b888;
  goto LAB_0152b880;
code_r0x0152b360:
  pppppbVar10 = local_1e4;
  if (uVar22 == 2) {
    pppppbVar10 = pppppbVar15;
  }
  pppppbVar16 = local_1f8;
  if (uVar22 == 2 && local_1f4 == pppppbVar10) {
    pppppbVar10 = pppppbVar15;
    pppppbVar17 = local_1f8;
    pppppbVar19 = (byte *****)(param_6 + 2);
    do {
      if (pppppbVar10 == (byte *****)0x0) {
        local_200 = (byte *****)0x8000002d;
        local_1f8 = pppppbVar17;
        local_1f4 = pppppbVar19;
        local_1fc._0_1_ = (char)uVar22;
        goto LAB_0152b9a0;
      }
      pppppbVar16 = (byte *****)((int)pppppbVar17 + 1);
      uVar22 = (uint)*(byte *)pppppbVar17;
      pppppbVar10 = (byte *****)((int)pppppbVar10 + -1);
      bVar2 = *(byte *)pppppbVar19;
      pppppbVar17 = pppppbVar16;
      pppppbVar19 = (byte *****)((int)pppppbVar19 + 1);
    } while (uVar22 == bVar2);
  }
  goto LAB_0152b2ec;
  while( true ) {
    local_308 = (byte *****)*puVar27;
    local_304 = (byte *****)puVar27[1];
    local_300 = (byte *****)puVar27[2];
    local_2fc = (byte *****)puVar27[3];
    uStack_2f8 = puVar27[4];
    uStack_2f4 = puVar27[5];
    uStack_2f0 = puVar27[6];
    pppppbVar10 = (byte *****)&local_2fc;
    *puVar27 = local_308;
    puVar27[1] = local_304;
    puVar27[2] = local_300;
    puVar27[3] = local_2fc;
    puVar27[4] = uStack_2f8;
    puVar27[5] = uStack_2f4;
    puVar27[6] = uStack_2f0;
    if ((char)local_1fc == '\x05') goto LAB_0152b7c8;
    local_3c = (undefined4 *****)CONCAT31(local_3c._1_3_,(char)local_1fc);
    uVar8 = *puVar12;
    uVar20 = puVar12[1];
    *(undefined4 *)((int)puVar13 + 7) = *(undefined4 *)((int)puVar12 + 7);
    puVar13[1] = uVar20;
    *puVar13 = uVar8;
    local_54 = (byte *****)&LAB_016ce1a8;
    local_58 = &local_3c;
    uVar30 = FUN_00600d2c(&local_48,&DAT_00590e71,&local_58);
    ppppbVar6 = local_40;
    ppppbVar5 = local_44;
    ppppbVar4 = local_48;
    if (local_48 != (byte ****)0x80000000) break;
LAB_0152b7d4:
    if (local_70 != (undefined4 *****)0x0) {
      uVar30 = CONCAT44(local_68,local_6c);
    }
    if (local_70 == (undefined4 *****)0x0 || (int)(uVar30 >> 0x20) == (int)uVar30) {
      pppppbVar10 = (byte *****)0x0;
      local_17c = (undefined4 *)&DAT_00000004;
      local_180 = (byte *****)0x0;
      goto LAB_0152b7f8;
    }
    FUN_016cd97c(&local_200,&local_70);
    if (local_200 != (byte *****)0x8000002d) {
      local_70 = (undefined4 *****)0x0;
      local_308 = (byte *****)*puVar27;
      local_304 = (byte *****)puVar27[1];
      local_300 = (byte *****)puVar27[2];
      local_2fc = (byte *****)puVar27[3];
      uStack_2f8 = puVar27[4];
      uStack_2f4 = puVar27[5];
      uStack_2f0 = puVar27[6];
      *puVar27 = local_308;
      puVar27[1] = local_304;
      puVar27[2] = local_300;
      puVar27[3] = local_2fc;
      puVar27[4] = uStack_2f8;
      puVar27[5] = uStack_2f4;
      puVar27[6] = uStack_2f0;
      FUN_016c3a1c(&local_200);
      pppppbVar10 = extraout_r1_02;
LAB_0152b7c8:
      uVar30 = CONCAT44(pppppbVar10,&DAT_80000000);
      local_48 = (byte ****)0x80000000;
      goto LAB_0152b7d4;
    }
  }
  local_39c = (undefined4 *)thunk_FUN_016d4a50(0x30);
  if (local_39c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  *local_39c = ppppbVar4;
  local_39c[1] = ppppbVar5;
  local_39c[2] = ppppbVar6;
  local_5c = (byte *****)&DAT_00000001;
  local_64 = (byte *****)&DAT_00000004;
  local_50 = local_68;
  local_54 = local_6c;
  local_58 = local_70;
  pppppbVar17 = local_6c;
  pppppbVar10 = (byte *****)&DAT_00000001;
  local_60 = local_39c;
  while( true ) {
    pppppbVar19 = (byte *****)0x0;
    if (local_58 != (undefined4 *****)0x0) {
      pppppbVar17 = local_50;
      pppppbVar19 = local_54;
    }
    if (!(local_58 != (undefined4 *****)0x0 && pppppbVar17 != pppppbVar19)) break;
    FUN_016cd97c(&local_200,&local_58);
    if (local_200 == (byte *****)0x8000002d) {
      local_308 = (byte *****)*puVar27;
      local_304 = (byte *****)puVar27[1];
      local_300 = (byte *****)puVar27[2];
      local_2fc = (byte *****)puVar27[3];
      uStack_2f8 = puVar27[4];
      uStack_2f4 = puVar27[5];
      uStack_2f0 = puVar27[6];
      pppppbVar17 = (byte *****)&local_2fc;
      *puVar27 = local_308;
      puVar27[1] = local_304;
      puVar27[2] = local_300;
      puVar27[3] = local_2fc;
      puVar27[4] = uStack_2f8;
      puVar27[5] = uStack_2f4;
      puVar27[6] = uStack_2f0;
      if ((char)local_1fc == '\x05') goto LAB_0152bd74;
      local_3c = (undefined4 *****)CONCAT31(local_3c._1_3_,(char)local_1fc);
      uVar8 = *puVar12;
      uVar20 = puVar12[1];
      *(undefined4 *)((int)puVar13 + 7) = *(undefined4 *)((int)puVar12 + 7);
      puVar13[1] = uVar20;
      *puVar13 = uVar8;
      local_2c = &LAB_016ce1a8;
      local_30 = &local_3c;
      FUN_00600d2c(&local_48,&DAT_00590e71,&local_30);
      ppppbVar6 = local_40;
      ppppbVar5 = local_44;
      ppppbVar4 = local_48;
      pppppbVar17 = extraout_r1_05;
      if (local_48 != (byte ****)0x80000000) {
        if (pppppbVar10 == local_64) {
          FUN_016ca96c(&local_64,pppppbVar10,1,4,0xc);
          local_39c = local_60;
        }
        local_5c = (byte *****)((int)pppppbVar10 + 1);
        pppppbVar17 = (byte *****)(local_39c + (int)pppppbVar10 * 3);
        *pppppbVar17 = ppppbVar4;
        pppppbVar17[1] = ppppbVar5;
        pppppbVar17[2] = ppppbVar6;
        pppppbVar10 = local_5c;
      }
    }
    else {
      local_58 = (undefined4 *****)0x0;
      local_308 = (byte *****)*puVar27;
      local_304 = (byte *****)puVar27[1];
      local_300 = (byte *****)puVar27[2];
      local_2fc = (byte *****)puVar27[3];
      uStack_2f8 = puVar27[4];
      uStack_2f4 = puVar27[5];
      uStack_2f0 = puVar27[6];
      *puVar27 = local_308;
      puVar27[1] = local_304;
      puVar27[2] = local_300;
      puVar27[3] = local_2fc;
      puVar27[4] = uStack_2f8;
      puVar27[5] = uStack_2f4;
      puVar27[6] = uStack_2f0;
      FUN_016c3a1c(&local_200);
      pppppbVar17 = extraout_r1_06;
LAB_0152bd74:
      local_48 = (byte ****)0x80000000;
    }
  }
  local_17c = local_60;
  local_180 = local_64;
LAB_0152b7f8:
  local_168 = local_80;
  local_164 = local_7c;
  local_174 = (byte *****)CONCAT31(CONCAT12(local_76,local_78),1);
  local_170 = pppppbVar15;
  local_16c = pppppbVar16;
  goto LAB_0152b838;
  while( true ) {
    local_308 = (byte *****)*puVar27;
    local_304 = (byte *****)puVar27[1];
    local_300 = (byte *****)puVar27[2];
    local_2fc = (byte *****)puVar27[3];
    uStack_2f8 = puVar27[4];
    uStack_2f4 = puVar27[5];
    uStack_2f0 = puVar27[6];
    pppppbVar15 = (byte *****)&local_2fc;
    *puVar27 = local_308;
    puVar27[1] = local_304;
    puVar27[2] = local_300;
    puVar27[3] = local_2fc;
    puVar27[4] = uStack_2f8;
    puVar27[5] = uStack_2f4;
    puVar27[6] = uStack_2f0;
    if ((char)local_1fc == '\x05') goto LAB_0152b608;
    local_3c = (undefined4 *****)CONCAT31(local_3c._1_3_,(char)local_1fc);
    uVar8 = *puVar12;
    uVar20 = puVar12[1];
    *(undefined4 *)((int)puVar13 + 7) = *(undefined4 *)((int)puVar12 + 7);
    puVar13[1] = uVar20;
    *puVar13 = uVar8;
    local_54 = (byte *****)&LAB_016ce1a8;
    local_58 = &local_3c;
    uVar30 = FUN_00600d2c(&local_48,&DAT_00590e71,&local_58);
    ppppbVar6 = local_40;
    ppppbVar5 = local_44;
    ppppbVar4 = local_48;
    if (local_48 != (byte ****)0x80000000) break;
LAB_0152b614:
    if (local_70 != (undefined4 *****)0x0) {
      uVar30 = CONCAT44(local_68,local_6c);
    }
    if (local_70 == (undefined4 *****)0x0 || (int)(uVar30 >> 0x20) == (int)uVar30) {
      pppppbVar10 = (byte *****)0x0;
      local_17c = (undefined4 *)&DAT_00000004;
      local_180 = (byte *****)0x0;
      goto LAB_0152b634;
    }
    FUN_016cd97c(&local_200,&local_70);
    if (local_200 != (byte *****)0x8000002d) {
      local_70 = (undefined4 *****)0x0;
      local_308 = (byte *****)*puVar27;
      local_304 = (byte *****)puVar27[1];
      local_300 = (byte *****)puVar27[2];
      local_2fc = (byte *****)puVar27[3];
      uStack_2f8 = puVar27[4];
      uStack_2f4 = puVar27[5];
      uStack_2f0 = puVar27[6];
      *puVar27 = local_308;
      puVar27[1] = local_304;
      puVar27[2] = local_300;
      puVar27[3] = local_2fc;
      puVar27[4] = uStack_2f8;
      puVar27[5] = uStack_2f4;
      puVar27[6] = uStack_2f0;
      FUN_016c3a1c(&local_200);
      pppppbVar15 = extraout_r1_01;
LAB_0152b608:
      uVar30 = CONCAT44(pppppbVar15,&DAT_80000000);
      local_48 = (byte ****)0x80000000;
      goto LAB_0152b614;
    }
  }
  local_3a4 = (undefined4 *)thunk_FUN_016d4a50(0x30);
  if (local_3a4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x30);
  }
  *local_3a4 = ppppbVar4;
  local_3a4[1] = ppppbVar5;
  local_3a4[2] = ppppbVar6;
  local_5c = (byte *****)&DAT_00000001;
  local_64 = (byte *****)&DAT_00000004;
  local_50 = local_68;
  local_54 = local_6c;
  local_58 = local_70;
  pppppbVar15 = local_6c;
  pppppbVar10 = (byte *****)&DAT_00000001;
  local_60 = local_3a4;
  while( true ) {
    pppppbVar16 = (byte *****)0x0;
    if (local_58 != (undefined4 *****)0x0) {
      pppppbVar15 = local_50;
      pppppbVar16 = local_54;
    }
    if (!(local_58 != (undefined4 *****)0x0 && pppppbVar15 != pppppbVar16)) break;
    FUN_016cd97c(&local_200,&local_58);
    if (local_200 == (byte *****)0x8000002d) {
      local_308 = (byte *****)*puVar27;
      local_304 = (byte *****)puVar27[1];
      local_300 = (byte *****)puVar27[2];
      local_2fc = (byte *****)puVar27[3];
      uStack_2f8 = puVar27[4];
      uStack_2f4 = puVar27[5];
      uStack_2f0 = puVar27[6];
      pppppbVar15 = (byte *****)&local_2fc;
      *puVar27 = local_308;
      puVar27[1] = local_304;
      puVar27[2] = local_300;
      puVar27[3] = local_2fc;
      puVar27[4] = uStack_2f8;
      puVar27[5] = uStack_2f4;
      puVar27[6] = uStack_2f0;
      if ((char)local_1fc == '\x05') goto LAB_0152bb9c;
      local_3c = (undefined4 *****)CONCAT31(local_3c._1_3_,(char)local_1fc);
      uVar8 = *puVar12;
      uVar20 = puVar12[1];
      *(undefined4 *)((int)puVar13 + 7) = *(undefined4 *)((int)puVar12 + 7);
      puVar13[1] = uVar20;
      *puVar13 = uVar8;
      local_2c = &LAB_016ce1a8;
      local_30 = &local_3c;
      FUN_00600d2c(&local_48,&DAT_00590e71,&local_30);
      ppppbVar6 = local_40;
      ppppbVar5 = local_44;
      ppppbVar4 = local_48;
      pppppbVar15 = extraout_r1_03;
      if (local_48 != (byte ****)0x80000000) {
        if (pppppbVar10 == local_64) {
          FUN_016ca96c(&local_64,pppppbVar10,1,4,0xc);
          local_3a4 = local_60;
        }
        local_5c = (byte *****)((int)pppppbVar10 + 1);
        pppppbVar15 = (byte *****)(local_3a4 + (int)pppppbVar10 * 3);
        *pppppbVar15 = ppppbVar4;
        pppppbVar15[1] = ppppbVar5;
        pppppbVar15[2] = ppppbVar6;
        pppppbVar10 = local_5c;
      }
    }
    else {
      local_58 = (undefined4 *****)0x0;
      local_308 = (byte *****)*puVar27;
      local_304 = (byte *****)puVar27[1];
      local_300 = (byte *****)puVar27[2];
      local_2fc = (byte *****)puVar27[3];
      uStack_2f8 = puVar27[4];
      uStack_2f4 = puVar27[5];
      uStack_2f0 = puVar27[6];
      *puVar27 = local_308;
      puVar27[1] = local_304;
      puVar27[2] = local_300;
      puVar27[3] = local_2fc;
      puVar27[4] = uStack_2f8;
      puVar27[5] = uStack_2f4;
      puVar27[6] = uStack_2f0;
      FUN_016c3a1c(&local_200);
      pppppbVar15 = extraout_r1_04;
LAB_0152bb9c:
      local_48 = (byte ****)0x80000000;
    }
  }
  local_17c = local_60;
  local_180 = local_64;
LAB_0152b634:
  local_174 = local_388;
  local_170 = local_384;
  local_16c = local_380;
  local_168 = local_37c;
  local_164 = pppppbStack_378;
LAB_0152b838:
  local_178 = pppppbVar10;
  if (local_180 == (byte *****)0x8000002d) {
LAB_0152b86c:
    *param_1 = 0x80000029;
  }
  else {
LAB_0152b850:
    FUN_0152f154(&local_280,&local_180);
    if (local_280 == 0x80000029) goto LAB_0152b86c;
    *param_1 = local_280;
    param_1[1] = uStack_27c;
    param_1[2] = uStack_278;
    param_1[3] = uStack_274;
    param_1[4] = local_270;
    param_1[5] = uStack_26c;
    param_1[6] = uStack_268;
    param_1[7] = uStack_264;
  }
  if (uVar25 != 0) {
LAB_0152b880:
    thunk_FUN_016d3fb4(iVar9);
  }
LAB_0152b888:
  if ((local_100 & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_fc);
  return;
}

