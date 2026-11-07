// FUN_01313b0c @ 01313b0c size=6908 calls_out=26 calls_in=5
// strings: yearly | annually | weekly | daily | hourly0 * * * *0 0 * * *0 0 * * 00 0 1 * *0 0 1 1 * | DECFUJITSUHiSiliconMotorola/FreescaleNVIDIAAPMSamsungMarvell

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01313b0c(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  char *pcVar4;
  byte bVar5;
  char ******ppppppcVar6;
  char *******pppppppcVar7;
  char ******ppppppcVar8;
  int iVar9;
  char *******pppppppcVar10;
  char ******ppppppcVar11;
  int *piVar12;
  char ******ppppppcVar13;
  char *pcVar14;
  uint uVar15;
  undefined4 uVar16;
  char ******ppppppcVar17;
  undefined4 uVar18;
  int iVar19;
  char *****pppppcVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  int *piVar24;
  char *****pppppcVar25;
  char *******pppppppcVar26;
  char ******ppppppcVar27;
  char *******pppppppcVar28;
  bool bVar29;
  bool bVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  char *****local_1d0;
  char *******local_1c0;
  char *******local_1b8;
  char ******local_1b4;
  char *******local_1b0;
  char *******local_1a8;
  char *local_1a4;
  char *******local_1a0;
  char ******local_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined *local_18c;
  undefined4 local_188;
  undefined4 local_184;
  char ******local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined *local_174;
  undefined4 local_170;
  undefined4 local_16c;
  char ******local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  char ******local_150;
  int *local_14c;
  uint local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  char ******local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  char *******local_120;
  char ******local_11c;
  char *******local_118;
  undefined1 *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char ******local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined2 local_fc;
  char ******local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char *******local_e8;
  int local_e4;
  char *******local_e0 [2];
  char ******local_d8;
  undefined4 local_d4;
  char *local_d0;
  int local_cc;
  char *local_c8;
  int local_c4;
  char *local_c0;
  int local_bc;
  char *local_b8;
  int local_b4;
  char *local_b0;
  undefined4 local_ac;
  char *local_a8;
  undefined4 local_a4;
  char *local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined4 local_94;
  char *local_90;
  undefined4 local_8c;
  char *local_88;
  undefined4 local_84;
  char *local_80;
  undefined4 local_7c;
  char *local_78;
  undefined4 local_74;
  char *local_70;
  undefined4 local_6c;
  char *local_68;
  undefined4 local_64;
  char *local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  char *local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  
  local_10c = CONCAT13(local_10c._3_1_,CONCAT12(local_10c._2_1_,(undefined2)local_10c));
  local_124 = CONCAT13(local_124._3_1_,CONCAT12(local_124._2_1_,(undefined2)local_124));
  local_13c = CONCAT13(local_13c._3_1_,CONCAT12(local_13c._2_1_,(undefined2)local_13c));
  local_154 = CONCAT13(local_154._3_1_,CONCAT12(local_154._2_1_,(undefined2)local_154));
  local_16c = CONCAT13(local_16c._3_1_,CONCAT12(local_16c._2_1_,(undefined2)local_16c));
  FUN_00665974(&local_e8,param_3,param_4);
  iVar19 = local_e4;
  uVar31 = FUN_013245a0(local_e4,local_e0[0]);
  pppppppcVar26 = (char *******)(uVar31 >> 0x20);
  uVar22 = 0;
  if ((longlong)uVar31 < 0) {
LAB_01313b50:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,pppppppcVar26);
  }
  if (pppppppcVar26 == (char *******)0x0) {
    local_1c0 = (char *******)0x0;
    ppppppcVar6 = (char ******)0x1;
  }
  else {
    uVar22 = 1;
    ppppppcVar6 = (char ******)FUN_01298504(pppppppcVar26,1);
    if (ppppppcVar6 == (char ******)0x0) goto LAB_01313b50;
    local_1c0 = pppppppcVar26;
  }
  FUN_01bed4e2(ppppppcVar6,(int)uVar31,pppppppcVar26);
  FUN_0134bd64(local_e8,iVar19);
  if (pppppppcVar26 == (char *******)0x0) {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    goto LAB_01313bf0;
  }
  if (uVar31 < 0x800000000) {
    pppppppcVar7 = (char *******)0x0;
    do {
      if (*(char *)((int)pppppppcVar7 + (int)ppppppcVar6) == '@') goto LAB_01313c1c;
      pppppppcVar7 = (char *******)((int)pppppppcVar7 + 1);
    } while (pppppppcVar26 != pppppppcVar7);
  }
  else {
    iVar19 = FUN_01307168(0x40,ppppppcVar6,pppppppcVar26);
    if (iVar19 == 1) {
LAB_01313c1c:
      bVar2 = param_2[2];
      bVar5 = param_2[3];
      uVar32 = FUN_013245a0(ppppppcVar6,pppppppcVar26);
      uVar21 = (uint)((ulonglong)uVar32 >> 0x20);
      pcVar14 = (char *)uVar32;
      if (uVar21 == 7) {
        iVar19 = 0;
        do {
          pcVar4 = "0 0 1 1 *";
          if (iVar19 == 7) goto LAB_01313e30;
          uVar15 = (uint)(byte)pcVar14[iVar19];
          uVar23 = (uint)(byte)"@"[iVar19];
          iVar19 = iVar19 + 1;
          if (uVar15 - 0x41 < 0x1a) {
            uVar15 = uVar15 | 0x20;
          }
          if (uVar23 - 0x41 < 0x1a) {
            uVar23 = uVar23 | 0x20;
          }
        } while (uVar15 == uVar23);
      }
      if (uVar21 == 9) {
        iVar19 = 0;
        do {
          pcVar4 = "0 0 1 1 *";
          if (iVar19 == 9) goto LAB_01313e30;
          uVar15 = (uint)(byte)pcVar14[iVar19];
          uVar23 = (uint)(byte)"@"[iVar19];
          iVar19 = iVar19 + 1;
          if (uVar15 - 0x41 < 0x1a) {
            uVar15 = uVar15 | 0x20;
          }
          if (uVar23 - 0x41 < 0x1a) {
            uVar23 = uVar23 | 0x20;
          }
        } while (uVar15 == uVar23);
      }
      if (uVar21 == 8) {
        iVar19 = 0;
        do {
          pcVar4 = "0 0 1 * *0 0 1 1 *";
          if (iVar19 == 8) goto LAB_01313e30;
          uVar15 = (uint)(byte)pcVar14[iVar19];
          uVar23 = (uint)(byte)(&DAT_00570458)[iVar19];
          iVar19 = iVar19 + 1;
          if (uVar15 - 0x41 < 0x1a) {
            uVar15 = uVar15 | 0x20;
          }
          if (uVar23 - 0x41 < 0x1a) {
            uVar23 = uVar23 | 0x20;
          }
        } while (uVar15 == uVar23);
      }
      if (uVar21 == 7) {
        iVar19 = 0;
        do {
          pcVar4 = "0 0 * * 00 0 1 * *0 0 1 1 *";
          if (iVar19 == 7) goto LAB_01313e30;
          uVar15 = (uint)(byte)pcVar14[iVar19];
          uVar23 = (uint)(byte)"@"[iVar19];
          iVar19 = iVar19 + 1;
          if (uVar15 - 0x41 < 0x1a) {
            uVar15 = uVar15 | 0x20;
          }
          if (uVar23 - 0x41 < 0x1a) {
            uVar23 = uVar23 | 0x20;
          }
        } while (uVar15 == uVar23);
      }
      if (uVar21 == 6) {
        iVar19 = 0;
        do {
          pcVar4 = "0 0 * * *0 0 * * 00 0 1 * *0 0 1 1 *";
          if (iVar19 == 6) goto LAB_01313e30;
          uVar15 = (uint)(byte)pcVar14[iVar19];
          uVar23 = (uint)(byte)"@"[iVar19];
          iVar19 = iVar19 + 1;
          if (uVar15 - 0x41 < 0x1a) {
            uVar15 = uVar15 | 0x20;
          }
          if (uVar23 - 0x41 < 0x1a) {
            uVar23 = uVar23 | 0x20;
          }
        } while (uVar15 == uVar23);
      }
      if (uVar21 == 7) {
        iVar19 = 0;
        do {
          pcVar4 = "0 * * * *0 0 * * *0 0 * * 00 0 1 * *0 0 1 1 *";
          if (iVar19 == 7) goto LAB_01313e30;
          uVar21 = (uint)(byte)pcVar14[iVar19];
          uVar15 = (uint)(byte)"@"[iVar19];
          iVar19 = iVar19 + 1;
          if (uVar21 - 0x41 < 0x1a) {
            uVar21 = uVar21 | 0x20;
          }
          if (uVar15 - 0x41 < 0x1a) {
            uVar15 = uVar15 | 0x20;
          }
        } while (uVar21 == uVar15);
        uVar21 = 7;
      }
      goto LAB_01313e34;
    }
  }
  ppppppcVar8 = ppppppcVar6;
  goto LAB_01313f64;
  while( true ) {
    ppppppcVar13 = (char ******)*piVar24;
    iVar9 = iVar9 + -4;
    piVar24 = piVar24 + 1;
    if (ppppppcVar13 == ppppppcVar17) break;
LAB_01314e38:
    if (iVar9 == 0) {
      local_11c = (char ******)FUN_012fbb84;
      local_120 = &local_f8;
      local_114 = &LAB_01963050;
      local_118 = &local_108;
      FUN_00664898(&local_138,&DAT_005af45e,&local_120);
      local_198 = local_138;
      local_194 = local_134;
      uStack_190 = uStack_130;
      FUN_0134aee0(local_150,piVar12,4,4);
      param_1[2] = local_198;
      param_1[3] = local_194;
      param_1[4] = uStack_190;
      *param_1 = 0x80000000;
      param_1[1] = 5;
      goto LAB_01315658;
    }
  }
LAB_01314e50:
  pppppcVar20 = pppppcVar25;
  if (pppppcVar25 == (char *****)((int)*ppppppcVar27 + (int)ppppppcVar27[1])) goto LAB_01314e5c;
  goto LAB_01314d64;
LAB_01313e30:
  pcVar14 = pcVar4;
  uVar21 = 9;
LAB_01313e34:
  local_e0[0] = (char *******)0x0;
  local_e4 = 1;
  local_e8 = (char *******)0x0;
  if (bVar2 == 1) {
    FUN_006520b4(&local_e8,0,2,1,1);
    *(undefined2 *)(local_e4 + (int)local_e0[0]) = 0x2030;
    local_e0[0] = (char *******)((int)local_e0[0] + 2);
  }
  if ((uint)((int)local_e8 - (int)local_e0[0]) < uVar21) {
    FUN_006520b4(&local_e8,local_e0[0],uVar21,1,1);
  }
  pppppppcVar26 = local_e0[0];
  iVar19 = local_e4;
  pppppppcVar7 = local_e8;
  FUN_01bed4e2(local_e4 + (int)local_e0[0],pcVar14,uVar21);
  pppppppcVar26 = (char *******)((int)pppppppcVar26 + uVar21);
  local_e0[0] = pppppppcVar26;
  if (bVar5 == 1) {
    if ((uint)((int)pppppppcVar7 - (int)pppppppcVar26) < 2) {
      FUN_006520b4(&local_e8,pppppppcVar26,2,1,1);
      iVar19 = local_e4;
    }
    pppppppcVar26 = (char *******)((int)local_e0[0] + 2);
    ((char *)((int)local_e0[0] + iVar19))[0] = ' ';
    ((char *)((int)local_e0[0] + iVar19))[1] = '*';
    iVar19 = local_e4;
    pppppppcVar7 = local_e8;
  }
  if ((int)pppppppcVar26 < 0) {
    uVar22 = 0;
LAB_01313ef8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,pppppppcVar26);
  }
  if (pppppppcVar26 == (char *******)0x0) {
    pppppppcVar28 = (char *******)0x0;
    ppppppcVar8 = (char ******)0x1;
  }
  else {
    uVar22 = 1;
    ppppppcVar8 = (char ******)FUN_01298504(pppppppcVar26,1);
    if (ppppppcVar8 == (char ******)0x0) goto LAB_01313ef8;
    pppppppcVar28 = pppppppcVar26;
  }
  FUN_01bed4e2(ppppppcVar8,iVar19,pppppppcVar26);
  FUN_0134bd64(local_1c0,ppppppcVar6);
  FUN_0134bd64(pppppppcVar7,iVar19);
  local_1c0 = pppppppcVar28;
LAB_01313f64:
  ppppppcVar6 = (char ******)&DAT_00000001;
  bVar2 = param_2[1];
  bVar29 = bVar2 != 0;
  local_78 = "SAT";
  local_88 = "FRI";
  local_98 = "THU";
  local_a8 = "WED";
  local_b8 = "TUE";
  local_c8 = "MON";
  local_6c = 1;
  local_7c = 1;
  local_8c = 1;
  local_9c = 1;
  local_ac = 1;
  local_bc = 1;
  local_cc = 1;
  local_74 = 3;
  local_84 = 3;
  local_94 = 3;
  local_a4 = 3;
  local_b4 = 3;
  local_c4 = 3;
  local_d4 = (char *)0x3;
  local_d8 = (char ******)0x524047;
  local_e0[1] = (char *******)0x2;
  local_e4 = 4;
  local_e8 = (char *******)&DAT_0056d774;
  local_70 = "6";
  if (bVar29) {
    local_70 = "7";
  }
  local_a0 = "3";
  local_90 = "4";
  local_80 = "5";
  if (bVar29) {
    local_a0 = "4";
    local_90 = "5";
    local_80 = "6";
  }
  local_b0 = "2";
  if (bVar29) {
    local_b0 = "3";
  }
  local_d0 = "0";
  local_e0[0] = (char *******)0x430e4f;
  local_c0 = "1";
  if (bVar29) {
    local_c0 = "2";
  }
  if (bVar29) {
    local_e0[0] = (char *******)"-1";
    local_d0 = "1";
  }
  if ((int)pppppppcVar26 < 0) {
    uVar22 = 0;
LAB_013140e0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,pppppppcVar26);
  }
  iVar19 = 0;
  pppppppcVar7 = (char *******)0x0;
  if (pppppppcVar26 != (char *******)0x0) {
    uVar22 = 1;
    ppppppcVar6 = (char ******)FUN_01298504(pppppppcVar26,1);
    if (ppppppcVar6 == (char ******)0x0) goto LAB_013140e0;
    pppppppcVar7 = pppppppcVar26;
  }
  FUN_01bed4e2(ppppppcVar6,ppppppcVar8,pppppppcVar26);
  do {
    FUN_013158fc(&local_120,ppppppcVar6,pppppppcVar26,*(undefined4 *)((int)&local_e8 + iVar19),
                 *(undefined4 *)((int)local_e0 + iVar19 + -4),
                 *(undefined4 *)((int)local_e0 + iVar19),*(undefined4 *)((int)local_e0 + iVar19 + 4)
                );
    FUN_0134bd64(pppppppcVar7,ppppppcVar6);
    pppppppcVar26 = local_118;
    ppppppcVar6 = local_11c;
    pppppppcVar7 = local_120;
    iVar19 = iVar19 + 0x10;
  } while (iVar19 != 0x80);
  if ((int)local_118 < 0) {
    iVar19 = 0;
LAB_0131418c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar19,pppppppcVar26);
  }
  ppppppcVar27 = (char ******)&DAT_00000001;
  iVar19 = 1;
  pppppppcVar28 = (char *******)0x0;
  iVar9 = iVar19;
  if (local_118 != (char *******)0x0) {
    iVar9 = FUN_01298504(local_118,1);
    if (iVar9 == 0) goto LAB_0131418c;
    pppppppcVar28 = pppppppcVar26;
  }
  FUN_01bed4e2(iVar9,ppppppcVar6,pppppppcVar26);
  FUN_0134bd64(local_1c0,ppppppcVar8);
  FUN_0134bd64(pppppppcVar7,ppppppcVar6);
  local_30 = "1";
  local_38 = "DECFUJITSUHiSiliconMotorola/FreescaleNVIDIAAPMSamsungMarvell";
  local_40 = "11";
  local_48 = "NOVevent open/utils-rs/scheduler/src/cron.rs:461";
  local_2c = 2;
  local_3c = 2;
  local_4c = 2;
  local_50 = "1";
  local_58 = "OCT";
  local_60 = "9";
  local_68 = "SEP";
  local_70 = "8";
  local_78 = "AUG";
  local_80 = "7";
  local_88 = "JUL";
  local_90 = "6";
  local_98 = "JUN";
  local_a0 = "5";
  local_a8 = "MAY";
  local_b0 = "4";
  local_b8 = "APR";
  local_34 = 3;
  local_44 = 3;
  local_54 = 3;
  local_5c = 1;
  local_64 = 3;
  local_6c = 1;
  local_74 = 3;
  local_7c = 1;
  local_84 = 3;
  local_8c = 1;
  local_94 = 3;
  local_9c = 1;
  local_a4 = 3;
  local_ac = 1;
  local_b4 = 3;
  local_c4 = 3;
  local_c0 = "3";
  local_bc = 1;
  local_c8 = "MAR";
  local_cc = 1;
  local_d8 = (char ******)0x52405f;
  local_d0 = "2";
  local_d4 = (char *)0x3;
  local_e0[1] = (char *******)0x1;
  local_e8 = (char *******)0x52405c;
  local_e4 = 3;
  local_e0[0] = (char *******)0x52ecc4;
  pppppppcVar7 = (char *******)0x0;
  if (pppppppcVar26 != (char *******)0x0) {
    uVar22 = 1;
    ppppppcVar27 = (char ******)FUN_01298504(pppppppcVar26,1);
    if (ppppppcVar27 == (char ******)0x0) goto LAB_013140e0;
    pppppppcVar7 = pppppppcVar26;
  }
  FUN_01bed4e2(ppppppcVar27,iVar9,pppppppcVar26);
  iVar19 = 0;
  do {
    FUN_013158fc(&local_120,ppppppcVar27,pppppppcVar26,*(undefined4 *)((int)&local_e8 + iVar19),
                 *(undefined4 *)((int)local_e0 + iVar19 + -4),
                 *(undefined4 *)((int)local_e0 + iVar19),*(undefined4 *)((int)local_e0 + iVar19 + 4)
                );
    FUN_0134bd64(pppppppcVar7,ppppppcVar27);
    pppppppcVar26 = local_118;
    ppppppcVar8 = local_11c;
    pppppppcVar7 = local_120;
    iVar19 = iVar19 + 0x10;
    ppppppcVar27 = local_11c;
  } while (iVar19 != 0xc0);
  if ((int)local_118 < 0) {
    uVar22 = 0;
LAB_01314414:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar22,pppppppcVar26);
  }
  uVar22 = 1;
  ppppppcVar6 = (char ******)0x1;
  local_1c0 = (char *******)0x0;
  if (local_118 != (char *******)0x0) {
    ppppppcVar6 = (char ******)FUN_01298504(local_118,1);
    if (ppppppcVar6 == (char ******)0x0) goto LAB_01314414;
    local_1c0 = pppppppcVar26;
  }
  FUN_01bed4e2(ppppppcVar6,ppppppcVar8,pppppppcVar26);
  FUN_0134bd64(pppppppcVar28,iVar9);
  FUN_0134bd64(pppppppcVar7,ppppppcVar8);
  local_d0 = (char *)0x0;
  local_cc = CONCAT22(local_cc._2_2_,1);
  local_d4 = (char *)((int)pppppppcVar26 + (int)ppppppcVar6);
  local_e0[1] = pppppppcVar26;
  local_e8 = (char *******)0x0;
  local_e4 = (int)pppppppcVar26;
  local_e0[0] = (char *******)ppppppcVar6;
  local_d8 = ppppppcVar6;
  FUN_01318760(&local_1b8,&local_e8);
  pppppppcVar7 = local_1b0;
  if (local_1b0 == (char *******)&DAT_00000005) {
    if (local_1b8 == (char *******)&DAT_00000005) {
      FUN_015f5ab8(&local_1b8);
    }
    ppppppcVar8 = local_1b4;
    FUN_01bed864(local_1b4 + 2,local_1b4,0x28);
    *ppppppcVar8 = (char *****)"0";
    ppppppcVar8[1] = (char *****)0x1;
    local_1b0 = (char *******)&DAT_00000006;
LAB_01314578:
    if (local_1b8 == (char *******)&DAT_00000006) {
      FUN_015f5ab8(&local_1b8);
    }
    local_1b4[0xc] = (char *****)"*";
    local_1b4[0xd] = (char *****)0x1;
    local_1b0 = (char *******)&DAT_00000007;
    bVar5 = param_2[3];
LAB_013145b0:
    pppppppcVar28 = local_1b0;
    if (param_2[2] != 1) {
      if (pppppppcVar7 != (char *******)&DAT_00000007 && bVar5 == 1) {
        uVar22 = 0x33;
        iVar19 = thunk_FUN_01be5118(0x33);
        uVar18 = 0x33;
        if (iVar19 == 0) {
          pppppppcVar7 = (char *******)0x33;
          uVar22 = 1;
          goto LAB_013146bc;
        }
        uVar16 = 0x33;
        pcVar14 = "Pattern must have 7 fields when years are required.";
      }
      else {
        if ((char *)((int)pppppppcVar7 + -5) < &DAT_00000003) {
LAB_013146a8:
          if ((char *******)0xaaaaaaa < local_1b0) {
            uVar22 = 0;
LAB_013146bc:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar22,pppppppcVar7);
          }
          if (local_1b0 == (char *******)0x0) {
            pppppppcVar28 = (char *******)0x0;
            local_e4 = (int)&SUB_00000004;
            local_e8 = (char *******)0x0;
          }
          else {
            uVar22 = 4;
            pppppppcVar7 = (char *******)((int)local_1b0 * 0xc);
            uVar32 = FUN_01298504(pppppppcVar7,4);
            if ((int)uVar32 == 0) goto LAB_013146bc;
            pppppppcVar7 = (char *******)0x0;
            local_e0[0] = (char *******)0x0;
            piVar12 = (int *)((int)uVar32 + 8);
            local_e8 = pppppppcVar28;
            do {
              local_e4 = (int)uVar32;
              uVar22 = 0;
              pppppcVar25 = local_1b4[(int)pppppppcVar7 * 2];
              pppppcVar20 = (local_1b4 + (int)pppppppcVar7 * 2)[1];
              if ((int)pppppcVar20 < 0) {
LAB_01315680:
                local_e4 = (int)uVar32;
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar22,(int)((ulonglong)uVar32 >> 0x20));
              }
              if (pppppcVar20 == (char *****)0x0) {
                iVar19 = 1;
                local_1d0 = (char *****)0x0;
              }
              else {
                iVar19 = FUN_01298504(pppppcVar20,1);
                uVar32 = CONCAT44(pppppcVar20,local_e4);
                if (iVar19 == 0) {
                  uVar22 = 1;
                  goto LAB_01315680;
                }
                local_1d0 = pppppcVar20;
              }
              FUN_01bed4e2(iVar19,pppppcVar25,pppppcVar20);
              uVar32 = CONCAT44(iVar19,local_e4);
              pppppppcVar7 = (char *******)((int)pppppppcVar7 + 1);
              piVar12[-1] = iVar19;
              piVar12[-2] = (int)local_1d0;
              *piVar12 = (int)pppppcVar20;
              piVar12 = piVar12 + 3;
            } while (pppppppcVar28 != pppppppcVar7);
          }
          iVar19 = local_e4;
          local_1a8 = local_e8;
          local_1a4 = (char *)local_e4;
          bVar5 = 0;
          local_1d0 = (char *****)0x0;
          local_1a0 = pppppppcVar28;
          local_e0[0] = pppppppcVar28;
          if (&DAT_00000003 < pppppppcVar28) {
            uVar21 = *(uint *)(local_e4 + 0x2c);
            pppppppcVar7 = *(char ********)(local_e4 + 0x28);
            if (uVar21 < 8) {
              if (uVar21 != 0) {
                pppppppcVar10 = pppppppcVar7;
                uVar15 = uVar21;
                do {
                  if (*(char *)pppppppcVar10 == '?') goto LAB_0131494c;
                  uVar15 = uVar15 - 1;
                  pppppppcVar10 = (char *******)((int)pppppppcVar10 + 1);
                } while (uVar15 != 0);
              }
            }
            else {
              iVar9 = FUN_01307168(0x3f,pppppppcVar7,uVar21);
              if (iVar9 == 1) {
LAB_0131494c:
                local_150 = (char ******)CONCAT31(local_150._1_3_,0x3f);
                local_138 = (char ******)CONCAT31(local_138._1_3_,0x2a);
                local_e0[1] = &local_138;
                local_e0[0] = &local_150;
                local_e4 = (int)pppppppcVar7 + uVar21;
                local_e8 = pppppppcVar7;
                FUN_01298968(&local_120,&local_e8);
                FUN_0134bd64(*(undefined4 *)(iVar19 + 0x24),*(undefined4 *)(iVar19 + 0x28));
                *(char ********)(iVar19 + 0x24) = local_120;
                *(char *******)(iVar19 + 0x28) = local_11c;
                *(char ********)(iVar19 + 0x2c) = local_118;
              }
            }
            bVar5 = 0;
            if (&DAT_00000005 < pppppppcVar28) {
              uVar21 = *(uint *)(iVar19 + 0x44);
              pppppppcVar7 = *(char ********)(iVar19 + 0x40);
              if (uVar21 < 8) {
                if (uVar21 == 0) goto LAB_01314aac;
                pppppppcVar10 = pppppppcVar7;
                uVar15 = uVar21;
                do {
                  if (*(char *)pppppppcVar10 == '?') goto LAB_013149fc;
                  uVar15 = uVar15 - 1;
                  pppppppcVar10 = (char *******)((int)pppppppcVar10 + 1);
                } while (uVar15 != 0);
              }
              else {
                iVar9 = FUN_01307168(0x3f,pppppppcVar7,uVar21);
                if (iVar9 == 1) {
LAB_013149fc:
                  local_150 = (char ******)CONCAT31(local_150._1_3_,0x3f);
                  local_138 = (char ******)CONCAT31(local_138._1_3_,0x2a);
                  local_e0[1] = &local_138;
                  local_e0[0] = &local_150;
                  local_e4 = (int)pppppppcVar7 + uVar21;
                  local_e8 = pppppppcVar7;
                  FUN_01298968(&local_120,&local_e8);
                  FUN_0134bd64(*(undefined4 *)(iVar19 + 0x3c),*(undefined4 *)(iVar19 + 0x40));
                  *(char ********)(iVar19 + 0x3c) = local_120;
                  *(char *******)(iVar19 + 0x40) = local_11c;
                  *(char ********)(iVar19 + 0x44) = local_118;
                }
              }
              bVar5 = 0;
              if ((*(int *)(iVar19 + 0x44) != 0) && (bVar5 = 0, **(char **)(iVar19 + 0x40) == '+'))
              {
                uVar32 = FUN_01316008();
                FUN_0166b924(&local_e8,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
                FUN_0134bd64(*(undefined4 *)(iVar19 + 0x3c),*(undefined4 *)(iVar19 + 0x40));
                *(char ********)(iVar19 + 0x3c) = local_e8;
                *(int *)(iVar19 + 0x40) = local_e4;
                *(char ********)(iVar19 + 0x44) = local_e0[0];
                bVar5 = 1;
              }
            }
          }
LAB_01314aac:
          uVar21 = (int)pppppppcVar28 * 8;
          bVar30 = (char *******)0x1ffffffe < pppppppcVar28;
          bVar29 = pppppppcVar28 == (char *******)0x1fffffff;
          if (pppppppcVar28 < (char *******)0x20000000) {
            bVar30 = 0x7ffffffb < uVar21;
            bVar29 = uVar21 == 0x7ffffffc;
          }
          if (bVar30 && !bVar29) {
LAB_01314abc:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(local_1d0,uVar21);
          }
          local_11c = (char ******)&SUB_00000004;
          if (uVar21 == 0) {
            local_120 = (char *******)0x0;
          }
          else {
            local_1d0 = (char *****)0x4;
            local_11c = (char ******)FUN_01298504(uVar21,4);
            local_120 = pppppppcVar28;
            if (local_11c == (char ******)0x0) goto LAB_01314abc;
          }
          local_118 = (char *******)0x0;
          if (pppppppcVar28 != (char *******)0x0) {
            ppppppcVar8 = local_11c + 1;
            pcVar14 = (char *)(iVar19 + 4);
            pppppppcVar7 = pppppppcVar28;
            do {
              pppppcVar20 = *(char ******)pcVar14;
              pppppcVar25 = *(char ******)(pcVar14 + 4);
              pcVar14 = pcVar14 + 0xc;
              ppppppcVar8[-1] = pppppcVar20;
              *ppppppcVar8 = pppppcVar25;
              ppppppcVar8 = ppppppcVar8 + 2;
              pppppppcVar7 = (char *******)((int)pppppppcVar7 + -1);
            } while (pppppppcVar7 != (char *******)0x0);
            local_118 = pppppppcVar28;
          }
          local_e8 = local_120;
          local_e4 = (int)local_11c;
          local_e0[0] = local_118;
          FUN_0134aee0(local_1b8,local_1b4,4,8);
          pppppppcVar7 = local_118;
          ppppppcVar8 = local_11c;
          local_1b8 = local_120;
          local_1b4 = local_11c;
          local_1b0 = local_118;
          local_b4 = 0x2d;
          local_b8 = (char *)0x2c;
          local_bc = 0x39;
          local_c0 = (char *)0x38;
          local_c4 = 0x37;
          local_c8 = (char *)0x36;
          local_cc = 0x35;
          local_d0 = (char *)0x34;
          local_d4 = (char *)0x33;
          local_d8 = (char ******)0x32;
          local_e0[1] = (char *******)&DAT_00000031;
          local_e0[0] = (char *******)0x30;
          local_e4 = (int)&DAT_0000002f;
          local_e8 = (char *******)0x2a;
          local_178 = 0x3f;
          local_160 = 0x3f;
          local_17c = 0x4c;
          local_180 = (char ******)0x23;
          local_164 = 0x57;
          local_168 = (char ******)0x4c;
          if (local_118 == (char *******)0x0) {
            bVar29 = false;
            bVar30 = false;
          }
          else {
            iVar19 = 0;
            ppppppcVar11 = local_11c + (int)local_118 * 2;
            ppppppcVar27 = local_11c;
            do {
              local_108 = ppppppcVar27;
              if (iVar19 == 3) {
                local_114 = (undefined1 *)0x3;
                local_118 = &local_168;
                local_11c = (char ******)&DAT_0000000e;
                local_120 = (char *******)&local_e8;
                FUN_0131981c(&local_150,&local_120);
              }
              else if (iVar19 == 5) {
                local_114 = (undefined1 *)0x3;
                local_118 = &local_180;
                local_11c = (char ******)&DAT_0000000e;
                local_120 = (char *******)&local_e8;
                FUN_0131981c(&local_150,&local_120);
              }
              else {
                piVar12 = (int *)thunk_FUN_01be5118(0x38);
                if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620();
                }
                local_150 = (char ******)0xe;
                *piVar12 = (int)local_e8;
                piVar12[1] = local_e4;
                piVar12[2] = (int)local_e0[0];
                piVar12[3] = (int)local_e0[1];
                piVar12[4] = (int)local_d8;
                piVar12[5] = (int)local_d4;
                piVar12[6] = (int)local_d0;
                piVar12[7] = local_cc;
                piVar12[8] = (int)local_c8;
                piVar12[9] = local_c4;
                piVar12[10] = (int)local_c0;
                piVar12[0xb] = local_bc;
                piVar12[0xc] = (int)local_b8;
                piVar12[0xd] = local_b4;
                local_148 = 0xe;
                local_14c = piVar12;
              }
              piVar12 = local_14c;
              if (ppppppcVar27[1] != (char *****)0x0) {
                pppppcVar20 = *ppppppcVar27;
LAB_01314d64:
                pppppcVar25 = (char *****)((int)pppppcVar20 + 1);
                ppppppcVar17 = (char ******)(uint)*(byte *)pppppcVar20;
                if (0x7fffffff < (uint)(int)(char)*(byte *)pppppcVar20) {
                  uVar21 = *(byte *)((int)pppppcVar20 + 1) & 0x3f;
                  if (ppppppcVar17 < (char ******)0xe0) {
                    ppppppcVar17 = (char ******)(uVar21 | ((uint)ppppppcVar17 & 0x1f) << 6);
                    pppppcVar25 = (char *****)((int)pppppcVar20 + 2);
                  }
                  else {
                    uVar21 = *(byte *)((int)pppppcVar20 + 2) & 0x3f | uVar21 << 6;
                    if (ppppppcVar17 < (char ******)0xf0) {
                      ppppppcVar17 = (char ******)(uVar21 | ((uint)ppppppcVar17 & 0x1f) << 0xc);
                      pppppcVar25 = (char *****)((int)pppppcVar20 + 3);
                    }
                    else {
                      ppppppcVar17 = (char ******)
                                     (*(byte *)((int)pppppcVar20 + 3) & 0x3f | uVar21 << 6 |
                                     ((uint)ppppppcVar17 & 7) << 0x12);
                      if (ppppppcVar17 == (char ******)&DAT_00110000) goto LAB_01314e5c;
                      pppppcVar25 = pppppcVar20 + 1;
                    }
                  }
                }
                uVar21 = local_148 & 0x1ffffff0;
                piVar24 = local_14c;
                do {
                  local_f8 = ppppppcVar17;
                  if (uVar21 == 0) {
                    iVar9 = (local_148 & 0xf) << 2;
                    piVar24 = local_14c + (local_148 & 0x1ffffff0);
                    goto LAB_01314e38;
                  }
                  iVar9 = 0;
                  bVar29 = false;
                  do {
                    piVar1 = piVar24 + iVar9;
                    iVar9 = iVar9 + 1;
                    bVar29 = (bool)(bVar29 | (char ******)*piVar1 == ppppppcVar17);
                  } while (iVar9 != 0x10);
                  uVar21 = uVar21 - 0x10;
                  piVar24 = piVar24 + 0x10;
                } while (!bVar29);
                goto LAB_01314e50;
              }
LAB_01314e5c:
              iVar19 = iVar19 + 1;
              ppppppcVar27 = ppppppcVar27 + 2;
              FUN_0134aee0(local_150,local_14c,4,4);
            } while (ppppppcVar27 != ppppppcVar11);
            bVar29 = false;
            bVar30 = false;
            if (&DAT_00000003 < pppppppcVar7) {
              if (ppppppcVar8[7] == (char *****)0x1) {
                bVar29 = *(char *)ppppppcVar8[6] == '*';
              }
              if ((&DAT_00000005 < pppppppcVar7) && (ppppppcVar8[0xb] == (char *****)0x1)) {
                bVar30 = *(char *)ppppppcVar8[10] == '*';
              }
            }
          }
          FUN_013184d8(&local_198,0x3c);
          local_184 = (uint)local_184._3_1_ << 0x18;
          local_184 = CONCAT22(local_184._2_2_,0x4100);
          local_18c = &DAT_003b0000;
          local_188 = 1;
          if (pppppppcVar7 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0,0,&DAT_01ce4bf4);
          }
          FUN_01316afc(&local_e8,&local_198,*ppppppcVar8,ppppppcVar8[1]);
          if (local_e8 == (char *******)0x7) {
            FUN_013184d8(&local_180,0x3c);
            uVar21 = (uint)local_16c >> 0x10;
            local_16c = CONCAT22((ushort)uVar21 & 0xff00,0x4100);
            local_174 = &DAT_003b0000;
            local_170 = 1;
            if (pppppppcVar7 == (char *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(1,1,&DAT_01ce4c04);
            }
            FUN_01316afc(&local_e8,&local_180,ppppppcVar8[2],ppppppcVar8[3]);
            if (local_e8 == (char *******)0x7) {
              FUN_013184d8(&local_168,0x18);
              uVar21 = (uint)local_154 >> 0x10;
              local_154 = CONCAT22((ushort)uVar21 & 0xff00,0x4100);
              local_15c = 0x170000;
              local_158 = 1;
              if (pppppppcVar7 < &DAT_00000003) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(2,pppppppcVar7,&DAT_01ce4c14);
              }
              FUN_01316afc(&local_e8,&local_168,ppppppcVar8[4],ppppppcVar8[5]);
              if (local_e8 == (char *******)0x7) {
                FUN_013184d8(&local_150,0x20);
                local_144 = 0x1f0001;
                uVar21 = (uint)local_13c >> 0x10;
                local_13c = CONCAT22((ushort)uVar21 & 0xff00,0xc100);
                local_140 = 1;
                if (pppppppcVar7 == (char *******)&DAT_00000003) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(3,3,&DAT_01ce4c24);
                }
                FUN_01316afc(&local_e8,&local_150,ppppppcVar8[6],ppppppcVar8[7]);
                if (local_e8 == (char *******)0x7) {
                  FUN_013184d8(&local_138,0xd);
                  local_12c = 0xc0001;
                  uVar21 = (uint)local_124 >> 0x10;
                  local_124 = CONCAT22((ushort)uVar21 & 0xff00,0x4100);
                  local_128 = 1;
                  if (pppppppcVar7 < &DAT_00000005) {
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(4,pppppppcVar7,&DAT_01ce4c34);
                  }
                  FUN_01316afc(&local_e8,&local_138,ppppppcVar8[8],ppppppcVar8[9]);
                  if (local_e8 == (char *******)0x7) {
                    FUN_013184d8(&local_120,8);
                    uVar21 = (uint)local_10c >> 0x10;
                    local_10c = CONCAT22((ushort)uVar21 & 0xff00,0x7f00);
                    local_114 = (undefined1 *)0x70000;
                    local_110 = CONCAT22((ushort)bVar2,1);
                    if (pppppppcVar7 == (char *******)&DAT_00000005) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(5,5,&DAT_01ce4c44);
                    }
                    FUN_01316afc(&local_e8,&local_120,ppppppcVar8[10],ppppppcVar8[0xb]);
                    if (local_e8 == (char *******)0x7) {
                      FUN_013184d8(&local_e8,0x1389);
                      local_e0[1] = (char *******)0x13880001;
                      uVar21 = (uint)local_d4 >> 0x10;
                      local_d4 = (char *)CONCAT22((ushort)uVar21 & 0xff00,0x4100);
                      local_d8 = (char ******)0x1;
                      if (pppppppcVar7 < &DAT_00000007) {
                    /* WARNING: Subroutine does not return */
                        FUN_012fb12c(6,pppppppcVar7,&DAT_01ce4c54);
                      }
                      FUN_01316afc(&local_f8,&local_e8,ppppppcVar8[0xc],ppppppcVar8[0xd]);
                      if (local_f8 == (char ******)0x7) {
                        if (bVar2 == 0) {
                          iVar19 = 8;
                          local_fc = 0x2010;
                          local_100 = 0x8040201;
                          local_104 = 6;
                          do {
                            uVar3 = *(undefined1 *)((int)local_e0 + iVar19 + -0x28);
                            FUN_013160c4(&local_f8,&local_120,7,uVar3);
                            ppppppcVar27 = local_f8;
                            if (local_f8 != (char ******)0x7) {
                              FUN_01bed4e2((int)param_1 + 9,(int)&local_f4 + 1,0xb);
                              *(undefined1 *)(param_1 + 2) = (undefined1)local_f4;
                              param_1[1] = ppppppcVar27;
LAB_013155f4:
                              *param_1 = 0x80000000;
                              goto LAB_01315600;
                            }
                            if (((local_f4 & 1) != 0) &&
                               ((FUN_013181a0(&local_f8,&local_120,uVar3),
                                local_f8 != (char ******)0x7 ||
                                (FUN_013169a4(&local_f8,&local_120,0,uVar3),
                                local_f8 != (char ******)0x7)))) {
                              param_1[2] = local_f4;
                              param_1[3] = uStack_f0;
                              param_1[4] = uStack_ec;
                              param_1[1] = local_f8;
                              goto LAB_013155f4;
                            }
                            iVar19 = iVar19 + 1;
                          } while (iVar19 != 0xe);
                        }
                        param_1[3] = local_198;
                        param_1[4] = local_194;
                        param_1[5] = uStack_190;
                        param_1[6] = local_18c;
                        param_1[7] = local_188;
                        param_1[8] = local_184;
                        param_1[9] = local_180;
                        param_1[10] = local_17c;
                        param_1[0xb] = local_178;
                        param_1[0xc] = local_174;
                        param_1[0xd] = local_170;
                        param_1[0xe] = local_16c;
                        param_1[0xf] = local_168;
                        param_1[0x10] = local_164;
                        param_1[0x11] = local_160;
                        param_1[0x12] = local_15c;
                        param_1[0x13] = local_158;
                        param_1[0x14] = local_154;
                        param_1[0x15] = local_150;
                        param_1[0x16] = local_14c;
                        param_1[0x17] = local_148;
                        param_1[0x18] = local_144;
                        param_1[0x19] = local_140;
                        param_1[0x1a] = local_13c;
                        param_1[0x1b] = local_138;
                        param_1[0x1c] = local_134;
                        param_1[0x1d] = uStack_130;
                        param_1[0x1e] = local_12c;
                        param_1[0x1f] = local_128;
                        param_1[0x20] = local_124;
                        param_1[0x21] = local_120;
                        param_1[0x22] = local_11c;
                        param_1[0x23] = local_118;
                        param_1[0x24] = local_114;
                        param_1[0x25] = local_110;
                        param_1[0x26] = local_10c;
                        param_1[0x27] = local_e8;
                        param_1[0x28] = local_e4;
                        param_1[0x29] = local_e0[0];
                        param_1[0x2a] = local_e0[1];
                        param_1[0x2b] = local_d8;
                        param_1[0x2c] = local_d4;
                        *(bool *)((int)param_1 + 0xb5) = bVar30;
                        *(bool *)(param_1 + 0x2d) = bVar29;
                        param_1[2] = pppppppcVar26;
                        *param_1 = local_1c0;
                        param_1[1] = ppppppcVar6;
                        *(byte *)((int)param_1 + 0xb6) = bVar5 | *param_2;
                        FUN_006a41c0(&local_1a8);
                        FUN_0134aee0(local_1b8,ppppppcVar8,4,8);
                        return;
                      }
                      param_1[2] = local_f4;
                      param_1[3] = uStack_f0;
                      param_1[4] = uStack_ec;
                      *param_1 = 0x80000000;
                      param_1[1] = local_f8;
LAB_01315600:
                      FUN_0134bd64(local_e8,local_e4);
                    }
                    else {
                      param_1[2] = local_e4;
                      param_1[3] = local_e0[0];
                      param_1[4] = local_e0[1];
                      *param_1 = 0x80000000;
                      param_1[1] = local_e8;
                    }
                    FUN_0134bd64(local_120,local_11c);
                  }
                  else {
                    param_1[2] = local_e4;
                    param_1[3] = local_e0[0];
                    param_1[4] = local_e0[1];
                    *param_1 = 0x80000000;
                    param_1[1] = local_e8;
                  }
                  FUN_0134bd64(local_138,local_134);
                }
                else {
                  param_1[2] = local_e4;
                  param_1[3] = local_e0[0];
                  param_1[4] = local_e0[1];
                  *param_1 = 0x80000000;
                  param_1[1] = local_e8;
                }
                FUN_0134bd64(local_150,local_14c);
              }
              else {
                param_1[2] = local_e4;
                param_1[3] = local_e0[0];
                param_1[4] = local_e0[1];
                *param_1 = 0x80000000;
                param_1[1] = local_e8;
              }
              FUN_0134bd64(local_168,local_164);
            }
            else {
              param_1[2] = local_e4;
              param_1[3] = local_e0[0];
              param_1[4] = local_e0[1];
              *param_1 = 0x80000000;
              param_1[1] = local_e8;
            }
            FUN_0134bd64(local_180,local_17c);
          }
          else {
            param_1[2] = local_e4;
            param_1[3] = local_e0[0];
            param_1[4] = local_e0[1];
            *param_1 = 0x80000000;
            param_1[1] = local_e8;
          }
          FUN_0134bd64(local_198,local_194);
LAB_01315658:
          FUN_006a41c0(&local_1a8);
          goto LAB_013147dc;
        }
        uVar22 = 0x29;
        iVar19 = thunk_FUN_01be5118(0x29);
        uVar18 = 0x29;
        if (iVar19 == 0) {
          pppppppcVar7 = (char *******)&DAT_00000029;
          uVar22 = 1;
          goto LAB_013146bc;
        }
        uVar16 = 0x29;
        pcVar14 = "Pattern must have between 5 and 7 fields.";
      }
LAB_013147b4:
      FUN_01bed4e2(iVar19,pcVar14,uVar16);
      param_1[1] = 4;
      param_1[2] = uVar18;
      param_1[3] = iVar19;
      goto LAB_013147d4;
    }
    if (pppppppcVar7 != (char *******)&DAT_00000007 && bVar5 == 1) {
      uVar22 = 0x3f;
      iVar19 = thunk_FUN_01be5118(0x3f);
      uVar18 = 0x3f;
      if (iVar19 == 0) {
        pppppppcVar7 = (char *******)&DAT_0000003f;
        uVar22 = 1;
        goto LAB_013146bc;
      }
      uVar16 = 0x3f;
      pcVar14 = "Pattern must have 7 fields when seconds and years are required.";
      goto LAB_013147b4;
    }
    if ((pppppppcVar7 != (char *******)&DAT_00000006) && (bVar5 == 2)) {
      uVar22 = 0x4e;
      iVar19 = thunk_FUN_01be5118(0x4e);
      uVar18 = 0x4e;
      if (iVar19 == 0) {
        pppppppcVar7 = (char *******)0x4e;
        uVar22 = 1;
        goto LAB_013146bc;
      }
      uVar16 = 0x4e;
      pcVar14 = "Pattern must have 6 fields when seconds are required and years are disallowed.";
      goto LAB_013147b4;
    }
    if ((((uint)pppppppcVar7 & 0xffffffe) == 6) || (bVar5 != 0)) goto LAB_013146a8;
    pppppppcVar7 = (char *******)&DAT_00000051;
    iVar19 = thunk_FUN_01be5118(0x51);
    if (iVar19 == 0) {
      uVar22 = 1;
      goto LAB_013146bc;
    }
    FUN_01bed4e2(iVar19,
                 "Pattern must have 6 or 7 fields when seconds are required and years are optional."
                 ,0x51);
    param_1[1] = 4;
    param_1[2] = 0x51;
    *param_1 = 0x80000000;
    param_1[3] = iVar19;
    param_1[4] = 0x51;
  }
  else {
    if (param_2[2] != 2) {
      if (local_1b0 == (char *******)&DAT_00000006) goto LAB_01314578;
      bVar5 = param_2[3];
      if (bVar5 != 2) goto LAB_013145b0;
      uVar22 = 0x3a;
      iVar19 = thunk_FUN_01be5118(0x3a);
      uVar18 = 0x3a;
      if (iVar19 == 0) {
        pppppppcVar7 = (char *******)0x3a;
        uVar22 = 1;
        goto LAB_013146bc;
      }
      uVar16 = 0x3a;
      pcVar14 = "Pattern must have 5 or 6 fields when years are disallowed.";
      goto LAB_013147b4;
    }
    uVar22 = 0x37;
    iVar19 = thunk_FUN_01be5118(0x37);
    if (iVar19 == 0) {
      pppppppcVar7 = (char *******)0x37;
      uVar22 = 1;
      goto LAB_013146bc;
    }
    FUN_01bed4e2(iVar19,&DAT_00430fe8,0x37);
    param_1[1] = 4;
    param_1[2] = 0x37;
    param_1[3] = iVar19;
LAB_013147d4:
    *param_1 = 0x80000000;
    param_1[4] = uVar22;
  }
LAB_013147dc:
  FUN_0134aee0(local_1b8,local_1b4,4,8);
LAB_01313bf0:
  FUN_0134bd64(local_1c0,ppppppcVar6);
  return;
}

