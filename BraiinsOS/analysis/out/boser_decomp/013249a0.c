// FUN_013249a0 @ 013249a0 size=1828 calls_out=9 calls_in=2
// strings: 

void FUN_013249a0(int *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  bool bVar20;
  ulonglong uVar21;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  int local_38;
  undefined1 local_34;
  undefined4 local_30;
  char *local_2c;
  undefined2 local_28;
  
  FUN_013242d8(&local_4c);
  pcVar6 = local_40;
  pcVar5 = local_44;
  pcVar4 = local_48;
  if (local_4c == (char *)0x0) {
    *param_1 = -0x80000000;
    goto LAB_01324a54;
  }
  if (local_48 == (char *)0x0) {
    uVar12 = 2;
    if ((local_38 != 0) && ((*(byte *)((int)param_4 + 5) & 1) == 0)) {
LAB_01324a28:
      *param_1 = -0x80000000;
      local_48._0_1_ = 0xe;
LAB_01324a54:
      *(undefined1 *)(param_1 + 1) = local_48._0_1_;
      return;
    }
  }
  else {
    cVar1 = *(char *)((int)param_4 + 5);
    if (local_38 == 0) {
      if (*local_4c == '<') {
        *param_1 = -0x80000000;
        if (cVar1 == '\0') {
          local_48._0_1_ = 0;
        }
        else {
          local_48._0_1_ = 0xf;
        }
        goto LAB_01324a54;
      }
    }
    else if (cVar1 == '\0') goto LAB_01324a28;
    uVar12 = 3;
    if (local_48 < &DAT_00000041) {
      if ((*local_4c == '\"') && ((local_4c + (int)local_48)[-1] == '\"')) {
        uVar12 = 2;
        if ((char *)0x2 < local_48) {
          pbVar14 = (byte *)(local_4c + 1);
          bVar3 = *pbVar14;
          if ((char)bVar3 < -0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_4c,local_48,1,local_48 + -1,&DAT_01ce4fec);
          }
          pbVar7 = pbVar14 + (int)local_48;
          do {
            puVar13 = (undefined1 *)(uint)bVar3;
            if ((char)bVar3 < '\0') {
              if (puVar13 < (undefined1 *)0xe0) {
                puVar13 = (undefined1 *)(pbVar14[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
                pbVar14 = pbVar14 + 2;
              }
              else {
                uVar15 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
                if (puVar13 < (undefined1 *)0xf0) {
                  puVar13 = (undefined1 *)(uVar15 | ((uint)puVar13 & 0x1f) << 0xc);
                  pbVar14 = pbVar14 + 3;
                }
                else {
                  puVar13 = (undefined1 *)
                            (pbVar14[3] & 0x3f | uVar15 << 6 | ((uint)puVar13 & 7) << 0x12);
                  if (puVar13 == &DAT_00110000) goto LAB_01324c90;
                  pbVar14 = pbVar14 + 4;
                }
              }
            }
            else {
              pbVar14 = pbVar14 + 1;
            }
            if (puVar13 != (undefined1 *)0x9 && puVar13 != (undefined1 *)0x20) {
              if (puVar13 == (undefined1 *)0x5c) {
                uVar12 = 0;
                if (pbVar14 == pbVar7 + -2) break;
                puVar13 = (undefined1 *)(uint)*pbVar14;
                pbVar16 = pbVar14 + 1;
                if (0x7fffffff < (uint)(int)(char)*pbVar14) {
                  if (puVar13 < (undefined1 *)0xe0) {
                    puVar13 = (undefined1 *)(pbVar14[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
                    pbVar16 = pbVar14 + 2;
                  }
                  else {
                    uVar15 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
                    if (puVar13 < (undefined1 *)0xf0) {
                      puVar13 = (undefined1 *)(uVar15 | ((uint)puVar13 & 0x1f) << 0xc);
                      pbVar16 = pbVar14 + 3;
                    }
                    else {
                      puVar13 = (undefined1 *)
                                (pbVar14[3] & 0x3f | uVar15 << 6 | ((uint)puVar13 & 7) << 0x12);
                      if (puVar13 == &DAT_00110000) break;
                      pbVar16 = pbVar14 + 4;
                    }
                  }
                }
                pbVar14 = pbVar16;
                if ((undefined1 *)0x5d < puVar13 + -0x21) break;
              }
              else if (puVar13 != (undefined1 *)0x21) {
                puVar10 = puVar13 + -0x23;
                bVar20 = (undefined1 *)0x38 < puVar10;
                if (bVar20) {
                  puVar10 = puVar13 + -0x5d;
                }
                if (bVar20 && &DAT_00000022 <= puVar10) {
                  uVar15 = (uint)puVar13 >> 8 & 0xff;
                  uVar17 = (int)puVar13 << 0x18 | uVar15 << 0x10 | ((uint)puVar13 >> 0x10) << 8;
                  uVar12 = 0;
                  if (((((uint)puVar13 >> 0x10 != 0) || (uVar17 < 0x80000000)) ||
                      (0x1d < uVar15 - 0xc2)) || (0xbfffffff < uVar17)) break;
                }
              }
            }
            if (pbVar14 == pbVar7 + -2) goto LAB_01324c90;
            bVar3 = *pbVar14;
          } while( true );
        }
      }
      else {
        local_28 = 1;
        local_34 = 1;
        local_2c = local_48;
        local_30 = 0;
        local_38 = 0x2e;
        local_3c = local_48;
        local_48 = local_4c;
        local_44 = pcVar4;
        local_40 = (char *)0x0;
        local_4c = &DAT_0000002e;
        do {
          iVar8 = FUN_01a5c3e4(&local_4c);
          if (iVar8 == 0) goto LAB_01324c90;
          iVar8 = FUN_01324808();
        } while (iVar8 != 0);
        uVar12 = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = uVar12;
  goto LAB_01324c84;
LAB_01324c90:
  if (pcVar6 == (char *)0x0) {
    uVar12 = 4;
  }
  else {
    uVar12 = 5;
    if (pcVar6 < (char *)0xff) {
      uVar15 = *param_4;
      if ((*pcVar5 == '[') && ((pcVar5 + (int)pcVar6)[-1] == ']')) {
        uVar12 = 0xd;
        if ((param_4[1] & 1) != 0) {
          if ((pcVar6 + -1 == (char *)0x0) ||
             (pbVar14 = (byte *)(pcVar5 + 1), (char)*pbVar14 < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(pcVar5,pcVar6,1,pcVar6 + -1,&DAT_01ce4fdc);
          }
          if (pcVar6 + -2 != (char *)0x0) {
            pbVar7 = pbVar14;
            do {
              pbVar16 = pbVar7 + 1;
              puVar13 = (undefined1 *)(uint)*pbVar7;
              if (0x7fffffff < (uint)(int)(char)*pbVar7) {
                if (puVar13 < (undefined1 *)0xe0) {
                  puVar13 = (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
                  pbVar16 = pbVar7 + 2;
                }
                else {
                  uVar15 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
                  if (puVar13 < (undefined1 *)0xf0) {
                    puVar13 = (undefined1 *)(uVar15 | ((uint)puVar13 & 0x1f) << 0xc);
                    pbVar16 = pbVar7 + 3;
                  }
                  else {
                    puVar13 = (undefined1 *)
                              (pbVar7[3] & 0x3f | uVar15 << 6 | ((uint)puVar13 & 7) << 0x12);
                    if (puVar13 == &DAT_00110000) break;
                    pbVar16 = pbVar7 + 4;
                  }
                }
              }
              puVar10 = puVar13 + -0x21;
              bVar20 = (undefined1 *)0x39 < puVar10;
              if (bVar20) {
                puVar10 = puVar13 + -0x5e;
              }
              if (bVar20 && (undefined1 *)0x20 < puVar10) {
                uVar15 = (uint)puVar13 >> 8 & 0xff;
                uVar17 = (int)puVar13 << 0x18 | uVar15 << 0x10 | ((uint)puVar13 >> 0x10) << 8;
                uVar12 = 0;
                if (((uint)puVar13 >> 0x10 != 0) ||
                   ((0x1d < uVar15 - 0xc2 || 0xbfffffff < uVar17) || -1 < (int)uVar17))
                goto LAB_01324de0;
              }
              pbVar7 = pbVar16;
            } while (pbVar16 != pbVar14 + (int)(pcVar6 + -2));
          }
          goto LAB_0132501c;
        }
      }
      else {
        uVar17 = 0;
        local_28 = 1;
        local_34 = 1;
        local_2c = pcVar6;
        local_30 = 0;
        local_38 = 0x2e;
        local_3c = pcVar6;
        local_40 = (char *)0x0;
        local_4c = &DAT_0000002e;
        local_48 = pcVar5;
        local_44 = pcVar6;
        while( true ) {
          uVar21 = FUN_01a5c3e4(&local_4c);
          iVar8 = (int)(uVar21 >> 0x20);
          pbVar14 = (byte *)uVar21;
          if (pbVar14 == (byte *)0x0) break;
          if (iVar8 == 0) {
            uVar12 = 6;
            goto LAB_01324de0;
          }
          uVar18 = (uint)*pbVar14;
          if ((uint)(int)(char)*pbVar14 < 0x80000000) {
LAB_01324ea8:
            if ((uVar18 - 0x30 < 10) || ((uVar18 & 0x5f) - 0x41 < 0x1a)) goto LAB_01324ec4;
LAB_01325004:
            uVar12 = 0;
            goto LAB_01324de0;
          }
          if (uVar18 < 0xe0) {
            uVar18 = pbVar14[1] & 0x3f | (uVar18 & 0x1f) << 6;
          }
          else {
            uVar11 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
            if (uVar18 < 0xf0) {
              uVar18 = uVar11 | (uVar18 & 0x1f) << 0xc;
            }
            else {
              uVar18 = pbVar14[3] & 0x3f | uVar11 << 6 | (uVar18 & 7) << 0x12;
            }
          }
          if (uVar18 < 0x80) goto LAB_01324ea8;
          uVar12 = 0;
          if ((uVar18 < 0xaa) ||
             ((iVar9 = FUN_0130743c(uVar18), iVar9 == 0 &&
              ((uVar18 < 0xb2 || (iVar9 = FUN_013077ac(uVar18), iVar9 == 0)))))) goto LAB_01324de0;
LAB_01324ec4:
          uVar18 = (uint)(char)pbVar14[iVar8 + -1];
          if (uVar18 < 0x80000000) {
LAB_01324f68:
            if ((9 < uVar18 - 0x30) && (0x19 < (uVar18 & 0x5f) - 0x41)) goto LAB_01325004;
          }
          else {
            bVar3 = pbVar14[iVar8 + -2];
            if ((char)bVar3 < -0x40) {
              bVar2 = pbVar14[iVar8 + -3];
              if ((char)bVar2 < -0x40) {
                uVar11 = (int)(char)bVar2 & 0x3fU | (pbVar14[iVar8 + -4] & 7) << 6;
              }
              else {
                uVar11 = bVar2 & 0xf;
              }
              uVar11 = (int)(char)bVar3 & 0x3fU | uVar11 << 6;
            }
            else {
              uVar11 = bVar3 & 0x1f;
            }
            uVar18 = uVar18 & 0x3f | uVar11 << 6;
            if (uVar11 < 2) goto LAB_01324f68;
            uVar12 = 0;
            if ((uVar18 < 0xaa) ||
               ((iVar9 = FUN_0130743c(uVar18), iVar9 == 0 &&
                ((uVar18 < 0xb2 || (iVar9 = FUN_013077ac(uVar18), iVar9 == 0))))))
            goto LAB_01324de0;
          }
          uVar12 = 0;
          if (0x3fffffffff < uVar21) {
            uVar12 = 7;
            goto LAB_01324de0;
          }
          iVar8 = FUN_01324808(pbVar14,iVar8);
          if (iVar8 == 0) goto LAB_01324de0;
          uVar17 = uVar17 + 1;
        }
        uVar12 = 8;
        if (uVar15 <= uVar17) {
LAB_0132501c:
          uVar19 = 0;
          if (param_3 < 0) {
LAB_01325028:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar19,param_3);
          }
          if (param_3 == 0) {
            iVar9 = 1;
            iVar8 = 0;
          }
          else {
            uVar19 = 1;
            iVar9 = FUN_01298504(param_3,1);
            iVar8 = param_3;
            if (iVar9 == 0) goto LAB_01325028;
          }
          FUN_01bed4e2(iVar9,param_2,param_3);
          *param_1 = iVar8;
          param_1[1] = iVar9;
          param_1[2] = param_3;
          return;
        }
      }
    }
  }
LAB_01324de0:
  *(undefined1 *)(param_1 + 1) = uVar12;
LAB_01324c84:
  *param_1 = -0x80000000;
  return;
}

