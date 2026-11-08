// FUN_01abd2c8 @ 01abd2c8 size=2184 calls_out=13 calls_in=1
// strings: 

/* WARNING: Switch with 1 destination removed at 0x01abd81c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01abd2c8(int *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  byte *pbVar27;
  ulonglong uVar28;
  int local_18c;
  int local_160;
  int local_154;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int local_90;
  int iStack_8c;
  
  piVar6 = *(int **)(param_2 + 0x2c);
  uVar25 = *(uint *)(param_2 + 0xc);
  uVar14 = *(uint *)(param_2 + 0x1c);
  bVar11 = *(byte *)(param_2 + 0x25);
LAB_01abd374:
  uVar7 = *(uint *)(param_2 + 8);
  iVar21 = *(int *)(param_2 + 4);
  uVar22 = *(uint *)(param_2 + 0x10);
  uVar20 = (uint)*(byte *)(param_2 + 0x18);
  uVar8 = *(uint *)(param_2 + 0x20);
  cVar2 = *(char *)(param_2 + 0x24);
  uVar12 = uVar14;
  do {
    uVar14 = uVar25;
    uVar15 = uVar12;
    if ((bVar11 & 1) != 0) {
LAB_01abe324:
      local_b0 = 6;
      goto LAB_01abe370;
    }
    uVar25 = uVar14;
    if ((uVar22 <= uVar7) && (uVar14 <= uVar22)) {
      cVar3 = *(char *)(param_2 + 0x13 + uVar20);
      do {
        uVar25 = uVar22 - uVar14;
        if (uVar25 < 8) {
          uVar12 = 0;
          if (uVar25 == 0) {
            uVar28 = 0;
          }
          else {
            do {
              if (*(char *)(iVar21 + uVar14 + uVar12) == cVar3) {
                uVar28 = CONCAT44(uVar12,1);
                goto LAB_01abd420;
              }
              uVar12 = uVar12 + 1;
            } while (uVar25 != uVar12);
            uVar28 = (ulonglong)uVar25 << 0x20;
          }
        }
        else {
          uVar28 = FUN_01307168(cVar3,iVar21 + uVar14);
        }
LAB_01abd420:
        if ((uVar28 & 1) == 0) {
          *(uint *)(param_2 + 0xc) = uVar22;
          uVar25 = uVar22;
          break;
        }
        uVar14 = uVar14 + (int)(uVar28 >> 0x20) + 1;
        *(uint *)(param_2 + 0xc) = uVar14;
        uVar25 = uVar14;
        if ((uVar20 <= uVar14) && (uVar14 <= uVar7)) {
          if (4 < uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar20,4,&DAT_01d2fe40);
          }
          uVar24 = uVar14 - uVar20;
          iVar9 = thunk_FUN_01bed842(iVar21 + uVar24,param_2 + 0x14,uVar20);
          if (iVar9 == 0) {
            bVar11 = 0;
            *(uint *)(param_2 + 0x1c) = uVar14;
            goto LAB_01abd4bc;
          }
        }
      } while (uVar14 <= uVar22);
    }
    bVar11 = 1;
    *(undefined1 *)(param_2 + 0x25) = 1;
    uVar14 = uVar15;
    uVar24 = uVar8;
    if (cVar2 == '\0') {
      if (uVar8 == uVar15) goto LAB_01abe324;
    }
    else {
    }
LAB_01abd4bc:
    pbVar10 = (byte *)(uVar24 - uVar15);
    uVar12 = uVar14;
  } while (pbVar10 == (byte *)0x0);
  pbVar26 = (byte *)(iVar21 + uVar15);
  local_a8 = 8;
  pbVar13 = (byte *)(iVar21 + uVar24);
  local_a4 = 0;
  local_94 = -0x80000000;
  local_ac = 0;
  local_a0 = -0x80000000;
  local_b0 = 0;
  pbVar16 = (byte *)0x0;
  pbVar17 = pbVar26;
  do {
    pbVar18 = pbVar17 + 1;
    uVar12 = (uint)*pbVar17;
    if (0x7fffffff < (uint)(int)(char)*pbVar17) {
      if (uVar12 < 0xe0) {
        uVar12 = pbVar17[1] & 0x3f | (uVar12 & 0x1f) << 6;
        pbVar18 = pbVar17 + 2;
      }
      else {
        uVar7 = pbVar17[2] & 0x3f | (pbVar17[1] & 0x3f) << 6;
        if (uVar12 < 0xf0) {
          uVar12 = uVar7 | (uVar12 & 0x1f) << 0xc;
          pbVar18 = pbVar17 + 3;
        }
        else {
          pbVar18 = pbVar17 + 4;
          uVar12 = pbVar17[3] & 0x3f | uVar7 << 6 | (uVar12 & 7) << 0x12;
        }
      }
    }
    pbVar17 = pbVar16 + ((int)pbVar18 - (int)pbVar17);
    if ((4 < uVar12 - 9) && (uVar12 != 0x20)) {
      if (uVar12 < 0x80) break;
      uVar7 = uVar12 >> 8;
      if (uVar7 < 0x20) {
        if (uVar7 == 0) {
          bVar4 = (&DAT_00533bcd)[uVar12 & 0xff] & 1;
          goto joined_r0x01abd634;
        }
        if (uVar7 != 0x16 || uVar12 != 0x1680) break;
      }
      else if (uVar7 == 0x20) {
        bVar4 = (&DAT_00533bcd)[uVar12 & 0xff] & 2;
joined_r0x01abd634:
        if (bVar4 == 0) break;
      }
      else if ((uVar7 != 0x30) || (uVar12 != 0x3000)) break;
    }
    pbVar16 = pbVar17;
    pbVar17 = pbVar18;
    if (pbVar18 == pbVar13) goto switchD_01abe1e0_caseD_2;
  } while( true );
joined_r0x01abd63c:
  do {
    pbVar27 = pbVar13;
    if (pbVar18 == pbVar27) goto LAB_01abd748;
    pbVar13 = pbVar27 + -1;
    uVar12 = (uint)(char)*pbVar13;
    if (0x7fffffff < uVar12) {
      pbVar13 = pbVar27 + -2;
      bVar4 = *pbVar13;
      if ((char)bVar4 < -0x40) {
        pbVar13 = pbVar27 + -3;
        bVar5 = *pbVar13;
        if ((char)bVar5 < -0x40) {
          pbVar13 = pbVar27 + -4;
          uVar7 = (int)(char)bVar5 & 0x3fU | (*pbVar13 & 7) << 6;
        }
        else {
          uVar7 = bVar5 & 0xf;
        }
        uVar7 = (int)(char)bVar4 & 0x3fU | uVar7 << 6;
      }
      else {
        uVar7 = bVar4 & 0x1f;
      }
      uVar12 = uVar12 & 0x3f | uVar7 << 6;
    }
  } while ((uVar12 - 9 < 5) || (uVar12 == 0x20));
  if (uVar12 < 0x80) goto LAB_01abd73c;
  uVar7 = uVar12 >> 8;
  if (0x1f < uVar7) {
    if (uVar7 == 0x20) {
      bVar4 = (&DAT_00533bcd)[uVar12 & 0xff] & 2;
joined_r0x01abd738:
      if (bVar4 == 0) goto LAB_01abd73c;
    }
    else if (uVar7 != 0x30 || uVar12 != 0x3000) goto LAB_01abd73c;
    goto joined_r0x01abd63c;
  }
  if (uVar7 == 0) {
    bVar4 = (&DAT_00533bcd)[uVar12 & 0xff] & 1;
    goto joined_r0x01abd738;
  }
  if ((uVar7 != 0x16) || (uVar12 != 0x1680)) goto LAB_01abd73c;
  goto joined_r0x01abd63c;
LAB_01abd73c:
  pbVar17 = pbVar27 + ((int)pbVar17 - (int)pbVar18);
LAB_01abd748:
  if (pbVar17 != pbVar16) {
    local_160 = 0;
    pbVar13 = (byte *)0x0;
    pbVar16 = pbVar26 + (int)pbVar16;
    do {
      pbVar18 = pbVar16 + 1;
      uVar12 = (uint)*pbVar16;
      if (0x7fffffff < (uint)(int)(char)*pbVar16) {
        if (uVar12 < 0xe0) {
          uVar12 = pbVar16[1] & 0x3f | (uVar12 & 0x1f) << 6;
          pbVar18 = pbVar16 + 2;
        }
        else {
          uVar7 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
          if (uVar12 < 0xf0) {
            uVar12 = uVar7 | (uVar12 & 0x1f) << 0xc;
            pbVar18 = pbVar16 + 3;
          }
          else {
            pbVar18 = pbVar16 + 4;
            uVar12 = pbVar16[3] & 0x3f | uVar7 << 6 | (uVar12 & 7) << 0x12;
          }
        }
      }
                    /* WARNING (jumptable): Second-stage recovery error */
                    /* WARNING: This code block may not be properly labeled as switch case */
      if (uVar12 == 0x5b) {
        uVar19 = 2;
        pbVar27 = pbVar13 + 1;
      }
      else {
        iVar21 = 0;
        do {
          pbVar27 = pbVar13;
          if (iVar21 == 0xc) {
            if (0x7f < uVar12) {
              if (uVar12 < 0xaa) goto switchD_01abe1e0_caseD_2;
              iVar21 = FUN_0130743c(uVar12);
              if (iVar21 != 0) {
                uVar19 = 1;
                goto LAB_01abe18c;
              }
              if (uVar12 < 0xb2) goto switchD_01abe1e0_caseD_2;
              iVar21 = FUN_013077ac(uVar12);
              uVar19 = 1;
              if (iVar21 == 0) goto switchD_01abe1e0_caseD_2;
              goto LAB_01abe18c;
            }
            uVar19 = 1;
            if (9 < uVar12 - 0x30) {
              if (0x19 < (uVar12 & 0x5f) - 0x41) goto switchD_01abe1e0_caseD_2;
              goto LAB_01abe18c;
            }
            break;
          }
          puVar1 = (uint *)((int)&DAT_005315fc + iVar21);
          iVar21 = iVar21 + 4;
        } while (*puVar1 != uVar12);
        uVar19 = 1;
      }
LAB_01abe18c:
      pbVar13 = pbVar18 + ((int)pbVar13 - (int)pbVar16);
      pbVar16 = pbVar18;
    } while (pbVar18 != pbVar26 + (int)pbVar17);
    switch(uVar19) {
    case 1:
      if (pbVar27 != (byte *)0x0) {
        if (pbVar27 < pbVar10) {
          if ((char)pbVar26[(int)pbVar27] < -0x40) goto LAB_01abe558;
        }
        else if (pbVar10 != pbVar27) {
LAB_01abe558:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(pbVar26,pbVar10,pbVar27,pbVar10,&DAT_01d2ecf4);
        }
      }
      iVar23 = (int)pbVar10 - (int)pbVar27;
      iVar9 = 0;
      iVar21 = -0x80000000;
      if (iVar23 != 0) {
        iVar9 = FUN_01aac97c(pbVar26 + (int)pbVar27,iVar23);
        if (iVar9 == 6) {
          uVar19 = 0;
          if (iVar23 < 0) {
LAB_01abe588:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar19,local_18c);
          }
          uVar19 = 1;
          local_18c = FUN_01298504(iVar23,1);
          if (local_18c == 0) {
            local_18c = iVar23;
            goto LAB_01abe588;
          }
          FUN_01bed4e2(local_18c,pbVar26 + (int)pbVar27,iVar23);
          iVar9 = 0;
          iVar21 = iVar23;
        }
      }
      local_b0 = iVar9;
      if (local_94 != -0x80000000) {
        FUN_0134bd64(local_94,local_90);
      }
      local_94 = iVar21;
      iStack_8c = iVar23;
      if (local_b0 != 6) {
        local_154 = 0;
        local_90 = local_18c;
        if (local_b0 != 7) {
          param_1[2] = local_a8;
          param_1[3] = 0;
          param_1[1] = local_ac;
          param_1[4] = local_a0;
          param_1[5] = iStack_9c;
          param_1[6] = iStack_98;
          param_1[7] = iVar21;
          param_1[8] = local_18c;
          param_1[9] = iVar23;
LAB_01abe370:
          *param_1 = local_b0;
          return;
        }
        goto LAB_01abd374;
      }
      iVar21 = local_a8;
      local_154 = local_160;
      iVar9 = local_ac;
      goto LAB_01abe348;
    }
  }
switchD_01abe1e0_caseD_2:
  FUN_01ab0ac0(&local_b0);
  iVar21 = 0;
  iVar9 = 2;
LAB_01abe348:
  if (*piVar6 == 0) {
    FUN_01443048(piVar6[1],piVar6[2]);
  }
  *piVar6 = iVar9;
  local_b0 = 6;
  piVar6[1] = iVar21;
  piVar6[2] = local_154;
  goto LAB_01abe370;
}

