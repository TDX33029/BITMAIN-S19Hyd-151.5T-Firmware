// FUN_01657f34 @ 01657f34 size=3304 calls_out=10 calls_in=2
// strings: labels | value

void FUN_01657f34(undefined1 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 uVar6;
  char cVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int *piVar12;
  byte *extraout_r3;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  undefined4 uVar18;
  byte *pbVar19;
  byte *unaff_r9;
  byte *pbVar20;
  byte *unaff_r11;
  byte *local_70;
  byte *local_6c;
  byte *local_68;
  byte *local_64;
  byte **local_60;
  undefined1 *local_5c;
  uint local_58;
  byte *local_54;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  int local_38;
  byte *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  
  pbVar8 = param_2 + param_3;
  if (param_3 == 0) {
    pbVar10 = (byte *)0x0;
    pbVar20 = (byte *)0x0;
    pbVar16 = param_2;
joined_r0x01658078:
    do {
      do {
        pbVar19 = pbVar8;
        if (pbVar16 == pbVar19) goto LAB_01658184;
        pbVar8 = pbVar19 + -1;
        uVar14 = (uint)(char)*pbVar8;
        if (0x7fffffff < uVar14) {
          pbVar8 = pbVar19 + -2;
          bVar1 = *pbVar8;
          if ((char)bVar1 < -0x40) {
            pbVar8 = pbVar19 + -3;
            bVar2 = *pbVar8;
            if ((char)bVar2 < -0x40) {
              pbVar8 = pbVar19 + -4;
              uVar17 = (int)(char)bVar2 & 0x3fU | (*pbVar8 & 7) << 6;
            }
            else {
              uVar17 = bVar2 & 0xf;
            }
            uVar17 = (int)(char)bVar1 & 0x3fU | uVar17 << 6;
          }
          else {
            uVar17 = bVar1 & 0x1f;
          }
          uVar14 = uVar14 & 0x3f | uVar17 << 6;
        }
        unaff_r9 = pbVar19;
      } while ((uVar14 - 9 < 5) || (uVar14 == 0x20));
      if (uVar14 < 0x80) break;
      uVar17 = uVar14 >> 8;
      if (uVar17 < 0x20) {
        if (uVar17 == 0) {
          bVar1 = (&DAT_00533bcd)[uVar14 & 0xff] & 1;
joined_r0x01658178:
          if (bVar1 == 0) break;
        }
        else if ((uVar17 != 0x16) || (uVar14 != 0x1680)) break;
        goto joined_r0x01658078;
      }
      if (uVar17 == 0x20) {
        bVar1 = (&DAT_00533bcd)[uVar14 & 0xff] & 2;
        goto joined_r0x01658178;
      }
    } while (!(uVar17 != 0x30 || uVar14 != 0x3000));
    pbVar10 = pbVar19 + ((int)pbVar10 - (int)pbVar16);
LAB_01658184:
    iVar13 = (int)pbVar10 - (int)pbVar20;
    if (iVar13 != 0) {
      param_2 = param_2 + (int)pbVar20;
      DataMemoryBarrier(0xb);
      if (DAT_01d4eec8 != 2) {
        FUN_0165b6b8(&DAT_01d4eeb8,&DAT_01d4eeb8);
      }
      FUN_01658cd4(&local_58,DAT_01d4eeb8,DAT_01d4eebc,param_2,iVar13);
      if (local_58 == 2) {
        DataMemoryBarrier(0xb);
        if (DAT_01d4eee0 != 2) {
          FUN_0165b6b8(&DAT_01d4eed0,&DAT_01d4eed0);
        }
        FUN_01658cd4(&local_58,DAT_01d4eed0,DAT_01d4eed4,param_2,iVar13);
        if (local_58 == 2) {
          DataMemoryBarrier(0xb);
          if (DAT_01d4eef8 != 2) {
            FUN_0165b6b8(&DAT_01d4eee8,&DAT_01d4eee8);
          }
          FUN_01658cd4(&local_58,DAT_01d4eee8,DAT_01d4eeec,param_2,iVar13);
          if (local_58 == 2) {
            uVar6 = 4;
            goto LAB_01658190;
          }
          uVar6 = 4;
          FUN_016caef4(&local_30,&local_58,&DAT_0056ee18,4);
          pbVar3 = local_28;
          pbVar10 = local_2c;
          pbVar8 = local_30;
          FUN_016caef4(&local_30,&local_58,"labels",6);
          pbVar4 = local_28;
          pbVar19 = local_2c;
          pbVar20 = local_30;
          FUN_016caef4(&local_30,&local_58,"value",5);
          pbVar5 = local_28;
          pbVar15 = local_2c;
          pbVar16 = local_30;
          FUN_016caef4(&local_30,&local_58,&DAT_004c1920,9);
          iVar13 = 0;
          if (pbVar8 != (byte *)0x0) {
            iVar13 = local_38;
          }
          iVar9 = 0;
          if (pbVar16 != (byte *)0x0) {
            iVar9 = local_38;
          }
          if (((uint)pbVar16 & (uint)pbVar8) != 0) {
            if (pbVar3 < pbVar10) goto LAB_01658620;
            if (pbVar10 != (byte *)0x0) {
              if (pbVar10 < local_34) {
                if (-0x41 < (char)pbVar10[local_38]) goto LAB_016585fc;
              }
              else if (pbVar10 == local_34) goto LAB_016585fc;
              goto LAB_01658620;
            }
LAB_016585fc:
            if (pbVar3 != (byte *)0x0) {
              if (pbVar3 < local_34) {
                if ((char)pbVar3[local_38] < -0x40) goto LAB_01658620;
              }
              else if (pbVar3 != local_34) {
LAB_01658620:
                local_28 = pbVar3;
                local_2c = pbVar10;
                goto LAB_01658810;
              }
            }
            if (pbVar20 == (byte *)0x0) {
              pbVar8 = (byte *)0x0;
            }
            else {
              if (pbVar4 < pbVar19) goto LAB_01658714;
              if (pbVar19 != (byte *)0x0) {
                if (pbVar19 < local_34) {
                  if (-0x41 < (char)pbVar19[local_38]) goto LAB_016586f0;
                }
                else if (pbVar19 == local_34) goto LAB_016586f0;
                goto LAB_01658714;
              }
LAB_016586f0:
              if (pbVar4 != (byte *)0x0) {
                if (pbVar4 < local_34) {
                  if ((char)pbVar4[local_38] < -0x40) goto LAB_01658714;
                }
                else if (pbVar4 != local_34) {
LAB_01658714:
                  local_28 = pbVar4;
                  local_2c = pbVar19;
                  goto LAB_01658810;
                }
              }
              pbVar8 = pbVar19 + local_38;
              pbVar19 = pbVar4 + -(int)pbVar19;
            }
            if (pbVar5 < pbVar15) goto LAB_01658788;
            if (pbVar15 != (byte *)0x0) {
              if (pbVar15 < local_34) {
                if (-0x41 < (char)pbVar15[local_38]) goto LAB_01658764;
              }
              else if (pbVar15 == local_34) goto LAB_01658764;
              goto LAB_01658788;
            }
LAB_01658764:
            if (pbVar5 != (byte *)0x0) {
              if (pbVar5 < local_34) {
                if ((char)pbVar5[local_38] < -0x40) goto LAB_01658788;
              }
              else if (pbVar5 != local_34) {
LAB_01658788:
                local_28 = pbVar5;
                local_2c = pbVar15;
                goto LAB_01658810;
              }
            }
            if (local_30 == (byte *)0x0) {
              local_2c = (byte *)0x0;
            }
            else {
              if (local_28 < local_2c) goto LAB_01658810;
              if (local_2c != (byte *)0x0) {
                if (local_2c < local_34) {
                  if ((char)local_2c[local_38] < -0x40) goto LAB_01658810;
                }
                else if (local_2c != local_34) goto LAB_01658810;
              }
              if (local_28 != (byte *)0x0) {
                if (local_28 < local_34) {
                  if ((char)local_28[local_38] < -0x40) goto LAB_01658810;
                }
                else if (local_28 != local_34) {
LAB_01658810:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb514(local_38,local_34,local_2c,local_28,&DAT_01d06cf0);
                }
              }
              local_34 = local_28 + -(int)local_2c;
              local_2c = local_2c + local_38;
            }
            uVar6 = 2;
            *(byte **)(param_1 + 4) = pbVar8;
            *(byte **)(param_1 + 8) = pbVar19;
            *(byte **)(param_1 + 0xc) = local_2c;
            *(byte **)(param_1 + 0x10) = local_34;
            *(byte **)(param_1 + 0x14) = pbVar10 + iVar13;
            *(int *)(param_1 + 0x18) = (int)pbVar3 - (int)pbVar10;
            *(byte **)(param_1 + 0x1c) = pbVar15 + iVar9;
            *(int *)(param_1 + 0x20) = (int)pbVar5 - (int)pbVar15;
          }
          *param_1 = uVar6;
          goto LAB_0165887c;
        }
        if ((local_58 & 1) == 0) {
LAB_0165853c:
          uVar6 = 4;
        }
        else {
          if (*(byte **)(local_44 + 0x10) == &DAT_00000001) {
            pbVar16 = &DAT_00000003;
            pbVar8 = (byte *)0x2;
LAB_016582ec:
            iVar13 = 0;
            if (pbVar8 < local_48 && pbVar16 < local_48) {
              iVar9 = *(int *)(local_4c + (int)pbVar8 * 4);
              if (iVar9 != 0) {
                pbVar16 = *(byte **)(local_4c + (int)pbVar16 * 4);
              }
              if (iVar9 != 0 && pbVar16 != (byte *)0x0) {
                unaff_r9 = pbVar16 + -1;
                unaff_r11 = (byte *)(iVar9 + -1);
                local_6c = local_34;
                iVar13 = local_38;
              }
            }
          }
          else {
            iVar13 = 0;
            if ((local_54 < *(byte **)(local_44 + 0x10)) &&
               (puVar11 = (undefined4 *)(*(int *)(local_44 + 0xc) + (int)local_54 * 8),
               pbVar8 = (byte *)*puVar11, 1 < (uint)(puVar11[1] - (int)pbVar8))) {
              pbVar16 = pbVar8 + 1;
              goto LAB_016582ec;
            }
          }
          pbVar16 = &DAT_00000005;
          pbVar10 = &SUB_00000004;
          pbVar8 = *(byte **)(local_44 + 0x10);
          if (pbVar8 == &DAT_00000001) {
LAB_0165852c:
            if (pbVar10 < local_48 && pbVar16 < local_48) {
              iVar9 = *(int *)(local_4c + (int)pbVar10 * 4);
              if (iVar9 != 0) {
                pbVar8 = *(byte **)(local_4c + (int)pbVar16 * 4);
              }
              if (iVar9 != 0 && pbVar8 != (byte *)0x0) {
                uVar6 = 4;
                if (iVar13 == 0) goto LAB_01658540;
                pbVar10 = pbVar8 + -1;
                pbVar16 = (byte *)(iVar9 + -1);
                if (pbVar10 < pbVar16) goto LAB_01658c20;
                if (pbVar16 != (byte *)0x0) {
                  if (pbVar16 < local_34) {
                    if ((char)pbVar16[local_38] < -0x40) goto LAB_01658c20;
                  }
                  else if (pbVar16 != local_34) goto LAB_01658c20;
                }
                if (pbVar10 != (byte *)0x0) {
                  if (pbVar10 < local_34) {
                    if ((char)pbVar10[local_38] < -0x40) goto LAB_01658c20;
                  }
                  else if (pbVar10 != local_34) goto LAB_01658c20;
                }
                cVar7 = FUN_016578f4(pbVar16 + local_38,(int)pbVar8 - iVar9);
                if (cVar7 == '\x02') {
                  if (unaff_r11 <= unaff_r9) {
                    if (unaff_r11 == (byte *)0x0) {
LAB_01658a00:
                      if (unaff_r9 == (byte *)0x0) {
LAB_01658a50:
                        pbVar20 = unaff_r9 + -(int)unaff_r11;
                        pbVar8 = unaff_r11 + iVar13;
                        local_5c = &LAB_018a13b8;
                        local_60 = &local_68;
                        local_68 = pbVar8;
                        local_64 = pbVar20;
                        FUN_00664898(&local_30,&DAT_005a2fa4,&local_60);
                        local_70 = local_30;
                        if (unaff_r11 != (byte *)0x0) {
                          if (unaff_r11 < local_6c) {
                            if ((char)*pbVar8 < -0x40) goto LAB_01658b34;
                          }
                          else if (unaff_r11 != local_6c) goto LAB_01658b34;
                        }
                        if (unaff_r9 != (byte *)0x0) {
                          if (unaff_r9 < local_6c) {
                            if ((char)unaff_r9[iVar13] < -0x40) goto LAB_01658b34;
                          }
                          else if (unaff_r9 != local_6c) {
LAB_01658b34:
                    /* WARNING: Subroutine does not return */
                            FUN_012fb514(iVar13,local_6c,unaff_r11,unaff_r9,&DAT_01d06cf0);
                          }
                        }
                        if ((int)pbVar20 < 0) {
                          uVar18 = 0;
LAB_01658b68:
                    /* WARNING: Subroutine does not return */
                          FUN_00664620(uVar18,pbVar20);
                        }
                        if (pbVar20 == (byte *)0x0) {
                          pbVar10 = (byte *)0x0;
                          iVar13 = 1;
                        }
                        else {
                          uVar18 = 1;
                          iVar13 = FUN_01298504(pbVar20,1);
                          if (iVar13 == 0) goto LAB_01658b68;
                          pbVar10 = pbVar20;
                        }
                        FUN_01bed4e2(iVar13,pbVar8,pbVar20);
                        pbVar8 = local_28;
                        pbVar16 = local_2c;
                        goto LAB_01658bec;
                      }
                      if (unaff_r9 < local_6c) {
                        if (-0x41 < (char)unaff_r9[iVar13]) goto LAB_01658a50;
                      }
                      else if (unaff_r9 == local_6c) goto LAB_01658a50;
                    }
                    else if (unaff_r11 < local_6c) {
                      if (-0x41 < (char)unaff_r11[iVar13]) goto LAB_01658a00;
                    }
                    else if (unaff_r11 == local_6c) goto LAB_01658a00;
                  }
                }
                else if (unaff_r11 <= unaff_r9) {
                  if (unaff_r11 == (byte *)0x0) {
LAB_01658a28:
                    if (unaff_r9 == (byte *)0x0) {
LAB_01658ac4:
                      pbVar8 = unaff_r9 + -(int)unaff_r11;
                      if ((int)pbVar8 < 0) {
                        uVar18 = 0;
LAB_01658ad4:
                    /* WARNING: Subroutine does not return */
                        FUN_00664620(uVar18,pbVar8);
                      }
                      if (pbVar8 == (byte *)0x0) {
                        pbVar16 = &DAT_00000001;
                        local_70 = (byte *)0x0;
                      }
                      else {
                        uVar18 = 1;
                        pbVar16 = (byte *)FUN_01298504(pbVar8,1);
                        if (pbVar16 == (byte *)0x0) goto LAB_01658ad4;
                        local_70 = pbVar8;
                      }
                      FUN_01bed4e2(pbVar16,unaff_r11 + iVar13,pbVar8);
                      pbVar10 = &DAT_80000000;
LAB_01658bec:
                      uVar6 = 1;
                      *(byte **)(param_1 + 4) = pbVar10;
                      *(int *)(param_1 + 8) = iVar13;
                      *(byte **)(param_1 + 0xc) = pbVar20;
                      *(byte **)(param_1 + 0x10) = local_70;
                      *(byte **)(param_1 + 0x14) = pbVar16;
                      *(byte **)(param_1 + 0x18) = pbVar8;
                      param_1[1] = cVar7;
                      goto LAB_01658540;
                    }
                    if (unaff_r9 < local_6c) {
                      if (-0x41 < (char)unaff_r9[iVar13]) goto LAB_01658ac4;
                    }
                    else if (unaff_r9 == local_6c) goto LAB_01658ac4;
                  }
                  else if (unaff_r11 < local_6c) {
                    if (-0x41 < (char)unaff_r11[iVar13]) goto LAB_01658a28;
                  }
                  else if (unaff_r11 == local_6c) goto LAB_01658a28;
                }
                local_38 = iVar13;
                local_34 = local_6c;
                pbVar16 = unaff_r11;
                pbVar10 = unaff_r9;
LAB_01658c20:
                    /* WARNING: Subroutine does not return */
                FUN_012fb514(local_38,local_34,pbVar16,pbVar10,&DAT_01d06cf0);
              }
            }
            goto LAB_0165853c;
          }
          uVar6 = 4;
          if ((local_54 < pbVar8) &&
             (piVar12 = (int *)(*(int *)(local_44 + 0xc) + (int)local_54 * 8), iVar9 = *piVar12,
             3 < (uint)(piVar12[1] - iVar9))) {
            pbVar16 = (byte *)(iVar9 + 3);
            pbVar10 = (byte *)(iVar9 + 2);
            goto LAB_0165852c;
          }
        }
LAB_01658540:
        *param_1 = uVar6;
        goto LAB_0165887c;
      }
      if ((local_58 & 1) == 0) {
LAB_016584b0:
        pbVar19 = &SUB_00000004;
      }
      else {
        pbVar20 = *(byte **)(local_44 + 0x10);
        pbVar8 = extraout_r3;
        if (pbVar20 == &DAT_00000001) {
          pbVar16 = &DAT_00000003;
          pbVar10 = (byte *)0x2;
LAB_01658288:
          iVar13 = 0;
          pbVar20 = local_48;
          if (pbVar10 < local_48 && pbVar16 < local_48) {
            pbVar20 = *(byte **)(local_4c + (int)pbVar10 * 4);
            pbVar8 = local_4c;
            if (pbVar20 != (byte *)0x0) {
              pbVar8 = *(byte **)(local_4c + (int)pbVar16 * 4);
            }
            if (pbVar20 != (byte *)0x0 && pbVar8 != (byte *)0x0) {
              pbVar8 = pbVar8 + -1;
              pbVar20 = pbVar20 + -1;
              iVar13 = local_38;
              pbVar16 = local_34;
            }
          }
        }
        else {
          iVar13 = 0;
          pbVar16 = local_44;
          if (local_54 < pbVar20) {
            puVar11 = (undefined4 *)(*(int *)(local_44 + 0xc) + (int)local_54 * 8);
            pbVar10 = (byte *)*puVar11;
            pbVar16 = (byte *)(puVar11[1] - (int)pbVar10);
            if (&DAT_00000001 < pbVar16) {
              pbVar16 = pbVar10 + 1;
              goto LAB_01658288;
            }
          }
        }
        pbVar10 = &DAT_00000005;
        pbVar19 = &SUB_00000004;
        if (*(byte **)(local_44 + 0x10) == &DAT_00000001) {
LAB_016584a0:
          if (pbVar19 < local_48 && pbVar10 < local_48) {
            iVar9 = *(int *)(local_4c + (int)pbVar19 * 4);
            if (iVar9 != 0) {
              pbVar10 = *(byte **)(local_4c + (int)pbVar10 * 4);
            }
            if (iVar9 != 0 && pbVar10 != (byte *)0x0) {
              pbVar19 = &SUB_00000004;
              if (iVar13 == 0) goto LAB_016584b4;
              if (pbVar8 < pbVar20) goto LAB_01658920;
              if (pbVar20 != (byte *)0x0) {
                if (pbVar20 < pbVar16) {
                  if ((char)pbVar20[iVar13] < -0x40) goto LAB_01658920;
                }
                else if (pbVar20 != pbVar16) goto LAB_01658920;
              }
              if (pbVar8 != (byte *)0x0) {
                if (pbVar8 < pbVar16) {
                  if ((char)pbVar8[iVar13] < -0x40) goto LAB_01658920;
                }
                else if (pbVar8 != pbVar16) goto LAB_01658920;
              }
              pbVar16 = pbVar10 + -1;
              pbVar15 = (byte *)(iVar9 + -1);
              if (pbVar16 < pbVar15) goto LAB_01658910;
              if (pbVar15 != (byte *)0x0) {
                if (pbVar15 < local_34) {
                  if (-0x41 < (char)pbVar15[local_38]) goto LAB_016588f0;
                }
                else if (pbVar15 == local_34) goto LAB_016588f0;
                goto LAB_01658910;
              }
LAB_016588f0:
              if (pbVar16 != (byte *)0x0) {
                if (pbVar16 < local_34) {
                  if ((char)pbVar16[local_38] < -0x40) goto LAB_01658910;
                }
                else if (pbVar16 != local_34) {
LAB_01658910:
                  iVar13 = local_38;
                  pbVar16 = local_34;
                  pbVar20 = pbVar15;
LAB_01658920:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb514(iVar13,pbVar16,pbVar20);
                }
              }
              pbVar19 = (byte *)0x0;
              *(byte **)(param_1 + 4) = pbVar20 + iVar13;
              *(int *)(param_1 + 8) = (int)pbVar8 - (int)pbVar20;
              *(byte **)(param_1 + 0xc) = pbVar15 + local_38;
              *(int *)(param_1 + 0x10) = (int)pbVar10 - iVar9;
              goto LAB_016584b4;
            }
          }
          goto LAB_016584b0;
        }
        if ((local_54 < *(byte **)(local_44 + 0x10)) &&
           (piVar12 = (int *)(*(int *)(local_44 + 0xc) + (int)local_54 * 8), iVar9 = *piVar12,
           3 < (uint)(piVar12[1] - iVar9))) {
          pbVar10 = (byte *)(iVar9 + 3);
          pbVar19 = (byte *)(iVar9 + 2);
          goto LAB_016584a0;
        }
      }
LAB_016584b4:
      *param_1 = (char)pbVar19;
LAB_0165887c:
      FUN_0169f478(&local_58);
      return;
    }
  }
  else {
    pbVar20 = (byte *)0x0;
    pbVar10 = param_2;
    do {
      pbVar16 = pbVar10 + 1;
      uVar14 = (uint)*pbVar10;
      if (0x7fffffff < (uint)(int)(char)*pbVar10) {
        if (uVar14 < 0xe0) {
          uVar14 = pbVar10[1] & 0x3f | (uVar14 & 0x1f) << 6;
          pbVar16 = pbVar10 + 2;
        }
        else {
          uVar17 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
          if (uVar14 < 0xf0) {
            uVar14 = uVar17 | (uVar14 & 0x1f) << 0xc;
            pbVar16 = pbVar10 + 3;
          }
          else {
            pbVar16 = pbVar10 + 4;
            uVar14 = pbVar10[3] & 0x3f | uVar17 << 6 | (uVar14 & 7) << 0x12;
          }
        }
      }
      pbVar10 = pbVar20 + ((int)pbVar16 - (int)pbVar10);
      if ((4 < uVar14 - 9) && (uVar14 != 0x20)) {
        if (uVar14 < 0x80) goto joined_r0x01658078;
        uVar17 = uVar14 >> 8;
        if (uVar17 < 0x20) {
          if (uVar17 == 0) {
            bVar1 = (&DAT_00533bcd)[uVar14 & 0xff] & 1;
            goto joined_r0x01658060;
          }
          if (uVar17 != 0x16) goto joined_r0x01658078;
          if (uVar14 != 0x1680) goto joined_r0x01658078;
        }
        else if (uVar17 == 0x20) {
          bVar1 = (&DAT_00533bcd)[uVar14 & 0xff] & 2;
joined_r0x01658060:
          if (bVar1 == 0) goto joined_r0x01658078;
        }
        else {
          if (uVar17 != 0x30) goto joined_r0x01658078;
          if (uVar14 != 0x3000) goto joined_r0x01658078;
        }
      }
      pbVar20 = pbVar10;
      pbVar10 = pbVar16;
    } while (pbVar16 != pbVar8);
  }
  uVar6 = 3;
LAB_01658190:
  *param_1 = uVar6;
  return;
}

