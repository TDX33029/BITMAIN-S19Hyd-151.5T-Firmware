// FUN_007b24f0 @ 007b24f0 size=2548 calls_out=11 calls_in=2
// strings: am1-s9 | stm32mp157c-ii1-am2 | am2-s17 | am3-bbb | am3-aml | stm32mp157c-ii2-bmm1

void FUN_007b24f0(uint *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  byte *pbVar16;
  undefined4 uVar17;
  undefined1 uVar18;
  uint uVar19;
  undefined *local_dc;
  uint local_b0;
  uint local_ac;
  uint local_a4;
  uint local_9c;
  uint local_98;
  int *local_8c;
  uint local_70;
  uint local_68;
  uint local_64;
  int *local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  int local_4c;
  uint local_44;
  int local_38;
  uint local_34;
  int iStack_30;
  uint uStack_2c;
  
  puVar8 = (undefined1 *)thunk_FUN_01be5118(1);
  if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,1);
  }
  *puVar8 = 0x2f;
  FUN_007b2164(&local_68,puVar8,1,&DAT_00567e98,0x10);
  piVar5 = local_60;
  uVar3 = local_64;
  if (local_68 != 0x80000001) {
    *param_1 = 0x80000000;
    param_1[1] = local_68;
    param_1[2] = local_64;
    param_1[3] = (uint)local_60;
    param_1[4] = local_5c;
    param_1[5] = local_58;
    goto LAB_007b27d4;
  }
  switch(local_5c) {
  case 6:
    iVar9 = thunk_FUN_01bed842(local_60,"am1-s9",6);
    if (iVar9 != 0) goto switchD_007b2560_caseD_8;
    uVar15 = 0;
    break;
  case 7:
    iVar9 = thunk_FUN_01bed842(local_60,"am2-s17",7);
    if (iVar9 == 0) {
      uVar15 = 1;
    }
    else {
      iVar9 = thunk_FUN_01bed842(piVar5,"am3-bbb",7);
      if (iVar9 == 0) {
        uVar15 = 2;
      }
      else {
        iVar9 = thunk_FUN_01bed842(piVar5,"am3-aml",7);
        if (iVar9 != 0) goto switchD_007b2560_caseD_8;
        uVar15 = 3;
      }
    }
    break;
  default:
switchD_007b2560_caseD_8:
    *param_1 = 0x80000000;
    param_1[1] = 0x80000000;
    goto LAB_007b27c8;
  case 9:
    iVar9 = thunk_FUN_01bed842(local_60,"simulator",9);
    if (iVar9 != 0) goto switchD_007b2560_caseD_8;
    uVar15 = 8;
    break;
  case 0xc:
    iVar9 = thunk_FUN_01bed842(local_60,"zynq-bm3-am2",0xc);
    if (iVar9 != 0) goto switchD_007b2560_caseD_8;
    uVar15 = 4;
    break;
  case 0xe:
    iVar9 = thunk_FUN_01bed842(local_60,"cvitek-bm1-am2",0xe);
    if (iVar9 != 0) goto switchD_007b2560_caseD_8;
    uVar15 = 5;
    break;
  case 0x13:
    iVar9 = thunk_FUN_01bed842(local_60,"stm32mp157c-ii1-am2",0x13);
    if (iVar9 != 0) goto switchD_007b2560_caseD_8;
    uVar15 = 6;
    break;
  case 0x14:
    iVar9 = thunk_FUN_01bed842(local_60,"stm32mp157c-ii2-bmm1",0x14);
    if (iVar9 != 0) goto switchD_007b2560_caseD_8;
    uVar15 = 7;
  }
  FUN_007b2164(&local_68,puVar8,1,"etc/bos_version",0xf);
  uVar7 = local_5c;
  piVar6 = local_60;
  uVar4 = local_64;
  if (local_68 == 0x80000001) {
    local_8c = (int *)&DAT_00000001;
    FUN_007b2164(&local_68,puVar8,1,"etc/bos_major",0xd);
    uVar17 = 0;
    if (local_68 == 0x80000000) {
      local_9c = 0;
      local_98 = 0;
    }
    else if (local_68 == 0x80000001) {
      local_98 = local_64;
      local_8c = local_60;
      local_9c = local_5c;
    }
    else {
      FUN_0134bd64(local_68,local_64);
      FUN_0069603c(&local_5c);
      local_9c = 0;
      local_98 = 0;
    }
    if ((int)uVar7 < 0) {
LAB_007b2820:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar17,uVar7);
    }
    local_ac = 0;
    if (uVar7 == 0) {
      local_a4 = 0;
      uVar10 = 1;
    }
    else {
      uVar17 = 1;
      uVar10 = FUN_01298504(uVar7,1);
      local_a4 = uVar7;
      if (uVar10 == 0) goto LAB_007b2820;
    }
    FUN_01bed4e2(uVar10,piVar6,uVar7);
    if ((int)local_9c < 0) {
LAB_007b2894:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(local_ac,local_9c);
    }
    piVar11 = (int *)&DAT_00000001;
    if (local_9c == 0) {
      local_b0 = 0;
    }
    else {
      local_ac = 1;
      piVar11 = (int *)FUN_01298504(local_9c,1);
      local_b0 = local_9c;
      if (piVar11 == (int *)0x0) goto LAB_007b2894;
    }
    FUN_01bed4e2(piVar11,local_8c,local_9c);
    if (uVar7 < 6) {
      uVar18 = 0;
      if (uVar7 == 5) {
        iVar9 = thunk_FUN_01bed842(&DAT_004ba541,uVar10,5);
        uVar18 = iVar9 == 0;
      }
    }
    else {
      FUN_01306b30(&local_68,uVar10,uVar7,&DAT_004ba541,5);
      if (local_68 == 1) {
        iVar9 = uStack_2c - 1;
        local_ac = local_44;
        if (local_44 == 0xffffffff) {
          uVar18 = 0;
          uVar12 = local_4c + iVar9;
          if (uVar12 < local_34) {
            uVar14 = uStack_2c;
            if (uStack_2c < local_58) {
              uVar14 = local_58;
            }
            local_dc = &DAT_01d2e36c;
LAB_007b2c48:
            uVar13 = *(byte *)(local_38 + uVar12) & 0x3f;
            uVar12 = (uint)local_60 >> uVar13 | local_5c << (0x20 - uVar13 & 0xff);
            if (-1 < (int)(uVar13 - 0x20)) {
              uVar12 = local_5c >> (uVar13 - 0x20 & 0xff);
            }
            if ((uVar12 & 1) == 0) {
              uVar12 = uStack_2c;
              goto LAB_007b2d08;
            }
            uVar12 = local_58;
            do {
              uVar13 = uVar12;
              if (uVar14 == uVar13) {
                uVar12 = local_58 - 1;
                goto LAB_007b2cd0;
              }
              if (local_34 <= local_4c + uVar13) {
                uVar12 = local_4c + local_58;
LAB_007b2ed8:
                local_dc = &DAT_01d2e38c;
                if (uVar12 < local_34) {
                  uVar12 = local_34;
                }
                goto LAB_007b2f20;
              }
              uVar12 = uVar13 + 1;
            } while (*(char *)(iStack_30 + uVar13) == *(char *)(local_38 + local_4c + uVar13));
            local_4c = (local_4c - local_58) + uVar13 + 1;
            goto LAB_007b2d0c;
          }
        }
        else {
          uVar12 = local_4c + iVar9;
          uVar18 = 0;
          if (uVar12 < local_34) {
            local_dc = &DAT_01d2e36c;
LAB_007b2998:
            uVar13 = *(byte *)(local_38 + uVar12) & 0x3f;
            uVar12 = (uint)local_60 >> uVar13 | local_5c << (0x20 - uVar13 & 0xff);
            if (-1 < (int)(uVar13 - 0x20)) {
              uVar12 = local_5c >> (uVar13 - 0x20 & 0xff);
            }
            if ((uVar12 & 1) == 0) {
              local_4c = local_4c + uStack_2c;
              local_ac = 0;
            }
            else {
              uVar12 = local_58;
              if (local_58 < local_ac) {
                uVar12 = local_ac;
              }
              uVar13 = uStack_2c;
              if (uStack_2c < uVar12) {
                uVar13 = uVar12;
              }
              uVar14 = uVar12;
              do {
                uVar19 = uVar14;
                if (uVar13 == uVar19) {
                  uVar12 = local_58;
                  goto LAB_007b2a6c;
                }
                if (local_34 <= local_4c + uVar19) {
                  uVar12 = uVar12 + local_4c;
                  goto LAB_007b2ed8;
                }
                uVar14 = uVar19 + 1;
              } while (*(char *)(iStack_30 + uVar19) == *(char *)(local_38 + local_4c + uVar19));
              local_4c = (local_4c - local_58) + uVar19 + 1;
              local_ac = 0;
            }
            goto LAB_007b2ab0;
          }
        }
      }
      else {
        uVar18 = 0;
        if (local_5c._2_1_ == '\0') {
          uVar13 = local_5c & 0xff;
          uVar12 = local_64;
          do {
            uVar18 = (undefined1)uVar13;
            if (uVar12 != 0) {
              if (uVar12 < local_34) {
                if (*(char *)(local_38 + uVar12) < -0x40) goto LAB_007b2f00;
              }
              else if (uVar12 != local_34) {
LAB_007b2f00:
                    /* WARNING: Subroutine does not return */
                FUN_012fb514();
              }
            }
            if (uVar12 == local_34) break;
            pbVar16 = (byte *)(local_38 + uVar12);
            uVar14 = (uint)*pbVar16;
            if (0x7fffffff < (uint)(int)(char)*pbVar16) {
              if (uVar14 < 0xe0) {
                uVar14 = pbVar16[1] & 0x3f | (uVar14 & 0x1f) << 6;
              }
              else {
                uVar19 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
                if (uVar14 < 0xf0) {
                  uVar14 = uVar19 | (uVar14 & 0x1f) << 0xc;
                }
                else {
                  uVar14 = pbVar16[3] & 0x3f | uVar19 << 6 | (uVar14 & 7) << 0x12;
                }
              }
            }
            if ((uVar13 & 1) != 0) goto LAB_007b2be8;
            iVar9 = 1;
            if (0x7f < uVar14) {
              iVar9 = 2;
            }
            uVar13 = 1;
            if ((0x7ff < uVar14) && (iVar9 = 4, uVar14 < 0x10000)) {
              iVar9 = 3;
            }
            uVar12 = iVar9 + uVar12;
          } while( true );
        }
      }
    }
    goto LAB_007b2d34;
  }
  *param_1 = 0x80000000;
  param_1[1] = local_68;
  param_1[2] = local_64;
  param_1[3] = (uint)local_60;
  param_1[4] = local_5c;
  param_1[5] = local_58;
LAB_007b27c8:
  FUN_0134bd64(uVar3,piVar5);
LAB_007b27d4:
  FUN_0134bd64(1,puVar8);
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    if (uStack_2c <= uVar12) {
      local_34 = uStack_2c;
      goto LAB_007b2f20;
    }
    uVar13 = uVar12 + local_4c;
    if (local_34 <= uVar13) goto LAB_007b2ee8;
    if (*(char *)(iStack_30 + uVar12) != *(char *)(local_38 + uVar13)) break;
LAB_007b2a6c:
    if (uVar12 <= local_ac) goto LAB_007b2be8;
  }
  local_4c = local_4c + local_50;
  local_ac = uStack_2c - local_50;
LAB_007b2ab0:
  uVar18 = 0;
  uVar12 = local_4c + iVar9;
  if (local_34 <= uVar12) goto LAB_007b2d34;
  goto LAB_007b2998;
  while( true ) {
    uVar13 = local_4c + uVar12;
    if (local_34 <= uVar13) goto LAB_007b2ee8;
    pcVar1 = (char *)(local_38 + local_4c + uVar12);
    pcVar2 = (char *)(iStack_30 + uVar12);
    uVar12 = uVar12 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_007b2cd0:
    if (uVar12 == 0xffffffff) {
      uVar18 = 1;
      goto LAB_007b2d34;
    }
    if (uStack_2c <= local_58 - 1) {
      local_34 = uStack_2c;
      goto LAB_007b2f20;
    }
  }
  uVar12 = local_50;
LAB_007b2d08:
  local_4c = local_4c + uVar12;
LAB_007b2d0c:
  uVar12 = local_4c + iVar9;
  uVar18 = 0;
  if (local_34 <= uVar12) goto LAB_007b2d34;
  goto LAB_007b2c48;
LAB_007b2be8:
  uVar18 = 1;
LAB_007b2d34:
  local_70 = CONCAT31(local_70._1_3_,uVar18) & 0xffffff01;
  FUN_0134bd64(local_98,local_8c);
  FUN_0134bd64(uVar4,piVar6);
  FUN_007b2164(&local_68,puVar8,1,"etc/bos_mode",0xc);
  if (local_68 == 0x80000001) {
    if (local_5c == 4) {
      if (*local_60 == 0x646e616e) {
        uVar18 = 1;
      }
      else {
        iVar9 = thunk_FUN_01bed842(local_60,"emmcj",4);
        if (iVar9 != 0) goto LAB_007b2e3c;
        uVar18 = 2;
      }
LAB_007b2e70:
      *param_1 = local_a4;
      param_1[1] = uVar10;
      param_1[2] = uVar7;
      param_1[3] = local_b0;
      param_1[4] = (uint)piVar11;
      param_1[5] = local_9c;
      param_1[6] = local_70;
      *(undefined1 *)((int)param_1 + 0x1d) = uVar15;
      *(undefined1 *)(param_1 + 7) = uVar18;
    }
    else {
      if ((local_5c == 2) && ((short)*local_60 == 0x6473)) {
        uVar18 = 0;
        goto LAB_007b2e70;
      }
LAB_007b2e3c:
      *param_1 = 0x80000000;
      param_1[1] = 0x80000000;
      FUN_0134bd64(local_a4,uVar10);
      FUN_0134bd64(local_b0,piVar11);
    }
    piVar11 = local_60;
  }
  else {
    param_1[4] = local_5c;
    param_1[1] = local_68;
    param_1[2] = local_64;
    param_1[3] = (uint)local_60;
    *param_1 = 0x80000000;
    param_1[5] = local_58;
    FUN_0134bd64(local_a4,uVar10);
    local_64 = local_b0;
  }
  FUN_0134bd64(local_64,piVar11);
  goto LAB_007b27c8;
LAB_007b2ee8:
  local_dc = &DAT_01d2e37c;
  uVar12 = uVar13;
LAB_007b2f20:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar12,local_34,local_dc);
}

