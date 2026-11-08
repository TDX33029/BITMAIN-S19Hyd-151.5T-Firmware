// FUN_014fadec @ 014fadec size=2880 calls_out=7 calls_in=2
// strings: .llvm. | `fmt::Error`s should be impossible without a `fmt::Formatter`

void FUN_014fadec(uint *param_1,int *param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  byte *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  uint local_4c;
  int local_40;
  uint local_3c;
  int iStack_38;
  uint uStack_34;
  int local_30;
  uint local_2c;
  
  FUN_00fb6cfc(&local_70,param_2,param_3,".llvm.",6);
  if (local_70 == (byte *)0x0) {
    do {
      FUN_014fb978(&local_30,&local_70);
    } while (local_30 == 1);
    if (local_30 == 0) {
      local_54 = local_2c;
LAB_014fb0cc:
      uVar14 = local_54 + 6;
      if (uVar14 != 0) {
        if (uVar14 < param_3) {
          if (*(char *)((int)param_2 + uVar14) < -0x40) goto LAB_014fb0ec;
        }
        else if (uVar14 != param_3) {
LAB_014fb0ec:
          puVar8 = &DAT_018a7368;
          local_54 = param_3;
          goto LAB_014fb908;
        }
      }
      pbVar5 = (byte *)((int)param_2 + uVar14);
      do {
        if (pbVar5 == (byte *)((int)param_2 + param_3)) {
LAB_014fb1a4:
          if (local_54 == 0) {
            uVar14 = 2;
            goto LAB_014fb808;
          }
          if (local_54 < param_3) {
            if (-0x41 < *(char *)((int)param_2 + local_54)) {
              param_3 = local_54;
              break;
            }
          }
          else if (local_54 == param_3) break;
          uVar14 = 0;
          puVar8 = &DAT_018a7378;
          goto LAB_014fb908;
        }
        pbVar15 = pbVar5 + 1;
        puVar12 = (undefined1 *)(uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (puVar12 < (undefined1 *)0xe0) {
            puVar12 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
            pbVar15 = pbVar5 + 2;
          }
          else {
            uVar14 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar12 < (undefined1 *)0xf0) {
              puVar12 = (undefined1 *)(uVar14 | ((uint)puVar12 & 0x1f) << 0xc);
              pbVar15 = pbVar5 + 3;
            }
            else {
              puVar12 = (undefined1 *)(pbVar5[3] & 0x3f | uVar14 << 6 | ((uint)puVar12 & 7) << 0x12)
              ;
              if (puVar12 == &DAT_00110000) goto LAB_014fb1a4;
              pbVar15 = pbVar5 + 4;
            }
          }
        }
        pbVar5 = pbVar15;
      } while (((undefined1 *)0xfffffff7 < puVar12 + -0x47 && puVar12 != (undefined1 *)0x3f) ||
              ((undefined1 *)0xfffffff5 < puVar12 + -0x3a));
    }
  }
  else {
    iVar13 = uStack_34 - 1;
    if (local_4c == 0xffffffff) {
      uVar14 = local_54 + iVar13;
      if (uVar14 < local_3c) {
        uVar4 = uStack_34;
        if (uStack_34 < local_60) {
          uVar4 = local_60;
        }
LAB_014faff4:
        uVar6 = *(byte *)(local_40 + uVar14) & 0x3f;
        uVar14 = local_68 >> uVar6 | local_64 << (0x20 - uVar6 & 0xff);
        if (-1 < (int)(uVar6 - 0x20)) {
          uVar14 = local_64 >> (uVar6 - 0x20 & 0xff);
        }
        if ((uVar14 & 1) == 0) {
          local_54 = local_54 + uStack_34;
        }
        else {
          uVar14 = local_60;
          do {
            uVar6 = uVar14;
            if (uVar4 == uVar6) {
              uVar14 = local_60 - 1;
              goto LAB_014fb070;
            }
            if (local_3c <= local_54 + uVar6) {
              uVar14 = local_54 + local_60;
              goto LAB_014fb88c;
            }
            uVar14 = uVar6 + 1;
          } while (*(char *)(iStack_38 + uVar6) == *(char *)(local_40 + local_54 + uVar6));
          local_54 = (local_54 - local_60) + uVar6 + 1;
        }
        goto LAB_014fb0a8;
      }
    }
    else {
      uVar14 = local_54 + iVar13;
      if (uVar14 < local_3c) {
LAB_014fae8c:
        uVar4 = *(byte *)(local_40 + uVar14) & 0x3f;
        uVar14 = local_68 >> uVar4 | local_64 << (0x20 - uVar4 & 0xff);
        if (-1 < (int)(uVar4 - 0x20)) {
          uVar14 = local_64 >> (uVar4 - 0x20 & 0xff);
        }
        if ((uVar14 & 1) == 0) {
          local_54 = local_54 + uStack_34;
        }
        else {
          uVar14 = local_60;
          if (local_60 < local_4c) {
            uVar14 = local_4c;
          }
          uVar4 = uStack_34;
          if (uStack_34 < uVar14) {
            uVar4 = uVar14;
          }
          uVar6 = uVar14;
          do {
            uVar9 = uVar6;
            if (uVar4 == uVar9) {
              uVar14 = local_60;
              goto LAB_014faf40;
            }
            if (local_3c <= local_54 + uVar9) {
              uVar14 = uVar14 + local_54;
LAB_014fb88c:
              if (uVar14 < local_3c) {
                uVar14 = local_3c;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar14,local_3c,&DAT_018ab238);
            }
            uVar6 = uVar9 + 1;
          } while (*(char *)(iStack_38 + uVar9) == *(char *)(local_40 + local_54 + uVar9));
          local_54 = (local_54 - local_60) + uVar9 + 1;
        }
        local_4c = 0;
        goto LAB_014faf24;
      }
    }
  }
LAB_014fb1d8:
  if (param_3 < 3) {
    uVar14 = 2;
    if (param_3 != 2) goto LAB_014fb808;
    if ((short)*param_2 == 0x4e5a) {
      iVar13 = -2;
      param_3 = 2;
      iVar11 = 2;
      goto LAB_014fb2a0;
    }
LAB_014fb510:
    uVar14 = 2;
    param_3 = uVar14;
    if ((char)*param_2 != 'R') goto LAB_014fb808;
LAB_014fb520:
    pbVar10 = (byte *)((int)param_2 + 1);
    if ((char)*pbVar10 < -0x40) {
      uVar14 = 1;
      puVar8 = &DAT_018a72e8;
      local_54 = param_3;
LAB_014fb908:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,uVar14,local_54,puVar8);
    }
    uVar4 = (uint)*pbVar10;
    iVar13 = -1;
  }
  else {
    iVar11 = 3;
    iVar13 = thunk_FUN_016dd50a("_ZN",param_2,3);
    local_54 = param_3;
    if (iVar13 == 0) {
      iVar13 = -3;
      if (param_3 == 3) {
        param_3 = 3;
      }
      else if (*(char *)((int)param_2 + 3) < -0x40) {
        uVar14 = 3;
        puVar8 = &DAT_018a7358;
        goto LAB_014fb908;
      }
LAB_014fb2a0:
      pbVar10 = (byte *)(iVar13 + param_3);
      pbVar16 = (byte *)((int)param_2 + iVar11);
      pbVar17 = pbVar16 + (int)pbVar10;
      pbVar5 = pbVar10;
      pbVar15 = pbVar16;
      do {
        if (pbVar5 == (byte *)0x0) {
          if (pbVar10 != (byte *)0x0) {
            local_70 = pbVar16 + 1;
            uVar14 = (uint)*pbVar16;
            if (0x7fffffff < (uint)(int)(char)*pbVar16) {
              if (uVar14 < 0xe0) {
                uVar14 = pbVar16[1] & 0x3f | (uVar14 & 0x1f) << 6;
                local_70 = pbVar16 + 2;
              }
              else {
                uVar4 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
                if (uVar14 < 0xf0) {
                  uVar14 = uVar4 | (uVar14 & 0x1f) << 0xc;
                  local_70 = pbVar16 + 3;
                }
                else {
                  uVar14 = pbVar16[3] & 0x3f | uVar4 << 6 | (uVar14 & 7) << 0x12;
                  local_70 = pbVar16 + 4;
                }
              }
            }
            uVar4 = 0;
            if (uVar14 == 0x45) goto LAB_014fb38c;
            goto LAB_014fb398;
          }
          break;
        }
        bVar3 = *pbVar15;
        pbVar5 = pbVar5 + -1;
        pbVar15 = pbVar15 + 1;
      } while (-1 < (char)bVar3);
LAB_014fb4e4:
      uVar14 = param_3;
      if (param_3 < 3) goto LAB_014fb510;
    }
    else {
      if ((short)*param_2 == 0x4e5a) {
        if (*(char *)((int)param_2 + 2) < -0x40) {
          uVar14 = 2;
          puVar8 = &DAT_018a7348;
          goto LAB_014fb908;
        }
        iVar11 = 2;
        iVar13 = -2;
        goto LAB_014fb2a0;
      }
      uVar14 = 3;
      if (param_3 != 3) {
        if (*param_2 == 0x4e5a5f5f) {
          iVar13 = -4;
          iVar11 = 4;
          if (param_3 < 5) {
            param_3 = 4;
          }
          else if ((char)param_2[1] < -0x40) {
            uVar14 = 4;
            puVar8 = &DAT_018a7338;
            goto LAB_014fb908;
          }
          goto LAB_014fb2a0;
        }
        uVar14 = param_3;
      }
    }
    param_3 = uVar14;
    local_54 = param_3;
    if ((short)*param_2 == 0x525f) {
      pbVar10 = (byte *)((int)param_2 + 2);
      if ((char)*pbVar10 < -0x40) {
        uVar14 = 2;
        puVar8 = &DAT_018a72f8;
        goto LAB_014fb908;
      }
      uVar4 = (uint)*pbVar10;
      iVar13 = -2;
    }
    else {
      if ((char)*param_2 == 'R') {
        goto LAB_014fb520;
      }
      uVar14 = 2;
      if ((param_3 == 3) || (iVar13 = thunk_FUN_016dd50a("__R",param_2,3), iVar13 != 0))
      goto LAB_014fb808;
      pbVar10 = (byte *)((int)param_2 + 3);
      if ((char)*pbVar10 < -0x40) {
        uVar14 = 3;
        puVar8 = &DAT_018a72d8;
        goto LAB_014fb908;
      }
      uVar4 = (uint)*pbVar10;
      iVar13 = -3;
    }
  }
  uVar14 = 2;
  if (uVar4 - 0x41 < 0x1a) {
    uVar4 = iVar13 + param_3;
    uVar6 = 0;
    do {
      if (uVar4 == uVar6) {
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_70 = pbVar10;
        local_6c = uVar4;
        iVar13 = FUN_014fbd90(&local_70,0);
        if (iVar13 != 0) {
LAB_014fb824:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,
                       &local_30,&DAT_018a73a8,&DAT_018a7308);
        }
        if (local_70 == (byte *)0x0) break;
        if ((local_68 < local_6c) && (local_70[local_68] - 0x41 < 0x1a)) {
          local_60 = 0;
          local_5c = 0;
          iVar13 = FUN_014fbd90(&local_70,0);
          if (iVar13 != 0) goto LAB_014fb824;
          if (local_70 == (byte *)0x0) break;
        }
        if (local_68 != 0) {
          if (local_68 < local_6c) {
            if ((char)local_70[local_68] < -0x40) goto LAB_014fb660;
          }
          else if (local_6c != local_68) {
LAB_014fb660:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac();
          }
        }
        local_6c = local_6c - local_68;
        local_70 = local_70 + local_68;
        pbVar16 = (byte *)0x0;
        goto LAB_014fb6d0;
      }
      pbVar5 = pbVar10 + uVar6;
      uVar6 = uVar6 + 1;
    } while (-1 < (char)*pbVar5);
  }
LAB_014fb808:
  *param_1 = uVar14;
  return;
  while( true ) {
    if (uStack_34 <= local_60 - 1) goto LAB_014fb85c;
    uVar6 = local_54 + uVar14;
    if (local_3c <= uVar6) goto LAB_014fb86c;
    pcVar1 = (char *)(local_40 + local_54 + uVar14);
    pcVar2 = (char *)(iStack_38 + uVar14);
    uVar14 = uVar14 - 1;
    if (*pcVar2 != *pcVar1) break;
LAB_014fb070:
    if (uVar14 == 0xffffffff) goto LAB_014fb0cc;
  }
  local_54 = local_54 + local_58;
LAB_014fb0a8:
  uVar14 = local_54 + iVar13;
  if (local_3c <= uVar14) goto LAB_014fb1d8;
  goto LAB_014faff4;
LAB_014faf40:
  do {
    if (uVar14 <= local_4c) goto LAB_014fb0cc;
    uVar14 = uVar14 - 1;
    if (uStack_34 <= uVar14) {
LAB_014fb85c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,uStack_34,&DAT_018ab218);
    }
    uVar6 = uVar14 + local_54;
    if (local_3c <= uVar6) {
LAB_014fb86c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,local_3c,&DAT_018ab228);
    }
  } while (*(char *)(iStack_38 + uVar14) == *(char *)(local_40 + uVar6));
  local_54 = local_54 + local_58;
  local_4c = uStack_34 - local_58;
LAB_014faf24:
  uVar14 = local_54 + iVar13;
  if (local_3c <= uVar14) goto LAB_014fb1d8;
  goto LAB_014fae8c;
  while( true ) {
    uVar9 = 0;
    do {
      uVar14 = (uint)((ulonglong)uVar9 * 10);
      if ((((int)((ulonglong)uVar9 * 10 >> 0x20) != 0) ||
          (uVar9 = uVar14 + uVar6, CARRY4(uVar14,uVar6))) || (local_70 == pbVar17))
      goto LAB_014fb4e4;
      uVar14 = (uint)*local_70;
      pbVar5 = local_70 + 1;
      if (0x7fffffff < (uint)(int)(char)*local_70) {
        if (uVar14 < 0xe0) {
          uVar14 = local_70[1] & 0x3f | (uVar14 & 0x1f) << 6;
          pbVar5 = local_70 + 2;
        }
        else {
          uVar6 = local_70[2] & 0x3f | (local_70[1] & 0x3f) << 6;
          if (uVar14 < 0xf0) {
            uVar14 = uVar6 | (uVar14 & 0x1f) << 0xc;
            pbVar5 = local_70 + 3;
          }
          else {
            uVar14 = local_70[3] & 0x3f | uVar6 << 6 | (uVar14 & 7) << 0x12;
            pbVar5 = local_70 + 4;
          }
        }
      }
      local_70 = pbVar5;
      uVar6 = uVar14 - 0x30;
    } while (uVar6 < 10);
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (local_70 == pbVar17) goto LAB_014fb4e4;
      pbVar5 = local_70 + 1;
      uVar14 = (uint)*local_70;
      if (0x7fffffff < (uint)(int)(char)*local_70) {
        if (uVar14 < 0xe0) {
          uVar14 = local_70[1] & 0x3f | (uVar14 & 0x1f) << 6;
          pbVar5 = local_70 + 2;
        }
        else {
          uVar6 = local_70[2] & 0x3f | (local_70[1] & 0x3f) << 6;
          if (uVar14 < 0xf0) {
            uVar14 = uVar6 | (uVar14 & 0x1f) << 0xc;
            pbVar5 = local_70 + 3;
          }
          else {
            uVar14 = local_70[3] & 0x3f | uVar6 << 6 | (uVar14 & 7) << 0x12;
            pbVar5 = local_70 + 4;
          }
        }
      }
      local_70 = pbVar5;
    }
    uVar4 = uVar4 + 1;
    if (uVar14 == 0x45) break;
LAB_014fb398:
    uVar6 = uVar14 - 0x30;
    if (9 < uVar6) goto LAB_014fb4e4;
  }
LAB_014fb38c:
  local_6c = (int)pbVar17 - (int)local_70;
LAB_014fb6d0:
  if (local_6c == 0) {
    local_6c = 0;
LAB_014fb7ec:
    uVar14 = 1;
    param_1[1] = (uint)pbVar16;
    param_1[2] = (uint)pbVar10;
    param_1[3] = uVar4;
    param_1[4] = (uint)param_2;
    param_1[5] = param_3;
    param_1[6] = (uint)local_70;
    param_1[7] = local_6c;
  }
  else {
    uVar14 = 2;
    if (*local_70 == 0x2e) {
      puVar12 = (undefined1 *)0x2e;
      pbVar5 = local_70;
      do {
        if ((char)puVar12 < '\0') {
          if (puVar12 < (undefined1 *)0xe0) {
            puVar12 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
            pbVar5 = pbVar5 + 2;
          }
          else {
            uVar6 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar12 < (undefined1 *)0xf0) {
              puVar12 = (undefined1 *)(uVar6 | ((uint)puVar12 & 0x1f) << 0xc);
              pbVar5 = pbVar5 + 3;
            }
            else {
              puVar12 = (undefined1 *)(pbVar5[3] & 0x3f | uVar6 << 6 | ((uint)puVar12 & 7) << 0x12);
              if (puVar12 == &DAT_00110000) goto LAB_014fb7ec;
              pbVar5 = pbVar5 + 4;
            }
          }
        }
        else {
          pbVar5 = pbVar5 + 1;
        }
        if (0x19 < ((uint)puVar12 & 0x1fffdf) - 0x41) {
          puVar7 = puVar12 + -0x30;
          bVar18 = (undefined1 *)0x9 < puVar7;
          if (bVar18) {
            puVar7 = puVar12 + -0x21;
          }
          if (bVar18 && (undefined1 *)0xe < puVar7) {
            puVar7 = puVar12 + -0x3a;
            bVar18 = (undefined1 *)0x6 < puVar7;
            if (bVar18) {
              puVar7 = puVar12 + -0x5b;
            }
            if ((bVar18 && (undefined1 *)0x5 < puVar7) && ((undefined1 *)0x3 < puVar12 + -0x7b))
            break;
          }
        }
        if (pbVar5 == local_70 + local_6c) goto LAB_014fb7ec;
        puVar12 = (undefined1 *)(uint)*pbVar5;
      } while( true );
    }
  }
  goto LAB_014fb808;
}

