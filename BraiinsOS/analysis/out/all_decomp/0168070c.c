// FUN_0168070c @ 0168070c size=3516 calls_out=8 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_0168070c(uint *param_1,byte *param_2,uint param_3,char param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  undefined2 uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  byte bVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  code *local_2c;
  undefined1 uStack_25;
  
  if (param_4 == '\x03') {
    if (param_3 != 0) {
      bVar20 = true;
      iVar18 = 0;
      uVar5 = 2;
      iVar11 = 0;
      bVar17 = 0;
      pbVar15 = param_2;
      do {
        uVar12 = (uint)*pbVar15;
        pbVar7 = pbVar15 + 1;
        if ((char)*pbVar15 < '\0') {
          if (uVar12 < 0xe0) {
            uVar12 = pbVar15[1] & 0x3f | (uVar12 & 0x1f) << 6;
            pbVar7 = pbVar15 + 2;
            goto joined_r0x01680870;
          }
          uVar13 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
          if (uVar12 < 0xf0) {
            uVar12 = uVar13 | (uVar12 & 0x1f) << 0xc;
            pbVar7 = pbVar15 + 3;
            goto joined_r0x01680870;
          }
          pbVar7 = pbVar15 + 3;
          pbVar15 = pbVar15 + 4;
          uVar12 = *pbVar7 & 0x3f | uVar13 << 6 | (uVar12 & 7) << 0x12;
          if (!bVar20) goto LAB_01680758;
LAB_01680788:
          if (uVar12 == 0x27) {
            iVar11 = iVar11 + 1;
            bVar20 = false;
            if (iVar11 < 3) {
              bVar20 = true;
            }
LAB_016807a0:
            bVar20 = (bool)((0x1f < uVar12 && uVar12 != 0x7f) & bVar20);
          }
          else {
            bVar20 = true;
            if (iVar18 < iVar11) {
              iVar18 = iVar11;
            }
            iVar11 = 0;
            if (uVar12 < 0x22) {
              if (uVar12 != 9) {
                if (uVar12 != 10) goto LAB_016807a0;
                uVar5 = 0;
              }
            }
            else {
              if (uVar12 != 0x22 && uVar12 != 0x5c) goto LAB_016807a0;
              bVar17 = 1;
            }
          }
        }
        else {
joined_r0x01680870:
          pbVar15 = pbVar7;
          if (bVar20) goto LAB_01680788;
LAB_01680758:
          bVar20 = false;
          if (uVar12 == 10) {
            uVar5 = 0;
          }
        }
      } while (pbVar15 != param_2 + param_3);
      uVar12 = uVar5;
      if (((0 < iVar11) && ((param_2 + param_3)[-1] == 0x27)) || (!(bool)(bVar20 & bVar17))) {
        bVar20 = false;
      }
      else {
        if (iVar18 < iVar11) {
          iVar18 = iVar11;
        }
        if (0 < iVar18) {
          uVar12 = 1;
        }
        bVar20 = true;
        if (uVar5 != 2) {
          uVar12 = uVar5;
        }
      }
      goto joined_r0x016813a8;
    }
LAB_0168090c:
    uVar12 = 2;
LAB_01680924:
    local_3c = 1;
    local_40 = 0;
    uVar13 = 1;
    if (uVar12 == 0) {
      uVar13 = 4;
    }
    bVar20 = uVar12 == 0;
LAB_01680940:
    local_38 = 0;
    FUN_0166e728(&local_40,0,uVar13,1,1);
LAB_01680964:
    uVar5 = local_38;
    puVar9 = &DAT_00567768;
    if (!bVar20) {
      puVar9 = &DAT_004144ec;
    }
    FUN_016dd1aa(local_3c + local_38,puVar9,uVar13);
    local_38 = uVar5 + uVar13;
    if (param_3 != 0) {
      pbVar15 = param_2 + param_3;
      do {
        uVar13 = local_38;
        uVar5 = (uint)*param_2;
        pbVar7 = param_2 + 1;
        if (-1 < (char)*param_2) {
joined_r0x01680ac4:
          param_2 = pbVar7;
          uVar14 = uVar5 - 8;
          if (uVar14 < 0x1b) goto LAB_016809c8;
LAB_01680ac8:
          if (uVar5 != 0x5c) goto switchD_016809d0_caseD_1680af4;
          if (local_40 - local_38 < 2) {
            FUN_0166e728(&local_40,local_38,2,1,1);
          }
          puVar6 = (undefined2 *)(local_3c + local_38);
          uVar8 = 0x5c5c;
          goto LAB_01680c0c;
        }
        if (uVar5 < 0xe0) {
          uVar5 = param_2[1] & 0x3f | (uVar5 & 0x1f) << 6;
          pbVar7 = param_2 + 2;
          goto joined_r0x01680ac4;
        }
        uVar14 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (0xef < uVar5) {
          uVar5 = param_2[3] & 0x3f | uVar14 << 6 | (uVar5 & 7) << 0x12;
          pbVar7 = param_2 + 4;
          goto joined_r0x01680ac4;
        }
        uVar5 = uVar14 | (uVar5 & 0x1f) << 0xc;
        param_2 = param_2 + 3;
        uVar14 = uVar5 - 8;
        if (0x1a < uVar14) goto LAB_01680ac8;
LAB_016809c8:
        switch((int)&switchD_016809d0::switchdataD_016809d4 +
               (&switchD_016809d0::switchdataD_016809d4)[uVar14] & 0xfffffffe) {
        case 0x1680a40:
          if (local_40 - local_38 < 2) {
            FUN_0166e728(&local_40,local_38,2,1,1);
          }
          *(undefined2 *)(local_3c + local_38) = 0x625c;
          goto LAB_01680c10;
        default:
switchD_016809d0_caseD_1680af4:
          if ((uVar5 < 0x20) || (uVar5 == 0x7f)) {
            local_2c = FUN_00face84;
            local_30 = &local_34;
            local_34 = uVar5;
            iVar18 = FUN_00fa948c(&local_40,&DAT_018adb40,&DAT_004144f0,&local_30);
            if (iVar18 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_25,&DAT_018adaf0,&DAT_018adb58);
            }
          }
          else {
            uVar14 = 1;
            if (0x7f < uVar5) {
              uVar14 = 2;
            }
            if ((0x7ff < uVar5) && (uVar14 = 4, uVar5 < 0x10000)) {
              uVar14 = 3;
            }
            if (local_40 - local_38 < uVar14) {
              FUN_0166e728(&local_40,local_38,uVar14,1,1);
              pbVar7 = (byte *)(local_3c + local_38);
            }
            else {
              pbVar7 = (byte *)(local_3c + local_38);
            }
            if (uVar5 < 0x80) {
              *pbVar7 = (byte)uVar5;
              local_38 = uVar14 + uVar13;
            }
            else {
              bVar17 = (byte)uVar5 & 0x3f | 0x80;
              bVar2 = (byte)(uVar5 >> 6);
              if (uVar5 < 0x800) {
                pbVar7[1] = bVar17;
                *pbVar7 = bVar2 | 0xc0;
              }
              else {
                bVar2 = bVar2 & 0x3f | 0x80;
                bVar3 = (byte)(uVar5 >> 0xc);
                if (uVar5 >> 0x10 == 0) {
                  pbVar7[1] = bVar2;
                  pbVar7[2] = bVar17;
                  *pbVar7 = bVar3 | 0xe0;
                }
                else {
                  pbVar7[3] = bVar17;
                  pbVar7[2] = bVar2;
                  pbVar7[1] = bVar3 & 0x3f | 0x80;
                  *pbVar7 = (byte)(uVar5 >> 0x12) | 0xf0;
                }
              }
              local_38 = uVar14 + uVar13;
            }
          }
          goto LAB_01680c1c;
        case 0x1680b4c:
          if (uVar12 != 0) {
            if (uVar12 != 2) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00419463,0x28,&DAT_018adb30);
            }
            if (local_40 - local_38 < 2) {
              FUN_0166e728(&local_40,local_38,2,1,1);
            }
            puVar6 = (undefined2 *)(local_3c + local_38);
            uVar8 = 0x6e5c;
            break;
          }
          if (local_40 == local_38) {
            FUN_0166e728(&local_40,local_38,1,1,1);
          }
          *(undefined1 *)(local_3c + local_38) = 10;
          local_38 = uVar13 + 1;
          goto LAB_01680c1c;
        case 0x1680b80:
          if (local_40 - local_38 < 2) {
            FUN_0166e728(&local_40,local_38,2,1,1);
          }
          puVar6 = (undefined2 *)(local_3c + local_38);
          uVar8 = 0x225c;
          break;
        case 0x1680ba4:
          if (local_40 - local_38 < 2) {
            FUN_0166e728(&local_40,local_38,2,1,1);
          }
          puVar6 = (undefined2 *)(local_3c + local_38);
          uVar8 = 0x665c;
          break;
        case 0x1680bc8:
          if (local_40 - local_38 < 2) {
            FUN_0166e728(&local_40,local_38,2,1,1);
          }
          puVar6 = (undefined2 *)(local_3c + local_38);
          uVar8 = 0x745c;
          break;
        case 0x1680bec:
          if (local_40 - local_38 < 2) {
            FUN_0166e728(&local_40,local_38,2,1,1);
          }
          puVar6 = (undefined2 *)(local_3c + local_38);
          uVar8 = 0x725c;
        }
LAB_01680c0c:
        *puVar6 = uVar8;
LAB_01680c10:
        local_38 = local_38 + 2;
LAB_01680c1c:
      } while (param_2 != pbVar15);
    }
    uVar12 = 1;
    if (bVar20) {
      uVar12 = 3;
    }
    if (local_40 - local_38 < uVar12) {
      FUN_0166e728(&local_40,local_38,uVar12,1,1);
    }
    puVar9 = &DAT_004144ec;
    if (bVar20) {
      puVar9 = &DAT_004144ed;
    }
    FUN_016dd1aa(local_3c + local_38,puVar9,uVar12);
    local_38 = local_38 + uVar12;
    uVar13 = local_3c;
  }
  else {
    if (param_3 < 8) {
      if (param_3 == 0) goto LAB_0168090c;
      bVar17 = *param_2;
      bVar20 = bVar17 == 0x22;
      if (!(bVar17 == 0x22 || param_3 == 1)) {
        bVar20 = param_2[1] == 0x22;
        if (((param_2[1] != 0x22 && param_3 != 2) &&
            (bVar20 = param_2[2] == 0x22, param_2[2] != 0x22 && param_3 != 3)) &&
           ((bVar20 = param_2[3] == 0x22, param_2[3] != 0x22 && param_3 != 4 &&
            ((bVar20 = param_2[4] == 0x22, param_2[4] != 0x22 && param_3 != 5 &&
             (bVar20 = param_2[5] == 0x22, param_2[5] != 0x22 && param_3 != 6)))))) {
          bVar20 = param_2[6] == 0x22;
        }
        if (*param_2 == 0x5c) goto LAB_01681298;
LAB_01681288:
        if ((param_3 != 1) &&
           ((param_2[1] == 0x5c ||
            ((param_3 != 2 &&
             ((param_2[2] == 0x5c ||
              ((param_3 != 3 &&
               ((param_2[3] == 0x5c ||
                ((param_3 != 4 &&
                 ((param_2[4] == 0x5c ||
                  ((param_3 != 5 &&
                   ((param_2[5] == 0x5c || ((param_3 != 6 && (param_2[6] == 0x5c))))))))))))))))))))
           )) goto LAB_01681298;
        goto LAB_01681290;
      }
      if (bVar17 != 0x5c) goto LAB_01681288;
    }
    else {
      pbVar15 = (byte *)((uint)(param_2 + 3) & 0xfffffffc);
      uVar12 = (int)pbVar15 - (int)param_2;
      if (uVar12 == 0) {
        uVar5 = 0;
LAB_01680e94:
        do {
          uVar14 = *(uint *)(param_2 + uVar5);
          uVar13 = *(uint *)((int)(param_2 + uVar5) + 4) ^ 0x22222222;
          if (((0x1010100 - (uVar14 ^ 0x22222222) | uVar14) & 0x80808080 &
              (0x1010100 - uVar13 | uVar13)) != 0x80808080) break;
          uVar5 = uVar5 + 8;
        } while (uVar5 <= param_3 - 8);
      }
      else {
        iVar18 = (int)param_2 - (int)pbVar15;
        pbVar7 = param_2;
        do {
          if (*pbVar7 == 0x22) {
            bVar20 = true;
            goto joined_r0x016811a4;
          }
          bVar20 = iVar18 != -1;
          iVar18 = iVar18 + 1;
          pbVar7 = pbVar7 + 1;
        } while (bVar20);
        uVar5 = uVar12;
        if (uVar12 <= param_3 - 8) goto LAB_01680e94;
      }
      bVar20 = false;
      if (param_3 != uVar5) {
        iVar18 = ~uVar5 + param_3;
        pbVar7 = param_2 + uVar5;
        do {
          bVar20 = *pbVar7 == 0x22;
          if (*pbVar7 == 0x22) break;
          bVar19 = iVar18 != 0;
          iVar18 = iVar18 + -1;
          pbVar7 = pbVar7 + 1;
        } while (bVar19);
      }
joined_r0x016811a4:
      if (pbVar15 == param_2) {
        uVar12 = 0;
LAB_01680fdc:
        do {
          uVar13 = *(uint *)(param_2 + uVar12);
          uVar5 = *(uint *)((int)(param_2 + uVar12) + 4) ^ 0x5c5c5c5c;
          if (((0x1010100 - (uVar13 ^ 0x5c5c5c5c) | uVar13) & 0x80808080 &
              (0x1010100 - uVar5 | uVar5)) != 0x80808080) break;
          uVar12 = uVar12 + 8;
        } while (uVar12 <= param_3 - 8);
      }
      else {
        iVar18 = (int)param_2 - (int)pbVar15;
        pbVar15 = param_2;
        do {
          if (*pbVar15 == 0x5c) goto LAB_01681298;
          bVar19 = iVar18 != -1;
          iVar18 = iVar18 + 1;
          pbVar15 = pbVar15 + 1;
        } while (bVar19);
        if (uVar12 <= param_3 - 8) goto LAB_01680fdc;
      }
      iVar18 = param_3 - uVar12;
      if (iVar18 != 0) {
        pbVar15 = param_2 + uVar12;
        do {
          if (*pbVar15 == 0x5c) goto LAB_01681298;
          iVar18 = iVar18 + -1;
          pbVar15 = pbVar15 + 1;
        } while (iVar18 != 0);
      }
LAB_01681290:
      if (!bVar20) {
        bVar20 = false;
LAB_016813b8:
        uVar12 = 2;
        goto joined_r0x016813a8;
      }
    }
LAB_01681298:
    bVar20 = true;
    pbVar15 = param_2;
    do {
      if (pbVar15 == param_2 + param_3) goto LAB_016813b8;
      pbVar7 = pbVar15 + 1;
      puVar10 = (undefined1 *)(uint)*pbVar15;
      puVar1 = puVar10;
      if ((char)*pbVar15 < '\0') {
        if (puVar10 < (undefined1 *)0xe0) {
          puVar1 = (undefined1 *)(((uint)puVar10 & 0x1f) << 6);
          puVar10 = (undefined1 *)(pbVar15[1] & 0x3f | (uint)puVar1);
          pbVar7 = pbVar15 + 2;
          goto joined_r0x01681374;
        }
        pbVar7 = pbVar15 + 2;
        uVar12 = (pbVar15[1] & 0x3f) << 6;
        uVar5 = *pbVar7 & 0x3f | uVar12;
        if (puVar10 < (undefined1 *)0xf0) {
          uVar13 = ((uint)puVar10 & 0x1f) << 0xc;
          puVar10 = (undefined1 *)(uVar5 | uVar13);
          pbVar15 = pbVar15 + 3;
          uVar13 = uVar12 & 0xffffff80 | uVar13;
        }
        else {
          uVar13 = ((uint)puVar10 & 7) << 0x12;
          puVar10 = (undefined1 *)(pbVar15[3] & 0x3f | uVar5 << 6 | uVar13);
          if (puVar10 == &DAT_00110000) goto LAB_016813b8;
          pbVar15 = pbVar15 + 4;
          uVar13 = (*pbVar7 & 0x3e | uVar12) << 6 | uVar13;
        }
      }
      else {
joined_r0x01681374:
        uVar13 = (uint)puVar1 & 0xffffff80;
        pbVar15 = pbVar7;
      }
    } while ((((uVar13 == 0x80) || (puVar10 == (undefined1 *)0x9)) ||
             ((undefined1 *)0xfffffff7 < puVar10 + -0x27 && puVar10 != (undefined1 *)0x1f)) ||
            ((undefined1 *)0xffffffa7 < puVar10 + -0x7f && puVar10 != (undefined1 *)0x27));
    bVar20 = false;
    uVar12 = 2;
joined_r0x016813a8:
    if ((int)(param_3 * 2) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,param_3 << 1);
    }
    uVar5 = param_3 * 2;
    if (uVar5 == 0) {
      local_3c = 1;
      local_40 = 0;
      if (!bVar20) goto LAB_01680924;
    }
    else {
      local_3c = thunk_FUN_016d4a50(uVar5);
      if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar5);
      }
      local_38 = 0;
      local_40 = uVar5;
      if (!bVar20) {
        uVar13 = 1;
        if (uVar12 == 0) {
          uVar13 = 4;
        }
        bVar20 = uVar12 == 0;
        if (uVar5 < uVar13) goto LAB_01680940;
        goto LAB_01680964;
      }
    }
    local_38 = 0;
    uVar5 = *(uint *)(&DAT_00424458 + uVar12 * 4);
    uVar16 = *(undefined4 *)(&DAT_018b56a0 + uVar12 * 4);
    if (local_40 < uVar5) {
      FUN_0166e728(&local_40,0,uVar5,1,1);
    }
    uVar4 = local_38;
    uVar13 = local_3c;
    uVar14 = local_40;
    FUN_016dd1aa(local_3c + local_38,uVar16,uVar5);
    local_38 = uVar4 + uVar5;
    if (uVar14 - local_38 < param_3) {
      FUN_0166e728(&local_40,local_38,param_3,1,1);
      uVar14 = local_40;
      uVar13 = local_3c;
    }
    uVar5 = local_38;
    FUN_016dd1aa(uVar13 + local_38,param_2,param_3);
    local_38 = uVar5 + param_3;
    uVar5 = 1;
    if (uVar12 < 2) {
      uVar5 = 3;
    }
    if (uVar14 - local_38 < uVar5) {
      FUN_0166e728(&local_40,local_38,uVar5,1,1);
      uVar13 = local_3c;
    }
    else {
    }
    uVar14 = local_38;
    puVar9 = &DAT_004144fb;
    if (1 < uVar12) {
      puVar9 = &DAT_004144fe;
    }
    FUN_016dd1aa(uVar13 + local_38,puVar9,uVar5);
    local_38 = uVar14 + uVar5;
  }
  if (local_38 != 0) {
    *param_1 = local_40;
    param_1[1] = uVar13;
    param_1[2] = local_38;
    return;
  }
  uVar12 = 0;
  if (local_40 != 0) {
    uVar12 = thunk_FUN_016d3fb4(uVar13);
  }
  *param_1 = 0x80000000;
  param_1[1] = uVar13;
  param_1[2] = uVar12;
  return;
}

