// FUN_015f8770 @ 015f8770 size=7128 calls_out=28 calls_in=2
// strings: /pro | c/se | lf/c | grou | /sys/fs/cgroup | cpu.cfs_quota_us

/* WARNING: Removing unreachable block (ram,0x015f87ec) */
/* WARNING: Removing unreachable block (ram,0x015f87f4) */
/* WARNING: Removing unreachable block (ram,0x015f88ec) */
/* WARNING: Removing unreachable block (ram,0x015f8800) */
/* WARNING: Removing unreachable block (ram,0x015f98ec) */
/* WARNING: Removing unreachable block (ram,0x015f98f0) */
/* WARNING: Removing unreachable block (ram,0x015f9944) */
/* WARNING: Removing unreachable block (ram,0x015f98fc) */
/* WARNING: Removing unreachable block (ram,0x015f9904) */
/* WARNING: Type propagation algorithm not settling */

void FUN_015f8770(undefined4 *param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  char acVar11 [4];
  char acVar12 [4];
  char extraout_r1 [4];
  char extraout_r1_00 [4];
  char acVar13 [4];
  char extraout_r1_01 [4];
  char extraout_r1_02 [4];
  char extraout_r1_03 [4];
  char extraout_r1_04 [4];
  char extraout_r1_05 [4];
  char extraout_r1_06 [4];
  char extraout_r1_07 [4];
  char extraout_r1_08 [4];
  char extraout_r1_09 [4];
  char extraout_r1_10 [4];
  char extraout_r1_11 [4];
  code *pcVar14;
  char extraout_r1_12 [4];
  char extraout_r1_13 [4];
  char extraout_r1_14 [4];
  char extraout_r1_15 [4];
  char extraout_r1_16 [4];
  char extraout_r1_17 [4];
  char extraout_r1_18 [4];
  char extraout_r1_19 [4];
  char extraout_r1_20 [4];
  char extraout_r1_21 [4];
  char extraout_r1_22 [4];
  char extraout_r1_23 [4];
  char extraout_r1_24 [4];
  char extraout_r1_25 [4];
  int iVar15;
  char acVar16 [4];
  byte *pbVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
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
  char acVar45 [4];
  char acVar46 [4];
  uint uVar47;
  uint uVar48;
  uint uVar49;
  byte *pbVar50;
  byte bVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  int iVar56;
  char acVar57 [4];
  char acVar58 [4];
  bool bVar59;
  undefined8 uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  char local_228 [4];
  uint local_220;
  char local_21c [4];
  uint local_218;
  char *local_214;
  int local_20c;
  int local_208;
  int local_204;
  char local_200 [4];
  char local_1fc [4];
  char local_1f8 [4];
  char local_1f4 [4];
  uint *local_1ec;
  char local_1e8 [4];
  undefined4 local_1e4;
  char local_1e0 [4];
  char local_1dc [4];
  char local_1d8 [4];
  uint local_1d4;
  uint local_1d0;
  undefined4 local_1cc;
  char local_1c8 [4];
  undefined4 local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
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
  char local_64 [4];
  char local_60 [4];
  char local_5c [4];
  char local_58 [4];
  char local_54 [4];
  char local_50 [4];
  uint local_48;
  int local_44;
  char local_40 [4];
  undefined2 local_3c;
  
  local_208 = thunk_FUN_016d4a50(0x80);
  if (local_208 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x80);
  }
  local_44 = 0x1b6;
  local_40[0] = '\x01';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_204 = 0;
  local_20c = 0x80;
  local_48 = 0;
  local_3c = 0;
  builtin_strncpy(local_1e8,"/pro",4);
  local_1e4._0_1_ = 'c';
  local_1e4._1_1_ = '/';
  local_1e4._2_1_ = 's';
  local_1e4._3_1_ = 'e';
  builtin_strncpy(local_1e0,"lf/c",4);
  builtin_strncpy(local_1dc,"grou",4);
  local_1d8[0] = 'p';
  local_1d8[1] = '\0';
  iVar18 = 0;
  do {
    if (local_1d8[iVar18] == '\0') {
      if (iVar18 == 1) {
        FUN_015c49ac(local_58,local_1e8,&local_48);
        acVar13 = extraout_r1;
        if (local_58[0] == '\x04') goto LAB_015f892c;
        goto LAB_015f8914;
      }
      break;
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 != 2);
  acVar13[0] = '\x02';
  acVar13[1] = '\0';
  acVar13[2] = '\0';
  acVar13[3] = '\0';
  local_54 = (char  [4])&DAT_018aae48;
  local_58 = acVar13;
LAB_015f8914:
  acVar11 = local_54;
  if ((byte)local_58[0] == 4) {
    if (local_54 != (char  [4])0xffffffff) {
LAB_015f892c:
      acVar11 = local_54;
      local_1f8 = local_54;
      FUN_015ed4f8(local_64,local_1f8,&local_20c);
      acVar13 = local_60;
      if ((byte)local_64[0] == 4) {
        FUN_016dffb2(acVar11);
        local_228[0] = '\0';
        local_228[1] = '\0';
        local_228[2] = '\0';
        local_228[3] = -0x80;
        acVar13 = extraout_r1_00;
        iVar21 = local_204;
        iVar18 = local_208;
LAB_015f8960:
        if (iVar21 != 0) {
          acVar13 = (char  [4])(iVar18 + iVar21);
          iVar6 = iVar18;
LAB_015f8978:
          iVar15 = 0;
          do {
            cVar1 = *(char *)(iVar6 + iVar15);
            if (cVar1 == '\n') {
              acVar13 = (char  [4])(iVar15 + 1);
              iVar21 = iVar21 - (int)acVar13;
              iVar18 = iVar6 + (int)acVar13;
              iVar4 = iVar15;
              break;
            }
            iVar15 = iVar15 + 1;
            iVar18 = iVar6;
            iVar4 = iVar21;
          } while ((char  [4])(iVar6 + iVar15) != acVar13);
          if (iVar4 != 0) {
            iVar15 = 0;
            do {
              acVar13[1] = '\0';
              acVar13[2] = '\0';
              acVar13[3] = '\0';
              acVar13[0] = *(byte *)(iVar6 + iVar15);
              if (acVar13 == (char  [4])0x3a) {
                acVar13 = (char  [4])(iVar15 + 1);
                iVar56 = iVar4 - (int)acVar13;
                if (iVar56 == 0) {
                  if (local_228 == (char  [4])0x80000000) goto LAB_015f8be0;
                  goto LAB_015f8a54;
                }
                acVar13 = (char  [4])(iVar6 + (int)acVar13);
                iVar19 = 0;
                goto LAB_015f8a18;
              }
              iVar15 = iVar15 + 1;
            } while (iVar4 != iVar15);
          }
          if ((cVar1 == '\n') && (iVar21 != 0)) goto LAB_015f8974;
        }
        goto LAB_015f8d24;
      }
      if ((byte)local_64[0] == 3) {
        uVar10 = *(undefined4 *)local_60;
        puVar9 = *(undefined4 **)((int)local_60 + 4);
        pcVar14 = (code *)*puVar9;
        if (pcVar14 != (code *)0x0) {
          (*pcVar14)(uVar10);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(uVar10);
        }
        thunk_FUN_016d3fb4(acVar13);
      }
      FUN_016dffb2(acVar11);
      acVar13 = extraout_r1_05;
    }
  }
  else if ((byte)local_58[0] == 3) {
    uVar10 = *(undefined4 *)local_54;
    puVar9 = *(undefined4 **)((int)local_54 + 4);
    pcVar14 = (code *)*puVar9;
    if (pcVar14 != (code *)0x0) {
      (*pcVar14)(uVar10);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
    thunk_FUN_016d3fb4(acVar11);
    acVar13 = extraout_r1_06;
  }
LAB_015f8d2c:
  local_218 = 0xffffffff;
  if (local_20c == 0) goto LAB_015f8d44;
  goto LAB_015f8d3c;
  while( true ) {
    iVar19 = iVar19 + 1;
    acVar11 = acVar13;
    iVar5 = iVar56;
    if ((iVar15 - iVar4) + 1 + iVar19 == 0) break;
LAB_015f8a18:
    cVar2 = *(char *)(iVar6 + iVar15 + 1 + iVar19);
    if (cVar2 == ':') {
      iVar56 = iVar56 - (iVar19 + 1);
      acVar11 = (char  [4])((int)acVar13 + iVar19 + 1);
      iVar5 = iVar19;
      break;
    }
  }
  if (iVar5 == 0) {
    if (local_228 == (char  [4])0x80000000) goto LAB_015f8bd4;
LAB_015f8a54:
    if ((cVar1 != '\n') || (iVar21 == 0)) goto LAB_015f9320;
  }
  else {
    FUN_00fab1e0(local_58,acVar13,iVar5);
    acVar13 = extraout_r1_01;
    if (local_58 == (char  [4])0x0) {
      local_1c4 = CONCAT22(local_1c4._2_2_,1);
      local_1d0 = CONCAT31(local_1d0._1_3_,1);
      local_1c8[0] = local_50[0];
      local_1c8[1] = local_50[1];
      local_1c8[2] = local_50[2];
      local_1c8[3] = local_50[3];
      local_1cc._0_1_ = '\0';
      local_1cc._1_1_ = '\0';
      local_1cc._2_1_ = '\0';
      local_1cc._3_1_ = '\0';
      local_1d4 = 0x2c;
      local_1d8[0] = local_50[0];
      local_1d8[1] = local_50[1];
      local_1d8[2] = local_50[2];
      local_1d8[3] = local_50[3];
      local_1e4._0_1_ = local_54[0];
      local_1e4._1_1_ = local_54[1];
      local_1e4._2_1_ = local_54[2];
      local_1e4._3_1_ = local_54[3];
      local_1e0[0] = local_50[0];
      local_1e0[1] = local_50[1];
      local_1e0[2] = local_50[2];
      local_1e0[3] = local_50[3];
      local_1dc[0] = '\0';
      local_1dc[1] = '\0';
      local_1dc[2] = '\0';
      local_1dc[3] = '\0';
      local_1e8[0] = ',';
      local_1e8[1] = '\0';
      local_1e8[2] = '\0';
      local_1e8[3] = '\0';
      do {
        acVar45 = local_1e4;
        FUN_015c4d94(&local_48,local_1e8);
        if (local_48 == 1) {
          acVar13 = (char  [4])(local_44 - (int)local_1cc);
          acVar12 = local_40;
        }
        else {
          acVar13 = extraout_r1_02;
          if (local_1c4._1_1_ != '\0') break;
          local_1c4._0_2_ = CONCAT11(1,(char)local_1c4);
          if (((char)local_1c4 != '\x01') && (acVar13 = local_1c8, local_1c8 == local_1cc)) break;
          acVar13 = (char  [4])((int)local_1c8 - (int)local_1cc);
          acVar45 = local_1e4;
          acVar12 = local_1cc;
        }
        if (acVar13 == (char  [4])0x3) {
          iVar6 = (int)acVar45 + (int)local_1cc;
          local_1cc = acVar12;
          uVar60 = thunk_FUN_016dd50a(iVar6,"cpu",3);
          acVar13 = SUB84((ulonglong)uVar60 >> 0x20,0);
          acVar12 = local_1cc;
          if ((int)uVar60 == 0) {
            if (cVar2 == ':') goto LAB_015f8bf4;
            acVar13[0] = -1;
            acVar13[1] = -1;
            acVar13[2] = -1;
            acVar13[3] = '\x7f';
            if (((uint)local_228 & 0x7fffffff) == 0) goto LAB_015f8be0;
            thunk_FUN_016d3fb4(local_214);
            local_228[0] = '\0';
            local_228[1] = '\0';
            local_228[2] = '\0';
            local_228[3] = -0x80;
            acVar13 = extraout_r1_03;
            if (cVar1 == '\n') goto LAB_015f8960;
            goto LAB_015f8d2c;
          }
        }
        local_1cc = acVar12;
      } while (local_1c4._1_1_ != '\x01');
    }
    if ((cVar1 != '\n') || (iVar21 == 0)) goto LAB_015f8d24;
  }
LAB_015f8974:
  acVar13 = (char  [4])(iVar18 + iVar21);
  iVar6 = iVar18;
  goto LAB_015f8978;
LAB_015f8bd4:
  local_228[0] = '\0';
  local_228[1] = '\0';
  local_228[2] = '\0';
  local_228[3] = -0x80;
  if (cVar2 == ':') {
LAB_015f8bf4:
    if (iVar56 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(1,0,0,&DAT_018aae2c);
    }
    local_21c = (char  [4])(iVar56 + -1);
    if (local_21c == (char  [4])0x0) {
      pcVar7 = &DAT_00000001;
    }
    else {
      pcVar7 = (char *)FUN_0063f47c(local_21c,1);
      if (pcVar7 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_21c);
      }
    }
    local_218._0_1_ = iVar5 == 0;
    FUN_016dd1aa(pcVar7,(int)acVar11 + 1);
    acVar11 = local_21c;
    acVar13 = local_228;
    if (((uint)local_228 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_214);
      acVar13 = extraout_r1_04;
    }
  }
  else {
LAB_015f8be0:
    acVar11[0] = '\0';
    acVar11[1] = '\0';
    acVar11[2] = '\0';
    acVar11[3] = -0x80;
    pcVar7 = local_214;
  }
  local_214 = pcVar7;
  local_228 = acVar11;
  if (cVar1 != '\n') {
LAB_015f8d24:
    if (local_228 != (char  [4])0x80000000) {
LAB_015f9320:
      if (((byte)local_218 & 1) == 0) {
        acVar11 = (char  [4])thunk_FUN_016d4a50(0x80);
        if (acVar11 == (char  [4])0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x80);
        }
        local_64[0] = -0x80;
        local_64[1] = '\0';
        local_64[2] = '\0';
        local_64[3] = '\0';
        local_5c[0] = '\0';
        local_5c[1] = '\0';
        local_5c[2] = '\0';
        local_5c[3] = '\0';
        local_60 = acVar11;
        acVar13 = (char  [4])thunk_FUN_016d4a50(0x14);
        if (acVar13 == (char  [4])0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,0x14);
        }
        local_50[0] = '\0';
        local_50[1] = '\0';
        local_50[2] = '\0';
        local_50[3] = '\0';
        local_58[0] = '\x14';
        local_58[1] = '\0';
        local_58[2] = '\0';
        local_58[3] = '\0';
        iVar18 = 0;
        local_54 = acVar13;
        goto LAB_015f94a8;
      }
      acVar11 = (char  [4])thunk_FUN_016d4a50(0x80);
      if (acVar11 == (char  [4])0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x80);
      }
      local_64[0] = -0x80;
      local_64[1] = '\0';
      local_64[2] = '\0';
      local_64[3] = '\0';
      local_60 = acVar11;
      acVar13 = (char  [4])thunk_FUN_016d4a50(0x14);
      if (acVar13 == (char  [4])0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x14);
      }
      *(undefined4 *)acVar11 = 0x7379732f;
      local_5c = (char  [4])0x0;
      *(undefined4 *)((int)acVar11 + 4) = 0x2f73662f;
      *(undefined4 *)((int)acVar11 + 8) = 0x6f726763;
      *(undefined2 *)((int)acVar11 + 0xc) = 0x7075;
      local_50[0] = '\0';
      local_50[1] = '\0';
      local_50[2] = '\0';
      local_50[3] = '\0';
      local_58[0] = '\x14';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      if ((local_21c == (char  [4])0x0) || (*local_214 != '/')) {
        local_5c = (char  [4])0xf;
        *(undefined1 *)((int)acVar11 + 0xe) = 0x2f;
      }
      local_54 = acVar13;
      if ((uint)(0x80 - (int)local_5c) < (uint)local_21c) {
        FUN_015bf41c(local_64,local_5c,local_21c,1,1);
        acVar11 = local_60;
      }
      acVar13 = local_5c;
      FUN_016dd1aa((int)acVar11 + (int)local_5c,local_214,local_21c);
      local_5c = (char  [4])((int)acVar13 + (int)local_21c);
      if (local_5c == (char  [4])0x0) {
        acVar45[0] = '\0';
        acVar45[1] = '\0';
        acVar45[2] = '\0';
        acVar45[3] = '\0';
      }
      else {
        acVar45 = local_5c;
        if (*(char *)((int)acVar11 + (int)local_5c + -1) != '/') {
          if (local_64 == local_5c) {
            FUN_015bf41c(local_64,local_5c,1,1,1);
            acVar11 = local_60;
          }
          *(undefined1 *)((int)acVar11 + (int)local_5c) = 0x2f;
          acVar45 = (char  [4])((int)local_5c + 1);
          local_5c = acVar45;
        }
      }
      if ((uint)((int)local_64 - (int)acVar45) < 0x12) {
        FUN_015bf41c(local_64,acVar45,0x12,1,1);
        acVar11 = local_60;
        acVar45 = local_5c;
      }
      FUN_016dd1aa((int)acVar11 + (int)acVar45,&DAT_004105d8,0x12);
      acVar58 = (char  [4])((int)acVar45 + 0x12);
      local_5c = acVar58;
      FUN_015f4f38(local_1e8,acVar11,acVar58);
      acVar12 = local_60;
      acVar45 = local_1e4;
      uVar8 = (uint)(byte)local_1e8[0];
      acVar13 = extraout_r1_09;
      if ((uVar8 == 4) &&
         (acVar13 = (char  [4])((uint)local_1e8 >> 8 & 0xff), ((uint)local_1e8 & 0x100) != 0)) {
        local_1e0[0] = '\x06';
        local_1e8[0] = local_60[0];
        local_1e8[1] = local_60[1];
        local_1e8[2] = local_60[2];
        local_1e8[3] = local_60[3];
        local_1cc._2_1_ = *(char *)local_60 == '/';
        local_1cc._0_1_ = '\x01';
        local_1cc._1_1_ = '\x02';
        local_1e4 = acVar58;
        FUN_015c7164(&local_48,local_1e8);
        if ((local_48 & 0xff) - 7 < 3) {
          FUN_015c7664(local_1e8);
          if ((extraout_r1_10 != (char  [4])0x0 && extraout_r1_10 != acVar58) &&
             ((extraout_r1_10 == (char  [4])0x0 || (uint)acVar58 <= (uint)extraout_r1_10 ||
              ((0x7fffffff < (uint)(int)((char *)((int)acVar12 + (int)extraout_r1_10))[-1] &&
               (*(char *)((int)acVar12 + (int)extraout_r1_10) < '\0')))))) {
            FUN_015e4f74(acVar12,acVar58,extraout_r1_10);
          }
          if ((uint)extraout_r1_10 <= (uint)acVar58) {
            acVar58 = extraout_r1_10;
            local_5c = extraout_r1_10;
          }
        }
        local_218 = 0xffffffff;
        goto LAB_015f97ac;
      }
      if ((uVar8 != 4) && (uVar8 == 3)) {
        uVar10 = *(undefined4 *)local_1e4;
        puVar9 = *(undefined4 **)((int)local_1e4 + 4);
        pcVar14 = (code *)*puVar9;
        if (pcVar14 != (code *)0x0) {
          (*pcVar14)(uVar10);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(uVar10);
        }
        thunk_FUN_016d3fb4(acVar45);
        acVar13 = extraout_r1_16;
      }
      if (local_58 != (char  [4])0x0) {
        thunk_FUN_016d3fb4(local_54);
        acVar13 = extraout_r1_17;
      }
      if (local_64 != (char  [4])0x0) {
        thunk_FUN_016d3fb4(acVar11);
        acVar13 = extraout_r1_18;
      }
      local_218 = 0xffffffff;
      goto joined_r0x015fa1cc;
    }
    goto LAB_015f8d2c;
  }
  goto LAB_015f8960;
LAB_015f94a8:
  (**(code **)((int)&DAT_018aae3c - iVar18))(local_1e8,local_214,local_21c);
  acVar16 = local_1d8;
  acVar58 = local_1dc;
  acVar12 = local_1e0;
  acVar45 = local_1e4;
  acVar13 = local_1e8;
  acVar57 = extraout_r1_07;
  if (local_1e8 == (char  [4])0x80000001) goto LAB_015f949c;
  bVar59 = false;
  local_5c[0] = '\0';
  local_5c[1] = '\0';
  local_5c[2] = '\0';
  local_5c[3] = '\0';
  if ((uint)local_64 < (uint)local_1e0) {
    FUN_015bf41c(local_64,0,local_1e0,1,1);
    acVar11 = local_60;
  }
  acVar57 = local_5c;
  FUN_016dd1aa((int)acVar11 + (int)local_5c,acVar45,acVar12);
  local_5c = (char  [4])((int)acVar57 + (int)acVar12);
  if ((local_5c != (char  [4])0x0) &&
     (bVar59 = false, *(char *)((int)acVar11 + (int)local_5c + -1) != '/')) {
    bVar59 = true;
  }
  if ((acVar16 == (char  [4])0x0) ||
     (acVar46[0] = '\0', acVar46[1] = '\0', acVar46[2] = '\0', acVar46[3] = '\0',
     *(char *)acVar58 != '/')) {
    if (bVar59) {
      if (local_64 == local_5c) {
        FUN_015bf41c(local_64,local_5c,1,1,1);
      }
      acVar46 = (char  [4])((int)local_5c + 1);
      *(undefined1 *)((int)local_60 + (int)local_5c) = 0x2f;
      goto LAB_015f955c;
    }
    acVar11 = (char  [4])((int)local_64 - (int)local_5c);
  }
  else {
LAB_015f955c:
    acVar11 = (char  [4])((int)local_64 - (int)acVar46);
    local_5c = acVar46;
  }
  if ((uint)acVar11 < (uint)acVar16) {
    FUN_015bf41c(local_64,local_5c,acVar16,1,1);
  }
  acVar57 = local_5c;
  acVar11 = local_60;
  FUN_016dd1aa((int)local_60 + (int)local_5c,acVar58,acVar16);
  acVar57 = (char  [4])((int)acVar57 + (int)acVar16);
  local_5c = acVar57;
  FUN_015f4f38(local_1e8,acVar11,acVar57);
  acVar58 = local_1e4;
  uVar8 = (uint)(byte)local_1e8[0];
  if ((uVar8 != 4) || (((uint)local_1e8 & 0x100) == 0)) {
    if ((uVar8 != 4) && (uVar8 == 3)) {
      puVar9 = *(undefined4 **)((int)local_1e4 + 4);
      uVar10 = *(undefined4 *)local_1e4;
      pcVar14 = (code *)*puVar9;
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(uVar10);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
      thunk_FUN_016d3fb4(acVar58);
    }
    acVar57[0] = -1;
    acVar57[1] = -1;
    acVar57[2] = -1;
    acVar57[3] = '\x7f';
    if (((uint)acVar13 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(acVar45);
      acVar57 = extraout_r1_08;
    }
    goto LAB_015f949c;
  }
  local_218 = 0xffffffff;
  while (iVar18 = FUN_015f7aa0(acVar11,acVar57,acVar45,acVar12), iVar18 != 0) {
    uVar61 = FUN_015fa534(local_64,local_58,"cpu.cfs_quota_us",0x10);
    uVar62 = FUN_015fa534(local_64,local_58,"cpu.cfs_period_us",0x11);
    if (((uVar61 & 1) != 0 && (uVar62 & 1) != 0) && ((int)(uVar62 >> 0x20) != 0)) {
      uVar8 = FUN_018462e8((int)(uVar61 >> 0x20));
      if (uVar8 < local_218) {
        local_218 = uVar8;
      }
    }
    acVar57 = local_5c;
    acVar11 = local_60;
    if (local_5c == (char  [4])0x0) {
      bVar59 = false;
    }
    else {
      bVar59 = *(char *)local_60 == '/';
    }
    local_1cc._2_1_ = bVar59;
    local_1e0[0] = '\x06';
    local_1e4._0_1_ = local_5c[0];
    local_1e4._1_1_ = local_5c[1];
    local_1e4._2_1_ = local_5c[2];
    local_1e4._3_1_ = local_5c[3];
    local_1e8[0] = local_60[0];
    local_1e8[1] = local_60[1];
    local_1e8[2] = local_60[2];
    local_1e8[3] = local_60[3];
    local_1cc._0_1_ = '\x01';
    local_1cc._1_1_ = '\x02';
    FUN_015c7164(&local_48,local_1e8);
    if ((local_48 & 0xff) - 7 < 3) {
      FUN_015c7664(local_1e8);
      if ((extraout_r1_19 != (char  [4])0x0 && extraout_r1_19 != acVar57) &&
         ((extraout_r1_19 == (char  [4])0x0 || (uint)acVar57 <= (uint)extraout_r1_19 ||
          ((0x7fffffff < (uint)(int)((char *)((int)acVar11 + (int)extraout_r1_19))[-1] &&
           (*(char *)((int)acVar11 + (int)extraout_r1_19) < '\0')))))) {
        FUN_015e4f74(acVar11,acVar57,extraout_r1_19);
      }
      if ((uint)extraout_r1_19 <= (uint)acVar57) {
        acVar57 = extraout_r1_19;
        local_5c = extraout_r1_19;
      }
    }
  }
  if (((uint)acVar13 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(acVar45);
    acVar13 = extraout_r1_20;
  }
  goto LAB_015fa198;
LAB_015f949c:
  acVar13 = acVar57;
  bVar59 = iVar18 == -8;
  iVar18 = iVar18 + -4;
  if (bVar59) goto LAB_015f9690;
  goto LAB_015f94a8;
LAB_015f9690:
  local_218 = 0xffffffff;
LAB_015fa198:
  if (local_58 != (char  [4])0x0) {
    thunk_FUN_016d3fb4(local_54);
    acVar13 = extraout_r1_21;
  }
  if (local_64 != (char  [4])0x0) {
    thunk_FUN_016d3fb4(acVar11);
    acVar13 = extraout_r1_22;
  }
  goto joined_r0x015fa1cc;
LAB_015f97ac:
  uVar60 = FUN_015f7aa0(acVar12,acVar58,"/sys/fs/cgroup",0xe);
  acVar11 = SUB84((ulonglong)uVar60 >> 0x20,0);
  if ((int)uVar60 != 0) {
    if (acVar58 == (char  [4])0x0) {
      acVar58[0] = '\0';
      acVar58[1] = '\0';
      acVar58[2] = '\0';
      acVar58[3] = '\0';
    }
    else if (*(char *)((int)acVar12 + (int)acVar58 + -1) != '/') {
      if (local_64 == acVar58) {
        FUN_015bf41c(local_64,acVar58,1,1,1);
        acVar58 = local_5c;
        acVar12 = local_60;
      }
      *(undefined1 *)((int)acVar12 + (int)acVar58) = 0x2f;
      acVar58 = (char  [4])((int)acVar58 + 1);
      local_5c = acVar58;
    }
    if ((uint)((int)local_64 - (int)acVar58) < 7) {
      FUN_015bf41c(local_64,acVar58,7,1,1);
      acVar13 = local_5c;
      acVar12 = local_60;
    }
    else {
      acVar13 = acVar58;
    }
    *(undefined4 *)((int)acVar12 + (int)acVar13) = 0x2e757063;
    *(undefined4 *)((int)acVar12 + (int)acVar13 + 3) = 0x78616d2e;
    acVar58 = (char  [4])((int)acVar13 + 7);
    local_3c = 0;
    local_44 = 0x1b6;
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_48 = 0;
    local_40[0] = '\x01';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_1ec = &local_48;
    local_5c = acVar58;
    if ((uint)acVar13 < 0x179) {
      FUN_016dd1aa(local_1e8,acVar12,acVar58);
      local_1e8[(int)acVar58] = '\0';
      acVar12[0] = '\0';
      acVar12[1] = '\0';
      acVar12[2] = '\0';
      acVar12[3] = '\0';
      do {
        uVar8 = *(uint *)(local_1e8 + (int)acVar12);
        if (((0x1010100 - uVar8 | uVar8) & 0x80808080 &
            (0x1010100 - *(uint *)(local_1e8 + (int)((int)acVar12 + 4)) |
            *(uint *)(local_1e8 + (int)((int)acVar12 + 4)))) != 0x80808080) break;
        acVar12 = (char  [4])((int)acVar12 + 8);
      } while ((uint)acVar12 <= (uint)acVar13);
      if ((char  [4])((int)acVar13 + 8) != acVar12) {
        iVar18 = 0;
        do {
          if (local_1e8[iVar18 + (int)acVar12] == '\0') {
            if ((char  [4])(iVar18 + (int)acVar12) == acVar58) {
              FUN_015c49ac(local_1f8,local_1e8,&local_48);
              goto LAB_015f9984;
            }
            break;
          }
          iVar18 = iVar18 + 1;
        } while (((int)acVar13 + 8) - (int)acVar12 != iVar18);
      }
      local_1f8[0] = '\x02';
      local_1f8[1] = '\0';
      local_1f8[2] = '\0';
      local_1f8[3] = '\0';
      local_1f4 = (char  [4])&DAT_018aae48;
    }
    else {
      FUN_015e69ec(local_1f8,acVar12,acVar58,&local_1ec);
    }
LAB_015f9984:
    acVar13 = local_1f4;
    if ((local_1f8[0] == '\x04') || (uVar8 = (uint)(byte)local_1f8[0], uVar8 == 4)) {
      local_1e8 = local_1f4;
      FUN_015c4bfc(local_200,local_1e8,local_58);
      FUN_016dffb2(acVar13);
      acVar45 = local_54;
      uVar8 = (uint)(byte)local_200[0];
      acVar13 = local_1fc;
      if (uVar8 != 4) goto joined_r0x015f9a50;
      local_1d0 = CONCAT31(local_1d0._1_3_,1);
      local_1c4 = local_1c4 & 0xffff0000;
      local_1c8[0] = local_50[0];
      local_1c8[1] = local_50[1];
      local_1c8[2] = local_50[2];
      local_1c8[3] = local_50[3];
      local_1cc._0_1_ = '\0';
      local_1cc._1_1_ = '\0';
      local_1cc._2_1_ = '\0';
      local_1cc._3_1_ = '\0';
      local_1d4 = 10;
      local_1d8[0] = local_50[0];
      local_1d8[1] = local_50[1];
      local_1d8[2] = local_50[2];
      local_1d8[3] = local_50[3];
      local_1dc[0] = '\0';
      local_1dc[1] = '\0';
      local_1dc[2] = '\0';
      local_1dc[3] = '\0';
      local_1e0[0] = local_50[0];
      local_1e0[1] = local_50[1];
      local_1e0[2] = local_50[2];
      local_1e0[3] = local_50[3];
      local_1e4._0_1_ = local_54[0];
      local_1e4._1_1_ = local_54[1];
      local_1e4._2_1_ = local_54[2];
      local_1e4._3_1_ = local_54[3];
      local_1e8[0] = '\n';
      local_1e8[1] = '\0';
      local_1e8[2] = '\0';
      local_1e8[3] = '\0';
      FUN_015c4d94(&local_48,local_1e8);
      if (local_48 == 1) {
        local_1e0 = (char  [4])((int)local_40 - (int)local_1cc);
      }
      else {
        acVar11 = extraout_r1_11;
        if ((local_1c4._1_1_ != '\0') ||
           (((char)local_1c4 != '\x01' && (acVar11 = local_1cc, local_1c8 == local_1cc))))
        goto LAB_015fa21c;
        local_1e0 = (char  [4])((int)local_1c8 - (int)local_1cc);
        acVar45 = local_1e4;
      }
      acVar45 = (char  [4])((int)acVar45 + (int)local_1cc);
      if (local_1e0 != (char  [4])0x0) {
        acVar13 = (char  [4])((int)local_1e0 + -1);
        if (*(char *)((int)acVar45 + (int)acVar13) == '\n') {
          local_1e0 = (char  [4])((int)local_1e0 + -2);
          if (acVar13 == (char  [4])0x0) {
            acVar16[0] = '\0';
            acVar16[1] = '\0';
            acVar16[2] = '\0';
            acVar16[3] = '\0';
          }
          else {
            acVar16 = acVar45;
            if (*(char *)((int)acVar45 + (int)local_1e0) != '\r') {
              acVar16[0] = '\0';
              acVar16[1] = '\0';
              acVar16[2] = '\0';
              acVar16[3] = '\0';
            }
          }
          if (acVar16 == (char  [4])0x0) {
            local_1e0 = acVar13;
          }
          else {
            acVar45 = acVar16;
          }
        }
      }
      local_1c4 = CONCAT22(local_1c4._2_2_,1);
      local_1d0 = CONCAT31(local_1d0._1_3_,1);
      local_1cc._0_1_ = '\0';
      local_1cc._1_1_ = '\0';
      local_1cc._2_1_ = '\0';
      local_1cc._3_1_ = '\0';
      local_1d4 = 0x20;
      local_1dc[0] = '\0';
      local_1dc[1] = '\0';
      local_1dc[2] = '\0';
      local_1dc[3] = '\0';
      local_1e8[0] = ' ';
      local_1e8[1] = '\0';
      local_1e8[2] = '\0';
      local_1e8[3] = '\0';
      local_1e4 = acVar45;
      local_1d8 = local_1e0;
      local_1c8 = local_1e0;
      FUN_015c4d94(&local_48,local_1e8);
      iVar18 = local_44;
      acVar12 = local_1cc;
      acVar13 = local_1e4;
      if (local_48 == 0) {
        uVar8 = (uint)local_1c4._1_1_;
        bVar59 = uVar8 == 0;
        if (bVar59) {
          uVar8 = local_1c4 & 0xff;
        }
        acVar11 = extraout_r1_12;
        acVar13 = local_1c8;
        if (bVar59 && uVar8 == 0) goto joined_r0x015fa280;
        goto LAB_015fa21c;
      }
      local_1cc._0_1_ = local_40[0];
      local_1cc._1_1_ = local_40[1];
      local_1cc._2_1_ = local_40[2];
      local_1cc._3_1_ = local_40[3];
      acVar11 = extraout_r1_12;
      if ((acVar45 == (char  [4])0x0) || (acVar11 = extraout_r1_12, local_1c4._1_1_ != 0))
      goto LAB_015fa21c;
      FUN_015c4d94(&local_48,local_1e8);
      if (local_48 == 1) {
        uVar8 = local_44 - (int)local_1cc;
      }
      else {
        acVar11 = extraout_r1_13;
        if ((local_1c4._1_1_ != '\0') ||
           (((char)local_1c4 != '\x01' && (acVar11 = local_1cc, local_1c8 == local_1cc))))
        goto LAB_015fa21c;
        uVar8 = (int)local_1c8 - (int)local_1cc;
        acVar13 = local_1e4;
      }
      uVar52 = iVar18 - (int)acVar12;
      bVar3 = 1;
      pbVar17 = (byte *)((int)acVar13 + (int)local_1cc);
      if (uVar52 != 0) {
        bVar3 = 1;
        pbVar50 = (byte *)((int)acVar45 + (int)acVar12);
        if (uVar52 == 1) {
          bVar51 = *pbVar50;
          if ((bVar51 == 0x2b) || (bVar51 == 0x2d)) goto joined_r0x015f9f50;
        }
        else {
          bVar51 = *pbVar50;
        }
        if (bVar51 == 0x2b) {
          pbVar50 = pbVar50 + 1;
          uVar52 = uVar52 - 1;
        }
        if (uVar52 < 9) {
          if (uVar52 == 0) {
            bVar3 = 0;
            local_220 = 0;
          }
          else {
            uVar47 = 0;
            do {
              bVar51 = *pbVar50;
              if (9 < bVar51 - 0x30) goto joined_r0x015f9f50;
              pbVar50 = pbVar50 + 1;
              uVar52 = uVar52 - 1;
              uVar47 = (bVar51 - 0x30) + uVar47 * 10;
            } while (uVar52 != 0);
            bVar3 = 0;
            local_220 = uVar47;
          }
        }
        else {
          uVar47 = 0;
          do {
            if (uVar52 == 0) {
              bVar3 = 0;
              local_220 = uVar47;
              break;
            }
            uVar20 = (uint)((ulonglong)uVar47 * 10);
            if ((int)((ulonglong)uVar47 * 10 >> 0x20) != 0) break;
            uVar22 = *pbVar50 - 0x30;
            uVar47 = uVar22 + uVar20;
            if (9 < uVar22) break;
            uVar52 = uVar52 - 1;
            pbVar50 = pbVar50 + 1;
          } while (!CARRY4(uVar22,uVar20));
        }
      }
joined_r0x015f9f50:
      if (uVar8 != 0) {
        if (uVar8 == 1) {
          bVar51 = *pbVar17;
          if ((bVar51 == 0x2b) || (bVar51 == 0x2d)) goto LAB_015f9df8;
        }
        else {
          bVar51 = *pbVar17;
        }
        if (bVar51 == 0x2b) {
          pbVar17 = pbVar17 + 1;
          uVar8 = uVar8 - 1;
        }
        if (uVar8 < 9) {
          if (uVar8 != 0) {
            uVar52 = 0;
            do {
              bVar51 = *pbVar17;
              if (9 < bVar51 - 0x30) goto LAB_015f9df8;
              pbVar17 = pbVar17 + 1;
              uVar8 = uVar8 - 1;
              uVar52 = (bVar51 - 0x30) + uVar52 * 10;
            } while (uVar8 != 0);
LAB_015f9d80:
            if (!(bool)(bVar3 | uVar52 == 0)) {
              uVar8 = FUN_018462e8(local_220);
              if (uVar8 < local_218) {
                local_218 = uVar8;
              }
            }
          }
        }
        else {
          uVar52 = 0;
          do {
            if (uVar8 == 0) goto LAB_015f9d80;
            uVar47 = (uint)((ulonglong)uVar52 * 10);
            if ((int)((ulonglong)uVar52 * 10 >> 0x20) != 0) {
LAB_015f9df4:
              break;
            }
            uVar20 = *pbVar17 - 0x30;
            uVar52 = uVar20 + uVar47;
            if (9 < uVar20) goto LAB_015f9df4;
            uVar8 = uVar8 - 1;
            pbVar17 = pbVar17 + 1;
          } while (!CARRY4(uVar20,uVar47));
        }
      }
LAB_015f9df8:
    }
    else {
      local_200 = local_1f8;
joined_r0x015f9a50:
      local_1fc = acVar13;
      if (uVar8 == 3) {
        puVar9 = *(undefined4 **)((int)acVar13 + 4);
        uVar10 = *(undefined4 *)acVar13;
        pcVar14 = (code *)*puVar9;
        if (pcVar14 != (code *)0x0) {
          (*pcVar14)(uVar10);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(uVar10);
        }
        thunk_FUN_016d3fb4(acVar13);
      }
    }
    acVar12 = local_60;
    local_1e0[0] = 6;
    local_1e8[0] = local_60[0];
    local_1e8[1] = local_60[1];
    local_1e8[2] = local_60[2];
    local_1e8[3] = local_60[3];
    local_1cc._0_3_ = CONCAT12(*(char *)local_60 == '/',0x201);
    local_1e4 = acVar58;
    FUN_015c7164(&local_48,local_1e8);
    if ((local_48 & 0xff) - 7 < 3) {
      FUN_015c7664(local_1e8);
      if ((extraout_r1_14 != (char  [4])0x0 && extraout_r1_14 != acVar58) &&
         ((extraout_r1_14 == (char  [4])0x0 || (uint)acVar58 <= (uint)extraout_r1_14 ||
          ((0x7fffffff < (uint)(int)((char *)((int)acVar12 + (int)extraout_r1_14))[-1] &&
           (*(char *)((int)acVar12 + (int)extraout_r1_14) < '\0')))))) {
        FUN_015e4f74(acVar12,acVar58,extraout_r1_14);
      }
      if ((uint)acVar58 < (uint)extraout_r1_14) goto LAB_015f9e7c;
      acVar58 = extraout_r1_14;
      local_5c = extraout_r1_14;
      if (extraout_r1_14 != (char  [4])0x0) goto LAB_015f9e7c;
      local_1cc._2_1_ = false;
    }
    else {
LAB_015f9e7c:
      local_1cc._2_1_ = *(char *)acVar12 == '/';
    }
    acVar13 = local_60;
    local_1e0[0] = '\x06';
    local_60[0] = acVar12[0];
    local_60[1] = acVar12[1];
    local_60[2] = acVar12[2];
    local_60[3] = acVar12[3];
    local_1e8[0] = local_60[0];
    local_1e8[1] = local_60[1];
    local_1e8[2] = local_60[2];
    local_1e8[3] = local_60[3];
    local_1cc._0_1_ = '\x01';
    local_1cc._1_1_ = '\x02';
    local_1e4 = acVar58;
    local_60 = acVar13;
    FUN_015c7164(&local_48,local_1e8);
    if ((local_48 & 0xff) - 7 < 3) {
      FUN_015c7664(local_1e8);
      if ((extraout_r1_15 != (char  [4])0x0 && extraout_r1_15 != acVar58) &&
         ((extraout_r1_15 == (char  [4])0x0 || (uint)acVar58 <= (uint)extraout_r1_15 ||
          ((0x7fffffff < (uint)(int)((char *)((int)acVar12 + (int)extraout_r1_15))[-1] &&
           (*(char *)((int)acVar12 + (int)extraout_r1_15) < '\0')))))) {
        FUN_015e4f74(acVar12,acVar58,extraout_r1_15);
      }
      if ((uint)extraout_r1_15 <= (uint)acVar58) {
        acVar58 = extraout_r1_15;
        local_5c = extraout_r1_15;
      }
    }
    goto LAB_015f97ac;
  }
LAB_015fa21c:
  acVar13 = acVar11;
joined_r0x015fa280:
  if (local_58 != (char  [4])0x0) {
    thunk_FUN_016d3fb4(local_54,acVar13);
    acVar13 = extraout_r1_23;
  }
  if (local_64 != (char  [4])0x0) {
    thunk_FUN_016d3fb4(local_60,acVar13);
    acVar13 = extraout_r1_24;
  }
joined_r0x015fa1cc:
  if (local_228 != (char  [4])0x0) {
    thunk_FUN_016d3fb4(local_214,acVar13);
    acVar13 = extraout_r1_25;
  }
  if (local_20c != 0) {
LAB_015f8d3c:
    thunk_FUN_016d3fb4(local_208,acVar13);
  }
LAB_015f8d44:
  FUN_016dd606(local_1e8,0,0x80);
  if (local_218 < 2) {
    local_218 = 1;
  }
  iVar18 = FUN_016da378(0,0x80,local_1e8);
  if ((iVar18 != 0) ||
     (uVar52 = (int)local_1e4 - ((uint)local_1e4 >> 1 & 0x55555555),
     uVar8 = (int)local_1e8 - ((uint)local_1e8 >> 1 & 0x55555555),
     uVar53 = (uVar52 & 0x33333333) + (uVar52 >> 2 & 0x33333333),
     uVar47 = (int)local_1e0 - ((uint)local_1e0 >> 1 & 0x55555555),
     uVar52 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333),
     uVar48 = (uVar47 & 0x33333333) + (uVar47 >> 2 & 0x33333333),
     local_16c = local_16c - (local_16c >> 1 & 0x55555555),
     uVar49 = (local_16c & 0x33333333) + (local_16c >> 2 & 0x33333333),
     local_170 = local_170 - (local_170 >> 1 & 0x55555555),
     uVar47 = (local_170 & 0x33333333) + (local_170 >> 2 & 0x33333333),
     uVar8 = (int)local_1dc - ((uint)local_1dc >> 1 & 0x55555555),
     uVar22 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333),
     uVar8 = (int)local_1d8 - ((uint)local_1d8 >> 1 & 0x55555555),
     uVar23 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333),
     uVar8 = local_1d4 - (local_1d4 >> 1 & 0x55555555),
     uVar24 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333),
     uVar8 = local_1d0 - (local_1d0 >> 1 & 0x55555555),
     uVar25 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333),
     uVar8 = (int)local_1cc - ((uint)local_1cc >> 1 & 0x55555555),
     uVar26 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333),
     uVar8 = (int)local_1c8 - ((uint)local_1c8 >> 1 & 0x55555555),
     uVar27 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333),
     uVar8 = local_1c4 - (local_1c4 >> 1 & 0x55555555),
     uVar28 = (uVar8 & 0x33333333) + (uVar8 >> 2 & 0x33333333),
     local_1c0 = local_1c0 - (local_1c0 >> 1 & 0x55555555),
     uVar29 = (local_1c0 & 0x33333333) + (local_1c0 >> 2 & 0x33333333),
     local_1bc = local_1bc - (local_1bc >> 1 & 0x55555555),
     uVar30 = (local_1bc & 0x33333333) + (local_1bc >> 2 & 0x33333333),
     local_1b8 = local_1b8 - (local_1b8 >> 1 & 0x55555555),
     uVar31 = (local_1b8 & 0x33333333) + (local_1b8 >> 2 & 0x33333333),
     local_1b4 = local_1b4 - (local_1b4 >> 1 & 0x55555555),
     uVar32 = (local_1b4 & 0x33333333) + (local_1b4 >> 2 & 0x33333333),
     local_1b0 = local_1b0 - (local_1b0 >> 1 & 0x55555555),
     uVar33 = (local_1b0 & 0x33333333) + (local_1b0 >> 2 & 0x33333333),
     local_1ac = local_1ac - (local_1ac >> 1 & 0x55555555),
     uVar34 = (local_1ac & 0x33333333) + (local_1ac >> 2 & 0x33333333),
     local_1a8 = local_1a8 - (local_1a8 >> 1 & 0x55555555),
     uVar35 = (local_1a8 & 0x33333333) + (local_1a8 >> 2 & 0x33333333),
     local_1a4 = local_1a4 - (local_1a4 >> 1 & 0x55555555),
     uVar36 = (local_1a4 & 0x33333333) + (local_1a4 >> 2 & 0x33333333),
     local_1a0 = local_1a0 - (local_1a0 >> 1 & 0x55555555),
     uVar37 = (local_1a0 & 0x33333333) + (local_1a0 >> 2 & 0x33333333),
     local_19c = local_19c - (local_19c >> 1 & 0x55555555),
     uVar38 = (local_19c & 0x33333333) + (local_19c >> 2 & 0x33333333),
     local_198 = local_198 - (local_198 >> 1 & 0x55555555),
     uVar39 = (local_198 & 0x33333333) + (local_198 >> 2 & 0x33333333),
     local_194 = local_194 - (local_194 >> 1 & 0x55555555),
     uVar40 = (local_194 & 0x33333333) + (local_194 >> 2 & 0x33333333),
     local_190 = local_190 - (local_190 >> 1 & 0x55555555),
     uVar41 = (local_190 & 0x33333333) + (local_190 >> 2 & 0x33333333),
     local_18c = local_18c - (local_18c >> 1 & 0x55555555),
     uVar42 = (local_18c & 0x33333333) + (local_18c >> 2 & 0x33333333),
     local_188 = local_188 - (local_188 >> 1 & 0x55555555),
     uVar43 = (local_188 & 0x33333333) + (local_188 >> 2 & 0x33333333),
     local_174 = local_174 - (local_174 >> 1 & 0x55555555),
     uVar54 = (local_174 & 0x33333333) + (local_174 >> 2 & 0x33333333),
     local_178 = local_178 - (local_178 >> 1 & 0x55555555),
     uVar55 = (local_178 & 0x33333333) + (local_178 >> 2 & 0x33333333),
     local_17c = local_17c - (local_17c >> 1 & 0x55555555),
     uVar44 = (local_17c & 0x33333333) + (local_17c >> 2 & 0x33333333),
     local_180 = local_180 - (local_180 >> 1 & 0x55555555),
     uVar20 = (local_180 & 0x33333333) + (local_180 >> 2 & 0x33333333),
     local_184 = local_184 - (local_184 >> 1 & 0x55555555),
     uVar8 = (local_184 & 0x33333333) + (local_184 >> 2 & 0x33333333),
     uVar8 = ((uVar53 + (uVar53 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar52 + (uVar52 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar48 + (uVar48 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar22 + (uVar22 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar23 + (uVar23 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar24 + (uVar24 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar25 + (uVar25 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar26 + (uVar26 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
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
             ((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar20 + (uVar20 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar44 + (uVar44 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar55 + (uVar55 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar54 + (uVar54 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar47 + (uVar47 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
             ((uVar49 + (uVar49 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18), uVar8 == 0)) {
    uVar8 = FUN_016d2558(0x54);
    if (uVar8 == 0xffffffff) {
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar9;
      *(undefined1 *)param_1 = 0;
      param_1[1] = uVar10;
      return;
    }
    if (uVar8 == 0) {
      *param_1 = 2;
      param_1[1] = &DAT_018aadb8;
      return;
    }
  }
  if (local_218 < uVar8) {
    uVar8 = local_218;
  }
  *(undefined1 *)param_1 = 4;
  param_1[1] = uVar8;
  return;
}

