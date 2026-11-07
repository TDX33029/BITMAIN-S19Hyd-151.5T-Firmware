// FUN_00fe4c54 @ 00fe4c54 size=1888 calls_out=9 calls_in=2
// strings: 

void FUN_00fe4c54(int *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 uVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  bool bVar19;
  ulonglong uVar20;
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
  
  FUN_00fe43f8(&local_4c);
  pcVar6 = local_40;
  pcVar5 = local_44;
  pcVar4 = local_48;
  if (local_4c == (char *)0x0) {
    *param_1 = -0x80000000;
    *(undefined1 *)(param_1 + 1) = local_48._0_1_;
    return;
  }
  if (local_48 == (char *)0x0) {
    uVar7 = 2;
    if ((local_38 != 0) && ((*(byte *)((int)param_4 + 5) & 1) == 0)) {
LAB_00fe4ce4:
      *param_1 = -0x80000000;
      *(undefined1 *)(param_1 + 1) = 0xe;
      return;
    }
  }
  else {
    cVar1 = *(char *)((int)param_4 + 5);
    if (local_38 == 0) {
      if (*local_4c == '<') {
        *param_1 = -0x80000000;
        if (cVar1 == '\0') {
          uVar7 = 0;
        }
        else {
          uVar7 = 0xf;
        }
        *(undefined1 *)(param_1 + 1) = uVar7;
        return;
      }
    }
    else if (cVar1 == '\0') goto LAB_00fe4ce4;
    uVar7 = 3;
    if (local_48 < &DAT_00000041) {
      if ((*local_4c == '\"') && ((local_4c + (int)local_48)[-1] == '\"')) {
        uVar7 = 2;
        if (&SUB_00000002 < local_48) {
          pbVar12 = (byte *)(local_4c + 1);
          bVar3 = *pbVar12;
          if ((char)bVar3 < -0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_4c,local_48,1,local_48 + -1,&DAT_01881738);
          }
          pbVar8 = pbVar12 + (int)local_48;
          uVar11 = (uint)bVar3;
          if ((uint)(int)(char)bVar3 < 0x80000000) goto LAB_00fe4e08;
          do {
            if (uVar11 < 0xe0) {
              uVar11 = pbVar12[1] & 0x3f | (uVar11 & 0x1f) << 6;
              pbVar12 = pbVar12 + 2;
            }
            else {
              uVar15 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
              if (uVar11 < 0xf0) {
                uVar11 = uVar15 | (uVar11 & 0x1f) << 0xc;
                pbVar12 = pbVar12 + 3;
              }
              else {
                pbVar17 = pbVar12 + 3;
                pbVar12 = pbVar12 + 4;
                uVar11 = *pbVar17 & 0x3f | uVar15 << 6 | (uVar11 & 7) << 0x12;
              }
            }
            if (uVar11 != 9) goto LAB_00fe4e14;
            while( true ) {
              if (pbVar12 == pbVar8 + -2) goto LAB_00fe4f04;
              uVar11 = (uint)*pbVar12;
              if (0x7fffffff < (uint)(int)(char)*pbVar12) break;
LAB_00fe4e08:
              pbVar12 = pbVar12 + 1;
              if (uVar11 != 9) {
LAB_00fe4e14:
                if (uVar11 != 0x20) {
                  if (uVar11 == 0x5c) {
                    uVar7 = 0;
                    if (pbVar12 == pbVar8 + -2) goto LAB_00fe4fd0;
                    uVar11 = (uint)*pbVar12;
                    pbVar17 = pbVar12 + 1;
                    if (0x7fffffff < (uint)(int)(char)*pbVar12) {
                      if (uVar11 < 0xe0) {
                        uVar11 = pbVar12[1] & 0x3f | (uVar11 & 0x1f) << 6;
                        pbVar17 = pbVar12 + 2;
                      }
                      else {
                        uVar15 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
                        if (uVar11 < 0xf0) {
                          uVar11 = uVar15 | (uVar11 & 0x1f) << 0xc;
                          pbVar17 = pbVar12 + 3;
                        }
                        else {
                          uVar11 = pbVar12[3] & 0x3f | uVar15 << 6 | (uVar11 & 7) << 0x12;
                          pbVar17 = pbVar12 + 4;
                        }
                      }
                    }
                    pbVar12 = pbVar17;
                    if (0x5d < uVar11 - 0x21) goto LAB_00fe4fd0;
                  }
                  else if (((uVar11 != 0x21) && (0x38 < uVar11 - 0x23)) && (0x21 < uVar11 - 0x5d)) {
                    uVar15 = uVar11 >> 8 & 0xff;
                    uVar7 = 0;
                    if (((uVar11 >> 0x10 != 0) ||
                        (-0x40000001 <
                         (int)(uVar11 << 0x18 | uVar15 << 0x10 | (uVar11 >> 0x10) << 8))) ||
                       (0x1d < uVar15 - 0xc2)) goto LAB_00fe4fd0;
                  }
                }
              }
            }
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
          iVar18 = FUN_015bb1b4(&local_4c);
          if (iVar18 == 0) goto LAB_00fe4f04;
          iVar18 = FUN_00fe497c();
        } while (iVar18 != 0);
        uVar7 = 0;
      }
    }
  }
LAB_00fe4fd0:
  *(undefined1 *)(param_1 + 1) = uVar7;
  *param_1 = -0x80000000;
  return;
LAB_00fe4f04:
  if (pcVar6 == (char *)0x0) {
    uVar7 = 4;
  }
  else {
    uVar7 = 5;
    if (pcVar6 < (char *)0xff) {
      uVar11 = *param_4;
      if ((*pcVar5 == '[') && ((pcVar5 + (int)pcVar6)[-1] == ']')) {
        uVar7 = 0xd;
        if ((param_4[1] & 1) != 0) {
          if ((pcVar6 + -1 == (char *)0x0) ||
             (pbVar12 = (byte *)(pcVar5 + 1), (char)*pbVar12 < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(pcVar5,pcVar6,1,pcVar6 + -1,&DAT_01881728);
          }
          if (pcVar6 + -2 != (char *)0x0) {
            uVar7 = 0;
            pbVar8 = pbVar12;
            do {
              pbVar17 = pbVar8 + 1;
              puVar14 = (undefined1 *)(uint)*pbVar8;
              if (0x7fffffff < (uint)(int)(char)*pbVar8) {
                if (puVar14 < (undefined1 *)0xe0) {
                  puVar14 = (undefined1 *)(pbVar8[1] & 0x3f | ((uint)puVar14 & 0x1f) << 6);
                  pbVar17 = pbVar8 + 2;
                }
                else {
                  uVar11 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
                  if (puVar14 < (undefined1 *)0xf0) {
                    puVar14 = (undefined1 *)(uVar11 | ((uint)puVar14 & 0x1f) << 0xc);
                    pbVar17 = pbVar8 + 3;
                  }
                  else {
                    puVar14 = (undefined1 *)
                              (pbVar8[3] & 0x3f | uVar11 << 6 | ((uint)puVar14 & 7) << 0x12);
                    if (puVar14 == &DAT_00110000) break;
                    pbVar17 = pbVar8 + 4;
                  }
                }
              }
              puVar10 = puVar14 + -0x21;
              bVar19 = (undefined1 *)0x39 < puVar10;
              if (bVar19) {
                puVar10 = puVar14 + -0x5e;
              }
              if (bVar19 && (undefined1 *)0x20 < puVar10) {
                uVar11 = (uint)puVar14 >> 8 & 0xff;
                if ((((uint)puVar14 >> 0x10 != 0) ||
                    (-0x40000001 <
                     (int)((int)puVar14 << 0x18 | uVar11 << 0x10 | ((uint)puVar14 >> 0x10) << 8)))
                   || (0x1d < uVar11 - 0xc2)) goto LAB_00fe4fe8;
              }
              pbVar8 = pbVar17;
            } while (pbVar17 != pbVar12 + (int)(pcVar6 + -2));
          }
          goto LAB_00fe530c;
        }
      }
      else {
        uVar15 = 0;
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
        uVar20 = FUN_015bb1b4(&local_4c);
        iVar18 = (int)uVar20;
        while (iVar18 != 0) {
          iVar18 = (int)(uVar20 >> 0x20);
          pbVar12 = (byte *)uVar20;
          if (iVar18 == 0) {
            uVar7 = 6;
            goto LAB_00fe4fe8;
          }
          uVar16 = (uint)*pbVar12;
          if ((uint)(int)(char)*pbVar12 < 0x80000000) {
LAB_00fe50b0:
            if ((uVar16 - 0x30 < 10) || ((uVar16 & 0x5f) - 0x41 < 0x1a)) goto LAB_00fe50cc;
LAB_00fe52f4:
            uVar7 = 0;
            goto LAB_00fe4fe8;
          }
          if (uVar16 < 0xe0) {
            uVar16 = pbVar12[1] & 0x3f | (uVar16 & 0x1f) << 6;
          }
          else {
            uVar13 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
            if (uVar16 < 0xf0) {
              uVar16 = uVar13 | (uVar16 & 0x1f) << 0xc;
            }
            else {
              uVar16 = pbVar12[3] & 0x3f | uVar13 << 6 | (uVar16 & 7) << 0x12;
            }
          }
          if (uVar16 < 0x80) goto LAB_00fe50b0;
          uVar7 = 0;
          if ((uVar16 < 0xaa) ||
             ((iVar9 = FUN_00fb7558(uVar16), iVar9 == 0 &&
              ((uVar16 < 0xb2 || (iVar9 = FUN_00fb7a34(uVar16), iVar9 == 0)))))) goto LAB_00fe4fe8;
LAB_00fe50cc:
          uVar16 = (uint)(char)pbVar12[iVar18 + -1];
          if (uVar16 < 0x80000000) {
LAB_00fe5190:
            if ((9 < uVar16 - 0x30) && (0x19 < (uVar16 & 0x5f) - 0x41)) goto LAB_00fe52f4;
          }
          else {
            bVar3 = pbVar12[iVar18 + -2];
            if ((char)bVar3 < -0x40) {
              bVar2 = pbVar12[iVar18 + -3];
              if ((char)bVar2 < -0x40) {
                uVar13 = (int)(char)bVar2 & 0x3fU | (pbVar12[iVar18 + -4] & 7) << 6;
              }
              else {
                uVar13 = bVar2 & 0xf;
              }
              uVar13 = (int)(char)bVar3 & 0x3fU | uVar13 << 6;
            }
            else {
              uVar13 = bVar3 & 0x1f;
            }
            uVar16 = uVar16 & 0x3f | uVar13 << 6;
            if (uVar13 < 2) goto LAB_00fe5190;
            uVar7 = 0;
            if ((uVar16 < 0xaa) ||
               ((iVar18 = FUN_00fb7558(uVar16), iVar18 == 0 &&
                ((uVar16 < 0xb2 || (iVar18 = FUN_00fb7a34(uVar16), iVar18 == 0))))))
            goto LAB_00fe4fe8;
          }
          uVar7 = 0;
          if (0x3fffffffff < uVar20) {
            uVar7 = 7;
            goto LAB_00fe4fe8;
          }
          iVar18 = FUN_00fe497c(pbVar12);
          if (iVar18 == 0) goto LAB_00fe4fe8;
          uVar15 = uVar15 + 1;
          uVar20 = FUN_015bb1b4(&local_4c);
          iVar18 = (int)uVar20;
        }
        uVar7 = 8;
        if (uVar11 <= uVar15) {
LAB_00fe530c:
          if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(0,param_3);
          }
          if (param_3 == 0) {
            iVar9 = 1;
            iVar18 = 0;
          }
          else {
            iVar9 = thunk_FUN_016d4a50(param_3);
            iVar18 = param_3;
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,param_3);
            }
          }
          FUN_016dd1aa(iVar9,param_2,param_3);
          *param_1 = iVar18;
          param_1[1] = iVar9;
          param_1[2] = param_3;
          return;
        }
      }
    }
  }
LAB_00fe4fe8:
  *(undefined1 *)(param_1 + 1) = uVar7;
  *param_1 = -0x80000000;
  return;
}

