// FUN_013e8278 @ 013e8278 size=2676 calls_out=9 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_013e8278(int *param_1,int param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined2 *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint unaff_r10;
  uint uVar23;
  int local_48;
  int iStack_44;
  uint uStack_40;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  iVar21 = *param_1;
  if (iVar21 == -0x80000000) {
    return;
  }
  uVar14 = param_1[2];
  if (uVar14 == 0) {
    if (param_2 != 0) goto LAB_013e8318;
    goto LAB_013e833c;
  }
  iVar16 = param_1[1];
  uVar4 = *(uint *)(iVar16 + 8);
  if (uVar14 != 1) {
    uVar9 = uVar14 - 1 & 0xfffffff;
    puVar6 = (uint *)(iVar16 + 0x18);
    do {
      if (*puVar6 <= uVar4) {
        uVar4 = *puVar6;
      }
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 4;
    } while (uVar9 != 0);
  }
  if (uVar4 == 0) {
    for (uVar4 = 0; uVar14 != uVar4; uVar4 = uVar4 + 1) {
      if (*(int *)(iVar16 + uVar4 * 0x10) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar16 + uVar4 * 0x10 + 4));
      }
    }
    if (iVar21 != 0) {
      thunk_FUN_016d3fb4(iVar16);
    }
    *param_1 = -0x80000000;
    return;
  }
  if (param_2 == 0) {
    uVar22 = param_1[1];
    uVar17 = 1;
    bVar12 = false;
    uVar7 = uVar22 + uVar14 * 0x10;
    uVar23 = *(uint *)(uVar22 + 8);
    uVar4 = uVar22;
    uVar9 = uVar23;
    do {
      uVar5 = uVar14;
      if (bVar12) {
        uVar17 = uVar4;
        if (uVar4 == uVar7) goto LAB_013e8ad0;
      }
      else {
        if (uVar7 - uVar4 >> 4 <= uVar17) {
LAB_013e8ad0:
          if (uVar23 < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar23 - uVar9,uVar23,uVar23,&DAT_01895080);
          }
          pbVar10 = (byte *)(*(int *)(uVar22 + 4) + (uVar23 - uVar9));
          goto LAB_013e8afc;
        }
        uVar17 = uVar4 + uVar17 * 0x10;
      }
      if (uVar23 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar23 - uVar9,uVar23,uVar23,&DAT_01895090);
      }
      uVar20 = *(uint *)(uVar17 + 8);
      if (uVar20 == 0) {
        uVar17 = 0;
        break;
      }
      uVar4 = uVar17 + 0x10;
      uVar13 = 0;
      do {
        if (uVar9 == uVar13) goto LAB_013e88fc;
        unaff_r10 = (uint)*(byte *)((uVar23 + *(int *)(uVar22 + 4) + -1) - uVar13);
        if (*(byte *)((*(int *)(uVar17 + 4) + uVar20 + -1) - uVar13) != unaff_r10) {
          uVar9 = uVar13;
          goto LAB_013e88fc;
        }
        uVar13 = uVar13 + 1;
      } while (uVar20 != uVar13);
      uVar9 = uVar20;
LAB_013e88fc:
      bVar12 = true;
      uVar17 = 0;
    } while (uVar9 != 0);
    goto LAB_013e8b80;
  }
LAB_013e8318:
  FUN_013e7ee4(param_1);
  iVar21 = *param_1;
  iVar16 = -0x80000000;
  if (iVar21 != -0x80000000) {
    uVar5 = param_1[2];
    if (uVar5 != 0) {
      uVar22 = param_1[1];
      uVar17 = 1;
      bVar12 = false;
      uVar7 = uVar22 + uVar5 * 0x10;
      uVar4 = *(uint *)(uVar22 + 8);
      pbVar10 = *(byte **)(uVar22 + 4);
      uVar9 = uVar4;
      unaff_r10 = uVar22;
LAB_013e8a40:
      if (bVar12) {
        uVar17 = unaff_r10;
        if (unaff_r10 != uVar7) goto joined_r0x013e8a5c;
LAB_013e8af0:
        if (uVar4 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar9,uVar4,&DAT_01895060);
        }
LAB_013e8afc:
        if ((((param_2 != 0) && (1 < uVar14)) && (uVar9 - 1 < 3)) &&
           ((byte)(&DAT_003cf239)[*pbVar10] < 200)) {
          puVar6 = (uint *)(uVar22 + 8);
          iVar21 = uVar5 << 4;
          do {
            if (1 < *puVar6) {
              *puVar6 = 1;
              *(undefined1 *)(puVar6 + 1) = 0;
            }
            puVar6 = puVar6 + 4;
            iVar21 = iVar21 + -0x10;
          } while (iVar21 != 0);
          FUN_013604dc(param_1);
          return;
        }
        uVar17 = uVar9;
        goto LAB_013e8b80;
      }
      if (uVar7 - unaff_r10 >> 4 <= uVar17) goto LAB_013e8af0;
      uVar17 = unaff_r10 + uVar17 * 0x10;
joined_r0x013e8a5c:
      if (uVar4 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar9,uVar4,&DAT_01895070);
      }
      uVar23 = *(uint *)(uVar17 + 8);
      if (uVar9 < *(uint *)(uVar17 + 8)) {
        uVar23 = uVar9;
      }
      if (uVar23 != 0) goto code_r0x013e8a74;
      goto LAB_013e8b7c;
    }
    goto LAB_013e833c;
  }
LAB_013e836c:
  bVar12 = true;
  local_48 = -0x7fffffff;
joined_r0x013e83b8:
  if (iVar16 == -0x80000000) {
LAB_013e8414:
    bVar3 = true;
    iVar16 = -0x80000000;
  }
  else {
    bVar3 = true;
    uVar14 = param_1[2];
    if (10 < uVar14) {
      iVar21 = uVar14 << 4;
      if (param_2 == 0) {
        puVar6 = (uint *)(param_1[1] + 8);
        do {
          uVar14 = *puVar6;
          if (5 < uVar14) {
            puVar18 = (undefined4 *)puVar6[-1];
            *(undefined1 *)(puVar6 + 1) = 0;
            *puVar6 = 0;
            uVar15 = *(undefined4 *)((int)puVar18 + (uVar14 - 5));
            *(undefined1 *)(puVar18 + 1) = *(undefined1 *)((int)puVar18 + (uVar14 - 1));
            *puVar18 = uVar15;
            *puVar6 = 5;
          }
          puVar6 = puVar6 + 4;
          iVar21 = iVar21 + -0x10;
        } while (iVar21 != 0);
      }
      else {
        puVar6 = (uint *)(param_1[1] + 8);
        do {
          if (5 < *puVar6) {
            *puVar6 = 5;
            *(undefined1 *)(puVar6 + 1) = 0;
          }
          puVar6 = puVar6 + 4;
          iVar21 = iVar21 + -0x10;
        } while (iVar21 != 0);
        FUN_013e7ee4(param_1);
        iVar16 = *param_1;
      }
      if (iVar16 == -0x80000000) goto LAB_013e8414;
      uVar14 = param_1[2];
      if (10 < uVar14) {
        iVar21 = uVar14 << 4;
        if (param_2 == 0) {
          puVar6 = (uint *)(param_1[1] + 8);
          do {
            uVar14 = *puVar6;
            if (4 < uVar14) {
              *(undefined1 *)(puVar6 + 1) = 0;
              *puVar6 = 0;
              *(undefined4 *)puVar6[-1] = *(undefined4 *)((int)puVar6[-1] + (uVar14 - 4));
              *puVar6 = 4;
            }
            puVar6 = puVar6 + 4;
            iVar21 = iVar21 + -0x10;
          } while (iVar21 != 0);
        }
        else {
          puVar6 = (uint *)(param_1[1] + 8);
          do {
            if (4 < *puVar6) {
              *puVar6 = 4;
              *(undefined1 *)(puVar6 + 1) = 0;
            }
            puVar6 = puVar6 + 4;
            iVar21 = iVar21 + -0x10;
          } while (iVar21 != 0);
          FUN_013e7ee4(param_1);
          iVar16 = *param_1;
        }
        if (iVar16 == -0x80000000) goto LAB_013e8414;
        uVar14 = param_1[2];
        if (0x40 < uVar14) {
          iVar21 = uVar14 << 4;
          if (param_2 == 0) {
            puVar6 = (uint *)(param_1[1] + 8);
            do {
              uVar14 = *puVar6;
              if (3 < uVar14) {
                puVar19 = (undefined2 *)puVar6[-1];
                *(undefined1 *)(puVar6 + 1) = 0;
                *puVar6 = 0;
                uVar2 = *(undefined2 *)((int)puVar19 + (uVar14 - 3));
                *(undefined1 *)(puVar19 + 1) = *(undefined1 *)((int)puVar19 + (uVar14 - 1));
                *puVar19 = uVar2;
                *puVar6 = 3;
              }
              puVar6 = puVar6 + 4;
              iVar21 = iVar21 + -0x10;
            } while (iVar21 != 0);
          }
          else {
            puVar6 = (uint *)(param_1[1] + 8);
            do {
              if (3 < *puVar6) {
                *puVar6 = 3;
                *(undefined1 *)(puVar6 + 1) = 0;
              }
              puVar6 = puVar6 + 4;
              iVar21 = iVar21 + -0x10;
            } while (iVar21 != 0);
            FUN_013e7ee4(param_1);
            iVar16 = *param_1;
          }
          if (iVar16 == -0x80000000) goto LAB_013e8414;
          uVar14 = param_1[2];
          if (0x40 < uVar14) {
            iVar21 = uVar14 << 4;
            if (param_2 == 0) {
              uVar14 = param_1[1];
              do {
                uVar4 = *(uint *)(uVar14 + 8);
                if (2 < uVar4) {
                  *(undefined1 *)(uVar14 + 0xc) = 0;
                  *(undefined4 *)(uVar14 + 8) = 0;
                  local_2c = uVar4 - 2;
                  local_28 = 2;
                  local_38 = *(int *)(uVar14 + 4);
                  local_34 = local_38 + local_2c;
                  local_30 = uVar14;
                  FUN_016bd438(&local_38);
                }
                uVar14 = uVar14 + 0x10;
                iVar21 = iVar21 + -0x10;
              } while (iVar21 != 0);
            }
            else {
              puVar6 = (uint *)(param_1[1] + 8);
              do {
                if (2 < *puVar6) {
                  *puVar6 = 2;
                  *(undefined1 *)(puVar6 + 1) = 0;
                }
                puVar6 = puVar6 + 4;
                iVar21 = iVar21 + -0x10;
              } while (iVar21 != 0);
              FUN_013e7ee4(param_1);
              iVar16 = *param_1;
            }
            if (iVar16 == -0x80000000) goto LAB_013e8414;
            uVar14 = param_1[2];
            if (10 < uVar14) {
              iVar21 = uVar14 << 4;
              if (param_2 == 0) {
                uVar14 = param_1[1];
                do {
                  uVar4 = *(uint *)(uVar14 + 8);
                  if (1 < uVar4) {
                    *(undefined1 *)(uVar14 + 0xc) = 0;
                    *(undefined4 *)(uVar14 + 8) = 0;
                    local_2c = uVar4 - 1;
                    local_28 = 1;
                    local_38 = *(int *)(uVar14 + 4);
                    local_34 = local_38 + local_2c;
                    local_30 = uVar14;
                    FUN_016bd438(&local_38);
                  }
                  uVar14 = uVar14 + 0x10;
                  iVar21 = iVar21 + -0x10;
                } while (iVar21 != 0);
              }
              else {
                puVar6 = (uint *)(param_1[1] + 8);
                do {
                  if (1 < *puVar6) {
                    *puVar6 = 1;
                    *(undefined1 *)(puVar6 + 1) = 0;
                  }
                  puVar6 = puVar6 + 4;
                  iVar21 = iVar21 + -0x10;
                } while (iVar21 != 0);
                FUN_013e7ee4(param_1);
                iVar16 = *param_1;
              }
              if (iVar16 == -0x80000000) goto LAB_013e8414;
              uVar14 = param_1[2];
            }
          }
        }
      }
    }
    if (uVar14 == 0) {
LAB_013e868c:
      bVar3 = false;
    }
    else {
      iVar11 = param_1[1];
      iVar21 = 0;
LAB_013e8670:
      iVar8 = *(int *)(iVar11 + iVar21 + 8);
      if (iVar8 != 1) {
        if (iVar8 == 0) {
          uVar4 = 0;
          goto LAB_013e87a8;
        }
LAB_013e8664:
        iVar21 = iVar21 + 0x10;
        if (uVar14 * 0x10 == iVar21) goto LAB_013e868c;
        goto LAB_013e8670;
      }
      if ((byte)(&DAT_003cf239)[**(byte **)(iVar11 + iVar21 + 4)] < 0xfa) goto LAB_013e8664;
      uVar4 = 0;
LAB_013e87a8:
      for (; uVar14 != uVar4; uVar4 = uVar4 + 1) {
        if (*(int *)(iVar11 + uVar4 * 0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar11 + uVar4 * 0x10 + 4));
        }
      }
      if (iVar16 != 0) {
        thunk_FUN_016d3fb4(iVar11);
      }
      iVar16 = -0x80000000;
      *param_1 = -0x80000000;
    }
  }
  if (bVar12) {
    return;
  }
  if (bVar3) {
LAB_013e86a0:
    *param_1 = local_48;
    param_1[1] = iStack_44;
    param_1[2] = uStack_40;
    return;
  }
  uVar14 = param_1[2];
  if (uVar14 == 0) {
    iVar21 = param_1[1];
  }
  else {
    iVar21 = param_1[1];
    uVar4 = *(uint *)(iVar21 + 8);
    if (uVar14 != 1) {
      uVar9 = uVar14 - 1 & 0xfffffff;
      puVar6 = (uint *)(iVar21 + 0x18);
      do {
        if (*puVar6 <= uVar4) {
          uVar4 = *puVar6;
        }
        uVar9 = uVar9 - 1;
        puVar6 = puVar6 + 4;
      } while (uVar9 != 0);
    }
    if (2 < uVar4) {
      if ((iVar16 != -0x80000000) && (uVar14 < 0x41)) {
        FUN_0139b2d0(&local_48);
        return;
      }
      FUN_0139b2d0(param_1);
      goto LAB_013e86a0;
    }
    local_38 = local_48;
    local_34 = iStack_44;
    local_30 = uStack_40;
    if (iVar16 == -0x80000000) goto LAB_013e8768;
  }
  local_38 = local_48;
  local_34 = iStack_44;
  local_30 = uStack_40;
  for (uVar4 = 0; uVar14 != uVar4; uVar4 = uVar4 + 1) {
    if (*(int *)(iVar21 + uVar4 * 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar21 + uVar4 * 0x10 + 4));
    }
  }
  if (iVar16 != 0) {
    thunk_FUN_016d3fb4(iVar21);
  }
LAB_013e8768:
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  return;
code_r0x013e8a74:
  unaff_r10 = uVar17 + 0x10;
  uVar9 = 0;
  do {
    if (*(byte *)(*(int *)(uVar17 + 4) + uVar9) != pbVar10[uVar9]) goto LAB_013e8a30;
    uVar9 = uVar9 + 1;
  } while (uVar23 != uVar9);
  uVar9 = uVar23;
LAB_013e8a30:
  bVar12 = true;
  uVar17 = 0;
  if (uVar9 == 0) goto LAB_013e8b7c;
  goto LAB_013e8a40;
LAB_013e8b7c:
  uVar17 = 0;
LAB_013e8b80:
  iVar16 = uVar5 << 4;
  uVar14 = uVar22;
  do {
    if (iVar16 == 0) {
      if ((4 < uVar17) || (1 < uVar17 && 0x10 < uVar5)) goto LAB_013e8bd4;
      goto LAB_013e8bc4;
    }
    pcVar1 = (char *)(uVar14 + 0xc);
    iVar16 = iVar16 + -0x10;
    uVar14 = uVar14 + 0x10;
  } while (*pcVar1 != '\0');
  if (1 < uVar17) {
LAB_013e8bd4:
    iVar21 = uVar5 << 4;
    if (param_2 == 0) goto LAB_013e8c44;
    puVar6 = (uint *)(uVar22 + 8);
    do {
      if (uVar17 < *puVar6) {
        *puVar6 = uVar17;
        *(undefined1 *)(puVar6 + 1) = 0;
      }
      puVar6 = puVar6 + 4;
      iVar21 = iVar21 + -0x10;
    } while (iVar21 != 0);
    while (*param_1 != -0x80000000) {
      FUN_013604dc(param_1);
      iVar21 = *param_1;
      if (iVar21 == -0x80000000) break;
      local_34 = param_1[2];
      iVar11 = 1;
      local_38 = 1;
      if (local_34 == 1) goto LAB_013e8340;
      FUN_00fb7ce0(&local_38);
LAB_013e8c44:
      do {
        if (uVar17 < *(uint *)(uVar22 + 8)) {
          *(undefined1 *)(uVar22 + 0xc) = 0;
          local_2c = *(uint *)(uVar22 + 8) - uVar17;
          *(undefined4 *)(uVar22 + 8) = 0;
          local_38 = *(int *)(uVar22 + 4);
          local_34 = local_38 + local_2c;
          local_30 = uVar22;
          local_28 = uVar17;
          FUN_016bd438(&local_38);
        }
        uVar22 = uVar22 + 0x10;
        iVar21 = iVar21 + -0x10;
      } while (iVar21 != 0);
    }
    local_38 = 0;
    uVar15 = FUN_00fb7ce0(&local_38);
    if (unaff_r10 == 0) {
      FUN_0139b2d0(&local_48);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01842e60(uVar15);
  }
LAB_013e8bc4:
  iVar16 = -0x80000000;
  if (iVar21 != -0x80000000) {
LAB_013e833c:
    iVar11 = param_1[2];
LAB_013e8340:
    iVar8 = param_1[1];
    iVar11 = iVar11 << 4;
    do {
      iVar16 = iVar21;
      if (iVar11 == 0) {
        FUN_013e6e74(&local_38);
        bVar12 = local_38 == -0x7fffffff;
        local_48 = local_38;
        iStack_44 = local_34;
        uStack_40 = local_30;
        goto joined_r0x013e83b8;
      }
      pcVar1 = (char *)(iVar8 + 0xc);
      iVar11 = iVar11 + -0x10;
      iVar8 = iVar8 + 0x10;
    } while (*pcVar1 != '\0');
  }
  goto LAB_013e836c;
}

