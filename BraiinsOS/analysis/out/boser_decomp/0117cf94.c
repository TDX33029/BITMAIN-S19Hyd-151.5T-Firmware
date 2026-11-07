// FUN_0117cf94 @ 0117cf94 size=3504 calls_out=12 calls_in=2
// strings: 

void FUN_0117cf94(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                 int param_6)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int local_64;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30 [3];
  
  if (param_2 < 0x21) {
LAB_0117cfb8:
    if (1 < param_2) {
      if (param_4 < param_2 + 0x10) {
LAB_0117dd14:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x117dd14);
        (*pcVar1)();
      }
      uVar4 = param_2 >> 1;
      if (param_2 < 0x10) {
        puVar14 = param_3 + uVar4 * 3;
        puVar17 = param_1 + uVar4 * 3;
        if (param_2 < 8) {
          uVar15 = param_1[1];
          uVar18 = param_1[2];
          *param_3 = *param_1;
          param_3[1] = uVar15;
          param_3[2] = uVar18;
          uVar15 = puVar17[1];
          uVar18 = puVar17[2];
          *puVar14 = *puVar17;
          puVar14[1] = uVar15;
          puVar14[2] = uVar18;
          uVar11 = 1;
        }
        else {
          FUN_01013c88();
          FUN_01013c88(puVar17,puVar14);
          uVar11 = 4;
        }
      }
      else {
        FUN_01013c50(param_1,param_3,param_3 + param_2 * 3);
        FUN_01013c50(param_1 + uVar4 * 3,param_3 + uVar4 * 3,param_3 + param_2 * 3 + 0x18);
        uVar11 = 8;
      }
      local_30[0] = 0;
      iVar5 = 0;
      local_30[1] = uVar4;
      do {
        iVar9 = local_30[iVar5];
        uVar10 = uVar4;
        if (iVar9 != 0) {
          uVar10 = param_2 - uVar4;
        }
        if (uVar11 < uVar10) {
          iVar22 = uVar10 - uVar11;
          puVar17 = param_1 + uVar11 * 3 + iVar9 * 3;
          puVar14 = param_3 + uVar11 * 3 + iVar9 * 3;
          do {
            uVar15 = puVar17[1];
            uVar18 = puVar17[2];
            *puVar14 = *puVar17;
            puVar14[1] = uVar15;
            puVar14[2] = uVar18;
            FUN_010133f4(param_3 + iVar9 * 3,puVar14);
            puVar17 = puVar17 + 3;
            puVar14 = puVar14 + 3;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
        }
        bVar23 = iVar5 == 0;
        iVar5 = 1;
      } while (bVar23);
      FUN_01013f9c(param_3,param_2,param_1);
    }
    return;
  }
  local_64 = param_6;
LAB_0117d028:
  if (param_5 == 0) {
    FUN_0117c78c(param_1,param_2,param_3,param_4,1);
    return;
  }
  puVar17 = param_1 + (param_2 >> 3) * 0x15;
  puVar14 = param_1 + (param_2 >> 3) * 0xc;
  if (param_2 < 0x40) {
    uVar15 = puVar14[1];
    uVar18 = puVar14[2];
    uVar24 = FUN_019b00d0();
    uVar4 = (uint)((ulonglong)uVar24 >> 0x20);
    uVar19 = param_1[1];
    uVar20 = param_1[2];
    uVar25 = FUN_019b00d0(uVar19,uVar20);
    uVar11 = (uint)((ulonglong)uVar25 >> 0x20);
    iVar5 = (int)uVar25;
    if ((int)uVar24 == 0) {
      uVar10 = (uint)(iVar5 != 0);
    }
    else if (iVar5 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar11;
      if (uVar4 < uVar11) {
        uVar10 = uVar4;
      }
      uVar10 = FUN_01bed842((int)uVar24,iVar5,uVar10);
      if (uVar10 == 0) {
        uVar10 = uVar4 - uVar11;
      }
      uVar10 = uVar10 >> 0x1f;
    }
    uVar21 = puVar17[1];
    uVar16 = puVar17[2];
    uVar24 = FUN_019b00d0(uVar21,uVar16);
    uVar4 = (uint)((ulonglong)uVar24 >> 0x20);
    uVar25 = FUN_019b00d0(uVar19,uVar20);
    uVar11 = (uint)((ulonglong)uVar25 >> 0x20);
    iVar5 = (int)uVar25;
    if ((int)uVar24 == 0) {
      uVar3 = 0;
      if (iVar5 != 0) {
        uVar3 = 1;
      }
LAB_0117d160:
      bVar23 = uVar10 == uVar3;
    }
    else {
      if (iVar5 != 0) {
        uVar3 = uVar11;
        if (uVar4 < uVar11) {
          uVar3 = uVar4;
        }
        uVar3 = FUN_01bed842((int)uVar24,iVar5,uVar3);
        if (uVar3 == 0) {
          uVar3 = uVar4 - uVar11;
        }
        uVar3 = uVar3 >> 0x1f;
        goto LAB_0117d160;
      }
      bVar23 = uVar10 == 0;
    }
    puVar2 = param_1;
    if (bVar23) {
      uVar24 = FUN_019b00d0(uVar21,uVar16);
      uVar4 = (uint)((ulonglong)uVar24 >> 0x20);
      uVar25 = FUN_019b00d0(uVar15,uVar18);
      uVar11 = (uint)((ulonglong)uVar25 >> 0x20);
      iVar5 = (int)uVar25;
      if ((int)uVar24 == 0) {
        uVar3 = (uint)(iVar5 != 0);
      }
      else if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar11;
        if (uVar4 < uVar11) {
          uVar3 = uVar4;
        }
        uVar3 = FUN_01bed842((int)uVar24,iVar5,uVar3);
        if (uVar3 == 0) {
          uVar3 = uVar4 - uVar11;
        }
        uVar3 = uVar3 >> 0x1f;
      }
      puVar2 = puVar14;
      if (uVar10 != uVar3) {
        puVar2 = puVar17;
      }
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_005fcfb8(param_1,puVar14,puVar17);
  }
  param_5 = param_5 + -1;
  uVar4 = ((uint)((int)puVar2 - (int)param_1) >> 2) * -0x55555555;
  local_38 = *puVar2;
  uStack_34 = puVar2[1];
  local_30[0] = puVar2[2];
  if (local_64 != 0) {
    uVar24 = FUN_019b00d0(puVar2[1],puVar2[2]);
    uVar11 = (uint)((ulonglong)uVar24 >> 0x20);
    uVar25 = FUN_019b00d0(*(undefined4 *)(local_64 + 4),*(undefined4 *)(local_64 + 8));
    uVar10 = (uint)((ulonglong)uVar25 >> 0x20);
    iVar5 = (int)uVar25;
    if ((int)uVar24 == 0) {
      if (iVar5 != 0) goto LAB_0117d2bc;
    }
    else if (iVar5 != 0) {
      uVar3 = uVar10;
      if (uVar11 < uVar10) {
        uVar3 = uVar11;
      }
      iVar5 = FUN_01bed842((int)uVar24,iVar5,uVar3);
      if (iVar5 == 0) {
        iVar5 = uVar11 - uVar10;
      }
      if (iVar5 < 0) goto LAB_0117d2bc;
    }
    goto LAB_0117d738;
  }
LAB_0117d2bc:
  if (param_2 <= param_4) {
    uVar10 = 0;
    puVar17 = param_3 + param_2 * 3;
    uVar11 = uVar4;
    puVar14 = param_1;
    do {
      iVar5 = uVar11 - 3;
      if (uVar11 < 3) {
        iVar5 = 0;
      }
      for (; puVar14 < param_1 + iVar5 * 3; puVar14 = puVar14 + 0xc) {
        uVar24 = FUN_019b00d0(puVar2[1],puVar2[2]);
        uVar3 = (uint)((ulonglong)uVar24 >> 0x20);
        uVar25 = FUN_019b00d0(puVar14[1],puVar14[2]);
        uVar12 = (uint)((ulonglong)uVar25 >> 0x20);
        iVar9 = (int)uVar25;
        puVar8 = puVar17 + -3;
        if ((int)uVar24 == 0) {
          if (iVar9 == 0) goto LAB_0117d38c;
LAB_0117d380:
          iVar9 = 1;
          puVar8 = param_3;
        }
        else if (iVar9 == 0) {
LAB_0117d38c:
          iVar9 = 0;
        }
        else {
          uVar13 = uVar12;
          if (uVar3 < uVar12) {
            uVar13 = uVar3;
          }
          iVar22 = FUN_01bed842((int)uVar24,iVar9,uVar13);
          iVar9 = 0;
          if (iVar22 == 0) {
            iVar22 = uVar3 - uVar12;
          }
          if (iVar22 < 0) goto LAB_0117d380;
        }
        puVar8 = puVar8 + uVar10 * 3;
        uVar15 = puVar14[1];
        uVar18 = puVar14[2];
        *puVar8 = *puVar14;
        puVar8[1] = uVar15;
        puVar8[2] = uVar18;
        uVar24 = FUN_019b00d0(puVar2[1],puVar2[2]);
        uVar3 = (uint)((ulonglong)uVar24 >> 0x20);
        uVar25 = FUN_019b00d0(puVar14[4],puVar14[5]);
        uVar12 = (uint)((ulonglong)uVar25 >> 0x20);
        iVar22 = (int)uVar25;
        puVar8 = puVar17 + -6;
        if ((int)uVar24 == 0) {
          if (iVar22 == 0) goto LAB_0117d42c;
LAB_0117d420:
          iVar22 = 1;
          puVar8 = param_3;
        }
        else if (iVar22 == 0) {
LAB_0117d42c:
          iVar22 = 0;
        }
        else {
          uVar13 = uVar12;
          if (uVar3 < uVar12) {
            uVar13 = uVar3;
          }
          iVar6 = FUN_01bed842((int)uVar24,iVar22,uVar13);
          iVar22 = 0;
          if (iVar6 == 0) {
            iVar6 = uVar3 - uVar12;
          }
          if (iVar6 < 0) goto LAB_0117d420;
        }
        puVar8 = puVar8 + (iVar9 + uVar10) * 3;
        uVar15 = puVar14[4];
        uVar18 = puVar14[5];
        *puVar8 = puVar14[3];
        puVar8[1] = uVar15;
        puVar8[2] = uVar18;
        uVar24 = FUN_019b00d0(puVar2[1],puVar2[2]);
        uVar3 = (uint)((ulonglong)uVar24 >> 0x20);
        uVar25 = FUN_019b00d0(puVar14[7],puVar14[8]);
        uVar12 = (uint)((ulonglong)uVar25 >> 0x20);
        iVar6 = (int)uVar25;
        puVar8 = puVar17 + -9;
        if ((int)uVar24 == 0) {
          if (iVar6 == 0) goto LAB_0117d4cc;
LAB_0117d4c0:
          iVar6 = 1;
          puVar8 = param_3;
        }
        else if (iVar6 == 0) {
LAB_0117d4cc:
          iVar6 = 0;
        }
        else {
          uVar13 = uVar12;
          if (uVar3 < uVar12) {
            uVar13 = uVar3;
          }
          iVar7 = FUN_01bed842((int)uVar24,iVar6,uVar13);
          iVar6 = 0;
          if (iVar7 == 0) {
            iVar7 = uVar3 - uVar12;
          }
          if (iVar7 < 0) goto LAB_0117d4c0;
        }
        iVar22 = iVar22 + iVar9 + uVar10;
        puVar8 = puVar8 + iVar22 * 3;
        uVar15 = puVar14[7];
        uVar18 = puVar14[8];
        *puVar8 = puVar14[6];
        puVar8[1] = uVar15;
        puVar8[2] = uVar18;
        uVar24 = FUN_019b00d0(puVar2[1],puVar2[2]);
        uVar10 = (uint)((ulonglong)uVar24 >> 0x20);
        uVar25 = FUN_019b00d0(puVar14[10],puVar14[0xb]);
        uVar3 = (uint)((ulonglong)uVar25 >> 0x20);
        iVar9 = (int)uVar25;
        puVar17 = puVar17 + -0xc;
        puVar8 = puVar17;
        if ((int)uVar24 == 0) {
          if (iVar9 == 0) goto LAB_0117d574;
LAB_0117d568:
          iVar9 = 1;
          puVar8 = param_3;
        }
        else if (iVar9 == 0) {
LAB_0117d574:
          iVar9 = 0;
        }
        else {
          uVar12 = uVar3;
          if (uVar10 < uVar3) {
            uVar12 = uVar10;
          }
          iVar7 = FUN_01bed842((int)uVar24,iVar9,uVar12);
          iVar9 = 0;
          if (iVar7 == 0) {
            iVar7 = uVar10 - uVar3;
          }
          if (iVar7 < 0) goto LAB_0117d568;
        }
        iVar6 = iVar6 + iVar22;
        uVar10 = iVar9 + iVar6;
        puVar8 = puVar8 + iVar6 * 3;
        uVar15 = puVar14[10];
        uVar18 = puVar14[0xb];
        *puVar8 = puVar14[9];
        puVar8[1] = uVar15;
        puVar8[2] = uVar18;
      }
      for (; puVar14 < param_1 + uVar11 * 3; puVar14 = puVar14 + 3) {
        uVar24 = FUN_019b00d0(puVar2[1],puVar2[2]);
        uVar3 = (uint)((ulonglong)uVar24 >> 0x20);
        uVar25 = FUN_019b00d0(puVar14[1],puVar14[2]);
        uVar12 = (uint)((ulonglong)uVar25 >> 0x20);
        iVar5 = (int)uVar25;
        puVar17 = puVar17 + -3;
        puVar8 = puVar17;
        if ((int)uVar24 == 0) {
          if (iVar5 == 0) goto LAB_0117d640;
LAB_0117d634:
          iVar5 = 1;
          puVar8 = param_3;
        }
        else if (iVar5 == 0) {
LAB_0117d640:
          iVar5 = 0;
        }
        else {
          uVar13 = uVar12;
          if (uVar3 < uVar12) {
            uVar13 = uVar3;
          }
          iVar9 = FUN_01bed842((int)uVar24,iVar5,uVar13);
          iVar5 = 0;
          if (iVar9 == 0) {
            iVar9 = uVar3 - uVar12;
          }
          if (iVar9 < 0) goto LAB_0117d634;
        }
        puVar8 = puVar8 + uVar10 * 3;
        uVar15 = puVar14[1];
        uVar18 = puVar14[2];
        *puVar8 = *puVar14;
        puVar8[1] = uVar15;
        puVar8[2] = uVar18;
        uVar10 = iVar5 + uVar10;
      }
      if (uVar11 == param_2) goto LAB_0117d69c;
      puVar17 = puVar17 + -3;
      uVar15 = *puVar14;
      uVar18 = puVar14[1];
      uVar19 = puVar14[2];
      puVar8 = puVar17 + uVar10 * 3;
      puVar14 = puVar14 + 3;
      *puVar8 = uVar15;
      puVar8[1] = uVar18;
      puVar8[2] = uVar19;
      uVar11 = param_2;
    } while( true );
  }
  goto LAB_0117dd14;
LAB_0117d69c:
  FUN_01bed4e2(param_1,param_3,uVar10 * 0xc);
  iVar5 = param_2 - uVar10;
  if (iVar5 != 0) {
    puVar17 = param_3 + param_2 * 3 + -3;
    puVar14 = param_1 + uVar10 * 3;
    iVar9 = iVar5;
    do {
      uVar15 = *puVar17;
      uVar18 = puVar17[1];
      uVar19 = puVar17[2];
      puVar17 = puVar17 + -3;
      iVar9 = iVar9 + -1;
      *puVar14 = uVar15;
      puVar14[1] = uVar18;
      puVar14[2] = uVar19;
      puVar14 = puVar14 + 3;
    } while (iVar9 != 0);
  }
  if (uVar10 == 0) {
LAB_0117d738:
    if (param_2 <= param_4) {
      uVar11 = 0;
      local_40 = param_3 + param_2 * 3;
      puVar14 = param_1;
      do {
        iVar5 = uVar4 - 3;
        if (uVar4 < 3) {
          iVar5 = 0;
        }
        for (; puVar17 = local_40, puVar14 < param_1 + iVar5 * 3; puVar14 = puVar14 + 0xc) {
          uVar24 = FUN_019b00d0(puVar14[1],puVar14[2]);
          uVar10 = (uint)((ulonglong)uVar24 >> 0x20);
          uVar25 = FUN_019b00d0(puVar2[1],puVar2[2]);
          uVar3 = (uint)((ulonglong)uVar25 >> 0x20);
          iVar9 = (int)uVar25;
          puVar8 = param_3;
          if ((int)uVar24 == 0) {
            if (iVar9 == 0) goto LAB_0117d80c;
LAB_0117d7f8:
            iVar22 = 0;
            puVar8 = local_40 + -3;
          }
          else {
            iVar22 = 1;
            if (iVar9 == 0) {
LAB_0117d80c:
              iVar22 = 1;
            }
            else {
              uVar12 = uVar3;
              if (uVar10 < uVar3) {
                uVar12 = uVar10;
              }
              iVar9 = FUN_01bed842((int)uVar24,iVar9,uVar12);
              if (iVar9 == 0) {
                iVar9 = uVar10 - uVar3;
              }
              if (iVar9 < 0) goto LAB_0117d7f8;
            }
          }
          puVar8 = puVar8 + uVar11 * 3;
          uVar15 = puVar14[1];
          uVar18 = puVar14[2];
          *puVar8 = *puVar14;
          puVar8[1] = uVar15;
          puVar8[2] = uVar18;
          uVar24 = FUN_019b00d0(puVar14[4],puVar14[5]);
          uVar10 = (uint)((ulonglong)uVar24 >> 0x20);
          uVar25 = FUN_019b00d0(puVar2[1],puVar2[2]);
          uVar3 = (uint)((ulonglong)uVar25 >> 0x20);
          iVar9 = (int)uVar25;
          puVar8 = param_3;
          if ((int)uVar24 == 0) {
            if (iVar9 == 0) goto LAB_0117d8a4;
LAB_0117d890:
            iVar6 = 0;
            puVar8 = local_40 + -6;
          }
          else {
            iVar6 = 1;
            if (iVar9 == 0) {
LAB_0117d8a4:
              iVar6 = 1;
            }
            else {
              uVar12 = uVar3;
              if (uVar10 < uVar3) {
                uVar12 = uVar10;
              }
              iVar9 = FUN_01bed842((int)uVar24,iVar9,uVar12);
              if (iVar9 == 0) {
                iVar9 = uVar10 - uVar3;
              }
              if (iVar9 < 0) goto LAB_0117d890;
            }
          }
          puVar8 = puVar8 + (iVar22 + uVar11) * 3;
          uVar15 = puVar14[4];
          uVar18 = puVar14[5];
          *puVar8 = puVar14[3];
          puVar8[1] = uVar15;
          puVar8[2] = uVar18;
          uVar24 = FUN_019b00d0(puVar14[7],puVar14[8]);
          uVar10 = (uint)((ulonglong)uVar24 >> 0x20);
          uVar25 = FUN_019b00d0(puVar2[1],puVar2[2]);
          uVar3 = (uint)((ulonglong)uVar25 >> 0x20);
          iVar9 = (int)uVar25;
          puVar8 = param_3;
          if ((int)uVar24 == 0) {
            if (iVar9 == 0) goto LAB_0117d944;
LAB_0117d930:
            iVar7 = 0;
            puVar8 = local_40 + -9;
          }
          else {
            iVar7 = 1;
            if (iVar9 == 0) {
LAB_0117d944:
              iVar7 = 1;
            }
            else {
              uVar12 = uVar3;
              if (uVar10 < uVar3) {
                uVar12 = uVar10;
              }
              iVar9 = FUN_01bed842((int)uVar24,iVar9,uVar12);
              if (iVar9 == 0) {
                iVar9 = uVar10 - uVar3;
              }
              if (iVar9 < 0) goto LAB_0117d930;
            }
          }
          iVar6 = iVar6 + iVar22 + uVar11;
          puVar8 = puVar8 + iVar6 * 3;
          uVar15 = puVar14[7];
          uVar18 = puVar14[8];
          *puVar8 = puVar14[6];
          puVar8[1] = uVar15;
          puVar8[2] = uVar18;
          uVar24 = FUN_019b00d0(puVar14[10],puVar14[0xb]);
          uVar11 = (uint)((ulonglong)uVar24 >> 0x20);
          uVar25 = FUN_019b00d0(puVar2[1],puVar2[2]);
          uVar10 = (uint)((ulonglong)uVar25 >> 0x20);
          iVar9 = (int)uVar25;
          puVar8 = param_3;
          if ((int)uVar24 == 0) {
            if (iVar9 == 0) goto LAB_0117da00;
LAB_0117d9e8:
            local_40 = local_40 + -0xc;
            iVar9 = 0;
            puVar8 = local_40;
          }
          else if (iVar9 == 0) {
LAB_0117da00:
            iVar9 = 1;
          }
          else {
            uVar3 = uVar10;
            if (uVar11 < uVar10) {
              uVar3 = uVar11;
            }
            iVar22 = FUN_01bed842((int)uVar24,iVar9,uVar3);
            if (iVar22 == 0) {
              iVar22 = uVar11 - uVar10;
            }
            iVar9 = 1;
            if (iVar22 < 0) goto LAB_0117d9e8;
          }
          local_40 = puVar17 + -0xc;
          iVar7 = iVar7 + iVar6;
          puVar8 = puVar8 + iVar7 * 3;
          uVar15 = puVar14[10];
          uVar18 = puVar14[0xb];
          *puVar8 = puVar14[9];
          puVar8[1] = uVar15;
          puVar8[2] = uVar18;
          uVar11 = iVar9 + iVar7;
        }
        for (; puVar17 = local_40, puVar14 < param_1 + uVar4 * 3; puVar14 = puVar14 + 3) {
          uVar24 = FUN_019b00d0(puVar14[1],puVar14[2]);
          uVar10 = (uint)((ulonglong)uVar24 >> 0x20);
          uVar25 = FUN_019b00d0(puVar2[1],puVar2[2]);
          uVar3 = (uint)((ulonglong)uVar25 >> 0x20);
          iVar5 = (int)uVar25;
          puVar8 = param_3;
          if ((int)uVar24 == 0) {
            if (iVar5 == 0) goto LAB_0117dae8;
LAB_0117dad0:
            local_40 = local_40 + -3;
            iVar5 = 0;
            puVar8 = local_40;
          }
          else if (iVar5 == 0) {
LAB_0117dae8:
            iVar5 = 1;
          }
          else {
            uVar12 = uVar3;
            if (uVar10 < uVar3) {
              uVar12 = uVar10;
            }
            iVar9 = FUN_01bed842((int)uVar24,iVar5,uVar12);
            if (iVar9 == 0) {
              iVar9 = uVar10 - uVar3;
            }
            iVar5 = 1;
            if (iVar9 < 0) goto LAB_0117dad0;
          }
          local_40 = puVar17 + -3;
          puVar8 = puVar8 + uVar11 * 3;
          uVar15 = puVar14[1];
          uVar18 = puVar14[2];
          *puVar8 = *puVar14;
          puVar8[1] = uVar15;
          puVar8[2] = uVar18;
          uVar11 = iVar5 + uVar11;
        }
        if (uVar4 == param_2) goto LAB_0117db4c;
        uVar15 = *puVar14;
        uVar18 = puVar14[1];
        uVar19 = puVar14[2];
        puVar14 = puVar14 + 3;
        puVar17 = param_3 + uVar11 * 3;
        uVar11 = uVar11 + 1;
        *puVar17 = uVar15;
        puVar17[1] = uVar18;
        puVar17[2] = uVar19;
        local_40 = local_40 + -3;
        uVar4 = param_2;
      } while( true );
    }
    goto LAB_0117dd14;
  }
  if (param_2 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
  }
  FUN_0117cf94(param_1 + uVar10 * 3,iVar5,param_3,param_4,param_5,&local_38);
  param_2 = uVar10;
joined_r0x0117dbc4:
  if (param_2 < 0x21) goto LAB_0117cfb8;
  goto LAB_0117d028;
LAB_0117db4c:
  FUN_01bed4e2(param_1,param_3,uVar11 * 0xc);
  uVar4 = param_2 - uVar11;
  if (uVar4 == 0) {
    return;
  }
  param_1 = param_1 + uVar11 * 3;
  puVar17 = param_3 + param_2 * 3 + -3;
  uVar10 = uVar4;
  puVar14 = param_1;
  do {
    uVar15 = *puVar17;
    uVar18 = puVar17[1];
    uVar19 = puVar17[2];
    puVar17 = puVar17 + -3;
    uVar10 = uVar10 - 1;
    *puVar14 = uVar15;
    puVar14[1] = uVar18;
    puVar14[2] = uVar19;
    puVar14 = puVar14 + 3;
  } while (uVar10 != 0);
  if (param_2 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar11,param_2,param_2,&DAT_01d30598);
  }
  local_64 = 0;
  param_2 = uVar4;
  goto joined_r0x0117dbc4;
}

