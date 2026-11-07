// FUN_019b0c40 @ 019b0c40 size=5976 calls_out=27 calls_in=2
// strings: /pro | c/se | lf/c | grou | /sys/fs/cgroup | cpu.cfs_period_us

void FUN_019b0c40(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char acVar7 [4];
  char acVar8 [4];
  char acVar9 [4];
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  char acVar15 [4];
  char acVar16 [4];
  undefined1 uVar17;
  int iVar18;
  int iVar19;
  char acVar20 [4];
  char extraout_r1 [4];
  char extraout_r1_00 [4];
  char extraout_r1_01 [4];
  char extraout_r1_02 [4];
  code *pcVar21;
  char extraout_r1_03 [4];
  char extraout_r1_04 [4];
  char extraout_r1_05 [4];
  char extraout_r1_06 [4];
  char extraout_r1_07 [4];
  char extraout_r1_08 [4];
  char extraout_r1_09 [4];
  char extraout_r1_10 [4];
  char extraout_r1_11 [4];
  int iVar22;
  byte *pbVar23;
  int iVar24;
  uint uVar25;
  char acVar26 [4];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  byte bVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined4 uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  undefined4 *puVar59;
  byte *pbVar60;
  int iVar61;
  bool bVar62;
  undefined8 uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  uint local_224;
  uint local_220;
  uint local_218;
  char *local_214;
  byte local_210;
  int local_208;
  int local_204;
  int local_200;
  uint local_1fc;
  char local_1f8 [4];
  uint local_1f4;
  uint local_1f0;
  char local_1ec [4];
  char local_1e8 [4];
  char local_1e0 [4];
  char local_1dc [4];
  int local_1d8;
  int local_1d4;
  char local_1d0 [4];
  undefined2 local_1cc;
  char local_1c8 [4];
  char local_1c4 [4];
  int *local_1bc;
  char local_1b8 [4];
  char local_1b4 [4];
  char local_1b0 [4];
  char local_1ac [4];
  char local_1a8 [4];
  uint local_1a4;
  uint local_1a0;
  char local_19c [4];
  char local_198 [4];
  undefined4 local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  char local_34 [4];
  char local_30 [4];
  char local_2c [4];
  
  local_204 = thunk_FUN_01be5118(0x80);
  if (local_204 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x80);
  }
  local_1d4 = 0x1b6;
  local_200 = 0;
  local_1d0[0] = '\x01';
  local_1d0[1] = '\0';
  local_1d0[2] = '\0';
  local_1d0[3] = '\0';
  local_208 = 0x80;
  local_1d8 = 0;
  local_1cc = 0;
  local_1b8[0] = '/';
  local_1b8[1] = 'p';
  local_1b8[2] = 'r';
  local_1b8[3] = 'o';
  local_1b4[0] = 'c';
  local_1b4[1] = '/';
  local_1b4[2] = 's';
  local_1b4[3] = 'e';
  local_1b0[0] = 'l';
  local_1b0[1] = 'f';
  local_1b0[2] = '/';
  local_1b0[3] = 'c';
  local_1ac[0] = 'g';
  local_1ac[1] = 'r';
  local_1ac[2] = 'o';
  local_1ac[3] = 'u';
  local_1a8[0] = 'p';
  local_1a8[1] = '\0';
  FUN_012fbc58(local_34,local_1b8,0x12);
  if (local_34 == (char  [4])0x1) {
    local_1f0 = 2;
    local_1ec = (char  [4])&DAT_01d27a70;
LAB_019b0d18:
    acVar15 = local_1ec;
    if ((local_1f0 & 0xff) == 4) {
      if (local_1ec != (char  [4])0xffffffff) goto LAB_019b0d30;
    }
    else if ((local_1f0 & 0xff) == 3) {
      uVar54 = *(undefined4 *)local_1ec;
      puVar59 = *(undefined4 **)((int)local_1ec + 4);
      pcVar21 = (code *)*puVar59;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(uVar54);
      }
      if (puVar59[1] != 0) {
        thunk_FUN_01be4678(uVar54);
      }
      thunk_FUN_01be4678(acVar15);
    }
  }
  else {
    FUN_01980058(&local_1f0,local_30,&local_1d8);
    if ((char)local_1f0 != '\x04') goto LAB_019b0d18;
LAB_019b0d30:
    acVar16 = local_1ec;
    local_1c8 = local_1ec;
    FUN_019a65b4(&local_1fc,local_1c8,&local_208);
    acVar15 = local_1f8;
    if ((local_1fc & 0xff) == 4) {
      FUN_01bf01d6(acVar16);
      local_220 = 0x80000000;
      iVar24 = local_200;
      iVar12 = local_204;
LAB_019b0d64:
      if (iVar24 != 0) {
        iVar18 = iVar12 + iVar24;
        iVar10 = iVar12;
LAB_019b0d7c:
        iVar22 = 0;
        do {
          cVar1 = *(char *)(iVar10 + iVar22);
          if (cVar1 == '\n') {
            iVar24 = iVar24 - (iVar22 + 1);
            iVar12 = iVar10 + iVar22 + 1;
            iVar6 = iVar22;
            break;
          }
          iVar22 = iVar22 + 1;
          iVar12 = iVar10;
          iVar6 = iVar24;
        } while (iVar10 + iVar22 != iVar18);
        if (iVar6 != 0) {
          iVar18 = 0;
          do {
            if (*(char *)(iVar10 + iVar18) == ':') {
              iVar22 = iVar6 - (iVar18 + 1);
              if (iVar22 == 0) {
                if (local_220 == 0x80000000) goto LAB_019b0fe4;
                goto LAB_019b0e58;
              }
              iVar19 = iVar10 + iVar18 + 1;
              iVar61 = 0;
              goto LAB_019b0e1c;
            }
            iVar18 = iVar18 + 1;
          } while (iVar6 != iVar18);
        }
        if ((cVar1 == '\n') && (iVar24 != 0)) goto LAB_019b0d78;
      }
      goto LAB_019b1124;
    }
    if ((local_1fc & 0xff) == 3) {
      uVar54 = *(undefined4 *)local_1f8;
      puVar59 = *(undefined4 **)((int)local_1f8 + 4);
      pcVar21 = (code *)*puVar59;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(uVar54);
      }
      if (puVar59[1] != 0) {
        thunk_FUN_01be4678(uVar54);
      }
      thunk_FUN_01be4678(acVar15);
    }
    FUN_01bf01d6(acVar16);
  }
LAB_019b112c:
  local_218 = 0xffffffff;
  goto joined_r0x019b22b8;
  while( true ) {
    iVar61 = iVar61 + 1;
    iVar4 = iVar19;
    iVar5 = iVar22;
    if ((iVar18 - iVar6) + 1 + iVar61 == 0) break;
LAB_019b0e1c:
    cVar2 = *(char *)(iVar10 + iVar18 + 1 + iVar61);
    if (cVar2 == ':') {
      iVar22 = iVar22 - (iVar61 + 1);
      iVar4 = iVar19 + iVar61 + 1;
      iVar5 = iVar61;
      break;
    }
  }
  if (iVar5 == 0) {
    if (local_220 == 0x80000000) goto LAB_019b0fd8;
LAB_019b0e58:
    if ((cVar1 != '\n') || (iVar24 == 0)) goto LAB_019b171c;
  }
  else {
    FUN_012fbd94(local_34,iVar19,iVar5);
    if (local_34 == (char  [4])0x0) {
      local_194 = CONCAT22(local_194._2_2_,1);
      local_1a0 = CONCAT31(local_1a0._1_3_,1);
      local_198[0] = local_2c[0];
      local_198[1] = local_2c[1];
      local_198[2] = local_2c[2];
      local_198[3] = local_2c[3];
      local_19c[0] = '\0';
      local_19c[1] = '\0';
      local_19c[2] = '\0';
      local_19c[3] = '\0';
      local_1a4 = 0x2c;
      local_1a8[0] = local_2c[0];
      local_1a8[1] = local_2c[1];
      local_1a8[2] = local_2c[2];
      local_1a8[3] = local_2c[3];
      local_1b4[0] = local_30[0];
      local_1b4[1] = local_30[1];
      local_1b4[2] = local_30[2];
      local_1b4[3] = local_30[3];
      local_1b0[0] = local_2c[0];
      local_1b0[1] = local_2c[1];
      local_1b0[2] = local_2c[2];
      local_1b0[3] = local_2c[3];
      local_1ac[0] = '\0';
      local_1ac[1] = '\0';
      local_1ac[2] = '\0';
      local_1ac[3] = '\0';
      local_1b8[0] = ',';
      local_1b8[1] = '\0';
      local_1b8[2] = '\0';
      local_1b8[3] = '\0';
      do {
        acVar15 = local_1b4;
        FUN_01980418(&local_1d8,local_1b8);
        if (local_1d8 == 1) {
          iVar10 = local_1d4 - (int)local_19c;
          acVar16 = local_1d0;
        }
        else {
          if (local_194._1_1_ != '\0') break;
          local_194._0_2_ = CONCAT11(1,(char)local_194);
          if (((char)local_194 != '\x01') && (local_198 == local_19c)) break;
          iVar10 = (int)local_198 - (int)local_19c;
          acVar15 = local_1b4;
          acVar16 = local_19c;
        }
        if (iVar10 == 3) {
          iVar10 = (int)acVar15 + (int)local_19c;
          local_19c = acVar16;
          iVar10 = thunk_FUN_01bed842(iVar10,"cpu",3);
          acVar16 = local_19c;
          if (iVar10 == 0) {
            if (cVar2 == ':') goto LAB_019b0ff8;
            if ((local_220 & 0x7fffffff) == 0) goto LAB_019b0fe4;
            thunk_FUN_01be4678(local_214);
            local_220 = 0x80000000;
            if (cVar1 == '\n') goto LAB_019b0d64;
            goto LAB_019b112c;
          }
        }
        local_19c = acVar16;
      } while (local_194._1_1_ != '\x01');
    }
    if ((cVar1 != '\n') || (iVar24 == 0)) goto LAB_019b1124;
  }
LAB_019b0d78:
  iVar18 = iVar12 + iVar24;
  iVar10 = iVar12;
  goto LAB_019b0d7c;
LAB_019b0fd8:
  local_220 = 0;
  if (cVar2 == ':') {
LAB_019b0ff8:
    if (iVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(1,0,0,&DAT_01d27a54);
    }
    local_224 = iVar22 - 1;
    if (local_224 == 0) {
      pcVar11 = &DAT_00000001;
    }
    else {
      pcVar11 = (char *)FUN_01298504(local_224,1);
      if (pcVar11 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,local_224);
      }
    }
    local_210 = iVar5 == 0;
    FUN_01bed4e2(pcVar11,iVar4 + 1);
    uVar13 = local_220 & 0x7fffffff;
    local_220 = local_224;
    if (uVar13 != 0) {
      thunk_FUN_01be4678(local_214);
    }
  }
  else {
LAB_019b0fe4:
    local_220 = 0x80000000;
    pcVar11 = local_214;
  }
  local_214 = pcVar11;
  if (cVar1 != '\n') {
LAB_019b1124:
    if (local_220 != 0x80000000) {
LAB_019b171c:
      if ((local_210 & 1) == 0) {
        acVar15 = (char  [4])thunk_FUN_01be5118(0x80);
        if (acVar15 == (char  [4])0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x80);
        }
        local_34[0] = -0x80;
        local_34[1] = '\0';
        local_34[2] = '\0';
        local_34[3] = '\0';
        local_2c[0] = '\0';
        local_2c[1] = '\0';
        local_2c[2] = '\0';
        local_2c[3] = '\0';
        local_30 = acVar15;
        iVar12 = thunk_FUN_01be5118(0x14);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x14);
        }
        local_1d0[0] = '\0';
        local_1d0[1] = '\0';
        local_1d0[2] = '\0';
        local_1d0[3] = '\0';
        local_1d8 = 0x14;
        iVar24 = 0;
        local_1d4 = iVar12;
        goto LAB_019b1898;
      }
      acVar15 = (char  [4])thunk_FUN_01be5118(0x80);
      if (acVar15 == (char  [4])0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x80);
      }
      local_1fc = 0x80;
      local_1f8 = acVar15;
      acVar16 = (char  [4])thunk_FUN_01be5118(0x14);
      if (acVar16 == (char  [4])0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x14);
      }
      local_1f0 = 0x14;
      *(undefined4 *)acVar15 = 0x7379732f;
      local_1f4 = 0;
      *(undefined4 *)((int)acVar15 + 4) = 0x2f73662f;
      *(undefined4 *)((int)acVar15 + 8) = 0x6f726763;
      *(undefined2 *)((int)acVar15 + 0xc) = 0x7075;
      local_1e8[0] = '\0';
      local_1e8[1] = '\0';
      local_1e8[2] = '\0';
      local_1e8[3] = '\0';
      if ((local_224 == 0) || (*local_214 != '/')) {
        local_1f4 = 0xf;
        *(undefined1 *)((int)acVar15 + 0xe) = 0x2f;
      }
      local_1ec = acVar16;
      if (0x80 - local_1f4 < local_224) {
        FUN_0197ac30(&local_1fc,local_1f4,local_224,1,1);
        acVar15 = local_1f8;
      }
      uVar13 = local_1f4;
      FUN_01bed4e2((int)acVar15 + local_1f4,local_214,local_224);
      local_1f4 = uVar13 + local_224;
      if (local_1f4 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = local_1f4;
        if (*(char *)((int)acVar15 + local_1f4 + -1) != '/') {
          if (local_1fc == local_1f4) {
            FUN_0197ac30(&local_1fc,local_1f4,1,1,1);
            acVar15 = local_1f8;
          }
          *(undefined1 *)((int)acVar15 + local_1f4) = 0x2f;
          uVar13 = local_1f4 + 1;
          local_1f4 = uVar13;
        }
      }
      if (local_1fc - uVar13 < 0x12) {
        FUN_0197ac30(&local_1fc,uVar13,0x12,1,1);
        uVar13 = local_1f4;
        acVar15 = local_1f8;
      }
      FUN_01bed4e2((int)acVar15 + uVar13,&DAT_005264e0,0x12);
      local_1f4 = uVar13 + 0x12;
      FUN_019ad8f0(local_1b8,acVar15);
      acVar26 = local_1b4;
      uVar13 = (uint)(byte)local_1b8[0];
      acVar16 = extraout_r1_01;
      if ((uVar13 == 4) &&
         (acVar16 = (char  [4])((uint)local_1b8 >> 8 & 0xff), ((uint)local_1b8 & 0x100) != 0)) {
        FUN_019afed4(&local_1fc);
        local_218 = 0xffffffff;
        goto LAB_019b1b10;
      }
      if ((uVar13 != 4) && (uVar13 == 3)) {
        uVar54 = *(undefined4 *)local_1b4;
        puVar59 = *(undefined4 **)((int)local_1b4 + 4);
        pcVar21 = (code *)*puVar59;
        if (pcVar21 != (code *)0x0) {
          (*pcVar21)(uVar54);
        }
        if (puVar59[1] != 0) {
          thunk_FUN_01be4678(uVar54);
        }
        thunk_FUN_01be4678(acVar26);
        acVar16 = extraout_r1_05;
      }
      if (local_1f0 != 0) {
        thunk_FUN_01be4678(local_1ec);
        acVar16 = extraout_r1_06;
      }
      if (local_1fc != 0) {
        thunk_FUN_01be4678(acVar15);
        acVar16 = extraout_r1_07;
      }
      local_218 = 0xffffffff;
      goto LAB_019b229c;
    }
    goto LAB_019b112c;
  }
  goto LAB_019b0d64;
LAB_019b1898:
  (**(code **)((int)&DAT_01d27a64 - iVar24))(local_1b8,local_214,local_224);
  acVar9 = local_1a8;
  acVar7 = local_1ac;
  acVar8 = local_1b0;
  acVar26 = local_1b4;
  acVar16 = local_1b8;
  acVar20 = extraout_r1;
  if (local_1b8 == (char  [4])0x80000001) goto LAB_019b188c;
  bVar62 = false;
  local_2c[0] = '\0';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  if ((uint)local_34 < (uint)local_1b0) {
    FUN_0197ac30(local_34,0,local_1b0,1,1);
    acVar15 = local_30;
  }
  acVar20 = local_2c;
  FUN_01bed4e2((int)acVar15 + (int)local_2c,acVar26,acVar8);
  local_2c = (char  [4])((int)acVar20 + (int)acVar8);
  if ((local_2c != (char  [4])0x0) &&
     (bVar62 = false, *(char *)((int)acVar15 + (int)local_2c + -1) != '/')) {
    bVar62 = true;
  }
  if ((acVar9 == (char  [4])0x0) ||
     (acVar15[0] = '\0', acVar15[1] = '\0', acVar15[2] = '\0', acVar15[3] = '\0',
     *(char *)acVar7 != '/')) {
    if (bVar62) {
      if (local_34 == local_2c) {
        FUN_0197ac30(local_34,local_2c,1,1,1);
      }
      acVar15 = (char  [4])((int)local_2c + 1);
      *(undefined1 *)((int)local_30 + (int)local_2c) = 0x2f;
      goto LAB_019b1960;
    }
  }
  else {
LAB_019b1960:
    local_2c = acVar15;
  }
  if ((uint)((int)local_34 - (int)local_2c) < (uint)acVar9) {
    FUN_0197ac30(local_34,local_2c,acVar9,1,1);
  }
  acVar20 = local_2c;
  acVar15 = local_30;
  FUN_01bed4e2((int)local_30 + (int)local_2c,acVar7,acVar9);
  local_2c = (char  [4])((int)acVar20 + (int)acVar9);
  FUN_019ad8f0(local_1b8,acVar15);
  acVar7 = local_1b4;
  uVar13 = (uint)(byte)local_1b8[0];
  if ((uVar13 != 4) || (((uint)local_1b8 & 0x100) == 0)) {
    if ((uVar13 != 4) && (uVar13 == 3)) {
      uVar54 = *(undefined4 *)local_1b4;
      puVar59 = *(undefined4 **)((int)local_1b4 + 4);
      pcVar21 = (code *)*puVar59;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(uVar54);
      }
      if (puVar59[1] != 0) {
        thunk_FUN_01be4678(uVar54);
      }
      thunk_FUN_01be4678(acVar7);
    }
    acVar20[0] = -1;
    acVar20[1] = -1;
    acVar20[2] = -1;
    acVar20[3] = '\x7f';
    if (((uint)acVar16 & 0x7fffffff) != 0) {
      thunk_FUN_01be4678(acVar26);
      acVar20 = extraout_r1_00;
    }
    goto LAB_019b188c;
  }
  local_218 = 0xffffffff;
  while( true ) {
    acVar15 = local_30;
    iVar12 = FUN_019afb44(local_30,local_2c,acVar26,acVar8);
    if (iVar12 == 0) break;
    uVar64 = FUN_019b25ac(local_34,&local_1d8,&DAT_00569f38,0x10);
    uVar65 = FUN_019b25ac(local_34,&local_1d8,"cpu.cfs_period_us",0x11);
    if (((uVar64 & 1) != 0 && (uVar65 & 1) != 0) && ((int)(uVar65 >> 0x20) != 0)) {
      uVar13 = FUN_01bf1250((int)(uVar64 >> 0x20));
      if (uVar13 < local_218) {
        local_218 = uVar13;
      }
    }
    FUN_019afed4(local_34);
  }
  if (((uint)acVar16 & 0x7fffffff) != 0) {
    thunk_FUN_01be4678(acVar26);
    acVar16 = extraout_r1_08;
  }
  goto LAB_019b2234;
LAB_019b188c:
  acVar16 = acVar20;
  bVar62 = iVar24 == -8;
  iVar24 = iVar24 + -4;
  if (bVar62) goto LAB_019b1a7c;
  goto LAB_019b1898;
LAB_019b1b10:
  uVar13 = local_1f4;
  acVar15 = local_1f8;
  uVar63 = FUN_019afb44(local_1f8,local_1f4,"/sys/fs/cgroup",0xe);
  acVar16 = SUB84((ulonglong)uVar63 >> 0x20,0);
  if ((int)uVar63 == 0) goto LAB_019b2270;
  if (uVar13 == 0) {
    uVar13 = 0;
  }
  else if (*(char *)((int)acVar15 + uVar13 + -1) != '/') {
    if (local_1fc == uVar13) {
      FUN_0197ac30(&local_1fc,uVar13,1,1,1);
      uVar13 = local_1f4;
      acVar15 = local_1f8;
    }
    *(undefined1 *)((int)acVar15 + uVar13) = 0x2f;
    uVar13 = uVar13 + 1;
    local_1f4 = uVar13;
  }
  if (local_1fc - uVar13 < 7) {
    FUN_0197ac30(&local_1fc,uVar13,7,1,1);
    uVar13 = local_1f4;
    acVar15 = local_1f8;
  }
  uVar55 = uVar13 + 7;
  *(undefined4 *)((int)acVar15 + uVar13) = 0x2e757063;
  *(undefined4 *)((int)((int)acVar15 + uVar13) + 3) = 0x78616d2e;
  local_1e8[0] = '\0';
  local_1e8[1] = '\0';
  local_1e8[2] = '\0';
  local_1e8[3] = '\0';
  local_1cc = 0;
  local_1d4 = 0x1b6;
  local_1bc = &local_1d8;
  local_1d8 = 0;
  local_1d0[0] = '\x01';
  local_1d0[1] = '\0';
  local_1d0[2] = '\0';
  local_1d0[3] = '\0';
  local_1f4 = uVar55;
  if (uVar13 < 0x179) {
    FUN_01bed4e2(local_1b8,acVar15,uVar55);
    local_1b8[uVar55] = '\0';
    FUN_012fbc58(local_34,local_1b8,uVar13 + 8);
    if (local_34 == (char  [4])0x1) {
      local_1c8[0] = '\x02';
      local_1c8[1] = '\0';
      local_1c8[2] = '\0';
      local_1c8[3] = '\0';
      local_1c4 = (char  [4])&DAT_01d27a70;
    }
    else {
      FUN_01980058(local_1c8,local_30,&local_1d8);
    }
  }
  else {
    FUN_019a0974(local_1c8,acVar15,uVar55,&local_1bc);
  }
  acVar15 = local_1c4;
  if ((local_1c8[0] == '\x04') || (uVar13 = (uint)(byte)local_1c8[0], uVar13 == 4)) {
    local_1b8 = local_1c4;
    FUN_01980288(local_1e0,local_1b8,&local_1f0);
    FUN_01bf01d6(acVar15);
    acVar26 = local_1ec;
    uVar13 = (uint)(byte)local_1e0[0];
    acVar15 = local_1dc;
    if (uVar13 != 4) goto joined_r0x019b1cfc;
    local_194 = local_194 & 0xffff0000;
    local_198[0] = local_1e8[0];
    local_198[1] = local_1e8[1];
    local_198[2] = local_1e8[2];
    local_198[3] = local_1e8[3];
    local_19c[0] = '\0';
    local_19c[1] = '\0';
    local_19c[2] = '\0';
    local_19c[3] = '\0';
    local_1a0 = CONCAT31(local_1a0._1_3_,1);
    local_1a4 = 10;
    local_1a8[0] = local_1e8[0];
    local_1a8[1] = local_1e8[1];
    local_1a8[2] = local_1e8[2];
    local_1a8[3] = local_1e8[3];
    local_1ac[0] = '\0';
    local_1ac[1] = '\0';
    local_1ac[2] = '\0';
    local_1ac[3] = '\0';
    local_1b0[0] = local_1e8[0];
    local_1b0[1] = local_1e8[1];
    local_1b0[2] = local_1e8[2];
    local_1b0[3] = local_1e8[3];
    local_1b4[0] = local_1ec[0];
    local_1b4[1] = local_1ec[1];
    local_1b4[2] = local_1ec[2];
    local_1b4[3] = local_1ec[3];
    local_1b8[0] = '\n';
    local_1b8[1] = '\0';
    local_1b8[2] = '\0';
    local_1b8[3] = '\0';
    FUN_01980418(&local_1d8,local_1b8);
    if (local_1d8 == 1) {
      local_1b0 = (char  [4])((int)local_1d0 - (int)local_19c);
    }
    else {
      acVar16 = extraout_r1_02;
      if ((local_194._1_1_ != '\0') ||
         (((char)local_194 != '\x01' && (acVar16 = local_19c, local_198 == local_19c))))
      goto LAB_019b2270;
      local_1b0 = (char  [4])((int)local_198 - (int)local_19c);
      acVar26 = local_1b4;
    }
    acVar26 = (char  [4])((int)acVar26 + (int)local_19c);
    if (local_1b0 != (char  [4])0x0) {
      acVar15 = (char  [4])((int)local_1b0 + -1);
      if (*(char *)((int)acVar26 + (int)acVar15) == '\n') {
        local_1b0 = (char  [4])((int)local_1b0 + -2);
        if (acVar15 == (char  [4])0x0) {
          acVar16[0] = '\0';
          acVar16[1] = '\0';
          acVar16[2] = '\0';
          acVar16[3] = '\0';
        }
        else {
          acVar16 = acVar26;
          if (*(char *)((int)acVar26 + (int)local_1b0) != '\r') {
            acVar16[0] = '\0';
            acVar16[1] = '\0';
            acVar16[2] = '\0';
            acVar16[3] = '\0';
          }
        }
        if (acVar16 == (char  [4])0x0) {
          local_1b0 = acVar15;
        }
        else {
          acVar26 = acVar16;
        }
      }
    }
    local_194 = CONCAT22(local_194._2_2_,1);
    local_1a0 = CONCAT31(local_1a0._1_3_,1);
    local_19c[0] = '\0';
    local_19c[1] = '\0';
    local_19c[2] = '\0';
    local_19c[3] = '\0';
    local_1a4 = 0x20;
    local_1ac[0] = '\0';
    local_1ac[1] = '\0';
    local_1ac[2] = '\0';
    local_1ac[3] = '\0';
    local_1b8[0] = ' ';
    local_1b8[1] = '\0';
    local_1b8[2] = '\0';
    local_1b8[3] = '\0';
    local_1b4 = acVar26;
    local_1a8 = local_1b0;
    local_198 = local_1b0;
    FUN_01980418(&local_1d8,local_1b8);
    acVar8 = local_19c;
    acVar15 = local_1b4;
    iVar12 = local_1d4;
    if (local_1d8 == 0) {
      uVar13 = (uint)local_194._1_1_;
      bVar62 = uVar13 == 0;
      if (bVar62) {
        uVar13 = local_194 & 0xff;
      }
      acVar16 = extraout_r1_03;
      if (bVar62 && uVar13 == 0) {
        acVar16 = local_198;
      }
      goto LAB_019b2270;
    }
    local_19c[0] = local_1d0[0];
    local_19c[1] = local_1d0[1];
    local_19c[2] = local_1d0[2];
    local_19c[3] = local_1d0[3];
    acVar16 = extraout_r1_03;
    if ((acVar26 == (char  [4])0x0) || (acVar16 = extraout_r1_03, local_194._1_1_ != 0))
    goto LAB_019b2270;
    FUN_01980418(&local_1d8,local_1b8);
    if (local_1d8 == 1) {
      uVar13 = local_1d4 - (int)local_19c;
    }
    else {
      acVar16 = extraout_r1_04;
      if ((local_194._1_1_ != '\0') ||
         (((char)local_194 != '\x01' && (acVar16 = local_19c, local_198 == local_19c))))
      goto LAB_019b2270;
      uVar13 = (int)local_198 - (int)local_19c;
      acVar15 = local_1b4;
    }
    pbVar23 = (byte *)((int)acVar15 + (int)local_19c);
    uVar55 = iVar12 - (int)acVar8;
    bVar3 = 1;
    if (uVar55 != 0) {
      pbVar60 = (byte *)((int)acVar26 + (int)acVar8);
      if (uVar55 == 1) {
        bVar50 = *pbVar60;
        if ((bVar50 == 0x2b) || (bVar50 == 0x2d)) goto joined_r0x019b2098;
      }
      else {
        bVar50 = *pbVar60;
      }
      if (bVar50 == 0x2b) {
        pbVar60 = pbVar60 + 1;
        uVar55 = uVar55 - 1;
      }
      if (uVar55 < 9) {
        if (uVar55 == 0) {
          bVar3 = 0;
          local_224 = 0;
        }
        else {
          uVar51 = 0;
          do {
            bVar50 = *pbVar60;
            if (9 < bVar50 - 0x30) goto joined_r0x019b2098;
            pbVar60 = pbVar60 + 1;
            uVar55 = uVar55 - 1;
            uVar51 = (bVar50 - 0x30) + uVar51 * 10;
          } while (uVar55 != 0);
          bVar3 = 0;
          local_224 = uVar51;
        }
      }
      else {
        uVar51 = 0;
        do {
          if (uVar55 == 0) {
            bVar3 = 0;
            local_224 = uVar51;
            break;
          }
          uVar25 = (uint)((ulonglong)uVar51 * 10);
          if ((int)((ulonglong)uVar51 * 10 >> 0x20) != 0) break;
          uVar27 = *pbVar60 - 0x30;
          uVar51 = uVar27 + uVar25;
          if (9 < uVar27) break;
          uVar55 = uVar55 - 1;
          pbVar60 = pbVar60 + 1;
        } while (!CARRY4(uVar27,uVar25));
      }
    }
joined_r0x019b2098:
    if (uVar13 != 0) {
      if (uVar13 == 1) {
        bVar50 = *pbVar23;
        if ((bVar50 == 0x2b) || (bVar50 == 0x2d)) goto LAB_019b2078;
      }
      else {
        bVar50 = *pbVar23;
      }
      if (bVar50 == 0x2b) {
        pbVar23 = pbVar23 + 1;
        uVar13 = uVar13 - 1;
      }
      if (uVar13 < 9) {
        if (uVar13 != 0) {
          uVar55 = 0;
          do {
            bVar50 = *pbVar23;
            if (9 < bVar50 - 0x30) goto LAB_019b2078;
            pbVar23 = pbVar23 + 1;
            uVar13 = uVar13 - 1;
            uVar55 = (bVar50 - 0x30) + uVar55 * 10;
          } while (uVar13 != 0);
LAB_019b2008:
          if (!(bool)(bVar3 | uVar55 == 0)) {
            uVar13 = FUN_01bf1250(local_224);
            if (uVar13 < local_218) {
              local_218 = uVar13;
            }
          }
        }
      }
      else {
        uVar55 = 0;
        do {
          if (uVar13 == 0) goto LAB_019b2008;
          uVar51 = (uint)((ulonglong)uVar55 * 10);
          if ((int)((ulonglong)uVar55 * 10 >> 0x20) != 0) break;
          uVar25 = *pbVar23 - 0x30;
          uVar55 = uVar25 + uVar51;
          if (9 < uVar25) break;
          uVar13 = uVar13 - 1;
          pbVar23 = pbVar23 + 1;
        } while (!CARRY4(uVar25,uVar51));
      }
    }
  }
  else {
    local_1e0 = local_1c8;
joined_r0x019b1cfc:
    local_1dc = acVar15;
    if (uVar13 == 3) {
      uVar54 = *(undefined4 *)acVar15;
      puVar59 = *(undefined4 **)((int)acVar15 + 4);
      pcVar21 = (code *)*puVar59;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(uVar54);
      }
      if (puVar59[1] != 0) {
        thunk_FUN_01be4678(uVar54);
      }
      thunk_FUN_01be4678(acVar15);
    }
  }
LAB_019b2078:
  FUN_019afed4(&local_1fc);
  FUN_019afed4(&local_1fc);
  goto LAB_019b1b10;
LAB_019b2270:
  if (local_1f0 != 0) {
    thunk_FUN_01be4678(local_1ec,acVar16);
    acVar16 = extraout_r1_10;
  }
  if (local_1fc != 0) {
    acVar15 = local_1f8;
LAB_019b2298:
    thunk_FUN_01be4678(acVar15,acVar16);
    acVar16 = extraout_r1_11;
  }
  goto LAB_019b229c;
LAB_019b1a7c:
  local_218 = 0xffffffff;
LAB_019b2234:
  if (local_1d8 != 0) {
    thunk_FUN_01be4678(local_1d4);
    acVar16 = extraout_r1_09;
  }
  if (local_34 != (char  [4])0x0) goto LAB_019b2298;
LAB_019b229c:
  if (local_220 != 0) {
    thunk_FUN_01be4678(local_214,acVar16);
  }
joined_r0x019b22b8:
  if (local_208 != 0) {
    thunk_FUN_01be4678(local_204);
  }
  FUN_01bed93e(local_1b8,0,0x80);
  if (local_218 < 2) {
    local_218 = 1;
  }
  iVar12 = FUN_01bea64c(0,0x80,local_1b8);
  if ((iVar12 != 0) ||
     (uVar55 = (int)local_1b4 - ((uint)local_1b4 >> 1 & 0x55555555),
     uVar13 = (int)local_1b8 - ((uint)local_1b8 >> 1 & 0x55555555),
     uVar56 = (uVar55 & 0x33333333) + (uVar55 >> 2 & 0x33333333),
     uVar51 = (int)local_1b0 - ((uint)local_1b0 >> 1 & 0x55555555),
     uVar55 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333),
     uVar52 = (uVar51 & 0x33333333) + (uVar51 >> 2 & 0x33333333),
     local_13c = local_13c - (local_13c >> 1 & 0x55555555),
     uVar53 = (local_13c & 0x33333333) + (local_13c >> 2 & 0x33333333),
     local_140 = local_140 - (local_140 >> 1 & 0x55555555),
     uVar51 = (local_140 & 0x33333333) + (local_140 >> 2 & 0x33333333),
     uVar13 = (int)local_1ac - ((uint)local_1ac >> 1 & 0x55555555),
     uVar27 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333),
     uVar13 = (int)local_1a8 - ((uint)local_1a8 >> 1 & 0x55555555),
     uVar28 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333),
     uVar13 = local_1a4 - (local_1a4 >> 1 & 0x55555555),
     uVar29 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333),
     uVar13 = local_1a0 - (local_1a0 >> 1 & 0x55555555),
     uVar30 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333),
     uVar13 = (int)local_19c - ((uint)local_19c >> 1 & 0x55555555),
     uVar31 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333),
     uVar13 = (int)local_198 - ((uint)local_198 >> 1 & 0x55555555),
     uVar32 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333),
     uVar13 = local_194 - (local_194 >> 1 & 0x55555555),
     uVar33 = (uVar13 & 0x33333333) + (uVar13 >> 2 & 0x33333333),
     local_190 = local_190 - (local_190 >> 1 & 0x55555555),
     uVar34 = (local_190 & 0x33333333) + (local_190 >> 2 & 0x33333333),
     local_18c = local_18c - (local_18c >> 1 & 0x55555555),
     uVar35 = (local_18c & 0x33333333) + (local_18c >> 2 & 0x33333333),
     local_188 = local_188 - (local_188 >> 1 & 0x55555555),
     uVar36 = (local_188 & 0x33333333) + (local_188 >> 2 & 0x33333333),
     local_184 = local_184 - (local_184 >> 1 & 0x55555555),
     uVar37 = (local_184 & 0x33333333) + (local_184 >> 2 & 0x33333333),
     local_180 = local_180 - (local_180 >> 1 & 0x55555555),
     uVar38 = (local_180 & 0x33333333) + (local_180 >> 2 & 0x33333333),
     local_17c = local_17c - (local_17c >> 1 & 0x55555555),
     uVar39 = (local_17c & 0x33333333) + (local_17c >> 2 & 0x33333333),
     local_178 = local_178 - (local_178 >> 1 & 0x55555555),
     uVar40 = (local_178 & 0x33333333) + (local_178 >> 2 & 0x33333333),
     local_174 = local_174 - (local_174 >> 1 & 0x55555555),
     uVar41 = (local_174 & 0x33333333) + (local_174 >> 2 & 0x33333333),
     local_170 = local_170 - (local_170 >> 1 & 0x55555555),
     uVar42 = (local_170 & 0x33333333) + (local_170 >> 2 & 0x33333333),
     local_16c = local_16c - (local_16c >> 1 & 0x55555555),
     uVar43 = (local_16c & 0x33333333) + (local_16c >> 2 & 0x33333333),
     local_168 = local_168 - (local_168 >> 1 & 0x55555555),
     uVar44 = (local_168 & 0x33333333) + (local_168 >> 2 & 0x33333333),
     local_164 = local_164 - (local_164 >> 1 & 0x55555555),
     uVar45 = (local_164 & 0x33333333) + (local_164 >> 2 & 0x33333333),
     local_160 = local_160 - (local_160 >> 1 & 0x55555555),
     uVar46 = (local_160 & 0x33333333) + (local_160 >> 2 & 0x33333333),
     local_15c = local_15c - (local_15c >> 1 & 0x55555555),
     uVar47 = (local_15c & 0x33333333) + (local_15c >> 2 & 0x33333333),
     local_158 = local_158 - (local_158 >> 1 & 0x55555555),
     uVar48 = (local_158 & 0x33333333) + (local_158 >> 2 & 0x33333333),
     local_144 = local_144 - (local_144 >> 1 & 0x55555555),
     uVar57 = (local_144 & 0x33333333) + (local_144 >> 2 & 0x33333333),
     local_148 = local_148 - (local_148 >> 1 & 0x55555555),
     uVar58 = (local_148 & 0x33333333) + (local_148 >> 2 & 0x33333333),
     local_14c = local_14c - (local_14c >> 1 & 0x55555555),
     uVar49 = (local_14c & 0x33333333) + (local_14c >> 2 & 0x33333333),
     local_150 = local_150 - (local_150 >> 1 & 0x55555555),
     uVar25 = (local_150 & 0x33333333) + (local_150 >> 2 & 0x33333333),
     local_154 = local_154 - (local_154 >> 1 & 0x55555555),
     uVar13 = (local_154 & 0x33333333) + (local_154 >> 2 & 0x33333333),
     uVar13 = ((uVar56 + (uVar56 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar55 + (uVar55 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar52 + (uVar52 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar27 + (uVar27 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar28 + (uVar28 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar29 + (uVar29 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar30 + (uVar30 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar31 + (uVar31 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar32 + (uVar32 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar33 + (uVar33 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar34 + (uVar34 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar35 + (uVar35 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar36 + (uVar36 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar37 + (uVar37 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar38 + (uVar38 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar39 + (uVar39 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar40 + (uVar40 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar41 + (uVar41 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar42 + (uVar42 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar43 + (uVar43 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar44 + (uVar44 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar45 + (uVar45 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar46 + (uVar46 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar47 + (uVar47 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar48 + (uVar48 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar13 + (uVar13 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar25 + (uVar25 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar49 + (uVar49 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar58 + (uVar58 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar57 + (uVar57 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar51 + (uVar51 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
              ((uVar53 + (uVar53 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18), uVar13 == 0)) {
    uVar13 = FUN_01be2b70(0x54);
    if (uVar13 == 0xffffffff) {
      puVar14 = (uint *)FUN_01be3244();
      uVar17 = 0;
      uVar13 = *puVar14;
      goto LAB_019b1708;
    }
    if (uVar13 == 0) {
      *param_1 = 2;
      param_1[1] = &DAT_01d279e4;
      return;
    }
  }
  uVar17 = 4;
  if (local_218 < uVar13) {
    uVar13 = local_218;
  }
LAB_019b1708:
  *(undefined1 *)param_1 = uVar17;
  param_1[1] = uVar13;
  return;
}

