// FUN_018f929c @ 018f929c size=1924 calls_out=16 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018f929c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 char *param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *extraout_r1;
  undefined4 *puVar9;
  char **ppcVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *extraout_r2;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined4 *local_250;
  uint local_24c;
  char *local_248;
  undefined4 local_244;
  char *local_240;
  char *local_23c;
  char *local_238;
  undefined4 *puStack_234;
  char *pcStack_230;
  char *pcStack_22c;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  char *local_15c;
  undefined4 *local_158;
  int local_144;
  int local_140;
  undefined2 local_13c;
  undefined1 local_13a;
  char *local_138 [8];
  char *local_118;
  undefined4 local_114;
  char *local_110;
  undefined4 local_10c;
  char *local_108;
  char *pcStack_104;
  char *pcStack_100;
  char *pcStack_fc;
  undefined2 local_f4;
  undefined1 local_f2;
  int local_f0 [8];
  int local_d0 [8];
  char *local_b0;
  undefined4 *local_ac;
  char *local_a8;
  char *local_a4;
  char *local_a0;
  undefined4 *puStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  char *local_90;
  undefined4 *local_8c;
  char *local_88;
  char *pcStack_84;
  undefined4 local_80;
  undefined4 *local_7c;
  char *local_78;
  char *local_74;
  undefined4 *local_70;
  char *local_6c;
  int local_68 [8];
  int local_48 [9];
  
  FUN_01917cdc(&local_1c8,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  if (local_1c8 == 1) {
    puVar7 = (undefined4 *)((uint)&local_248 | 4);
    *puVar7 = local_1c0;
    puVar7[1] = uStack_1bc;
    puVar7[2] = uStack_1b8;
    puVar7[3] = uStack_1b4;
    puVar7[4] = local_1b0;
    puVar7[5] = uStack_1ac;
    puVar7[6] = uStack_1a8;
    puVar7[7] = uStack_1a4;
    uVar11 = puVar7[1];
    uVar13 = puVar7[2];
    uVar17 = puVar7[3];
    *param_1 = *puVar7;
    param_1[1] = uVar11;
    param_1[2] = uVar13;
    param_1[3] = uVar17;
    uVar11 = puVar7[5];
    uVar13 = puVar7[6];
    uVar17 = puVar7[7];
    param_1[4] = puVar7[4];
    param_1[5] = uVar11;
    param_1[6] = uVar13;
    param_1[7] = uVar17;
    return;
  }
  FUN_01bed4e2(&local_248,(uint)&local_1c8 | 4,0x7c);
  FUN_01bed4e2(&local_1c8,&local_248,0x7c);
  uVar14 = *(uint *)(param_2 + 8);
  uVar11 = 0;
  bVar20 = 0x3ffffffe < uVar14;
  bVar19 = uVar14 == 0x3fffffff;
  uVar1 = uVar14 * 4;
  if (uVar14 < 0x40000000) {
    bVar20 = 0x7ffffffb < uVar1;
    bVar19 = uVar1 == 0x7ffffffc;
  }
  if (bVar20 && !bVar19) {
LAB_018f9344:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar11,uVar1);
  }
  iVar18 = *(int *)(param_2 + 4);
  if (uVar1 == 0) {
    iVar4 = 4;
    local_24c = 0;
  }
  else {
    uVar11 = 4;
    iVar4 = FUN_01298504(uVar1,4);
    local_24c = uVar14;
    if (iVar4 == 0) goto LAB_018f9344;
  }
  if (uVar14 == 0) {
    local_13a = 2;
  }
  else {
    iVar15 = uVar14 * 0x50;
    local_140 = 0;
    do {
      *(int *)(iVar4 + local_140 * 4) = iVar18;
      iVar18 = iVar18 + 0x50;
      local_140 = local_140 + 1;
      iVar15 = iVar15 + -0x50;
    } while (iVar15 != 0);
    local_13a = *(undefined1 *)(param_2 + 0x22);
    local_13c = *(undefined2 *)(param_2 + 0x20);
    local_144 = iVar4;
  }
  ppcVar10 = &local_248;
  FUN_0191df28(ppcVar10,&local_1c8,*(undefined4 *)(*(int *)(param_2 + 0xc) + 0xc),
               *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x10),param_4,param_5,&local_144);
  pcVar16 = local_248;
  if (local_248 == (char *)0x80000029) {
    if (*param_6 == '\x01') {
      pcVar16 = &SUB_00000004;
      if (param_6[1] != '\0') {
        pcVar16 = &DAT_00000010;
      }
      local_88 = (char *)0x0;
      local_8c = local_158;
      local_90 = local_15c;
      while (FUN_01af5c38(ppcVar10,&local_90), local_248 != (char *)0x8000002e) {
        pcVar12 = (char *)((uint)local_244 & 0xff);
        if (local_248 != (char *)0x8000002d) {
          local_f2 = *(undefined1 *)((undefined2 *)((uint)ppcVar10 | 5) + 1);
          local_f4 = *(undefined2 *)((uint)ppcVar10 | 5);
          local_b0 = local_238;
          local_ac = puStack_234;
          local_a8 = pcStack_230;
          local_a4 = pcStack_22c;
          local_118 = local_248;
LAB_018f9904:
          ppcVar10 = &local_b0;
          local_114._0_3_ = CONCAT21(local_f4,(char)pcVar12);
          local_114 = (undefined4 *)CONCAT13(local_f2,(undefined3)local_114);
          local_10c = local_23c;
          local_110 = local_240;
          goto LAB_018f9930;
        }
        if (pcVar12 == (char *)0x2 && local_23c == pcVar16) {
          pcVar5 = local_240;
          pcVar8 = pcVar16;
          pcVar12 = param_6 + 2;
          do {
            if (pcVar8 == (char *)0x0) {
              local_240 = pcVar5;
              local_118 = (char *)0x8000002d;
              goto LAB_018f9904;
            }
            cVar2 = *pcVar5;
            pcVar8 = pcVar8 + -1;
            cVar3 = *pcVar12;
            pcVar5 = pcVar5 + 1;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 == cVar3);
        }
      }
      FUN_01bed4e2((int)&local_10c + 1,param_6 + 1,0x11);
      local_78 = (char *)0x0;
      local_7c = local_158;
      local_80 = local_15c;
      do {
        FUN_01af5c38(local_f0,&local_80);
        if (local_f0[0] == -0x7fffffd2) {
          pcVar16 = (char *)0x0;
          local_114 = (undefined4 *)&SUB_00000004;
          pcVar12 = (char *)0x0;
          goto LAB_018f9954;
        }
        FUN_01aefe58(&local_248,local_f0);
        pcVar5 = local_240;
        pcVar12 = local_244;
        pcVar16 = local_248;
      } while (local_248 == &DAT_80000000);
      puVar7 = (undefined4 *)thunk_FUN_01be5118(0x30);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x30);
      }
      *puVar7 = pcVar16;
      puVar7[1] = pcVar12;
      puVar7[2] = pcVar5;
      local_74 = &SUB_00000004;
      local_6c = &DAT_00000001;
      local_90 = local_80;
      local_8c = local_7c;
      local_88 = local_78;
      pcVar16 = &DAT_00000001;
      local_70 = puVar7;
      while (FUN_01af5c38(local_d0,&local_90), local_d0[0] != -0x7fffffd2) {
        FUN_01aefe58(&local_248,local_d0);
        pcVar8 = local_240;
        pcVar5 = local_244;
        pcVar12 = local_248;
        if (local_248 != &DAT_80000000) {
          if (pcVar16 == local_74) {
            FUN_006520b4(&local_74,pcVar16,1,4,0xc);
            puVar7 = local_70;
          }
          local_6c = pcVar16 + 1;
          puVar9 = puVar7 + (int)pcVar16 * 3;
          *puVar9 = pcVar12;
          puVar9[1] = pcVar5;
          puVar9[2] = pcVar8;
          pcVar16 = local_6c;
        }
      }
      local_114 = local_70;
      pcVar12 = local_74;
LAB_018f9954:
      local_10c = (char *)CONCAT31(local_10c._1_3_,1);
      local_110 = pcVar16;
      goto LAB_018f9964;
    }
    local_6c = (char *)0x0;
    puVar6 = (undefined2 *)((uint)&local_b0 | 5);
    uVar11 = *(undefined4 *)(param_6 + 8);
    uVar13 = *(undefined4 *)(param_6 + 0xc);
    local_70 = local_158;
    local_74 = local_15c;
    do {
      while( true ) {
        do {
          FUN_01af5c38(&local_b0,&local_74);
          if (local_b0 == (char *)0x8000002e) {
            FUN_01938d70((uint)&local_248 | 4,param_6 + 4);
            pcVar12 = (char *)0x0;
            local_7c = local_158;
            local_248 = (char *)((uint)local_248 & 0xffffff00);
            local_78 = (char *)0x0;
            local_80 = local_15c;
            goto LAB_018f95f8;
          }
          if (local_b0 != (char *)0x8000002d) {
            local_80 = (char *)CONCAT22(CONCAT11(local_80._3_1_,*(undefined1 *)(puVar6 + 1)),*puVar6
                                       );
            local_90 = local_a0;
            local_8c = puStack_9c;
            local_88 = pcStack_98;
            pcStack_84 = pcStack_94;
            local_240 = local_a8;
            local_23c = local_a4;
            local_118 = local_b0;
            local_244._0_1_ = (char)local_ac;
            goto LAB_018f9738;
          }
        } while ((char)local_ac != '\0');
        FUN_01af7458(&local_248,local_a8,local_a4,0,uVar11,uVar13);
        if (local_248 == (char *)0x8000002d) break;
        if (local_248 != (char *)0x80000011) {
          local_80 = (char *)CONCAT22(CONCAT11(local_80._3_1_,local_244._3_1_),local_244._1_2_);
          local_90 = local_238;
          local_8c = puStack_234;
          local_88 = pcStack_230;
          pcStack_84 = pcStack_22c;
          local_118 = local_248;
          goto LAB_018f9738;
        }
        FUN_01af73c0(&local_248);
      }
    } while ((char)local_244 == '\0');
    local_244._0_1_ = '\0';
    local_240 = extraout_r1;
    local_23c = extraout_r2;
    local_118 = (char *)0x8000002d;
LAB_018f9738:
    ppcVar10 = &local_90;
    local_114._0_3_ = CONCAT21((undefined2)local_80,(char)local_244);
    local_114 = (undefined4 *)CONCAT13(local_80._2_1_,(undefined3)local_114);
    local_110 = local_240;
    local_10c = local_23c;
LAB_018f9930:
    local_108 = *ppcVar10;
    pcStack_104 = ppcVar10[1];
    pcStack_100 = ppcVar10[2];
    pcStack_fc = ppcVar10[3];
    goto LAB_018f9968;
  }
LAB_018f94f0:
  puVar7 = (undefined4 *)((uint)ppcVar10 | 4);
  uVar11 = puVar7[1];
  uVar13 = puVar7[2];
  param_1[1] = *puVar7;
  param_1[2] = uVar11;
  param_1[3] = uVar13;
  uVar11 = puVar7[4];
  uVar13 = puVar7[5];
  uVar17 = puVar7[6];
  param_1[4] = puVar7[3];
  param_1[5] = uVar11;
  param_1[6] = uVar13;
  param_1[7] = uVar17;
  goto LAB_018f9990;
  while (FUN_01af733c(&local_b0,local_68), pcVar5 = local_a8, puVar7 = local_ac, pcVar16 = local_b0,
        local_b0 == &DAT_80000000) {
LAB_018f95f8:
    FUN_01af5c38(local_68,&local_80);
    if (local_68[0] == -0x7fffffd2) {
      local_114 = (undefined4 *)&SUB_00000004;
      pcVar16 = (char *)0x0;
      goto LAB_018f9780;
    }
  }
  local_250 = (undefined4 *)thunk_FUN_01be5118(0x30);
  if (local_250 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x30);
  }
  *local_250 = pcVar16;
  local_250[1] = puVar7;
  local_250[2] = pcVar5;
  local_74 = &SUB_00000004;
  local_6c = &DAT_00000001;
  local_90 = local_80;
  local_8c = local_7c;
  local_88 = local_78;
  pcVar16 = &DAT_00000001;
  local_70 = local_250;
  while (FUN_01af5c38(local_48,&local_90), local_48[0] != -0x7fffffd2) {
    FUN_01af733c(&local_b0,local_48);
    pcVar5 = local_a8;
    puVar7 = local_ac;
    pcVar12 = local_b0;
    if (local_b0 != &DAT_80000000) {
      if (pcVar16 == local_74) {
        FUN_006520b4(&local_74,pcVar16,1,4,0xc);
        local_250 = local_70;
      }
      local_6c = pcVar16 + 1;
      puVar9 = local_250 + (int)pcVar16 * 3;
      *puVar9 = pcVar12;
      puVar9[1] = puVar7;
      puVar9[2] = pcVar5;
      pcVar16 = local_6c;
    }
  }
  pcVar12 = local_74;
  local_114 = local_70;
LAB_018f9780:
  local_10c = local_248;
  local_108 = local_244;
  pcStack_104 = local_240;
  pcStack_100 = local_23c;
  pcStack_fc = local_238;
  local_110 = pcVar16;
LAB_018f9964:
  local_118 = pcVar12;
LAB_018f9968:
  if (local_118 != (char *)0x8000002d) {
    ppcVar10 = local_138;
    FUN_01917d68(ppcVar10,&local_118);
    pcVar16 = local_138[0];
    if (local_138[0] != (char *)0x80000029) goto LAB_018f94f0;
  }
  pcVar16 = (char *)0x80000029;
LAB_018f9990:
  *param_1 = pcVar16;
  FUN_0134aee0(local_24c,iVar4,4,4);
  if (local_1c8 != -0x80000000) {
    FUN_0134bd64(local_1c8,local_1c4);
  }
  return;
}

