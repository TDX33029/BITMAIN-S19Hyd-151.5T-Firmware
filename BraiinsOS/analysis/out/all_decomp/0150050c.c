// FUN_0150050c @ 0150050c size=3044 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_0150050c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined *puVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined1 local_25;
  
  param_1 = (undefined4 *)*param_1;
  pbVar18 = (byte *)*param_1;
  if (pbVar18 == (byte *)0x0) {
    local_40 = param_1[1];
    uStack_3c = param_1[2];
    uStack_38 = 0;
    local_2c = 0;
    local_34 = 0;
    local_30 = param_2;
    uVar6 = FUN_014fbd90(&local_40,1);
    return uVar6;
  }
  pbVar21 = (byte *)param_1[1];
  iVar2 = param_1[2];
  iVar24 = 0;
LAB_01500540:
  if (iVar24 == iVar2) {
    return 0;
  }
  if (pbVar21 == (byte *)0x0) {
LAB_01500f90:
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a7400);
  }
  uVar22 = (uint)*pbVar18;
  iVar19 = 0;
  uVar9 = uVar22;
  pbVar23 = pbVar18;
  while( true ) {
    uVar13 = uVar9;
    if (0x7fffffff < (uint)(int)(char)uVar9) {
      if (uVar9 < 0xe0) {
        uVar13 = pbVar18[1 - iVar19] & 0x3f | (uVar9 & 0x1f) << 6;
      }
      else {
        uVar13 = pbVar18[2 - iVar19] & 0x3f | (pbVar18[1 - iVar19] & 0x3f) << 6;
        if (uVar9 < 0xf0) {
          uVar13 = uVar13 | (uVar9 & 0x1f) << 0xc;
        }
        else {
          uVar13 = pbVar18[3 - iVar19] & 0x3f | uVar13 << 6 | (uVar9 & 7) << 0x12;
        }
      }
    }
    pbVar8 = pbVar21 + iVar19;
    if (9 < uVar13 - 0x30) break;
    if (pbVar8 == &DAT_00000001) goto LAB_01500f90;
    if ((char)pbVar18[1 - iVar19] < -0x40) {
      puVar7 = &DAT_018a7410;
      goto LAB_01500fac;
    }
    uVar9 = (uint)pbVar18[1 - iVar19];
    pbVar23 = pbVar23 + 1;
    iVar19 = iVar19 + -1;
  }
  if (pbVar21 == pbVar8) {
    local_25 = 0;
    goto LAB_01500f64;
  }
  uVar13 = (int)pbVar21 - (int)pbVar8;
  if ((char)pbVar18[uVar13] < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(pbVar18,pbVar21,0,uVar13,&DAT_018a7420);
  }
  if ((uVar13 == 1) && (local_25 = 1, uVar22 == 0x2b || uVar22 == 0x2d)) goto LAB_01500f64;
  iVar16 = 0;
  if (uVar22 == 0x2b) {
    pbVar18 = pbVar18 + 1;
    uVar13 = uVar13 - 1;
    iVar16 = -1;
  }
  if (uVar13 < 9) {
    if (uVar13 != 0) {
      pbVar14 = (byte *)0x0;
      do {
        bVar1 = *pbVar18;
        if (9 < bVar1 - 0x30) goto LAB_01500fb8;
        iVar16 = iVar16 + -1;
        pbVar18 = pbVar18 + 1;
        pbVar14 = (byte *)((bVar1 - 0x30) + (int)pbVar14 * 10);
      } while (iVar19 != iVar16);
      goto LAB_01500690;
    }
LAB_01500708:
    pbVar5 = (byte *)0x0;
    pbVar18 = pbVar23;
    pbVar21 = pbVar8;
  }
  else {
    pbVar14 = (byte *)0x0;
    while (iVar19 != iVar16) {
      uVar22 = (uint)(ZEXT48(pbVar14) * 10);
      if ((int)(ZEXT48(pbVar14) * 10 >> 0x20) != 0) {
        local_25 = 1;
        if (*pbVar18 - 0x30 < 10) {
          local_25 = 2;
        }
        goto LAB_01500f64;
      }
      uVar13 = *pbVar18 - 0x30;
      if (9 < uVar13) goto LAB_01500fb8;
      pbVar14 = (byte *)(uVar13 + uVar22);
      iVar16 = iVar16 + -1;
      pbVar18 = pbVar18 + 1;
      if (CARRY4(uVar13,uVar22)) {
        local_25 = 2;
        goto LAB_01500f64;
      }
    }
LAB_01500690:
    if (pbVar14 == (byte *)0x0) goto LAB_01500708;
    if (pbVar14 < pbVar8) {
      if ((char)pbVar23[(int)pbVar14] < -0x40) goto LAB_01500fe4;
      if ((char)pbVar23[(int)pbVar14] < -0x40) {
        puVar7 = &DAT_018a7450;
        pbVar18 = (byte *)0x0;
        goto LAB_0150104c;
      }
      pbVar21 = pbVar8 + -(int)pbVar14;
      pbVar8 = pbVar14;
    }
    else {
      if (pbVar8 != pbVar14) {
LAB_01500fe4:
        puVar7 = &DAT_018a7440;
        pbVar18 = pbVar14;
        pbVar14 = pbVar8;
        goto LAB_0150104c;
      }
      pbVar21 = (byte *)0x0;
    }
    if (((*(byte *)((int)param_2 + 10) & 0x80) != 0) && (iVar24 + 1 == iVar2 && uVar9 == 0x68)) {
      if ((pbVar8 != &DAT_00000001) && ((char)pbVar23[1] < -0x40)) {
        puVar7 = &DAT_018a7328;
LAB_01500fac:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(pbVar23,pbVar8,1,pbVar8,puVar7);
      }
      pbVar18 = pbVar23 + 1;
      do {
        if (pbVar18 == pbVar23 + (int)pbVar8) {
          return 0;
        }
        pbVar5 = pbVar18 + 1;
        puVar15 = (undefined1 *)(uint)*pbVar18;
        if (0x7fffffff < (uint)(int)(char)*pbVar18) {
          if (puVar15 < (undefined1 *)0xe0) {
            puVar15 = (undefined1 *)(pbVar18[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
            pbVar5 = pbVar18 + 2;
          }
          else {
            uVar9 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
            if (puVar15 < (undefined1 *)0xf0) {
              puVar15 = (undefined1 *)(uVar9 | ((uint)puVar15 & 0x1f) << 0xc);
              pbVar5 = pbVar18 + 3;
            }
            else {
              puVar15 = (undefined1 *)(pbVar18[3] & 0x3f | uVar9 << 6 | ((uint)puVar15 & 7) << 0x12)
              ;
              if (puVar15 == &DAT_00110000) {
                return 0;
              }
              pbVar5 = pbVar18 + 4;
            }
          }
        }
        puVar12 = puVar15 + -0x30;
        if ((undefined1 *)0x39 < puVar15) {
          puVar12 = (undefined1 *)(((uint)(puVar15 + -0x41) & 0xffffffde) + 10);
        }
        pbVar18 = pbVar5;
      } while (puVar12 < &DAT_00000010);
    }
    pbVar5 = pbVar8;
    pbVar18 = pbVar23 + (int)pbVar14;
  }
  pbVar8 = pbVar5;
  if ((iVar24 != 0) &&
     (iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418eb9,2), iVar19 != 0)) {
    return 1;
  }
  if ((pbVar8 < &SUB_00000002) || (*(short *)pbVar23 != 0x245f)) {
    pbVar14 = pbVar23;
    pbVar5 = pbVar8;
  }
  else {
    if ((char)pbVar23[1] < -0x40) {
      puVar7 = &DAT_018a7460;
      pbVar18 = &DAT_00000001;
      pbVar14 = pbVar8;
LAB_0150104c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(pbVar23,pbVar8,pbVar18,pbVar14,puVar7);
    }
    pbVar14 = pbVar23 + 1;
    pbVar5 = pbVar8 + -1;
  }
LAB_0150078c:
  if (pbVar5 != (byte *)0x0) {
    if (*pbVar14 == 0x24) {
      if ((pbVar5 == &DAT_00000001) || (-0x41 < (char)pbVar14[1])) {
        pbVar23 = pbVar14 + 1;
        pbVar17 = pbVar5 + -1;
        pbVar8 = (byte *)0x0;
        do {
          uVar9 = (int)pbVar17 - (int)pbVar8;
          if (uVar9 < 8) {
            uVar22 = 0;
            if (uVar9 == 0) {
              uVar27 = 0;
            }
            else {
              do {
                if ((pbVar23 + (int)pbVar8)[uVar22] == 0x24) {
                  uVar27 = CONCAT44(uVar22,1);
                  goto LAB_01500958;
                }
                uVar22 = uVar22 + 1;
              } while (uVar9 != uVar22);
              uVar27 = (ulonglong)uVar9 << 0x20;
            }
          }
          else {
            uVar27 = FUN_00fb727c(0x24,pbVar23 + (int)pbVar8);
          }
LAB_01500958:
          if ((uVar27 & 1) == 0) goto LAB_01500de8;
          pbVar8 = pbVar8 + (int)(uVar27 >> 0x20);
          if ((pbVar8 < pbVar17) && (pbVar23[(int)pbVar8] == 0x24)) goto LAB_01500a38;
          pbVar8 = pbVar8 + 1;
          if (pbVar17 < pbVar8) goto LAB_01500de8;
        } while( true );
      }
      puVar7 = &DAT_018a7490;
      goto LAB_01501060;
    }
    if (*pbVar14 == 0x2e) {
      if (pbVar5 == &DAT_00000001) {
        iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418eb7,1);
        if (iVar19 != 0) {
          return 1;
        }
      }
      else {
        bVar1 = pbVar14[1];
        if ((char)bVar1 < -0x40) {
          puVar7 = &DAT_018a74d0;
LAB_01501060:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(pbVar14,pbVar5,1,pbVar5,puVar7);
        }
        uVar9 = (uint)bVar1;
        if (0x7fffffff < (uint)(int)(char)bVar1) {
          if (uVar9 < 0xe0) {
            uVar9 = pbVar14[2] & 0x3f | (uVar9 & 0x1f) << 6;
          }
          else {
            uVar22 = pbVar14[3] & 0x3f | (pbVar14[2] & 0x3f) << 6;
            if (uVar9 < 0xf0) {
              uVar9 = uVar22 | (uVar9 & 0x1f) << 0xc;
            }
            else {
              uVar9 = pbVar14[4] & 0x3f | uVar22 << 6 | (uVar9 & 7) << 0x12;
            }
          }
        }
        if (uVar9 == 0x2e) {
          iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418eb9,2);
          if (iVar19 != 0) {
            return 1;
          }
          if ((&SUB_00000002 < pbVar5) && ((char)pbVar14[2] < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(pbVar14,pbVar5,2,pbVar5,&DAT_018a74e0);
          }
          pbVar14 = pbVar14 + 2;
          pbVar5 = pbVar5 + -2;
          goto LAB_0150078c;
        }
        iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418eb7,1);
        if (iVar19 != 0) {
          return 1;
        }
        if ((char)pbVar14[1] < -0x40) {
          puVar7 = &DAT_018a74f0;
          goto LAB_01501060;
        }
      }
      pbVar14 = pbVar14 + 1;
      pbVar5 = pbVar5 + -1;
      goto LAB_0150078c;
    }
  }
  pbVar23 = pbVar14;
  pbVar8 = (byte *)0x0;
  do {
    pbVar17 = pbVar8;
    if (pbVar23 == pbVar14 + (int)pbVar5) goto LAB_01500de8;
    pbVar8 = pbVar23 + 1;
    uVar9 = (uint)*pbVar23;
    if (0x7fffffff < (uint)(int)(char)*pbVar23) {
      if (uVar9 < 0xe0) {
        uVar9 = pbVar23[1] & 0x3f | (uVar9 & 0x1f) << 6;
        pbVar8 = pbVar23 + 2;
      }
      else {
        uVar22 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
        if (uVar9 < 0xf0) {
          uVar9 = uVar22 | (uVar9 & 0x1f) << 0xc;
          pbVar8 = pbVar23 + 3;
        }
        else {
          uVar9 = pbVar23[3] & 0x3f | uVar22 << 6 | (uVar9 & 7) << 0x12;
          pbVar8 = pbVar23 + 4;
        }
      }
    }
    if (uVar9 == 0x24) break;
    iVar19 = (int)pbVar17 - (int)pbVar23;
    pbVar23 = pbVar8;
    pbVar8 = pbVar8 + iVar19;
  } while (uVar9 != 0x2e);
  if (pbVar17 != (byte *)0x0) {
    if (pbVar17 < pbVar5) {
      if (-0x41 < (char)pbVar14[(int)pbVar17]) {
        iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,pbVar14,pbVar17);
        if (iVar19 != 0) {
          return 1;
        }
        if ((char)pbVar14[(int)pbVar17] < -0x40) {
          puVar7 = &DAT_018a7480;
          pbVar18 = pbVar17;
          pbVar17 = pbVar5;
          goto LAB_01500f30;
        }
        goto LAB_015009d0;
      }
    }
    else if (pbVar17 == pbVar5) {
      iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,pbVar14,pbVar5);
      pbVar17 = pbVar5;
      goto LAB_015009c8;
    }
    pbVar18 = (byte *)0x0;
    puVar7 = &DAT_018a7470;
LAB_01500f30:
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(pbVar14,pbVar5,pbVar18,pbVar17,puVar7);
  }
  pbVar17 = (byte *)0x0;
  iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,pbVar14,0);
LAB_015009c8:
  if (iVar19 != 0) {
    return 1;
  }
LAB_015009d0:
  pbVar14 = pbVar14 + (int)pbVar17;
  pbVar5 = pbVar5 + -(int)pbVar17;
  goto LAB_0150078c;
LAB_01500a38:
  bVar1 = *pbVar23;
  if ((char)bVar1 < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(pbVar14,pbVar5,1,pbVar8 + 1,&DAT_018a74a0);
  }
  pbVar17 = pbVar8 + 2;
  if ((pbVar17 < pbVar5) && ((char)pbVar14[(int)pbVar17] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(pbVar14,pbVar5,pbVar17,pbVar5,&DAT_018a74b0);
  }
  if (pbVar8 == &DAT_00000001) {
    pcVar10 = &DAT_004144ea;
    if (bVar1 == 0x43) {
LAB_01500c3c:
      iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,pcVar10,1);
      pbVar14 = pbVar14 + (int)pbVar17;
      pbVar5 = pbVar5 + -(int)pbVar17;
      if (iVar19 != 0) {
        return 1;
      }
      goto LAB_0150078c;
    }
    if (bVar1 != 0x75) goto LAB_01500de8;
  }
  else {
    if (pbVar8 == &SUB_00000002) {
      pcVar10 = "@";
      if (((((*(short *)pbVar23 == 0x5053) || (pcVar10 = "*", *(short *)pbVar23 == 0x5042)) ||
           (pcVar10 = "&", *(short *)pbVar23 == 0x4652)) ||
          ((pcVar10 = "<", *(short *)pbVar23 == 0x544c ||
           (pcVar10 = ">", *(short *)pbVar23 == 0x5447)))) ||
         ((pcVar10 = "(", *(short *)pbVar23 == 0x504c ||
          (pcVar10 = &DAT_00418e07, *(short *)pbVar23 == 0x5052)))) goto LAB_01500c3c;
    }
    else if (pbVar8 == (byte *)0x0) goto LAB_01500de8;
    if (bVar1 != 0x75) goto LAB_01500de8;
    if ((char)pbVar14[2] < -0x40) {
      puVar7 = &DAT_018a74c0;
      goto LAB_01500fac;
    }
  }
  pbVar11 = pbVar8 + -1;
  pbVar20 = pbVar14 + 2;
  pbVar3 = pbVar20;
  do {
    bVar25 = true;
    if (pbVar3 == pbVar23 + (int)pbVar8) goto LAB_01500c24;
    pbVar4 = pbVar3 + 1;
    puVar15 = (undefined1 *)(uint)*pbVar3;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      if (puVar15 < (undefined1 *)0xe0) {
        puVar15 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
        pbVar4 = pbVar3 + 2;
      }
      else {
        uVar9 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (puVar15 < (undefined1 *)0xf0) {
          puVar15 = (undefined1 *)(uVar9 | ((uint)puVar15 & 0x1f) << 0xc);
          pbVar4 = pbVar3 + 3;
        }
        else {
          puVar15 = (undefined1 *)(pbVar3[3] & 0x3f | uVar9 << 6 | ((uint)puVar15 & 7) << 0x12);
          if (puVar15 == &DAT_00110000) goto LAB_01500c24;
          pbVar4 = pbVar3 + 4;
        }
      }
    }
    bVar26 = (undefined1 *)0xfffffff4 < puVar15 + -0x3a;
    bVar25 = puVar15 == (undefined1 *)0x2f;
    if (!bVar26 || bVar25) {
      bVar26 = (undefined1 *)0xfffffff8 < puVar15 + -0x67;
      bVar25 = puVar15 + -0x67 == (undefined1 *)0xfffffff9;
    }
    pbVar3 = pbVar4;
  } while (bVar26 && !bVar25);
  bVar25 = false;
LAB_01500c24:
  if (pbVar8 == &SUB_00000002) {
    uVar9 = (uint)*pbVar20;
    if (uVar9 == 0x2b || uVar9 == 0x2d) goto LAB_01500de8;
  }
  else {
    if (pbVar8 == &DAT_00000001) goto LAB_01500de8;
    uVar9 = (uint)*pbVar20;
  }
  uVar22 = 0;
  if (uVar9 == 0x2b) {
    pbVar20 = pbVar14 + 3;
    pbVar11 = pbVar8 + -2;
  }
  if (&DAT_00000008 < pbVar11) {
    do {
      if (0xfffffff < uVar22) goto LAB_01500de8;
      uVar13 = (uint)*pbVar20;
      uVar9 = uVar13 - 0x30;
      if (0x39 < uVar13) {
        uVar9 = (uVar13 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar9) goto LAB_01500de8;
      uVar22 = uVar9 | uVar22 << 4;
      pbVar20 = pbVar20 + 1;
      pbVar11 = pbVar11 + -1;
    } while (pbVar11 != (byte *)0x0);
  }
  else {
    if (pbVar11 == (byte *)0x0) goto LAB_01500d20;
    do {
      uVar13 = (uint)*pbVar20;
      uVar9 = uVar13 - 0x30;
      if (0x39 < uVar13) {
        uVar9 = (uVar13 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar9) goto LAB_01500de8;
      uVar22 = uVar9 | uVar22 << 4;
      pbVar20 = pbVar20 + 1;
      pbVar11 = pbVar11 + -1;
    } while (pbVar11 != (byte *)0x0);
  }
  uVar9 = (uVar22 ^ 0xd800) - 0x110000;
  if (uVar9 < 0xffef0800) goto LAB_01500de8;
LAB_01500d20:
  if (!bVar25) goto LAB_01500de8;
  if (uVar22 >= 0x20) {
    uVar9 = uVar22 - 0x7f;
  }
  local_40 = uVar22;
  if (uVar22 < 0x20 || uVar9 < 0x21) goto LAB_01500de8;
  iVar19 = FUN_00faaf34(&local_40,param_2);
  pbVar14 = pbVar14 + (int)pbVar17;
  pbVar5 = pbVar5 + -(int)pbVar17;
  if (iVar19 != 0) {
    return 1;
  }
  goto LAB_0150078c;
LAB_01500de8:
  iVar19 = (**(code **)(param_2[1] + 0xc))(*param_2,pbVar14,pbVar5);
  iVar24 = iVar24 + 1;
  if (iVar19 != 0) {
    return 1;
  }
  goto LAB_01500540;
LAB_01500fb8:
  local_25 = 1;
LAB_01500f64:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_25,&DAT_018a73b8,&DAT_018a7430);
}

