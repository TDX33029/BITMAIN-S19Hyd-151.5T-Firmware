// FUN_016b3bfc @ 016b3bfc size=4424 calls_out=13 calls_in=4
// strings: 

undefined8
FUN_016b3bfc(uint *param_1,uint param_2,byte *param_3,uint param_4,byte *param_5,byte *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  bool bVar17;
  ulonglong uVar18;
  uint local_2c;
  
  bVar1 = *param_3;
  uVar4 = param_4 + 1;
  do {
    local_2c = param_1[2];
    pbVar10 = param_5;
    pbVar12 = param_5;
    if (param_5 != param_6) {
      do {
        while( true ) {
          param_5 = pbVar12 + 1;
          uVar8 = (uint)*pbVar12;
          if ((char)*pbVar12 < '\0') break;
joined_r0x016b3c9c:
          if (uVar8 < 0xe) goto LAB_016b3ca0;
LAB_016b3d28:
          uVar14 = 1;
          if (0x7f < uVar8) {
            uVar14 = 2;
          }
          if (uVar8 < 0x800) {
            uVar13 = (int)param_6 - (int)pbVar12;
            bVar16 = uVar14 == uVar13;
            if (uVar13 <= uVar14) goto LAB_016b3d7c;
LAB_016b3d4c:
            if ((char)pbVar12[uVar14] < -0x40) {
LAB_016b4c84:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(pbVar12,uVar13,0,uVar14,&DAT_018aedd8);
            }
          }
          else {
            uVar14 = 4;
            if (uVar8 < 0x10000) {
              uVar14 = 3;
            }
            uVar13 = (int)param_6 - (int)pbVar12;
            bVar16 = uVar14 == uVar13;
            if (uVar14 < uVar13) goto LAB_016b3d4c;
LAB_016b3d7c:
            if (!bVar16) goto LAB_016b4c84;
          }
          if (uVar8 < 0x3f) {
            if (uVar8 == 0x23) goto LAB_016b3dd4;
            if ((uVar8 == 0x2f) && ((char)param_1[8] != '\x02')) {
LAB_016b477c:
              uVar8 = param_1[2];
              uVar14 = uVar8;
              if (*param_1 == uVar8) {
                FUN_016bd7fc(param_1,uVar8,1,1,1);
                uVar14 = param_1[2];
              }
              uVar13 = uVar8 + 1;
              *(undefined1 *)(param_1[1] + uVar14) = 0x2f;
              uVar14 = param_1[1];
              param_1[2] = uVar13;
              if (local_2c <= uVar8) {
                if (local_2c == 0) {
                  if (uVar8 == 0) {
                    uVar11 = 1;
                    local_2c = 0;
                    bVar16 = true;
                    uVar8 = 0;
                    goto LAB_016b425c;
                  }
                }
                else if (*(char *)(uVar14 + local_2c) < -0x40) goto LAB_016b4d28;
                bVar16 = true;
                if (-0x41 < *(char *)(uVar14 + uVar8)) {
                  uVar11 = uVar13;
                  goto LAB_016b425c;
                }
              }
LAB_016b4d28:
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(uVar14,uVar13,local_2c,uVar8,&DAT_018aee48);
            }
          }
          else if (uVar8 == 0x3f) {
LAB_016b3dd4:
            if ((char)param_1[8] == '\0') {
              uVar14 = param_1[1];
              uVar8 = param_1[2];
              if (uVar8 < local_2c) goto LAB_016b4c68;
              goto LAB_016b422c;
            }
          }
          else if (uVar8 == 0x5c) {
            uVar13 = param_2 & 0xff;
            bVar16 = uVar13 != 2;
            if (bVar16) {
              uVar13 = (uint)(byte)param_1[8];
            }
            if (bVar16 && uVar13 != 2) {
              if (param_1[6] != 0) {
                (**(code **)(param_1[7] + 0x14))(param_1[6],0);
              }
              goto LAB_016b477c;
            }
          }
          FUN_016b4e08(param_1[6],param_1[7],uVar8,param_5,param_6);
          if (((param_2 & 0xff) == 0) && (uVar8 = param_1[2], param_4 < uVar8)) {
            uVar13 = param_1[1];
            pbVar10 = (byte *)(uVar13 + uVar4);
            if ((uVar4 < uVar8) && ((char)*pbVar10 < -0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac(uVar13,uVar8,uVar4,uVar8,&DAT_018aee28);
            }
            if (((uVar8 - uVar4 == 2) && ((*pbVar10 & 0xdf) - 0x41 < 0x1a)) && (pbVar10[1] == 0x3a))
            {
              uVar11 = uVar8;
              if (*param_1 == uVar8) {
                FUN_016bd7fc(param_1,uVar8,1,1,1);
                uVar13 = param_1[1];
                uVar11 = param_1[2];
              }
              *(undefined1 *)(uVar13 + uVar11) = 0x2f;
              param_1[2] = uVar8 + 1;
              local_2c = local_2c + 1;
            }
          }
          if ((char)param_1[8] == '\x02') {
            if ((param_2 & 0xff) == 2) {
              while (uVar14 != 0) {
                pbVar10 = pbVar12 + 1;
                bVar2 = *pbVar12;
                if (((char)bVar2 < '\0') ||
                   ((*(uint *)(&DAT_00564f40 + (uint)(bVar2 >> 5) * 4) >> (bVar2 & 0x1f) & 1) != 0))
                {
                  uVar8 = uVar14 - 1;
                  pbVar12 = (byte *)("%0" + (uint)bVar2 * 3);
                  uVar14 = 3;
                }
                else {
                  pbVar10 = &DAT_00000001;
                  uVar8 = 1;
                  do {
                    uVar13 = uVar8;
                    if (uVar14 == uVar13) {
                      uVar8 = 0;
                      goto LAB_016b3ef8;
                    }
                    uVar11 = (uint)(char)pbVar12[uVar13];
                  } while ((-1 < (int)uVar11) &&
                          (uVar8 = uVar13 + 1,
                          (*(uint *)(&DAT_00564f40 + (uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0
                          ));
                  if (uVar14 < uVar13) goto LAB_016b4bac;
                  uVar8 = uVar14 - uVar13;
                  pbVar10 = pbVar12 + uVar13;
                  uVar14 = uVar13;
                }
LAB_016b3ef8:
                uVar13 = param_1[2];
                if (*param_1 - uVar13 < uVar14) {
                  FUN_016bd7fc(param_1,uVar13,uVar14,1,1);
                  uVar13 = param_1[2];
                }
                FUN_016dd1aa(param_1[1] + uVar13,pbVar12,uVar14);
                param_1[2] = uVar13 + uVar14;
                pbVar12 = pbVar10;
                uVar14 = uVar8;
              }
            }
            else {
              while (uVar14 != 0) {
                pbVar10 = pbVar12 + 1;
                bVar2 = *pbVar12;
                if (((char)bVar2 < '\0') ||
                   ((*(uint *)(&DAT_00565370 + (uint)(bVar2 >> 5) * 4) >> (bVar2 & 0x1f) & 1) != 0))
                {
                  uVar8 = uVar14 - 1;
                  pbVar12 = (byte *)("%0" + (uint)bVar2 * 3);
                  uVar14 = 3;
                }
                else {
                  pbVar10 = &DAT_00000001;
                  uVar8 = 1;
                  do {
                    uVar13 = uVar8;
                    if (uVar14 == uVar13) {
                      uVar8 = 0;
                      goto LAB_016b4120;
                    }
                    uVar11 = (uint)(char)pbVar12[uVar13];
                  } while ((-1 < (int)uVar11) &&
                          (uVar8 = uVar13 + 1,
                          (*(uint *)(&DAT_00565370 + (uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0
                          ));
                  if (uVar14 < uVar13) goto LAB_016b4bac;
                  uVar8 = uVar14 - uVar13;
                  pbVar10 = pbVar12 + uVar13;
                  uVar14 = uVar13;
                }
LAB_016b4120:
                uVar13 = param_1[2];
                if (*param_1 - uVar13 < uVar14) {
                  FUN_016bd7fc(param_1,uVar13,uVar14,1,1);
                  uVar13 = param_1[2];
                }
                FUN_016dd1aa(param_1[1] + uVar13,pbVar12,uVar14);
                param_1[2] = uVar13 + uVar14;
                pbVar12 = pbVar10;
                uVar14 = uVar8;
              }
            }
          }
          else {
            while (uVar14 != 0) {
              pbVar10 = pbVar12 + 1;
              bVar2 = *pbVar12;
              if (((char)bVar2 < '\0') ||
                 ((*(uint *)(&DAT_00564290 + (uint)(bVar2 >> 5) * 4) >> (bVar2 & 0x1f) & 1) != 0)) {
                uVar8 = uVar14 - 1;
                pbVar12 = (byte *)("%0" + (uint)bVar2 * 3);
                uVar14 = 3;
              }
              else {
                pbVar10 = &DAT_00000001;
                uVar8 = 1;
                do {
                  uVar13 = uVar8;
                  if (uVar14 == uVar13) {
                    uVar8 = 0;
                    goto LAB_016b4010;
                  }
                  uVar11 = (uint)(char)pbVar12[uVar13];
                } while ((-1 < (int)uVar11) &&
                        (uVar8 = uVar13 + 1,
                        (*(uint *)(&DAT_00564290 + (uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0))
                ;
                if (uVar14 < uVar13) {
LAB_016b4bac:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188bb90);
                }
                uVar8 = uVar14 - uVar13;
                pbVar10 = pbVar12 + uVar13;
                uVar14 = uVar13;
              }
LAB_016b4010:
              uVar13 = param_1[2];
              if (*param_1 - uVar13 < uVar14) {
                FUN_016bd7fc(param_1,uVar13,uVar14,1,1);
                uVar13 = param_1[2];
              }
              FUN_016dd1aa(param_1[1] + uVar13,pbVar12,uVar14);
              param_1[2] = uVar13 + uVar14;
              pbVar12 = pbVar10;
              uVar14 = uVar8;
            }
          }
          pbVar10 = param_5;
          pbVar12 = param_5;
          if (param_5 == param_6) goto LAB_016b421c;
        }
        if (uVar8 < 0xe0) {
          uVar8 = pbVar12[1] & 0x3f | (uVar8 & 0x1f) << 6;
          param_5 = pbVar12 + 2;
        }
        else {
          uVar14 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
          if (uVar8 < 0xf0) {
            uVar8 = uVar14 | (uVar8 & 0x1f) << 0xc;
            param_5 = pbVar12 + 3;
            goto joined_r0x016b3c9c;
          }
          param_5 = pbVar12 + 4;
          uVar8 = pbVar12[3] & 0x3f | uVar14 << 6 | (uVar8 & 7) << 0x12;
        }
        if (0xd < uVar8) goto LAB_016b3d28;
LAB_016b3ca0:
        if ((1 << (uVar8 & 0xff) & 0x2600U) == 0) goto LAB_016b3d28;
        pbVar12 = param_5;
      } while (param_5 != param_6);
      pbVar10 = param_5;
    }
LAB_016b421c:
    uVar14 = param_1[1];
    uVar8 = param_1[2];
    if (uVar8 < local_2c) {
LAB_016b4c68:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(uVar14,uVar8,local_2c,uVar8,&DAT_018aee38);
    }
LAB_016b422c:
    bVar16 = false;
    if (((local_2c != 0) && (local_2c < uVar8)) && (*(char *)(uVar14 + local_2c) < -0x40))
    goto LAB_016b4c68;
    uVar11 = uVar8;
    uVar13 = uVar8;
    param_5 = pbVar10;
LAB_016b425c:
    if (~local_2c + uVar8 < 6) {
      pbVar12 = (byte *)(uVar14 + local_2c);
      switch(~local_2c + uVar8) {
      case 0:
        if (*pbVar12 == 0x2e) {
LAB_016b42e0:
          if (local_2c <= uVar11) {
            if (((local_2c != 0) && (local_2c < uVar11)) && ((char)*pbVar12 < -0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00418707,0x30,&DAT_018aee68);
            }
            param_1[2] = local_2c;
            uVar11 = local_2c;
            uVar13 = local_2c;
          }
          if ((uVar11 == 0) || (*(char *)(uVar14 + uVar11 + -1) != '/')) {
            uVar8 = uVar13;
            if (*param_1 == uVar13) {
              FUN_016bd7fc(param_1,uVar13,1,1,1);
              uVar14 = param_1[1];
              uVar8 = param_1[2];
            }
            *(undefined1 *)(uVar14 + uVar8) = 0x2f;
LAB_016b3c54:
            param_1[2] = uVar13 + 1;
          }
        }
        break;
      case 1:
        if (*(short *)pbVar12 == 0x2e2e) {
LAB_016b4540:
          if (local_2c <= uVar11) {
            if (((local_2c != 0) && (local_2c < uVar11)) && ((char)*pbVar12 < -0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00418707,0x30,&DAT_018aee78);
            }
            param_1[2] = local_2c;
            uVar11 = local_2c;
            uVar13 = local_2c;
          }
          if ((uVar11 != 0) && (*(char *)(uVar14 + uVar11 + -1) == '/')) {
            uVar11 = uVar13 - 1;
            uVar8 = uVar11;
            if (uVar11 != 0) {
              if (uVar13 == 0) {
                uVar13 = 0;
LAB_016b4cd0:
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(uVar14,uVar13,0,uVar11,&DAT_018aeff0);
              }
              if (*(char *)(uVar14 + uVar11) < -0x40) goto LAB_016b4cd0;
            }
            while( true ) {
              uVar18 = FUN_00fb737c(0x2f,uVar14,uVar8);
              uVar8 = (uint)(uVar18 >> 0x20);
              if ((uVar18 & 1) == 0) break;
              if ((uVar8 < uVar11) && (*(char *)(uVar14 + uVar8) == '/')) {
                if (uVar8 < param_4) break;
                if (uVar13 < uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa8ac(uVar14,uVar13,uVar8,uVar13,&DAT_018af000);
                }
                uVar11 = uVar8;
                if (uVar13 != uVar8) {
                  uVar11 = uVar13 - uVar8;
                }
                if (uVar13 != uVar8 && uVar11 != 1) {
                  iVar6 = uVar14 + uVar8;
                  if ((char)*(byte *)(iVar6 + 1) < -0x40) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa8ac(iVar6,uVar11,1,uVar11,&DAT_018aedc8);
                  }
                  if (((1 < uVar11 - 1) && ((*(byte *)(iVar6 + 1) & 0xdf) - 0x41 < 0x1a)) &&
                     (*(char *)(iVar6 + 2) == '|' || *(char *)(iVar6 + 2) == ':')) {
                    if (uVar11 - 1 == 2) break;
                    uVar8 = *(byte *)(iVar6 + 3) - 0x23;
                    if (((uVar8 < 0x1d) && ((1 << (uVar8 & 0xff) & 0x10001001U) != 0)) ||
                       (*(byte *)(iVar6 + 3) == 0x5c)) break;
                  }
                }
                uVar8 = param_1[2];
                if (uVar8 != 0) {
                  iVar9 = param_1[1] + uVar8;
                  iVar6 = -1;
                  if (0x7fffffff < (uint)(int)*(char *)(iVar9 + -1)) {
                    bVar2 = *(byte *)(iVar9 + -2);
                    if ((char)bVar2 < -0x40) {
                      bVar3 = *(byte *)(iVar9 + -3);
                      if ((char)bVar3 < -0x40) {
                        uVar14 = (int)(char)bVar3 & 0x3fU | (*(byte *)(iVar9 + -4) & 7) << 6;
                      }
                      else {
                        uVar14 = bVar3 & 0xf;
                      }
                      uVar14 = (int)(char)bVar2 & 0x3fU | uVar14 << 6;
                    }
                    else {
                      uVar14 = bVar2 & 0x1f;
                    }
                    if (1 < uVar14) {
                      iVar6 = -2;
                    }
                    if ((0x1f < uVar14) && (iVar6 = -4, uVar14 < 0x400)) {
                      iVar6 = -3;
                    }
                  }
                  param_1[2] = iVar6 + uVar8;
                }
                break;
              }
              if (uVar11 < uVar8) break;
            }
          }
          uVar8 = param_1[2];
          if (uVar8 != param_4) {
            if ((param_2 & 0xff) == 0) {
              if ((param_4 != 0) &&
                 ((uVar8 <= param_4 || (*(char *)(param_1[1] + param_4) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac();
              }
              if (((uVar8 - param_4 == 2) &&
                  (pbVar12 = (byte *)(param_1[1] + param_4), (*pbVar12 & 0xdf) - 0x41 < 0x1a)) &&
                 (pbVar12[1] == 0x3a)) goto LAB_016b48b4;
            }
            FUN_016b5290(param_1,param_2,param_4);
          }
LAB_016b48b4:
          if (!bVar16) goto LAB_016b49d8;
          uVar13 = param_1[2];
          uVar8 = param_1[1];
          if ((uVar13 == 0) || (*(char *)(uVar8 + uVar13 + -1) != '/')) {
            uVar14 = uVar13;
            if (*param_1 == uVar13) {
              FUN_016bd7fc(param_1,uVar13,1,1,1);
              uVar8 = param_1[1];
              uVar14 = param_1[2];
            }
            *(undefined1 *)(uVar8 + uVar14) = 0x2f;
            goto LAB_016b3c54;
          }
        }
        else {
          bVar17 = (param_2 & 0xff) == 0;
          uVar8 = param_2;
          if (bVar17) {
            uVar8 = uVar4;
          }
          if (bVar17 && local_2c == uVar8) {
            uVar8 = (uint)*pbVar12;
            if (((uVar8 & 0xdf) - 0x41 < 0x1a) &&
               (uVar11 = (uint)pbVar12[1], uVar11 == 0x7c || uVar11 == 0x3a)) {
              if (0x7fffffff < (uint)(int)(char)*pbVar12) {
                uVar8 = uVar11 & 0x3f | (uVar8 & 0x1f) << 6;
              }
              if (uVar4 <= uVar13) {
                if (((uVar4 != 0) && (uVar4 < uVar13)) && (*(char *)(uVar14 + uVar4) < -0x40))
                goto LAB_016b4c50;
                param_1[2] = uVar4;
                uVar13 = uVar4;
              }
              uVar11 = 2;
              if (uVar8 < 0x80) {
                uVar11 = 1;
              }
              if (*param_1 - uVar13 < uVar11) {
                FUN_016bd7fc(param_1,uVar13,uVar11,1,1);
                puVar5 = (undefined1 *)(param_1[1] + param_1[2]);
              }
              else {
                puVar5 = (undefined1 *)(uVar14 + uVar13);
              }
              uVar14 = uVar8;
              if (0x7f < uVar8) {
                uVar14 = uVar8 >> 6 | 0xffffffc0;
                puVar5[1] = (byte)uVar8 & 0x3f | 0x80;
              }
              *puVar5 = (char)uVar14;
              uVar11 = uVar11 + uVar13;
              param_1[2] = uVar11;
              uVar8 = uVar11;
              if (*param_1 == uVar11) {
                FUN_016bd7fc(param_1,uVar11,1,1,1);
                uVar8 = param_1[2];
              }
              *(undefined1 *)(param_1[1] + uVar8) = 0x3a;
              uVar8 = uVar11 + 1;
              param_1[2] = uVar8;
              if (bVar16) {
                if (*param_1 == uVar8) {
                  FUN_016bd7fc(param_1,uVar8,1,1,1);
                  uVar8 = param_1[2];
                }
                *(undefined1 *)(param_1[1] + uVar8) = 0x2f;
                param_1[2] = uVar11 + 2;
              }
              bVar2 = bVar1 & 1;
              bVar1 = 0;
              if (bVar2 != 0) {
                if (param_1[6] != 0) {
                  (**(code **)(param_1[7] + 0x14))(param_1[6],5);
                }
                bVar1 = 0;
                *param_3 = 0;
              }
            }
          }
        }
        break;
      case 2:
        iVar6 = thunk_FUN_016dd50a(pbVar12,&DAT_00418631,3);
        if ((iVar6 == 0) || (iVar6 = thunk_FUN_016dd50a(pbVar12,&DAT_00418634,3), iVar6 == 0))
        goto LAB_016b42e0;
        break;
      case 3:
        if (((*(int *)pbVar12 == 0x2e653225) || (*(int *)pbVar12 == 0x2e453225)) ||
           ((*(int *)pbVar12 == 0x6532252e || (*(int *)pbVar12 == 0x4532252e)))) goto LAB_016b4540;
        break;
      case 5:
        iVar6 = thunk_FUN_016dd50a(pbVar12,&DAT_00418619,6);
        if (((iVar6 == 0) || (iVar6 = thunk_FUN_016dd50a(pbVar12,&DAT_0041861f,6), iVar6 == 0)) ||
           ((iVar6 = thunk_FUN_016dd50a(pbVar12,&DAT_00418625,6), iVar6 == 0 ||
            (iVar6 = thunk_FUN_016dd50a(pbVar12,&DAT_0041862b,6), iVar6 == 0)))) goto LAB_016b4540;
      }
    }
  } while (bVar16);
LAB_016b49d8:
  if ((param_2 & 0xff) != 0) goto LAB_016b49e4;
  pcVar15 = (char *)param_1[1];
  uVar4 = param_1[2];
  if (param_4 == 0) {
    param_4 = 0;
    uVar8 = uVar4;
    if (uVar4 != 0) goto LAB_016b4a60;
LAB_016b4a40:
    iVar6 = 1;
    uVar8 = 0;
  }
  else {
    pcVar15 = pcVar15 + param_4;
    if (param_4 < uVar4) {
      if (*pcVar15 < -0x40) goto LAB_016b4a1c;
    }
    else if (uVar4 != param_4) {
LAB_016b4a1c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00418737,0x2b,&DAT_018aee88);
    }
    if (uVar4 < param_4) {
      FUN_0060297c(param_4,uVar4,&DAT_018aee88);
LAB_016b4c50:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00418707,0x30,&DAT_018aee58);
    }
    uVar4 = uVar4 - param_4;
    uVar8 = uVar4;
    if (uVar4 == 0) goto LAB_016b4a40;
LAB_016b4a60:
    iVar6 = thunk_FUN_016d4a50(uVar8);
    uVar4 = uVar8;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar8);
    }
  }
  param_1[2] = param_4;
  FUN_016dd1aa(iVar6,pcVar15,uVar4);
  uVar13 = param_1[2];
  uVar14 = uVar13;
  if (*param_1 == uVar13) {
    FUN_016bd7fc(param_1,uVar13,1,1,1);
    uVar14 = param_1[2];
  }
  uVar13 = uVar13 + 1;
  *(undefined1 *)(param_1[1] + uVar14) = 0x2f;
  param_1[2] = uVar13;
  uVar14 = 0;
  do {
    uVar11 = uVar14;
    if (uVar11 == uVar4) {
      uVar11 = uVar4;
      break;
    }
    pbVar12 = (byte *)(iVar6 + uVar11);
    pbVar10 = pbVar12 + 1;
    uVar7 = (uint)*pbVar12;
    if (0x7fffffff < (uint)(int)(char)*pbVar12) {
      if (uVar7 < 0xe0) {
        uVar7 = pbVar12[1] & 0x3f | (uVar7 & 0x1f) << 6;
        pbVar10 = pbVar12 + 2;
      }
      else {
        uVar14 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
        if (uVar7 < 0xf0) {
          uVar7 = uVar14 | (uVar7 & 0x1f) << 0xc;
          pbVar10 = pbVar12 + 3;
        }
        else {
          uVar7 = pbVar12[3] & 0x3f | uVar14 << 6 | (uVar7 & 7) << 0x12;
          pbVar10 = pbVar12 + 4;
        }
      }
    }
    uVar14 = (int)pbVar10 - iVar6;
  } while (uVar7 == 0x2f);
  uVar4 = uVar4 - uVar11;
  if (*param_1 - uVar13 < uVar4) {
    FUN_016bd7fc(param_1,uVar13,uVar4,1,1);
    uVar13 = param_1[2];
  }
  FUN_016dd1aa(param_1[1] + uVar13,iVar6 + uVar11,uVar4);
  param_1[2] = uVar13 + uVar4;
  if (uVar8 != 0) {
    thunk_FUN_016d3fb4(iVar6);
    return CONCAT44(param_6,param_5);
  }
LAB_016b49e4:
  return CONCAT44(param_6,param_5);
}

