// FUN_015e6620 @ 015e6620 size=3416 calls_out=13 calls_in=1
// strings: 

undefined4 FUN_015e6620(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int **ppiVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  int **ppiVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  char *pcVar21;
  code *pcVar22;
  undefined4 uVar23;
  int *piVar24;
  int iVar25;
  int **ppiVar26;
  int *piVar27;
  int *piVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  int *local_fc;
  int **local_cc;
  int *local_c8;
  int **local_b8;
  int *local_b0;
  int *local_ac;
  int **local_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined *local_94;
  int **local_90;
  int *piStack_8c;
  int *piStack_88;
  int **local_80;
  int *local_7c;
  int **local_78;
  undefined4 local_74;
  int **local_70;
  int *local_6c;
  int *local_68;
  undefined1 *local_64;
  int *local_60;
  int local_5c;
  int *local_58;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  int local_30;
  int *local_2c;
  int local_28;
  
  uVar23 = *param_2;
  iVar25 = param_2[1];
  pcVar22 = *(code **)(iVar25 + 0x40);
  sVar7 = (*pcVar22)(uVar23);
  piVar18 = (int *)*param_1;
  sVar8 = (**(code **)(((undefined4 *)*piVar18)[1] + 0x40))(*(undefined4 *)*piVar18);
  if (sVar7 != sVar8) {
    return 1;
  }
  sVar7 = (**(code **)(iVar25 + 0x34))(uVar23);
  sVar8 = (**(code **)(((undefined4 *)*piVar18)[1] + 0x34))(*(undefined4 *)*piVar18);
  if (sVar7 != sVar8) {
    return 1;
  }
  iVar10 = (**(code **)(iVar25 + 0x24))(uVar23,*(undefined4 *)*piVar18,((undefined4 *)*piVar18)[1]);
  if (iVar10 != 0) {
    return 1;
  }
  if (3 < DAT_01d51b00) {
    uVar9 = (*pcVar22)(uVar23);
    local_40 = (int *)CONCAT22(local_40._2_2_,uVar9);
    (**(code **)(iVar25 + 0x30))(&local_b0,uVar23);
    (**(code **)(((undefined4 *)*piVar18)[1] + 0x30))(&local_38,*(undefined4 *)*piVar18);
    local_80 = (int **)param_1[1];
    local_64 = &LAB_00632348;
    local_6c = (int *)&LAB_00632348;
    local_78 = &local_40;
    local_74 = (code *)&LAB_015df5cc;
    local_7c = (int *)&LAB_018a13b8;
    local_94 = &DAT_01cfd7f8;
    local_98 = 0x17;
    local_9c = (int *)0x4b3d9f;
    local_a0 = (int *)0x17;
    local_a4 = (int **)0x4b3d9f;
    local_70 = &local_b0;
    local_68 = &local_38;
    FUN_015fb650(&DAT_005bbf45,&local_80,4,&local_a4);
    FUN_0134bd64(local_38,local_34);
    FUN_0134bd64(local_b0,local_ac);
  }
  uVar29 = (**(code **)(iVar25 + 0x68))(uVar23);
  sVar7 = (*pcVar22)(uVar23);
  local_7c = *(int **)param_1[1];
  local_78 = (int **)((undefined4 *)param_1[1])[1];
  local_60 = (int *)local_78;
  local_70 = local_78;
  local_40 = local_7c;
  local_3c = (int *)local_78;
  if (sVar7 == 1 || sVar7 == 0x1c) {
    local_64 = (undefined1 *)0x0;
    local_74 = (code *)0x0;
    local_5c = CONCAT22(local_5c._2_2_,1);
    local_68 = (int *)CONCAT31(local_68._1_3_,1);
    local_6c = (int *)&DAT_0000002e;
    local_80 = (int **)&DAT_0000002e;
    FUN_015e9424(&local_38,&local_80);
    if (local_30 != 0) {
      local_2c = local_34;
      local_a0 = (int *)&LAB_01963050;
      local_a4 = &local_2c;
      FUN_00664898(&local_80,&DAT_0057b261,&local_a4);
      ppiVar17 = local_78;
      piVar18 = local_7c;
      ppiVar6 = local_80;
      iVar25 = *local_34;
      piVar19 = (int *)local_34[1];
      local_b8 = local_80;
      piVar24 = piVar19;
      while( true ) {
        uVar30 = FUN_01307268(0x2d,iVar25,piVar24);
        piVar24 = (int *)(uVar30 >> 0x20);
        if ((uVar30 & 1) == 0) break;
        if ((piVar24 < piVar19) && (*(char *)(iVar25 + (int)piVar24) == '-')) {
          piVar28 = (int *)*local_34;
          piVar19 = (int *)((int)piVar24 + 1);
          piVar27 = (int *)local_34[1];
          pbVar11 = (byte *)((int)piVar28 + (int)piVar19);
          puVar14 = &DAT_01cfc758;
          if (piVar19 < piVar27) {
            if (-0x41 < (char)*pbVar11) goto LAB_015e6d84;
          }
          else if (piVar27 == piVar19) {
LAB_015e6d84:
            uVar13 = (int)piVar27 - (int)piVar19;
            if (uVar13 == 0) break;
            if (uVar13 == 1) {
              bVar12 = *pbVar11;
              if ((bVar12 == 0x2b) || (bVar12 == 0x2d)) break;
            }
            else {
              bVar12 = *pbVar11;
            }
            uVar15 = 0;
            if (bVar12 == 0x2b) {
              pbVar11 = pbVar11 + 1;
              uVar13 = uVar13 - 1;
            }
            if (8 < uVar13) goto LAB_015e6e60;
            goto joined_r0x015e6e00;
          }
          piVar24 = piVar27;
          goto LAB_015e6c7c;
        }
        if (piVar19 < piVar24) break;
      }
      goto LAB_015e68ac;
    }
    local_a0 = (int *)&LAB_018a13b8;
    local_a4 = &local_40;
    FUN_00664898(&local_80,&DAT_0057b261,&local_a4);
    local_90 = local_80;
    piStack_8c = local_7c;
    piStack_88 = (int *)local_78;
    goto LAB_015e6914;
  }
  local_64 = (undefined1 *)0x0;
  local_74 = (code *)0x0;
  local_5c = CONCAT22(local_5c._2_2_,1);
  local_68 = (int *)CONCAT31(local_68._1_3_,1);
  local_6c = (int *)&DAT_0000002e;
  local_80 = (int **)&DAT_0000002e;
  FUN_015e9424(&local_38,&local_80);
  if (local_30 != 0) {
    local_2c = local_34;
    local_a0 = (int *)&LAB_01963050;
    local_a4 = &local_2c;
    FUN_00664898(&local_80,&DAT_005a3c2a,&local_a4);
    ppiVar17 = local_78;
    piVar18 = local_7c;
    ppiVar6 = local_80;
    local_cc = local_80;
    FUN_01306b30(&local_80,*local_34,local_34[1]," (",2);
    if (local_80 == (int **)&DAT_00000001) {
      ppiVar26 = (int **)((int)local_60 - (int)local_44);
      if (ppiVar26 < local_4c) {
        local_fc = local_44;
        if (local_44 < local_6c) {
          local_fc = local_6c;
        }
        local_c8 = local_58;
LAB_015e6a98:
        uVar15 = *(byte *)((int)local_50 + (int)ppiVar26) & 0x3f;
        uVar13 = (uint)local_78 >> uVar15 | (int)local_74 << (0x20 - uVar15 & 0xff);
        if (-1 < (int)(uVar15 - 0x20)) {
          uVar13 = (uint)local_74 >> (uVar15 - 0x20 & 0xff);
        }
        if ((uVar13 & 1) != 0) {
          piVar24 = local_6c;
          if (local_c8 < local_6c) {
            piVar24 = local_c8;
          }
          if (local_5c == -1) {
            piVar24 = local_6c;
          }
          piVar19 = piVar24;
          do {
            if (piVar19 == (int *)0x0) {
              piVar24 = local_c8;
              if (local_5c == -1) {
                piVar24 = local_44;
              }
              if (piVar24 <= local_6c) {
                piVar24 = local_6c;
              }
              iVar10 = (int)piVar24 - (int)local_6c;
              piVar24 = (int *)((int)local_6c + (int)ppiVar26);
              iVar25 = (int)local_fc - (int)local_6c;
              pcVar21 = (char *)(local_48 + (int)local_6c);
              goto LAB_015e6b94;
            }
            piVar27 = (int *)((int)piVar19 + -1);
            if (local_44 <= (int *)((int)piVar24 + -1)) {
              puVar14 = &DAT_01d272a4;
              local_4c = local_44;
              local_fc = piVar27;
              goto LAB_015e734c;
            }
            if (local_4c <= (undefined1 *)((int)ppiVar26 + -1) + (int)piVar19) {
              puVar14 = &DAT_01d272b4;
              local_fc = (int *)((undefined1 *)((int)ppiVar26 + -1) + (int)piVar19);
              goto LAB_015e732c;
            }
            pcVar21 = (undefined1 *)((int)local_50 + -1 + (int)ppiVar26) + (int)piVar19;
            pcVar1 = (char *)(local_48 + -1 + (int)piVar19);
            piVar19 = piVar27;
          } while (*pcVar1 == *pcVar21);
          local_60 = (int *)((undefined1 *)((int)piVar27 + (int)local_60) + -(int)local_6c);
          piVar24 = local_44;
          goto LAB_015e6be0;
        }
        local_60 = (int *)ppiVar26;
        if (local_5c != -1) {
          local_c8 = local_44;
        }
        goto LAB_015e6bec;
      }
    }
    else if (local_74._2_1_ == '\0') {
      if (local_78 != (int **)0x0) {
        local_b8 = (int **)local_4c;
        puVar14 = &DAT_01d272d4;
        ppiVar26 = local_78;
        bVar12 = local_74._1_1_;
LAB_015e6cb8:
        pcVar21 = (char *)((int)local_50 + (int)ppiVar26);
        if (ppiVar26 < local_4c) {
          if (*pcVar21 < -0x40) goto LAB_015e7360;
LAB_015e6cd8:
          uVar13 = (uint)pcVar21[-1];
          if (0x7fffffff < uVar13) {
            bVar3 = pcVar21[-2];
            if ((char)bVar3 < -0x40) {
              bVar4 = pcVar21[-3];
              if ((char)bVar4 < -0x40) {
                uVar15 = (int)(char)bVar4 & 0x3fU | ((byte)pcVar21[-4] & 7) << 6;
              }
              else {
                uVar15 = bVar4 & 0xf;
              }
              uVar15 = (int)(char)bVar3 & 0x3fU | uVar15 << 6;
            }
            else {
              uVar15 = bVar3 & 0x1f;
            }
            uVar13 = uVar13 & 0x3f | uVar15 << 6;
          }
          if ((bVar12 & 1) == 0) goto code_r0x015e6d4c;
          local_c8 = (int *)*local_34;
          local_b8 = (int **)local_34[1];
          bVar5 = ppiVar26 == (int **)0x0;
LAB_015e6ed0:
          piVar24 = (int *)ppiVar26;
          if (ppiVar26 < local_b8) {
            if (*(char *)((int)local_c8 + (int)ppiVar26) < -0x40) goto LAB_015e6ee8;
          }
          else if (ppiVar26 != local_b8) {
LAB_015e6ee8:
            puVar14 = &DAT_01cfc708;
            piVar19 = (int *)local_b8;
            goto LAB_015e7368;
          }
          goto LAB_015e6f08;
        }
        if (ppiVar26 == (int **)local_4c) goto LAB_015e6cd8;
LAB_015e7360:
        local_c8 = local_50;
        piVar24 = (int *)ppiVar26;
        goto LAB_015e7364;
      }
      if (((uint)local_74 & 0x100) != 0) {
LAB_015e6eb4:
        local_c8 = (int *)*local_34;
        local_b8 = (int **)local_34[1];
        bVar5 = true;
        piVar24 = (int *)0x0;
LAB_015e6f08:
        pcVar21 = (char *)((int)local_c8 + (int)piVar24);
        uVar15 = (int)local_b8 - (int)piVar24;
        uVar13 = 0;
        do {
          uVar16 = uVar15 - uVar13;
          if (uVar16 < 8) {
            uVar20 = 0;
            if (uVar16 == 0) {
              uVar30 = 0;
            }
            else {
              do {
                if ((pcVar21 + uVar13)[uVar20] == ')') {
                  uVar30 = CONCAT44(uVar20,1);
                  goto LAB_015e6f7c;
                }
                uVar20 = uVar20 + 1;
              } while (uVar16 != uVar20);
              uVar30 = (ulonglong)uVar16 << 0x20;
            }
          }
          else {
            uVar30 = FUN_01307168(0x29,pcVar21 + uVar13);
          }
LAB_015e6f7c:
          if ((uVar30 & 1) == 0) break;
          uVar13 = (int)(uVar30 >> 0x20) + uVar13;
          if ((uVar13 < uVar15) && (pcVar21[uVar13] == ')')) {
            piVar19 = (int *)(uVar13 + (int)piVar24);
            if (piVar19 != (int *)((int)local_b8 + -1)) break;
            ppiVar26 = (int **)((int)piVar24 + 2);
            puVar14 = &DAT_01cfc718;
            if (piVar19 < ppiVar26) goto LAB_015e7148;
            if (ppiVar26 != (int **)0x0) {
              if (ppiVar26 < local_b8) {
                if (-0x41 < *(char *)((int)local_c8 + (int)ppiVar26)) goto LAB_015e7120;
              }
              else if (ppiVar26 == local_b8) goto LAB_015e7120;
              goto LAB_015e7148;
            }
LAB_015e7120:
            if (piVar19 != (int *)0x0) {
              if (piVar19 < local_b8) {
                if (*(char *)((int)local_c8 + (int)piVar19) < -0x40) goto LAB_015e7148;
              }
              else if ((int **)piVar19 != local_b8) {
LAB_015e7148:
                goto LAB_015e7368;
              }
            }
            uVar15 = uVar13 - 2;
            if (uVar15 == 0) break;
            pbVar11 = (byte *)((int)local_c8 + (int)ppiVar26);
            if (uVar13 == 3) {
              bVar12 = *pbVar11;
              if ((bVar12 == 0x2b) || (bVar12 == 0x2d)) break;
            }
            else {
              bVar12 = *pbVar11;
            }
            if (bVar12 == 0x2b) {
              pbVar11 = pbVar11 + 1;
              uVar15 = uVar13 - 3;
            }
            if (uVar15 < 9) {
              uVar13 = 0;
              goto joined_r0x015e71a0;
            }
            uVar13 = 0;
            goto LAB_015e7204;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 <= uVar15);
      }
    }
    goto LAB_015e6fac;
  }
  local_a0 = (int *)&LAB_018a13b8;
  local_a4 = &local_40;
  FUN_00664898(&local_80,&DAT_005a3c2a,&local_a4);
  local_90 = local_80;
  piStack_8c = local_7c;
  piStack_88 = (int *)local_78;
  goto LAB_015e6fe8;
joined_r0x015e6e00:
  if (uVar13 == 0) goto LAB_015e6e28;
  bVar12 = *pbVar11;
  if (9 < bVar12 - 0x30) goto LAB_015e68ac;
  pbVar11 = pbVar11 + 1;
  uVar13 = uVar13 - 1;
  uVar15 = (bVar12 - 0x30) + uVar15 * 10;
  goto joined_r0x015e6e00;
  while( true ) {
    uVar20 = *pbVar11 - 0x30;
    uVar15 = uVar20 + uVar16;
    if (9 < uVar20) break;
    uVar13 = uVar13 - 1;
    pbVar11 = pbVar11 + 1;
    if (CARRY4(uVar20,uVar16)) break;
LAB_015e6e60:
    if (uVar13 == 0) goto LAB_015e6e28;
    uVar16 = (uint)((ulonglong)uVar15 * 10);
    if ((int)((ulonglong)uVar15 * 10 >> 0x20) != 0) break;
  }
LAB_015e68ac:
  *local_34 = (int)piVar18;
  local_34[1] = (int)ppiVar17;
  FUN_015f4958(&local_90,local_34,local_30,".",1);
  FUN_0134bd64(local_b8,piVar18);
LAB_015e6914:
  FUN_0134aee0(local_38,local_34,4,8);
  goto LAB_015e6ffc;
LAB_015e6e28:
  if (piVar24 != (int *)0x0) {
    if (piVar24 < piVar27) {
      if (*(char *)((int)piVar28 + (int)piVar24) < -0x40) goto LAB_015e6e48;
    }
    else if (piVar24 != piVar27) {
LAB_015e6e48:
      piVar19 = (int *)0x0;
      puVar14 = &DAT_01cfc768;
LAB_015e6c7c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(piVar28,piVar27,piVar19,piVar24,puVar14);
    }
  }
  local_7c = (int *)&LAB_018a13b8;
  local_80 = &local_b0;
  local_28 = uVar15 + 1;
  local_74 = FUN_012fd02c;
  local_78 = (int **)&local_28;
  local_b0 = piVar28;
  local_ac = piVar24;
  FUN_00664898(&local_a4,&DAT_005a02f4,&local_80);
  ppiVar17 = (int **)local_9c;
  piVar24 = local_a0;
  local_b8 = local_a4;
  FUN_0134bd64(ppiVar6,piVar18);
  piVar18 = piVar24;
  goto LAB_015e68ac;
LAB_015e6b94:
  do {
    if (iVar10 == 0) {
      if (local_5c != -1) {
        local_58 = local_44;
      }
      local_c8 = (int *)*local_34;
      local_b8 = (int **)local_34[1];
      bVar5 = ppiVar26 == (int **)0x0;
      piVar24 = (int *)ppiVar26;
      local_60 = (int *)ppiVar26;
      if (ppiVar26 != (int **)0x0) goto LAB_015e6ed0;
      goto LAB_015e6f08;
    }
    if (iVar25 == 0) {
      puVar14 = &DAT_01d27284;
      local_4c = local_44;
      goto LAB_015e734c;
    }
    if (local_4c <= piVar24) {
      puVar14 = &DAT_01d27294;
      local_fc = (int *)((int)local_6c + (int)ppiVar26);
      if ((int *)((int)local_6c + (int)ppiVar26) < local_4c) {
        local_fc = local_4c;
      }
LAB_015e732c:
LAB_015e734c:
      local_58 = local_c8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_fc,local_4c,puVar14);
    }
    iVar10 = iVar10 + -1;
    cVar2 = *pcVar21;
    iVar25 = iVar25 + -1;
    pcVar1 = (char *)((int)local_50 + (int)piVar24);
    piVar24 = (int *)((int)piVar24 + 1);
    pcVar21 = pcVar21 + 1;
  } while (cVar2 == *pcVar1);
  local_60 = (int *)((int)local_60 - (int)local_68);
  piVar24 = local_68;
LAB_015e6be0:
  if (local_5c != -1) {
    local_c8 = piVar24;
  }
LAB_015e6bec:
  ppiVar26 = (int **)((int)local_60 - (int)local_44);
  if (local_4c <= ppiVar26) goto code_r0x015e6bf8;
  goto LAB_015e6a98;
code_r0x015e6bf8:
  local_58 = local_c8;
  goto LAB_015e6fac;
code_r0x015e6d4c:
  iVar25 = -1;
  if (0x7f < uVar13) {
    iVar25 = -2;
  }
  if ((0x7ff < uVar13) && (iVar25 = -4, uVar13 < 0x10000)) {
    iVar25 = -3;
  }
  ppiVar26 = (int **)(iVar25 + (int)ppiVar26);
  bVar12 = 1;
  if (ppiVar26 == (int **)0x0) goto LAB_015e6eb4;
  goto LAB_015e6cb8;
joined_r0x015e71a0:
  if (uVar15 == 0) goto LAB_015e71c8;
  bVar12 = *pbVar11;
  if (9 < bVar12 - 0x30) goto LAB_015e6fac;
  pbVar11 = pbVar11 + 1;
  uVar15 = uVar15 - 1;
  uVar13 = (bVar12 - 0x30) + uVar13 * 10;
  goto joined_r0x015e71a0;
LAB_015e71c8:
  if (!bVar5) {
    if (piVar24 < local_b8) {
      if (*pcVar21 < -0x40) goto LAB_015e71ec;
    }
    else if (local_b8 != (int **)piVar24) {
LAB_015e71ec:
      puVar14 = &DAT_01cfc728;
LAB_015e7364:
      ppiVar26 = (int **)0x0;
      piVar19 = piVar24;
LAB_015e7368:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(local_c8,local_b8,ppiVar26,piVar19,puVar14);
    }
  }
  local_28 = uVar13 + 1;
  local_7c = (int *)&LAB_018a13b8;
  local_80 = &local_b0;
  local_78 = (int **)&local_28;
  local_74 = FUN_012fd02c;
  local_b0 = local_c8;
  local_ac = piVar24;
  FUN_00664898(&local_a4,&DAT_0058ac1e,&local_80);
  ppiVar17 = (int **)local_9c;
  piVar24 = local_a0;
  local_cc = local_a4;
  FUN_0134bd64(ppiVar6,piVar18);
  goto LAB_015e6fb4;
  while( true ) {
    uVar20 = *pbVar11 - 0x30;
    uVar13 = uVar20 + uVar16;
    if (9 < uVar20) break;
    uVar15 = uVar15 - 1;
    pbVar11 = pbVar11 + 1;
    if (CARRY4(uVar20,uVar16)) break;
LAB_015e7204:
    if (uVar15 == 0) goto LAB_015e71c8;
    uVar16 = (uint)((ulonglong)uVar13 * 10);
    if ((int)((ulonglong)uVar13 * 10 >> 0x20) != 0) break;
  }
LAB_015e6fac:
  piVar24 = piVar18;
LAB_015e6fb4:
  *local_34 = (int)piVar24;
  local_34[1] = (int)ppiVar17;
  FUN_015f4958(&local_90,local_34,local_30,".",1);
  FUN_0134bd64(local_cc,piVar24);
LAB_015e6fe8:
  FUN_0134aee0(local_38,local_34,4,8);
LAB_015e6ffc:
  uVar23 = (**(code **)((int)((ulonglong)uVar29 >> 0x20) + 0x14))((int)uVar29);
  FUN_015e615c(uVar23,&local_90);
  piVar18 = (int *)param_1[2];
  iVar25 = piVar18[2];
  if (iVar25 == *piVar18) {
    FUN_015f5ab8(piVar18);
  }
  *(undefined8 *)(piVar18[1] + iVar25 * 8) = uVar29;
  piVar18[2] = iVar25 + 1;
  return 0;
}

