// FUN_00f202f4 @ 00f202f4 size=3764 calls_out=40 calls_in=2
// strings: log_to_file | log_to_file | log_to_file | the following required argument was not provided: log_to_file | Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00f202f4(void)

{
  code *pcVar1;
  int ****ppppiVar2;
  undefined1 uVar3;
  int *******pppppppiVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *******pppppppiVar8;
  uint uVar9;
  int *******pppppppiVar10;
  char *pcVar11;
  int *******extraout_r1;
  int *******extraout_r1_00;
  int *****pppppiVar12;
  bool bVar13;
  int *******pppppppiVar14;
  int *******extraout_r3;
  int *******extraout_r3_00;
  uint uVar15;
  int ******ppppppiVar16;
  int ******ppppppiVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  int *******pppppppiVar22;
  int *******pppppppiVar23;
  int iVar24;
  int ******ppppppiVar25;
  int ******ppppppiVar26;
  undefined8 uVar27;
  int *******local_520;
  int *******local_51c;
  int *******local_518;
  undefined4 local_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  int *******pppppppiStack_508;
  int *******local_500;
  int *******local_4fc;
  undefined4 local_4f8;
  int *******local_4f4;
  int *******pppppppiStack_4f0;
  int *******local_4ec;
  int *******local_4e8;
  int *******pppppppiStack_4e4;
  int *******pppppppiStack_4e0;
  int *******pppppppiStack_4dc;
  int *******local_4d8;
  int *******pppppppiStack_4d4;
  int *******pppppppiStack_4d0;
  int *******pppppppiStack_4cc;
  int *******pppppppiStack_4c8;
  int *******local_468;
  int local_464;
  int *******local_460;
  undefined4 local_3e4;
  undefined4 local_3e0;
  uint local_3bc;
  int *******local_390;
  int *******local_38c;
  int *******local_388;
  undefined4 local_384;
  int *******pppppppiStack_380;
  int *******local_37c;
  undefined4 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined1 auStack_364 [324];
  undefined8 local_220;
  int *******local_218;
  int *******local_214;
  int *******local_210;
  int *******local_20c;
  int *******local_208;
  undefined4 local_204;
  int *******local_200;
  int *******pppppppiStack_1fc;
  int *******local_1f8;
  int *******pppppppiStack_1f4;
  int *******local_1f0;
  int *******pppppppiStack_1ec;
  int *******pppppppiStack_1e8;
  int *******pppppppiStack_1e4;
  int *******pppppppiStack_1e0;
  int *******local_b0;
  int *******local_ac;
  int *******local_a8;
  int *******pppppppiStack_a4;
  int *******pppppppiStack_a0;
  int *******local_98;
  int *******pppppppiStack_94;
  int *******pppppppiStack_90;
  int *******pppppppiStack_8c;
  int *******local_88;
  int *******pppppppiStack_84;
  int *******pppppppiStack_80;
  undefined2 local_7c;
  undefined1 local_7a;
  int *******local_78;
  int *******local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  int *******local_60;
  int *******pppppppiStack_5c;
  int *******local_58;
  int *******local_54;
  int *******local_50;
  int *******pppppppiStack_4c;
  int *******pppppppiStack_48;
  int *******pppppppiStack_44;
  int *******pppppppiStack_40;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  FUN_0120d7dc(&local_500);
  iVar24 = DAT_01d51aa4;
  ppppiVar2 = DAT_01d51aa0;
  if (DAT_01d51aa4 == 0) {
    local_390 = (int *******)&SUB_00000004;
    pppppppiVar22 = (int *******)0x0;
    local_388 = (int *******)0x0;
  }
  else {
    if ((int ****)0xaaaaaaa < DAT_01d51aa0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664730();
    }
    pppppppiVar22 = (int *******)0x0;
    iVar18 = (int)DAT_01d51aa0 * 0xc;
    if (iVar18 == 0) {
      pppppppiVar4 = (int *******)&SUB_00000004;
      local_220._0_4_ = (int *******)0x0;
    }
    else {
      pppppppiVar4 = (int *******)FUN_01298504(iVar18,4);
      local_220._0_4_ = (int *******)ppppiVar2;
      if (pppppppiVar4 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,iVar18);
      }
    }
    local_218 = (int *******)0x0;
    local_388 = (int *******)local_220;
    local_390 = pppppppiVar4;
    local_220._4_4_ = pppppppiVar4;
    if (ppppiVar2 != (int ****)0x0) {
      iVar18 = 0;
      do {
        pppppppiVar22 = local_218;
        iVar20 = *(int *)(iVar24 + (int)local_218 * 4);
        if (iVar20 == 0) goto LAB_00f205e4;
        iVar5 = FUN_01bedbda(iVar20);
        if (iVar5 == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = FUN_01298504(iVar5,1);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,iVar5);
          }
        }
        FUN_01bed4e2(iVar6,iVar20,iVar5);
        if (pppppppiVar22 == (int *******)local_220) {
          FUN_019abd3c(&local_220);
          pppppppiVar4 = local_220._4_4_;
        }
        local_218 = (int *******)((int)pppppppiVar22 + 1);
        piVar7 = (int *)((int)pppppppiVar4 + iVar18);
        *piVar7 = iVar5;
        iVar18 = iVar18 + 0xc;
        piVar7[1] = iVar6;
        piVar7[2] = iVar5;
      } while ((int *******)ppppiVar2 != local_218);
      pppppppiVar22 = (int *******)ppppiVar2;
LAB_00f205e4:
      local_388 = (int *******)local_220;
      local_390 = local_220._4_4_;
    }
  }
  local_384 = local_390 + (int)pppppppiVar22 * 3;
  local_38c = local_390;
  if (pppppppiVar22 == (int *******)0x0) {
LAB_00f20384:
    local_a8 = (int *******)0x0;
    local_b0 = (int *******)0x0;
    local_ac = (int *******)&SUB_00000004;
    FUN_012c1dbc(&local_390);
  }
  else {
    local_38c = local_390 + 3;
    ppppppiVar17 = *local_390;
    if (ppppppiVar17 == (int ******)&DAT_80000000) goto LAB_00f20384;
    uVar9 = (int)pppppppiVar22 * 0xc - 0xc;
    ppppppiVar26 = local_390[1];
    uVar15 = (uVar9 >> 2) * -0x55555555;
    if (uVar15 < 4) {
      uVar15 = 3;
    }
    if (0x7fffffeb < uVar9 && (int)pppppppiVar22 * 0xc != 0x7ffffff8) {
      uVar21 = 0;
      pppppppiVar22 = local_390;
LAB_00f20414:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar21,pppppppiVar22);
    }
    pppppppiVar4 = (int *******)(uVar15 + 1);
    ppppppiVar16 = local_390[2];
    pppppppiVar22 = (int *******)((int)pppppppiVar4 * 0xc);
    if (pppppppiVar22 == (int *******)0x0) {
      pppppppiVar4 = (int *******)0x0;
      pppppppiVar23 = (int *******)&SUB_00000004;
    }
    else {
      uVar21 = 4;
      pppppppiVar23 = (int *******)FUN_01298504(pppppppiVar22,4);
      if (pppppppiVar23 == (int *******)0x0) goto LAB_00f20414;
    }
    pppppppiVar8 = local_384;
    pppppppiVar22 = local_38c;
    *pppppppiVar23 = ppppppiVar17;
    pppppppiVar23[1] = ppppppiVar26;
    pppppppiVar23[2] = ppppppiVar16;
    local_70 = (int *******)&DAT_00000001;
    local_220._0_4_ = local_390;
    local_220._4_4_ = local_38c;
    local_218 = local_388;
    local_214 = local_384;
    local_78 = pppppppiVar4;
    local_74 = pppppppiVar23;
    if (local_38c != local_384) {
      uVar15 = (int)local_384 - (int)local_38c;
      iVar24 = 0x14;
      do {
        iVar18 = iVar24;
        pppppppiVar4 = local_70;
        uVar15 = uVar15 - 0xc;
        iVar24 = *(int *)((int)pppppppiVar22 + iVar18 + -0x14);
        if (iVar24 == -0x80000000) break;
        uVar21 = *(undefined4 *)((int)pppppppiVar22 + iVar18 + -0x10);
        uVar19 = *(undefined4 *)((int)pppppppiVar22 + iVar18 + -0xc);
        if (local_70 == local_78) {
          FUN_006520b4(&local_78,local_70,(uVar15 >> 2) * -0x55555555 + 1,4,0xc);
          pppppppiVar23 = local_74;
        }
        local_70 = (int *******)((int)pppppppiVar4 + 1);
        pcVar11 = (char *)((int)pppppppiVar23 + iVar18);
        *(undefined4 *)pcVar11 = uVar19;
        *(int *)(pcVar11 + -8) = iVar24;
        *(undefined4 *)(pcVar11 + -4) = uVar21;
        iVar24 = iVar18 + 0xc;
      } while ((int *******)((int)pppppppiVar22 + iVar18 + -8) != pppppppiVar8);
      local_220._4_4_ = (int *******)((int)pppppppiVar22 + iVar18 + -8);
    }
    FUN_012c1dbc(&local_220);
    local_b0 = local_78;
    local_ac = local_74;
    local_a8 = local_70;
  }
  pppppppiVar22 = (int *******)0x0;
  if (((local_3bc & 0x800) == 0) ||
     (pppppppiVar22 = (int *******)&DAT_00000001, local_a8 == (int *******)0x0)) {
LAB_00f20748:
    if ((local_3bc & 0x4000000) == 0) {
      pppppppiVar4 = (int *******)((int)pppppppiVar22 + 1);
      if (pppppppiVar22 < local_a8) {
        uVar27 = FUN_019b00d0(local_ac[(int)pppppppiVar22 * 3 + 1],
                              local_ac[(int)pppppppiVar22 * 3 + 2]);
        if ((int)uVar27 != 0) {
          FUN_012fbd94(&local_220,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20));
          pppppppiVar23 = local_218;
          pppppppiVar8 = local_220._4_4_;
          pppppppiVar22 = (int *******)local_220;
          if ((int *******)local_220 == (int *******)0x0) {
            pppppppiVar22 = local_468;
          }
          if ((int *******)local_220 == (int *******)0x0 &&
              pppppppiVar22 == (int *******)&DAT_80000000) {
            uVar21 = 0;
            if ((int)local_218 < 0) {
LAB_00f20b98:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar21,pppppppiVar23);
            }
            if (local_218 == (int *******)0x0) {
              local_464 = 1;
              local_468 = (int *******)0x0;
            }
            else {
              uVar21 = 1;
              local_464 = FUN_01298504(local_218,1);
              local_468 = pppppppiVar23;
              if (local_464 == 0) goto LAB_00f20b98;
            }
            FUN_01bed4e2(local_464,pppppppiVar8,pppppppiVar23);
            local_460 = pppppppiVar23;
          }
        }
      }
    }
    else {
      pppppppiVar4 = pppppppiVar22;
    }
    FUN_012a87fc(&local_78,&local_500,&local_b0,pppppppiVar4);
  }
  else {
    local_220._0_4_ = (int *******)local_ac[1];
    local_220._4_4_ = (int *******)local_ac[2];
    if (local_220._4_4_ == (int *******)0x0) {
      bVar13 = false;
    }
    else {
      bVar13 = *(char *)(int *******)local_220 == '/';
    }
    local_218 = (int *******)CONCAT31(local_218._1_3_,6);
    local_204 = (int *******)CONCAT22(CONCAT11(local_204._3_1_,bVar13),0x201);
    FUN_01982524(&local_390,&local_220);
    if ((char)local_390 != '\t') goto LAB_00f20748;
    pppppppiVar4 = local_388;
    pppppppiVar23 = local_38c;
    if ((local_388 == (int *******)0x2) && (*(short *)local_38c == 0x2e2e)) {
      pppppppiVar14 = (int *******)0x2;
      pppppppiVar10 = (int *******)0x0;
    }
    else {
      pppppppiVar8 = local_388;
      do {
        pppppppiVar14 = pppppppiVar8;
        if ((int *******)((int)local_38c + (int)pppppppiVar14) == local_38c) {
          pppppppiVar23 = (int *******)0x0;
          pppppppiVar10 = local_38c;
          goto LAB_00f20718;
        }
        pppppppiVar8 = (int *******)((int)pppppppiVar14 + -1);
      } while (*(char *)((int)local_38c + (int)pppppppiVar14 + -1) != '.');
      if (pppppppiVar8 == (int *******)0x0) {
        pppppppiVar10 = (int *******)0x0;
        pppppppiVar14 = local_388;
      }
      else {
        pppppppiVar10 = (int *******)((int)local_38c + (int)pppppppiVar14);
        pppppppiVar4 = (int *******)((int)local_388 - (int)pppppppiVar14);
        pppppppiVar14 = pppppppiVar8;
      }
    }
LAB_00f20718:
    if (pppppppiVar23 != (int *******)0x0) {
      pppppppiVar10 = pppppppiVar23;
    }
    if (pppppppiVar10 == (int *******)0x0) goto LAB_00f20748;
    if (pppppppiVar23 == (int *******)0x0) {
      pppppppiVar14 = pppppppiVar4;
    }
    FUN_012fbd94(&local_220,pppppppiVar10,pppppppiVar14);
    pppppppiVar23 = local_218;
    pppppppiVar4 = local_220._4_4_;
    if ((int *******)local_220 != (int *******)0x0) goto LAB_00f20748;
    uVar21 = 0;
    if ((int)local_218 < 0) goto LAB_00f20b98;
    if (local_218 == (int *******)0x0) {
      pppppppiVar8 = (int *******)&DAT_00000001;
      pppppppiVar22 = (int *******)0x0;
    }
    else {
      uVar21 = 1;
      pppppppiVar8 = (int *******)FUN_01298504(local_218,1);
      pppppppiVar22 = pppppppiVar23;
      if (pppppppiVar8 == (int *******)0x0) goto LAB_00f20b98;
    }
    FUN_01bed4e2(pppppppiVar8,pppppppiVar4,pppppppiVar23);
    local_518 = pppppppiVar23;
    local_520 = pppppppiVar22;
    local_51c = pppppppiVar8;
    if (local_a8 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,1,0,&DAT_01d2fe30);
    }
    local_204 = (int *******)&local_520;
    local_218 = (int *******)&local_b0;
    local_210 = (int *******)((int)local_a8 + -1);
    local_214 = (int *******)&DAT_00000001;
    local_a8 = (int *******)&DAT_00000001;
    local_208 = (int *******)&DAT_00000001;
    local_20c = (int *******)0x0;
    local_220._4_4_ = (int *******)&SUB_00000004;
    local_220._0_4_ = (int *******)&SUB_00000004;
    if (local_210 == (int *******)0x0) {
      FUN_012988c0(&local_b0,&local_20c);
    }
    else {
      iVar24 = FUN_012b217c(&local_b0,1,&local_20c);
      if (iVar24 != 0) {
        if (local_208 == local_20c) {
          pppppppiVar22 = local_208;
        }
        else {
          FUN_012b2248(&local_220,(int)local_208 - (int)local_20c);
          iVar24 = FUN_012b217c(local_218,local_214,&local_20c);
          if (iVar24 == 0) goto LAB_00f2102c;
          pppppppiVar22 = local_20c;
        }
        pppppppiVar22 = (int *******)((int)local_208 - (int)pppppppiVar22);
        uVar21 = 0;
        iVar24 = (int)pppppppiVar22 * 0xc;
        if ((int *******)0xaaaaaaa < pppppppiVar22) {
LAB_00f20e24:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar21,iVar24);
        }
        if (iVar24 == 0) {
          pppppppiVar4 = (int *******)&SUB_00000004;
          pppppppiVar22 = (int *******)0x0;
        }
        else {
          uVar21 = 4;
          pppppppiVar4 = (int *******)FUN_01298504(iVar24,4);
          if (pppppppiVar4 == (int *******)0x0) goto LAB_00f20e24;
        }
        local_70 = (int *******)0x0;
        local_78 = pppppppiVar22;
        local_74 = pppppppiVar4;
        FUN_012988c0(&local_78,&local_20c);
        pppppppiVar4 = local_70;
        pppppppiVar22 = local_74;
        local_388 = local_78;
        local_390 = local_74;
        pppppppiVar23 = local_74 + (int)local_70 * 3;
        local_38c = local_74;
        local_384 = pppppppiVar23;
        if (local_70 != (int *******)0x0) {
          FUN_012b2248(&local_220);
          if ((int *******)local_218[2] != local_214) {
            ppppppiVar26 = local_218[1];
            iVar24 = (int)pppppppiVar4 * 0xc;
            ppppppiVar17 = ppppppiVar26 + (int)local_218[2] * 3;
            pppppppiVar4 = pppppppiVar22;
            do {
              pppppppiVar22 = pppppppiVar22 + 3;
              if (iVar24 == 0) {
                pppppppiVar22 = pppppppiVar23;
                break;
              }
              if (*pppppppiVar4 == (int ******)&DAT_80000000) {
                pppppppiVar22 = pppppppiVar4 + 3;
                break;
              }
              ppppppiVar25 = pppppppiVar4[2];
              iVar24 = iVar24 + -0xc;
              ppppppiVar16 = pppppppiVar4[1];
              *ppppppiVar17 = (int *****)*pppppppiVar4;
              ppppppiVar17[1] = (int *****)ppppppiVar16;
              ppppppiVar17[2] = (int *****)ppppppiVar25;
              ppppppiVar17 = ppppppiVar17 + 3;
              local_218[2] = (int ******)((int)local_218[2] + 1);
              pppppppiVar4 = pppppppiVar4 + 3;
            } while (ppppppiVar17 != ppppppiVar26 + (int)local_214 * 3);
            local_38c = pppppppiVar22;
          }
        }
        FUN_012c1dbc(&local_390);
      }
    }
LAB_00f2102c:
    FUN_012b22c0(&local_220);
    local_3e0 = 0;
    local_3e4 = 1;
    if (local_468 != (int *******)&DAT_80000000) {
      FUN_0134bd64(local_468,local_464);
    }
    local_468 = (int *******)&DAT_80000000;
    FUN_012a87fc(&local_78,&local_500,&local_b0,1);
    FUN_0134bd64(local_520,local_51c);
  }
  FUN_012987d4(&local_b0);
  FUN_01bed4e2(&local_390,&local_500,0x16c);
  pppppppiVar22 = local_74;
  if (local_78 == (int *******)&DAT_80000000) {
    FUN_01bed4e2(&local_220,&local_500,0x16c);
    FUN_0120d564(&local_220);
    FUN_012bdf18(pppppppiVar22);
    goto LAB_00f211c8;
  }
  local_520 = local_78;
  local_51c = local_74;
  local_518 = local_70;
  local_514 = local_6c;
  uStack_510 = uStack_68;
  uStack_50c = local_64;
  pppppppiStack_508 = local_60;
  FUN_0120d564(&local_390);
  pppppppiVar22 = local_51c;
  if (local_518 != (int *******)0x0) {
    iVar24 = (int)local_518 << 3;
    iVar18 = 0;
    do {
      if ((pppppppiVar22[iVar18 * 2 + 1] == (int ******)&DAT_0000000b) &&
         (iVar20 = thunk_FUN_01bed842(pppppppiVar22[iVar18 * 2],"log_to_file",0xb), iVar20 == 0)) {
        uVar27 = FUN_01298f6c(&local_520,iVar18);
        FUN_01298ea8(&local_218,&local_514,iVar18);
        local_220 = uVar27;
        if (local_218 == (int *******)0x2) goto LAB_00f208ac;
        local_500 = local_218;
        local_4fc = local_214;
        local_4f8 = local_210;
        local_4f4 = local_20c;
        pppppppiStack_4f0 = local_208;
        local_4ec = local_204;
        local_4e8 = local_200;
        pppppppiStack_4e4 = pppppppiStack_1fc;
        pppppppiStack_4e0 = local_1f8;
        pppppppiStack_4dc = pppppppiStack_1f4;
        local_4d8 = local_1f0;
        pppppppiStack_4d4 = pppppppiStack_1ec;
        pppppppiStack_4d0 = pppppppiStack_1e8;
        pppppppiStack_4cc = pppppppiStack_1e4;
        pppppppiStack_4c8 = pppppppiStack_1e0;
        FUN_012c03dc(&local_38,&local_500,&DAT_0056a518);
        pppppppiVar4 = local_4fc;
        pppppppiVar22 = local_500;
        if ((local_38 == 0x15b11d7e && local_30 == -0x5bdc3de8) &&
            (local_34 == -0x4c061650 && local_2c == -0xbbdd27b)) {
          uVar3 = (undefined1)local_4f8;
          uVar15 = (uint)local_4f8 & 0xff;
          FUN_01bed4e2(&local_88,(int)&local_4f8 + 1,0xf);
          local_98 = local_4e8;
          pppppppiStack_94 = pppppppiStack_4e4;
          pppppppiStack_90 = pppppppiStack_4e0;
          pppppppiStack_8c = pppppppiStack_4dc;
          local_b0 = local_4d8;
          local_ac = pppppppiStack_4d4;
          local_a8 = pppppppiStack_4d0;
          pppppppiStack_a4 = pppppppiStack_4cc;
          pppppppiStack_a0 = pppppppiStack_4c8;
          if (pppppppiVar22 == (int *******)0x2) goto LAB_00f208ac;
          if (pppppppiVar22 != (int *******)&DAT_00000003) {
            local_74 = pppppppiVar4;
            local_70 = (int *******)CONCAT31(local_70._1_3_,uVar3);
            local_78 = pppppppiVar22;
            FUN_01bed4e2((int)&local_70 + 1,&local_88,0xf);
            pppppppiVar23 = pppppppiStack_8c;
            pppppppiVar22 = local_b0;
            local_60 = local_98;
            pppppppiStack_5c = pppppppiStack_94;
            local_58 = pppppppiStack_90;
            local_54 = pppppppiStack_8c;
            local_50 = local_b0;
            pppppppiStack_4c = local_ac;
            pppppppiStack_48 = local_a8;
            pppppppiStack_44 = pppppppiStack_a4;
            pppppppiStack_40 = pppppppiStack_a0;
            local_218 = pppppppiStack_90;
            local_214 = pppppppiStack_8c + (int)local_b0 * 3;
            local_200 = (int *******)0x0;
            local_210 = (int *******)0x0;
            local_220._4_4_ = pppppppiStack_8c;
            local_220._0_4_ = pppppppiStack_8c;
            FUN_0134aee0(local_64,local_98,4,4);
            FUN_011fdeac(&pppppppiStack_4c);
            pppppppiVar8 = (int *******)&local_220;
            iVar24 = (int)pppppppiVar22 * 0xc;
            bVar13 = true;
            uVar15 = 2;
            pppppppiVar22 = extraout_r1;
            pppppppiVar4 = extraout_r3;
            goto LAB_00f20ca0;
          }
        }
        else {
          local_220._0_4_ = local_500;
          local_220._4_4_ = local_4fc;
          local_218 = local_4f8;
          local_214 = local_4f4;
          local_210 = pppppppiStack_4f0;
          local_20c = local_4ec;
          local_208 = local_4e8;
          local_204 = pppppppiStack_4e4;
          local_200 = pppppppiStack_4e0;
          pppppppiStack_1fc = pppppppiStack_4dc;
          local_1f8 = local_4d8;
          pppppppiStack_1f4 = pppppppiStack_4d4;
          local_1f0 = pppppppiStack_4d0;
          pppppppiStack_1ec = pppppppiStack_4cc;
          pppppppiStack_1e8 = pppppppiStack_4c8;
          FUN_012b1a4c(&local_390,&local_520,(int)uVar27,(int)((ulonglong)uVar27 >> 0x20),&local_220
                      );
          if (local_390 != (int *******)0x2) {
            FUN_0134aee0(local_37c,local_378,4,4);
            FUN_0129a608(local_36c,local_368);
            FUN_0134aee0(local_370,local_36c,4,0xc);
            FUN_011fdeac(auStack_364);
          }
          FUN_01bed4e2(&local_88,(uint)&local_38 | 1,0xf);
          local_98 = (int *******)0x15b11d7e;
          pppppppiStack_94 = (int *******)0xb3f9e9b0;
          pppppppiStack_90 = (int *******)0xa423c218;
          pppppppiStack_8c = (int *******)0xf4422d85;
          pppppppiVar4 = (int *******)0x0;
          uVar15 = local_38;
        }
        local_390 = local_88;
        local_38c = pppppppiStack_84;
        local_388 = pppppppiStack_80;
        local_384._0_3_ = CONCAT12(local_7a,local_7c);
        FUN_01bed4e2((int)&local_384 + 3,&local_98,0x10);
        local_74 = (int *******)0xb;
        local_78 = (int *******)0x4024b4;
        if (pppppppiVar4 != (int *******)0x2) {
          local_220._4_4_ = (int *******)CONCAT31(local_220._5_3_,(char)uVar15);
          local_220._0_4_ = pppppppiVar4;
          FUN_01bed4e2((int)&local_220 + 5,&local_390,0x1f);
          local_4f4 = (int *******)&DAT_012b2444;
          local_4fc = (int *******)&DAT_0132b6a0;
          local_500 = (int *******)&local_78;
          local_4f8 = (int *******)&local_220;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005a1fbf,&local_500,&DAT_01ce25a4);
        }
        goto LAB_00f208c4;
      }
      iVar18 = iVar18 + 1;
      iVar24 = iVar24 + -8;
    } while (iVar24 != 0);
  }
  local_218 = (int *******)0x2;
  local_220 = CONCAT44(local_220._4_4_,(int *******)local_220);
LAB_00f208ac:
  uVar15 = 2;
  goto LAB_00f208c4;
LAB_00f20ca0:
  if (!bVar13) {
    if (pppppppiVar8 != pppppppiVar22) {
      ppppppiVar17 = *pppppppiVar8;
      local_20c = pppppppiVar8 + 6;
      if (ppppppiVar17 != (int ******)0x0) {
        ppppppiVar26 = pppppppiVar8[1];
        local_500 = (int *******)pppppppiVar8[2];
        local_4fc = (int *******)pppppppiVar8[3];
        local_4f8 = (int *******)pppppppiVar8[4];
        local_4f4 = (int *******)pppppppiVar8[5];
        (*(code *)ppppppiVar26[3])
                  (&local_390,(int)ppppppiVar17 + ((int)ppppppiVar26[2] - 1U & 0xfffffff8) + 8);
        if ((local_390 != (int *******)0x15b11d7e || local_388 != (int *******)0xa423c218) ||
            (local_38c != (int *******)0xb3f9e9b0 || local_384 != (int *******)0xf4422d85)) {
          local_388 = local_500;
          local_384 = local_4fc;
          pppppppiStack_380 = local_4f8;
          local_37c = local_4f4;
          local_390 = (int *******)ppppppiVar17;
          local_38c = (int *******)ppppppiVar26;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc("Fatal internal error. Please consider filing a bug report at https://github.com/clap-rs/clap/issues"
                       ,99,&local_390,&DAT_01c23240,&DAT_01d22374);
        }
        goto LAB_00f20fb8;
      }
    }
    FUN_011fdc34(&local_210);
    local_210 = (int *******)0x0;
    pppppppiVar22 = extraout_r1_00;
    pppppppiVar4 = extraout_r3_00;
  }
  if (iVar24 != 0) {
    pppppppiVar4 = pppppppiVar23 + 3;
    pppppppiVar22 = (int *******)*pppppppiVar23;
    local_220._4_4_ = pppppppiVar4;
  }
  if (iVar24 == 0 || pppppppiVar22 == (int *******)&DAT_80000000) goto LAB_00f20cec;
  iVar24 = iVar24 + -0xc;
  pppppppiVar8 = (int *******)pppppppiVar23[1];
  bVar13 = false;
  local_208 = pppppppiVar22;
  local_20c = pppppppiVar8;
  local_210 = pppppppiVar8;
  pppppppiVar22 = pppppppiVar8 + (int)pppppppiVar23[2] * 6;
  local_204 = pppppppiVar22;
  pppppppiVar23 = pppppppiVar4;
  goto LAB_00f20ca0;
LAB_00f20fb8:
  if (*ppppppiVar17 == (int *****)&DAT_00000001) goto code_r0x00f20fc4;
  ClearExclusiveLocal();
  uVar15 = (uint)*(byte *)(ppppppiVar17 + 2);
  DataMemoryBarrier(0xb);
  do {
    pppppiVar12 = *ppppppiVar17;
    bVar13 = (bool)hasExclusiveAccess(ppppppiVar17);
  } while (!bVar13);
  *ppppppiVar17 = (int *****)((int)pppppiVar12 + -1);
  if (pppppiVar12 == (int *****)&DAT_00000001) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(ppppppiVar17);
  }
  goto LAB_00f20cec;
code_r0x00f20fc4:
  bVar13 = (bool)hasExclusiveAccess(ppppppiVar17);
  if (bVar13) goto code_r0x00f20fc4;
  goto LAB_00f20fb8;
code_r0x00f20fc4:
  *ppppppiVar17 = (int *****)0x0;
  DataMemoryBarrier(0xb);
  uVar15 = (uint)*(byte *)(ppppppiVar17 + 2);
  if (ppppppiVar17 != (int ******)&DAT_ffffffff) {
    ppppppiVar26 = ppppppiVar17 + 1;
    DataMemoryBarrier(0xb);
    do {
      pppppiVar12 = *ppppppiVar26;
      bVar13 = (bool)hasExclusiveAccess(ppppppiVar26);
    } while (!bVar13);
    *ppppppiVar26 = (int *****)((int)pppppiVar12 + -1);
    if (pppppiVar12 == (int *****)&DAT_00000001) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(ppppppiVar17);
    }
  }
LAB_00f20cec:
  FUN_011fdd28(&local_220);
LAB_00f208c4:
  local_74 = (int *******)&DAT_0000000b;
  local_78 = (int *******)0x4024b4;
  if ((uVar15 & 0xff) != 2) {
    FUN_00f21484(&local_520);
    return uVar15 & 1;
  }
  piVar7 = (int *)FUN_012bc650(9);
  iVar24 = thunk_FUN_01be5118(0x3d);
  if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x3d);
  }
  FUN_01bed4e2(iVar24,"the following required argument was not provided: log_to_file",0x3d);
  if (*piVar7 != 2) {
    FUN_0134bd64(piVar7[1],piVar7[2]);
  }
  piVar7[2] = iVar24;
  *piVar7 = 0;
  piVar7[1] = 0x3d;
  piVar7[3] = 0x3d;
  FUN_005d3f88(piVar7);
  FUN_012bdf18(piVar7);
LAB_00f211c8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xf211c8);
  (*pcVar1)();
}

