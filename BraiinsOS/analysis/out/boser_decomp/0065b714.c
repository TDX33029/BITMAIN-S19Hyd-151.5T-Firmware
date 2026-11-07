// FUN_0065b714 @ 0065b714 size=5432 calls_out=3 calls_in=1
// strings: invalid match span

void FUN_0065b714(int *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_34;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar19 = *param_3;
  uVar5 = param_3[1];
  if (uVar5 < uVar19) {
LAB_0065b734:
    local_34 = 0;
    goto LAB_0065b738;
  }
  bVar1 = *(byte *)((int)param_3 + 0x11);
  bVar3 = *(char *)(param_2 + 0x144) == '\0';
  if ((char)param_3[4] != '\0') {
    uVar16 = *(uint *)(param_2 + 0x140);
    local_4c = 0;
    if ((uVar16 != 0) && (uVar16 <= *(uint *)(param_2 + 0x138))) {
      uVar8 = *(uint *)(param_2 + 8);
      if (uVar8 < uVar16) {
LAB_0065c9ec:
        puVar15 = &DAT_01d09230;
        goto LAB_0065c9f8;
      }
      uVar8 = uVar8 - uVar16;
      if (uVar8 == 0) goto LAB_0065cae0;
      pbVar13 = (byte *)(*(int *)(param_2 + 4) + uVar16 * 4);
      bVar2 = *pbVar13;
      if (bVar2 == 0xff) {
        uVar6 = *(int *)(param_2 + 0x28) + 2;
      }
      else {
        iVar21 = (uint)bVar2 + (uint)(bVar2 >> 2);
        uVar6 = iVar21 + 2;
        if ((bVar2 & 3) != 0) {
          uVar6 = iVar21 + 3;
        }
      }
      if (uVar8 <= uVar6) goto LAB_0065cb04;
      if ((int)*(uint *)(pbVar13 + uVar6 * 4) < 0) {
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4) & 0x7fffffff;
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar8 <= uVar6) goto LAB_0065cb60;
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4);
      }
      uVar6 = *(uint *)(param_2 + 0x14);
      if (uVar6 <= uVar8) goto LAB_0065cb10;
      uVar6 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
      local_58 = uVar19 - uVar6;
      if (uVar19 < uVar6) goto LAB_0065c990;
      local_4c = 1;
      local_54 = uVar8;
      if (bVar3 || (bVar1 & 1) != 0) {
        *param_1 = 1;
        param_1[1] = local_58;
        param_1[2] = uVar19;
        local_58 = uVar8;
        goto LAB_0065c7e8;
      }
    }
    local_50 = uVar19;
    if (uVar19 < uVar5) {
      uVar7 = param_3[3];
      uVar6 = uVar19;
      if (uVar19 < uVar7) {
        uVar6 = uVar7;
      }
      uVar20 = uVar19;
      do {
        if (uVar20 == uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,uVar7,&DAT_01c03c98);
        }
        uVar8 = *(uint *)(param_2 + 8);
        if (uVar8 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar16,uVar8,&DAT_01d09180);
        }
        iVar21 = *(int *)(param_2 + 4);
        uVar14 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(param_3[2] + uVar20));
        uVar9 = *(uint *)(iVar21 + uVar16 * 4);
        if ((uVar9 & 0xff) == 0xfe) {
          if (uVar14 != (uVar9 & 0xffff) >> 8) break;
          uVar16 = uVar16 + 2;
          if (uVar8 <= uVar16) goto LAB_0065bc68;
LAB_0065be94:
          uVar16 = *(uint *)(iVar21 + uVar16 * 4);
        }
        else {
          if ((uVar9 & 0xff) != 0xff) {
            uVar11 = (uVar9 & 0xff) >> 2;
            if ((uVar9 & 3) != 0) {
              uVar11 = uVar11 + 1;
            }
            uVar16 = uVar16 + 2;
            if (uVar16 <= uVar8) {
              uVar9 = uVar8 - uVar16;
              if (uVar9 < uVar11) {
LAB_0065c9a8:
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar11,uVar9,&DAT_01d091a0);
              }
              iVar10 = uVar11 + uVar16;
              iVar18 = uVar11 << 2;
              iVar4 = 0;
              do {
                iVar17 = iVar4;
                if (iVar18 == 0) goto LAB_0065c054;
                uVar9 = *(uint *)(iVar21 + uVar16 * 4 + iVar17 * 4);
                if (uVar14 == (uVar9 & 0xff)) {
                  uVar16 = iVar10 + iVar17 * 4;
                  if (uVar8 <= uVar16) {
LAB_0065cbbc:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar16,uVar8,&DAT_01d091e0);
                  }
                  goto LAB_0065be94;
                }
                if (uVar14 == (uVar9 & 0xffff) >> 8) {
                  uVar16 = iVar10 + iVar17 * 4 + 1;
                  if (uVar8 <= uVar16) {
LAB_0065cbd8:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar16,uVar8,&DAT_01d091d0);
                  }
                  goto LAB_0065be94;
                }
                if (uVar14 == (uVar9 & 0xffffff) >> 0x10) {
                  uVar16 = iVar10 + iVar17 * 4 + 2;
                  if (uVar8 <= uVar16) {
LAB_0065c040:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar16,uVar8,&DAT_01d091c0);
                  }
                  goto LAB_0065be94;
                }
                iVar18 = iVar18 + -4;
                iVar4 = iVar17 + 1;
              } while (uVar14 != uVar9 >> 0x18);
              uVar16 = iVar10 + iVar17 * 4 + 3;
              if (uVar8 <= uVar16) {
LAB_0065cc10:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar16,uVar8,&DAT_01d091b0);
              }
              goto LAB_0065be94;
            }
            puVar15 = &DAT_01d09190;
            goto LAB_0065c9f8;
          }
          uVar16 = uVar16 + uVar14 + 2;
          if (uVar8 <= uVar16) {
LAB_0065ca80:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar16,uVar8,&DAT_01d09200);
          }
          uVar16 = *(uint *)(iVar21 + uVar16 * 4);
          if (uVar16 == 1) break;
        }
        if (uVar16 <= *(uint *)(param_2 + 0x134)) {
          if (uVar16 == 0) break;
          if (uVar16 <= *(uint *)(param_2 + 0x138)) {
            if (uVar8 < uVar16) goto LAB_0065c9ec;
            if (uVar8 == uVar16) goto LAB_0065cae0;
            pbVar13 = (byte *)(iVar21 + uVar16 * 4);
            bVar2 = *pbVar13;
            if (bVar2 == 0xff) {
              uVar9 = *(int *)(param_2 + 0x28) + 2;
            }
            else {
              iVar21 = (uint)bVar2 + (uint)(bVar2 >> 2);
              uVar9 = iVar21 + 2;
              if ((bVar2 & 3) != 0) {
                uVar9 = iVar21 + 3;
              }
            }
            uVar8 = uVar8 - uVar16;
            if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar9,uVar8,&DAT_01d08ef8);
            }
            if ((int)*(uint *)(pbVar13 + uVar9 * 4) < 0) {
              uVar8 = *(uint *)(pbVar13 + uVar9 * 4) & 0x7fffffff;
            }
            else {
              uVar9 = uVar9 + 1;
              if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar9,uVar8,&DAT_01d08f08);
              }
              uVar8 = *(uint *)(pbVar13 + uVar9 * 4);
            }
            if (*(uint *)(param_2 + 0x14) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar8,*(uint *)(param_2 + 0x14),&DAT_01d09220);
            }
            uVar14 = uVar20 + 1;
            uVar9 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
            uVar11 = uVar14 - uVar9;
            if (uVar14 < uVar9) goto LAB_0065c990;
            if (uVar11 <= uVar19) {
              local_4c = 1;
              if (bVar3 || (bVar1 & 1) != 0) {
                *param_1 = 1;
                param_1[1] = uVar11;
                param_1[2] = uVar14;
                param_1[3] = uVar8;
                return;
              }
              local_58 = uVar11;
              local_54 = uVar8;
              local_50 = uVar14;
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar5);
    }
LAB_0065c054:
    *param_1 = local_4c;
    param_1[1] = local_58;
    param_1[2] = local_50;
LAB_0065c074:
    param_1[3] = local_54;
    return;
  }
  iVar21 = *(int *)(param_2 + 0x1c);
  if (iVar21 != 0) {
    if (bVar3 || (bVar1 & 1) != 0) {
      uVar16 = *(uint *)(param_2 + 0x13c);
      if ((uVar16 != 0) && (uVar16 <= *(uint *)(param_2 + 0x138))) goto LAB_0065bd18;
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      (**(code **)(*(int *)(param_2 + 0x20) + 0x10))
                (&local_34,iVar21 + (*(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8) + 8,
                 uVar6,uVar7,uVar19,uVar5);
      if (local_34 == 0) goto LAB_0065b738;
      if (local_34 == 2) {
        if (local_30 < uVar5) {
          uVar14 = uVar16;
          uVar19 = local_30;
LAB_0065b854:
          if (uVar7 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar19,uVar7,&DAT_01c03c98);
          }
          uVar8 = *(uint *)(param_2 + 8);
          if (uVar14 < uVar8) {
            iVar21 = *(int *)(param_2 + 4);
            uVar20 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(uVar6 + uVar19));
            do {
              uVar16 = *(uint *)(iVar21 + uVar14 * 4);
              if ((uVar16 & 0xff) == 0xfe) {
                if (uVar20 == (uVar16 & 0xffff) >> 8) goto LAB_0065ba48;
              }
              else if ((uVar16 & 0xff) == 0xff) {
                uVar16 = uVar20 + 2 + uVar14;
                if (uVar8 <= uVar16) goto LAB_0065ca80;
                uVar16 = *(uint *)(iVar21 + uVar16 * 4);
                if (uVar16 != 1) goto LAB_0065b9b8;
              }
              else {
                uVar11 = (uVar16 & 0xff) >> 2;
                if ((uVar16 & 3) != 0) {
                  uVar11 = uVar11 + 1;
                }
                uVar16 = uVar14 + 2;
                if (uVar8 < uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(uVar16,uVar8,uVar8,&DAT_01d09190);
                }
                uVar9 = uVar8 - uVar16;
                if (uVar9 < uVar11) goto LAB_0065c9a8;
                iVar18 = uVar11 << 2;
                iVar4 = 0;
                while (iVar10 = iVar4, iVar18 != 0) {
                  uVar9 = *(uint *)(iVar21 + uVar16 * 4 + iVar10 * 4);
                  if (uVar20 == (uVar9 & 0xff)) {
                    uVar14 = uVar11 + uVar16 + iVar10 * 4;
                    if (uVar14 < uVar8) goto LAB_0065b9b4;
                    goto LAB_0065cc20;
                  }
                  if (uVar20 == (uVar9 & 0xffff) >> 8) {
                    uVar14 = uVar11 + uVar16 + iVar10 * 4 + 1;
                    if (uVar14 < uVar8) goto LAB_0065b9b4;
                    goto LAB_0065cc2c;
                  }
                  if (uVar20 == (uVar9 & 0xffffff) >> 0x10) {
                    uVar14 = uVar11 + uVar16 + iVar10 * 4 + 2;
                    if (uVar14 < uVar8) goto LAB_0065b9b4;
                    goto LAB_0065cc38;
                  }
                  iVar18 = iVar18 + -4;
                  iVar4 = iVar10 + 1;
                  if (uVar20 == uVar9 >> 0x18) {
                    uVar14 = uVar11 + uVar16 + iVar10 * 4 + 3;
                    if (uVar14 < uVar8) goto LAB_0065b9b4;
                    goto LAB_0065cc44;
                  }
                }
              }
              uVar14 = uVar14 + 1;
              if (uVar8 <= uVar14) goto LAB_0065ca4c;
              uVar14 = *(uint *)(iVar21 + uVar14 * 4);
              if (uVar8 <= uVar14) break;
            } while( true );
          }
          goto LAB_0065cb9c;
        }
LAB_0065c48c:
        *param_1 = 0;
        return;
      }
    }
    else {
      uVar16 = *(uint *)(param_2 + 0x13c);
      local_58 = 0;
      if ((uVar16 != 0) && (uVar16 <= *(uint *)(param_2 + 0x138))) {
        uVar8 = *(uint *)(param_2 + 8);
        if (uVar8 < uVar16) {
LAB_0065ca2c:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar16,uVar8,uVar8,&DAT_01d09230);
        }
        uVar8 = uVar8 - uVar16;
        if (uVar8 == 0) goto LAB_0065cae0;
        pbVar13 = (byte *)(*(int *)(param_2 + 4) + uVar16 * 4);
        bVar1 = *pbVar13;
        if (bVar1 == 0xff) {
          uVar6 = *(int *)(param_2 + 0x28) + 2;
        }
        else {
          iVar18 = (uint)bVar1 + (uint)(bVar1 >> 2);
          uVar6 = iVar18 + 2;
          if ((bVar1 & 3) != 0) {
            uVar6 = iVar18 + 3;
          }
        }
        if (uVar8 <= uVar6) goto LAB_0065cb04;
        if ((int)*(uint *)(pbVar13 + uVar6 * 4) < 0) {
          uVar8 = *(uint *)(pbVar13 + uVar6 * 4) & 0x7fffffff;
        }
        else {
          uVar6 = uVar6 + 1;
          if (uVar8 <= uVar6) goto LAB_0065cb60;
          uVar8 = *(uint *)(pbVar13 + uVar6 * 4);
        }
        uVar6 = *(uint *)(param_2 + 0x14);
        if (uVar6 <= uVar8) goto LAB_0065cb10;
        uVar6 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
        local_60 = uVar19 - uVar6;
        if (uVar19 < uVar6) goto LAB_0065c990;
        local_58 = 1;
        local_5c = uVar8;
      }
      uVar7 = param_3[2];
      uVar20 = param_3[3];
      (**(code **)(*(int *)(param_2 + 0x20) + 0x10))
                (&local_34,iVar21 + (*(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8) + 8,
                 uVar7,uVar20,uVar19,uVar5);
      if (local_34 == 0) goto LAB_0065b738;
      if (local_34 != 1) {
        uVar6 = local_30;
        uVar14 = uVar16;
LAB_0065c1cc:
        uVar9 = uVar6;
        if (uVar9 < uVar5) {
          if (uVar20 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar9,uVar20,&DAT_01c03c98);
          }
          uVar8 = *(uint *)(param_2 + 8);
          if (uVar14 < uVar8) {
            iVar21 = *(int *)(param_2 + 4);
            uVar6 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(uVar7 + uVar9));
            do {
              uVar16 = *(uint *)(iVar21 + uVar14 * 4);
              if ((uVar16 & 0xff) == 0xfe) {
                if (uVar6 == (uVar16 & 0xffff) >> 8) goto LAB_0065c3d0;
              }
              else if ((uVar16 & 0xff) == 0xff) {
                uVar16 = uVar6 + 2 + uVar14;
                if (uVar8 <= uVar16) goto LAB_0065ca80;
                uVar16 = *(uint *)(iVar21 + uVar16 * 4);
                if (uVar16 != 1) goto LAB_0065c358;
              }
              else {
                uVar11 = (uVar16 & 0xff) >> 2;
                if ((uVar16 & 3) != 0) {
                  uVar11 = uVar11 + 1;
                }
                uVar16 = uVar14 + 2;
                if (uVar8 < uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(uVar16,uVar8,uVar8,&DAT_01d09190);
                }
                uVar12 = uVar8 - uVar16;
                if (uVar12 < uVar11) goto LAB_0065c954;
                iVar18 = uVar11 << 2;
                iVar4 = 0;
                while (iVar10 = iVar4, iVar18 != 0) {
                  uVar12 = *(uint *)(iVar21 + uVar16 * 4 + iVar10 * 4);
                  if (uVar6 == (uVar12 & 0xff)) {
                    uVar14 = uVar11 + uVar16 + iVar10 * 4;
                    if (uVar8 <= uVar14) {
LAB_0065cc20:
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar14,uVar8,&DAT_01d091e0);
                    }
                    goto LAB_0065c354;
                  }
                  if (uVar6 == (uVar12 & 0xffff) >> 8) {
                    uVar14 = uVar11 + uVar16 + iVar10 * 4 + 1;
                    if (uVar8 <= uVar14) {
LAB_0065cc2c:
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar14,uVar8,&DAT_01d091d0);
                    }
                    goto LAB_0065c354;
                  }
                  if (uVar6 == (uVar12 & 0xffffff) >> 0x10) {
                    uVar14 = uVar11 + uVar16 + iVar10 * 4 + 2;
                    if (uVar8 <= uVar14) {
LAB_0065cc38:
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar14,uVar8,&DAT_01d091c0);
                    }
                    goto LAB_0065c354;
                  }
                  iVar18 = iVar18 + -4;
                  iVar4 = iVar10 + 1;
                  if (uVar6 == uVar12 >> 0x18) {
                    uVar14 = uVar11 + uVar16 + iVar10 * 4 + 3;
                    if (uVar8 <= uVar14) {
LAB_0065cc44:
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar14,uVar8,&DAT_01d091b0);
                    }
                    goto LAB_0065c354;
                  }
                }
              }
              uVar14 = uVar14 + 1;
              if (uVar8 <= uVar14) {
LAB_0065ca4c:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar14,uVar8,&DAT_01d09210);
              }
              uVar14 = *(uint *)(iVar21 + uVar14 * 4);
              if (uVar8 <= uVar14) break;
            } while( true );
          }
LAB_0065cb9c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar14,uVar8,&DAT_01d09180);
        }
LAB_0065c49c:
        *param_1 = local_58;
        param_1[1] = local_60;
        param_1[2] = uVar19;
        local_54 = local_5c;
        goto LAB_0065c074;
      }
    }
    param_1[1] = local_30;
    param_1[2] = iStack_2c;
    param_1[3] = iStack_28;
LAB_0065b738:
    *param_1 = local_34;
    return;
  }
  if (!(bVar3 || (bVar1 & 1) != 0)) {
    uVar16 = *(uint *)(param_2 + 0x13c);
    local_50 = 0;
    if ((uVar16 != 0) && (uVar16 <= *(uint *)(param_2 + 0x138))) {
      uVar8 = *(uint *)(param_2 + 8);
      if (uVar8 < uVar16) goto LAB_0065ca20;
      uVar8 = uVar8 - uVar16;
      if (uVar8 == 0) goto LAB_0065cae0;
      pbVar13 = (byte *)(*(int *)(param_2 + 4) + uVar16 * 4);
      bVar1 = *pbVar13;
      if (bVar1 == 0xff) {
        uVar6 = *(int *)(param_2 + 0x28) + 2;
      }
      else {
        iVar21 = (uint)bVar1 + (uint)(bVar1 >> 2);
        uVar6 = iVar21 + 2;
        if ((bVar1 & 3) != 0) {
          uVar6 = iVar21 + 3;
        }
      }
      if (uVar8 <= uVar6) goto LAB_0065cb04;
      if ((int)*(uint *)(pbVar13 + uVar6 * 4) < 0) {
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4) & 0x7fffffff;
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar8 <= uVar6) goto LAB_0065cb60;
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4);
      }
      uVar6 = *(uint *)(param_2 + 0x14);
      if (uVar6 <= uVar8) goto LAB_0065cb10;
      uVar6 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
      local_5c = uVar19 - uVar6;
      if (uVar19 < uVar6) goto LAB_0065c990;
      local_50 = 1;
      local_58 = uVar8;
    }
    local_54 = uVar19;
    if (uVar19 < uVar5) {
      uVar20 = param_3[3];
      uVar7 = uVar19;
      if (uVar19 < uVar20) {
        uVar7 = uVar20;
      }
LAB_0065c55c:
      if (uVar19 == uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,uVar20,&DAT_01c03c98);
      }
      uVar8 = *(uint *)(param_2 + 8);
      if (uVar8 <= uVar16) {
LAB_0065cab8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar16,uVar8,&DAT_01d09180);
      }
      iVar21 = *(int *)(param_2 + 4);
      uVar6 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(param_3[2] + uVar19));
      do {
        uVar9 = *(uint *)(iVar21 + uVar16 * 4);
        if ((uVar9 & 0xff) == 0xfe) {
          if (uVar6 == (uVar9 & 0xffff) >> 8) goto LAB_0065c7b0;
        }
        else if ((uVar9 & 0xff) == 0xff) {
          uVar9 = uVar6 + 2 + uVar16;
          if (uVar8 <= uVar9) {
            puVar15 = &DAT_01d09200;
            goto LAB_0065caa8;
          }
          uVar9 = *(uint *)(iVar21 + uVar9 * 4);
          if (uVar9 != 1) goto LAB_0065c6cc;
        }
        else {
          uVar14 = (uVar9 & 0xff) >> 2;
          if ((uVar9 & 3) != 0) {
            uVar14 = uVar14 + 1;
          }
          uVar9 = uVar16 + 2;
          if (uVar8 < uVar9) {
            puVar15 = &DAT_01d09190;
            goto LAB_0065c970;
          }
          if (uVar8 - uVar9 < uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar14,uVar8 - uVar9,&DAT_01d091a0);
          }
          iVar18 = uVar14 << 2;
          iVar4 = 0;
          while (iVar10 = iVar4, iVar18 != 0) {
            uVar11 = *(uint *)(iVar21 + uVar9 * 4 + iVar10 * 4);
            if (uVar6 == (uVar11 & 0xff)) {
              uVar9 = uVar14 + uVar9 + iVar10 * 4;
              if (uVar9 < uVar8) goto LAB_0065c6c8;
              puVar15 = &DAT_01d091e0;
              goto LAB_0065caa8;
            }
            if (uVar6 == (uVar11 & 0xffff) >> 8) {
              uVar9 = uVar14 + uVar9 + iVar10 * 4 + 1;
              if (uVar9 < uVar8) goto LAB_0065c6c8;
              puVar15 = &DAT_01d091d0;
              goto LAB_0065caa8;
            }
            if (uVar6 == (uVar11 & 0xffffff) >> 0x10) {
              uVar9 = uVar14 + uVar9 + iVar10 * 4 + 2;
              if (uVar9 < uVar8) goto LAB_0065c6c8;
              puVar15 = &DAT_01d091c0;
              goto LAB_0065caa8;
            }
            iVar18 = iVar18 + -4;
            iVar4 = iVar10 + 1;
            if (uVar6 == uVar11 >> 0x18) {
              uVar9 = uVar14 + uVar9 + iVar10 * 4 + 3;
              if (uVar9 < uVar8) goto LAB_0065c6c8;
              puVar15 = &DAT_01d091b0;
              goto LAB_0065caa8;
            }
          }
        }
        uVar9 = uVar16 + 1;
        if (uVar8 <= uVar9) {
          puVar15 = &DAT_01d09210;
          goto LAB_0065caa8;
        }
        uVar16 = *(uint *)(iVar21 + uVar9 * 4);
        if (uVar8 <= uVar16) goto LAB_0065cab8;
      } while( true );
    }
LAB_0065c7cc:
    *param_1 = local_50;
    param_1[1] = local_5c;
    param_1[2] = local_54;
LAB_0065c7e8:
    param_1[3] = local_58;
    return;
  }
  uVar16 = *(uint *)(param_2 + 0x13c);
  if ((uVar16 == 0) || (*(uint *)(param_2 + 0x138) < uVar16)) {
    if (uVar19 < uVar5) {
      uVar7 = param_3[3];
      uVar6 = uVar19;
      if (uVar19 < uVar7) {
        uVar6 = uVar7;
      }
      uVar20 = uVar16;
LAB_0065bab8:
      if (uVar19 == uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,uVar7,&DAT_01c03c98);
      }
      uVar8 = *(uint *)(param_2 + 8);
      if (uVar8 <= uVar20) {
LAB_0065cb50:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar20,uVar8,&DAT_01d09180);
      }
      iVar21 = *(int *)(param_2 + 4);
      uVar9 = (uint)*(byte *)(param_2 + 0x2c + (uint)*(byte *)(param_3[2] + uVar19));
      do {
        uVar16 = *(uint *)(iVar21 + uVar20 * 4);
        if ((uVar16 & 0xff) == 0xfe) {
          if (uVar9 == (uVar16 & 0xffff) >> 8) goto LAB_0065bc5c;
        }
        else if ((uVar16 & 0xff) == 0xff) {
          uVar16 = uVar9 + 2 + uVar20;
          if (uVar8 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar16,uVar8,&DAT_01d09200);
          }
          uVar16 = *(uint *)(iVar21 + uVar16 * 4);
          if (uVar16 != 1) goto LAB_0065bc20;
        }
        else {
          uVar11 = (uVar16 & 0xff) >> 2;
          if ((uVar16 & 3) != 0) {
            uVar11 = uVar11 + 1;
          }
          uVar16 = uVar20 + 2;
          if (uVar8 < uVar16) {
            puVar15 = &DAT_01d09190;
            goto LAB_0065c9f8;
          }
          uVar12 = uVar8 - uVar16;
          if (uVar12 < uVar11) {
LAB_0065c954:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar11,uVar12,&DAT_01d091a0);
          }
          iVar18 = uVar11 << 2;
          iVar4 = 0;
          while (iVar10 = iVar4, iVar18 != 0) {
            uVar14 = *(uint *)(iVar21 + uVar16 * 4 + iVar10 * 4);
            if (uVar9 == (uVar14 & 0xff)) {
              uVar16 = uVar11 + uVar16 + iVar10 * 4;
              if (uVar8 <= uVar16) goto LAB_0065cbbc;
              goto LAB_0065bc1c;
            }
            if (uVar9 == (uVar14 & 0xffff) >> 8) {
              uVar16 = uVar11 + uVar16 + iVar10 * 4 + 1;
              if (uVar8 <= uVar16) goto LAB_0065cbd8;
              goto LAB_0065bc1c;
            }
            if (uVar9 == (uVar14 & 0xffffff) >> 0x10) {
              uVar16 = uVar11 + uVar16 + iVar10 * 4 + 2;
              if (uVar8 <= uVar16) goto LAB_0065c040;
              goto LAB_0065bc1c;
            }
            iVar18 = iVar18 + -4;
            iVar4 = iVar10 + 1;
            if (uVar9 == uVar14 >> 0x18) {
              uVar16 = uVar11 + uVar16 + iVar10 * 4 + 3;
              if (uVar16 < uVar8) goto LAB_0065bc1c;
              goto LAB_0065cc10;
            }
          }
        }
        uVar20 = uVar20 + 1;
        if (uVar8 <= uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar20,uVar8,&DAT_01d09210);
        }
        uVar20 = *(uint *)(iVar21 + uVar20 * 4);
        if (uVar8 <= uVar20) goto LAB_0065cb50;
      } while( true );
    }
    goto LAB_0065b734;
  }
LAB_0065bd18:
  uVar8 = *(uint *)(param_2 + 8);
  if (uVar16 <= uVar8) {
    uVar8 = uVar8 - uVar16;
    if (uVar8 == 0) {
LAB_0065cae0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,&DAT_01d08f28);
    }
    pbVar13 = (byte *)(*(int *)(param_2 + 4) + uVar16 * 4);
    bVar1 = *pbVar13;
    if (bVar1 == 0xff) {
      uVar6 = *(int *)(param_2 + 0x28) + 2;
    }
    else {
      iVar21 = (uint)bVar1 + (uint)(bVar1 >> 2);
      uVar6 = iVar21 + 2;
      if ((bVar1 & 3) != 0) {
        uVar6 = iVar21 + 3;
      }
    }
    if (uVar8 <= uVar6) {
LAB_0065cb04:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,uVar8,&DAT_01d08ef8);
    }
    if ((int)*(uint *)(pbVar13 + uVar6 * 4) < 0) {
      uVar8 = *(uint *)(pbVar13 + uVar6 * 4) & 0x7fffffff;
    }
    else {
      uVar6 = uVar6 + 1;
      if (uVar8 <= uVar6) {
LAB_0065cb60:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,uVar8,&DAT_01d08f08);
      }
      uVar8 = *(uint *)(pbVar13 + uVar6 * 4);
    }
    uVar6 = *(uint *)(param_2 + 0x14);
    if (uVar6 <= uVar8) {
LAB_0065cb10:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar8,uVar6,&DAT_01d09220);
    }
    uVar5 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
    if (uVar19 < uVar5) {
LAB_0065c990:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08fa8);
    }
    *param_1 = 1;
    param_1[1] = uVar19 - uVar5;
    param_1[2] = uVar19;
    local_58 = uVar8;
    goto LAB_0065c7e8;
  }
LAB_0065ca20:
  puVar15 = &DAT_01d09230;
LAB_0065c9f8:
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar16,uVar8,uVar8,puVar15);
LAB_0065ba48:
  uVar14 = uVar14 + 2;
  if (uVar8 <= uVar14) goto LAB_0065ba54;
LAB_0065b9b4:
  uVar16 = *(uint *)(iVar21 + uVar14 * 4);
LAB_0065b9b8:
  if (*(uint *)(param_2 + 0x134) < uVar16) {
    uVar8 = uVar19 + 1;
  }
  else {
    if (uVar16 == 0) goto LAB_0065c48c;
    if (uVar16 <= *(uint *)(param_2 + 0x138)) {
      if (uVar8 < uVar16) goto LAB_0065ca20;
      if (uVar8 == uVar16) goto LAB_0065cae0;
      pbVar13 = (byte *)(iVar21 + uVar16 * 4);
      uVar8 = uVar8 - uVar16;
      bVar1 = *pbVar13;
      if (bVar1 == 0xff) {
        uVar6 = *(int *)(param_2 + 0x28) + 2;
      }
      else {
        iVar21 = (uint)bVar1 + (uint)(bVar1 >> 2);
        uVar6 = iVar21 + 2;
        if ((bVar1 & 3) != 0) {
          uVar6 = iVar21 + 3;
        }
      }
      if (uVar8 <= uVar6) goto LAB_0065cb04;
      if ((int)*(uint *)(pbVar13 + uVar6 * 4) < 0) {
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4) & 0x7fffffff;
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar8 <= uVar6) goto LAB_0065cb60;
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4);
      }
      uVar6 = *(uint *)(param_2 + 0x14);
      if (uVar6 <= uVar8) goto LAB_0065cb10;
      uVar19 = uVar19 + 1;
      uVar5 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
      if (uVar5 <= uVar19) {
        *param_1 = 1;
        param_1[1] = uVar19 - uVar5;
        param_1[2] = uVar19;
        param_1[3] = uVar8;
        return;
      }
      goto LAB_0065c990;
    }
    (**(code **)(*(int *)(param_2 + 0x20) + 0x10))
              (&local_34,
               *(int *)(param_2 + 0x1c) + (*(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8)
               + 8,uVar6,uVar7,uVar19,uVar5);
    if (local_34 == 0) goto LAB_0065c48c;
    uVar8 = local_30;
    if (local_30 <= uVar19) {
      uVar8 = uVar19 + 1;
    }
  }
  uVar14 = uVar16;
  uVar19 = uVar8;
  if (uVar5 <= uVar8) goto LAB_0065c48c;
  goto LAB_0065b854;
LAB_0065c3d0:
  uVar14 = uVar14 + 2;
  if (uVar8 <= uVar14) {
LAB_0065ba54:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar14,uVar8,&DAT_01d091f0);
  }
LAB_0065c354:
  uVar16 = *(uint *)(iVar21 + uVar14 * 4);
LAB_0065c358:
  uVar14 = uVar16;
  if (*(uint *)(param_2 + 0x134) < uVar16) {
    uVar6 = uVar9 + 1;
  }
  else {
    if (uVar16 == 0) goto LAB_0065c49c;
    if (*(uint *)(param_2 + 0x138) < uVar16) {
      (**(code **)(*(int *)(param_2 + 0x20) + 0x10))
                (&local_34,
                 *(int *)(param_2 + 0x1c) +
                 (*(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8) + 8,uVar7,uVar20,uVar9,
                 uVar5);
      if (local_34 == 0) goto LAB_0065c48c;
      uVar6 = local_30;
      if (local_30 <= uVar9) {
        uVar6 = uVar9 + 1;
      }
    }
    else {
      if (uVar8 < uVar16) goto LAB_0065ca2c;
      if (uVar8 == uVar16) goto LAB_0065cae0;
      pbVar13 = (byte *)(iVar21 + uVar16 * 4);
      bVar1 = *pbVar13;
      if (bVar1 == 0xff) {
        uVar6 = *(int *)(param_2 + 0x28) + 2;
      }
      else {
        iVar21 = (uint)bVar1 + (uint)(bVar1 >> 2);
        uVar6 = iVar21 + 2;
        if ((bVar1 & 3) != 0) {
          uVar6 = iVar21 + 3;
        }
      }
      uVar8 = uVar8 - uVar16;
      if (uVar8 <= uVar6) goto LAB_0065cb04;
      if ((int)*(uint *)(pbVar13 + uVar6 * 4) < 0) {
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4) & 0x7fffffff;
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar8 <= uVar6) goto LAB_0065cb60;
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4);
      }
      uVar6 = *(uint *)(param_2 + 0x14);
      if (uVar6 <= uVar8) goto LAB_0065cb10;
      uVar19 = uVar9 + 1;
      uVar16 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
      if (uVar19 < uVar16) goto LAB_0065c990;
      local_60 = uVar19 - uVar16;
      local_58 = 1;
      uVar6 = uVar19;
      local_5c = uVar8;
    }
  }
  goto LAB_0065c1cc;
LAB_0065bc5c:
  uVar16 = uVar20 + 2;
  if (uVar8 <= uVar16) {
LAB_0065bc68:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar16,uVar8,&DAT_01d091f0);
  }
LAB_0065bc1c:
  uVar16 = *(uint *)(iVar21 + uVar16 * 4);
LAB_0065bc20:
  if (uVar16 <= *(uint *)(param_2 + 0x134)) {
    if (uVar16 == 0) goto LAB_0065b734;
    if (uVar16 <= *(uint *)(param_2 + 0x138)) {
      if (uVar8 < uVar16) goto LAB_0065ca20;
      if (uVar8 == uVar16) goto LAB_0065cae0;
      pbVar13 = (byte *)(iVar21 + uVar16 * 4);
      uVar8 = uVar8 - uVar16;
      bVar1 = *pbVar13;
      if (bVar1 == 0xff) {
        uVar6 = *(int *)(param_2 + 0x28) + 2;
      }
      else {
        iVar21 = (uint)bVar1 + (uint)(bVar1 >> 2);
        uVar6 = iVar21 + 2;
        if ((bVar1 & 3) != 0) {
          uVar6 = iVar21 + 3;
        }
      }
      if (uVar8 <= uVar6) goto LAB_0065cb04;
      if ((int)*(uint *)(pbVar13 + uVar6 * 4) < 0) {
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4) & 0x7fffffff;
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar8 <= uVar6) goto LAB_0065cb60;
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4);
      }
      uVar6 = *(uint *)(param_2 + 0x14);
      if (uVar6 <= uVar8) goto LAB_0065cb10;
      uVar19 = uVar19 + 1;
      uVar5 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
      if (uVar19 < uVar5) goto LAB_0065c990;
      *param_1 = 1;
      param_1[1] = uVar19 - uVar5;
      param_1[2] = uVar19;
      local_58 = uVar8;
      goto LAB_0065c7e8;
    }
  }
  uVar19 = uVar19 + 1;
  uVar20 = uVar16;
  if (uVar19 == uVar5) goto LAB_0065b734;
  goto LAB_0065bab8;
LAB_0065c7b0:
  uVar9 = uVar16 + 2;
  if (uVar8 <= uVar9) {
    puVar15 = &DAT_01d091f0;
LAB_0065caa8:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar9,uVar8,puVar15);
  }
LAB_0065c6c8:
  uVar9 = *(uint *)(iVar21 + uVar9 * 4);
LAB_0065c6cc:
  if (*(uint *)(param_2 + 0x134) < uVar9) {
  }
  else {
    if (uVar9 == 0) goto LAB_0065c7cc;
    if (uVar9 <= *(uint *)(param_2 + 0x138)) {
      if (uVar8 < uVar9) {
        puVar15 = &DAT_01d09230;
LAB_0065c970:
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar9,uVar8,uVar8,puVar15);
      }
      if (uVar8 == uVar9) goto LAB_0065cae0;
      pbVar13 = (byte *)(iVar21 + uVar9 * 4);
      bVar1 = *pbVar13;
      if (bVar1 == 0xff) {
        uVar6 = *(int *)(param_2 + 0x28) + 2;
      }
      else {
        iVar21 = (uint)bVar1 + (uint)(bVar1 >> 2);
        uVar6 = iVar21 + 2;
        if ((bVar1 & 3) != 0) {
          uVar6 = iVar21 + 3;
        }
      }
      uVar8 = uVar8 - uVar9;
      if (uVar8 <= uVar6) goto LAB_0065cb04;
      if ((int)*(uint *)(pbVar13 + uVar6 * 4) < 0) {
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4) & 0x7fffffff;
      }
      else {
        uVar6 = uVar6 + 1;
        if (uVar8 <= uVar6) goto LAB_0065cb60;
        uVar8 = *(uint *)(pbVar13 + uVar6 * 4);
      }
      uVar6 = *(uint *)(param_2 + 0x14);
      if (uVar6 <= uVar8) goto LAB_0065cb10;
      local_54 = uVar19 + 1;
      uVar16 = *(uint *)(*(int *)(param_2 + 0x10) + uVar8 * 4);
      if (local_54 < uVar16) goto LAB_0065c990;
      local_5c = local_54 - uVar16;
      local_50 = 1;
      local_58 = uVar8;
    }
  }
  uVar19 = uVar19 + 1;
  uVar16 = uVar9;
  if (uVar19 == uVar5) goto LAB_0065c7cc;
  goto LAB_0065c55c;
}

