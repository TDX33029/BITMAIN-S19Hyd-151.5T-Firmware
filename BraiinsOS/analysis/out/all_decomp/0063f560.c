// FUN_0063f560 @ 0063f560 size=2764 calls_out=10 calls_in=0
// strings: etc/bos_platformObjectIdentifierHeaderParseErrorvisited_capacity | etc/bos_version | etc/bos_major | -plus | -plus | etc/bos_mode

void FUN_0063f560(uint *param_1)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  code *pcVar17;
  uint uVar18;
  int iVar19;
  int unaff_r4;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined1 uVar28;
  uint *puVar29;
  undefined *local_d8;
  undefined1 local_ac;
  int *local_a0;
  uint local_8c;
  uint local_70;
  uint local_68;
  undefined4 *local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_50;
  int local_4c;
  undefined4 *local_44;
  int local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  
  puVar9 = (undefined1 *)thunk_FUN_016d4a50(1);
  if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,1);
  }
  *puVar9 = 0x2f;
  FUN_006401a8(&local_68,puVar9,"etc/bos_platformObjectIdentifierHeaderParseErrorvisited_capacity",
               0x10);
  piVar6 = local_60;
  puVar16 = local_64;
  if (local_68 != 0x80000001) {
    *param_1 = 0x80000000;
    param_1[1] = local_68;
    param_1[2] = (uint)local_64;
    param_1[3] = (uint)local_60;
    param_1[4] = local_5c;
    param_1[5] = (uint)local_58;
    goto LAB_014b47f4;
  }
  cVar8 = FUN_00640578(local_60);
  if (cVar8 == '\t') {
    *param_1 = 0x80000000;
    param_1[1] = 0x80000000;
  }
  else {
    FUN_006401a8(&local_68,puVar9,"etc/bos_version",0xf);
    uVar26 = local_5c;
    piVar7 = local_60;
    puVar5 = local_64;
    if (local_68 == 0x80000001) {
      FUN_006401a8(&local_68,puVar9,"etc/bos_major",0xd);
      uVar20 = 0;
      local_8c = 1;
      if (local_68 == 0x80000000) {
LAB_0063f72c:
        bVar4 = true;
        local_a0 = (int *)&DAT_00000001;
      }
      else if (local_68 == 0) {
LAB_0063f6bc:
        puVar11 = local_58;
        if ((char)local_5c != '\x03') goto LAB_0063f72c;
        puVar13 = (undefined4 *)local_58[1];
        uVar27 = *local_58;
        pcVar17 = (code *)*puVar13;
        if (pcVar17 != (code *)0x0) {
          (*pcVar17)(uVar27);
        }
        if (puVar13[1] != 0) {
          thunk_FUN_016d3fb4(uVar27);
        }
        thunk_FUN_016d3fb4(puVar11);
        bVar4 = true;
        uVar20 = 0;
        local_a0 = (int *)&DAT_00000001;
      }
      else {
        if (local_68 != 0x80000001) {
          thunk_FUN_016d3fb4(local_64);
          goto LAB_0063f6bc;
        }
        local_a0 = local_60;
        bVar4 = local_64 == (undefined4 *)0x0;
        uVar20 = local_5c;
      }
      if ((uVar26 != 0) && (local_8c = thunk_FUN_016d4a50(uVar26), local_8c == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar26);
      }
      FUN_016dd1aa(local_8c,piVar7,uVar26);
      if (uVar20 == 0) {
        piVar10 = (int *)&DAT_00000001;
      }
      else {
        piVar10 = (int *)thunk_FUN_016d4a50(uVar20);
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar20);
        }
      }
      FUN_016dd1aa(piVar10,local_a0,uVar20);
      if (uVar26 < 6) {
        local_ac = 0;
        if (uVar26 == 5) {
          iVar15 = thunk_FUN_016dd50a("-plus",local_8c,5);
          local_ac = iVar15 == 0;
        }
      }
      else {
        FUN_00fb6cfc(&local_68,local_8c,uVar26,"-plus",5);
        if (local_68 == 1) {
          if (local_44 == (undefined4 *)0xffffffff) {
            puVar11 = (undefined4 *)((int)local_2c + local_4c + -1);
            if (puVar11 < local_34) {
              puVar14 = (undefined4 *)((int)local_58 - 1);
              puVar13 = local_2c;
              if (local_2c < local_58) {
                puVar13 = local_58;
              }
              if (puVar14 < local_2c) {
                local_ac = 0;
                local_d8 = &DAT_018aeb20;
LAB_0063fadc:
                do {
                  uVar12 = *(byte *)(local_38 + (int)puVar11) & 0x3f;
                  uVar18 = (uint)local_60 >> uVar12 | local_5c << (0x20 - uVar12 & 0xff);
                  if (-1 < (int)(uVar12 - 0x20)) {
                    uVar18 = local_5c >> (uVar12 - 0x20 & 0xff);
                  }
                  if ((uVar18 & 1) == 0) {
                    puVar11 = local_2c;
                    goto LAB_0063fac8;
                  }
                  puVar11 = local_58;
                  do {
                    puVar25 = puVar11;
                    if (puVar13 == puVar25) {
                      puVar11 = (undefined4 *)((int)puVar14 + local_4c);
                      pcVar24 = (char *)(local_30 + (int)puVar14);
                      puVar25 = local_58;
                      goto LAB_0063fb6c;
                    }
                    if (local_34 <= (undefined4 *)(local_4c + (int)puVar25)) goto LAB_0063ffcc;
                    puVar11 = (undefined4 *)((int)puVar25 + 1);
                  } while (*(char *)(local_30 + (int)puVar25) ==
                           *(char *)(local_38 + local_4c + (int)puVar25));
                  local_4c = local_4c + (1 - (int)local_58) + (int)puVar25;
                  puVar11 = (undefined4 *)((int)local_2c + local_4c + -1);
                } while (puVar11 < local_34);
                goto LAB_0063fda8;
              }
              local_ac = 0;
              do {
                uVar12 = *(byte *)(local_38 + (int)puVar11) & 0x3f;
                uVar18 = (uint)local_60 >> uVar12 | local_5c << (0x20 - uVar12 & 0xff);
                if (-1 < (int)(uVar12 - 0x20)) {
                  uVar18 = local_5c >> (uVar12 - 0x20 & 0xff);
                }
                if ((uVar18 & 1) == 0) {
                  local_4c = local_4c + (int)local_2c;
                }
                else {
                  puVar11 = local_58;
                  do {
                    puVar25 = puVar11;
                    if (puVar13 == puVar25) {
                      local_ac = 1;
                      puVar11 = puVar14;
                      if (local_58 != (undefined4 *)0x0) goto LAB_0063fcec;
                      goto LAB_0063fda8;
                    }
                    if (local_34 <= (undefined4 *)(local_4c + (int)puVar25)) goto LAB_0063ffcc;
                    puVar11 = (undefined4 *)((int)puVar25 + 1);
                  } while (*(char *)(local_30 + (int)puVar25) ==
                           *(char *)(local_38 + local_4c + (int)puVar25));
                  local_4c = local_4c + (1 - (int)local_58) + (int)puVar25;
                }
                puVar11 = (undefined4 *)((int)local_2c + local_4c + -1);
              } while (puVar11 < local_34);
            }
            else {
              local_ac = 0;
            }
          }
          else {
            puVar11 = (undefined4 *)((int)local_2c + local_4c + -1);
            if (puVar11 < local_34) {
              local_ac = 0;
LAB_0063f918:
              uVar12 = *(byte *)(local_38 + (int)puVar11) & 0x3f;
              uVar18 = (uint)local_60 >> uVar12 | local_5c << (0x20 - uVar12 & 0xff);
              if (-1 < (int)(uVar12 - 0x20)) {
                uVar18 = local_5c >> (uVar12 - 0x20 & 0xff);
              }
              if ((uVar18 & 1) == 0) {
                local_44 = (undefined4 *)0x0;
                local_4c = local_4c + (int)local_2c;
              }
              else {
                puVar11 = local_58;
                if (local_58 < local_44) {
                  puVar11 = local_44;
                }
                puVar13 = local_2c;
                if (local_2c < puVar11) {
                  puVar13 = puVar11;
                }
                puVar14 = puVar11;
                do {
                  puVar25 = puVar14;
                  if (puVar13 == puVar25) {
                    puVar13 = local_58;
                    goto LAB_0063f9c8;
                  }
                  if (local_34 <= (undefined4 *)(local_4c + (int)puVar25)) {
                    puVar11 = (undefined4 *)((int)puVar11 + local_4c);
                    goto LAB_0063ffe0;
                  }
                  puVar14 = (undefined4 *)((int)puVar25 + 1);
                } while (*(char *)(local_30 + (int)puVar25) ==
                         *(char *)(local_38 + local_4c + (int)puVar25));
                local_4c = (int)puVar25 + (local_4c - (int)local_58) + 1;
                local_44 = (undefined4 *)0x0;
              }
              goto LAB_0063f908;
            }
            local_ac = 0;
          }
        }
        else {
          local_ac = 0;
          if (local_5c._2_1_ == '\0') {
            local_ac = (undefined1)local_5c;
            if (local_64 != (undefined4 *)0x0) {
              if (local_64 < local_34) {
                if (*(char *)(local_38 + (int)local_64) < -0x40) goto LAB_00640020;
              }
              else if (local_64 != local_34) goto LAB_00640020;
            }
            if (local_64 != local_34) {
              pbVar21 = (byte *)(local_38 + (int)local_64);
              uVar18 = (uint)*pbVar21;
              if (0x7fffffff < (uint)(int)(char)*pbVar21) {
                if (uVar18 < 0xe0) {
                  uVar18 = pbVar21[1] & 0x3f | (uVar18 & 0x1f) << 6;
                }
                else {
                  uVar12 = pbVar21[2] & 0x3f | (pbVar21[1] & 0x3f) << 6;
                  if (uVar18 < 0xf0) {
                    uVar18 = uVar12 | (uVar18 & 0x1f) << 0xc;
                  }
                  else {
                    uVar18 = pbVar21[3] & 0x3f | uVar12 << 6 | (uVar18 & 7) << 0x12;
                  }
                }
              }
              local_ac = 1;
              if ((local_5c & 1) == 0) {
                iVar15 = 1;
                if (0x7f < uVar18) {
                  iVar15 = 2;
                }
                if ((0x7ff < uVar18) && (iVar15 = 4, uVar18 < 0x10000)) {
                  iVar15 = 3;
                }
                puVar11 = (undefined4 *)(iVar15 + (int)local_64);
                if (puVar11 != (undefined4 *)0x0) {
                  if (puVar11 < local_34) {
                    if (*(char *)(local_38 + (int)puVar11) < -0x40) goto LAB_00640020;
                  }
                  else if (puVar11 != local_34) {
LAB_00640020:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa8ac();
                  }
                }
                local_ac = 1;
              }
            }
          }
        }
      }
LAB_0063fda8:
      local_70 = CONCAT31(local_70._1_3_,local_ac) & 0xffffff01;
      if (!bVar4) {
        thunk_FUN_016d3fb4(local_a0);
      }
      if (puVar5 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(piVar7);
      }
      FUN_006401a8(&local_68,puVar9,"etc/bos_mode",0xc);
      if (local_68 == 0x80000001) {
        if (local_5c == 4) {
          if (*local_60 == 0x646e616e) {
            uVar28 = 1;
          }
          else {
            iVar15 = thunk_FUN_016dd50a(local_60,"emmcj",4);
            if (iVar15 != 0) goto LAB_0063fec4;
            uVar28 = 2;
          }
        }
        else {
          if ((local_5c != 2) || ((short)*local_60 != 0x6473)) {
LAB_0063fec4:
            *param_1 = 0x80000000;
            param_1[1] = 0x80000000;
            if (uVar26 != 0) {
              thunk_FUN_016d3fb4(local_8c);
            }
            if (uVar20 != 0) {
              thunk_FUN_016d3fb4(piVar10);
            }
            if (local_64 != (undefined4 *)0x0) {
              piVar10 = local_60;
              goto LAB_0063fefc;
            }
            goto joined_r0x0063ff6c;
          }
          uVar28 = 0;
        }
        *param_1 = uVar26;
        param_1[1] = local_8c;
        param_1[2] = uVar26;
        param_1[3] = uVar20;
        param_1[4] = (uint)piVar10;
        param_1[5] = uVar20;
        param_1[6] = local_70;
        *(char *)((int)param_1 + 0x1d) = cVar8;
        *(undefined1 *)(param_1 + 7) = uVar28;
        if (local_64 != (undefined4 *)0x0) {
          thunk_FUN_016d3fb4(local_60);
        }
      }
      else {
        *param_1 = 0x80000000;
        param_1[1] = local_68;
        param_1[2] = (uint)local_64;
        param_1[3] = (uint)local_60;
        param_1[4] = local_5c;
        param_1[5] = (uint)local_58;
        if (uVar26 != 0) {
          thunk_FUN_016d3fb4(local_8c);
        }
        if (uVar20 != 0) {
LAB_0063fefc:
          thunk_FUN_016d3fb4(piVar10);
        }
      }
    }
    else {
      *param_1 = 0x80000000;
      param_1[1] = local_68;
      param_1[2] = (uint)local_64;
      param_1[3] = (uint)local_60;
      param_1[4] = local_5c;
      param_1[5] = (uint)local_58;
    }
  }
joined_r0x0063ff6c:
  if (puVar16 != (undefined4 *)0x0) {
    thunk_FUN_016d3fb4(piVar6);
  }
LAB_014b47f4:
  if (puVar9 == (undefined1 *)0x0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar26 = (byte)puVar9[-3] & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar20 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar19 = uVar20 - 0x10, uVar20 == 0)) {
    iVar19 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar20 = (uint)((byte)puVar9[-3] >> 5);
  iVar23 = *(int *)(iVar15 + 8) + 0x10;
  iVar22 = iVar19 * uVar26 + iVar19 + -4;
  iVar19 = iVar23 + iVar22;
  if (4 < uVar20) {
    if (uVar20 != 5) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar17)();
    }
    uVar20 = *(uint *)(iVar19 + -4);
    if (uVar20 < 5) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar17)();
    }
    if (*(char *)(iVar19 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar17 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar17)();
    }
  }
  if ((uint)(iVar19 - (int)puVar9) < uVar20) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar17)();
  }
  if (*(char *)(iVar19 - uVar20) != '\0') {
                    /* WARNING: Does not return */
    pcVar17 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar17)();
  }
  if (*(char *)(iVar23 + iVar22) != '\0') {
                    /* WARNING: Does not return */
    pcVar17 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar17)();
  }
  bVar3 = *(byte *)(iVar15 + 0x14);
  uVar20 = 1 << uVar26;
  puVar9[-3] = 0xff;
  *(undefined2 *)(puVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar15 + 0x10);
    uVar18 = *(uint *)(iVar15 + 0xc) | uVar12;
    if ((uVar20 & uVar18) != 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar17)();
    }
    if ((uVar12 == 0) || (uVar18 + uVar20 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar15,uVar26);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar16 = (undefined4 *)FUN_016d2bc8();
      uVar27 = *puVar16;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar16 = uVar27;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar20 + uVar12;
      return;
    }
    puVar29 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar29);
      uVar18 = *puVar29;
      if (uVar12 != uVar18) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar29);
    } while (!bVar4);
    *puVar29 = uVar20 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar18) {
      return;
    }
  } while( true );
  while( true ) {
    if (local_34 <= puVar11) goto LAB_0063ffe8;
    pcVar1 = (char *)(local_38 + (int)puVar11);
    puVar25 = (undefined4 *)((int)puVar25 + -1);
    cVar2 = *pcVar24;
    puVar11 = (undefined4 *)((int)puVar11 - 1);
    pcVar24 = pcVar24 + -1;
    if (cVar2 != *pcVar1) break;
LAB_0063fb6c:
    if (puVar25 == (undefined4 *)0x0) {
      local_ac = 1;
      goto LAB_0063fda8;
    }
  }
  puVar11 = local_50;
LAB_0063fac8:
  local_4c = local_4c + (int)puVar11;
  puVar11 = (undefined4 *)((int)local_2c + local_4c + -1);
  if (local_34 <= puVar11) goto LAB_0063fda8;
  goto LAB_0063fadc;
  while (*(char *)(local_30 + (int)puVar13) == *(char *)(local_38 + (int)puVar11)) {
LAB_0063f9c8:
    if (puVar13 <= local_44) {
      local_ac = 1;
      goto LAB_0063fda8;
    }
    puVar13 = (undefined4 *)((int)puVar13 - 1);
    puVar11 = puVar13;
    if (local_2c <= puVar13) goto LAB_0063fcec;
    puVar11 = (undefined4 *)((int)puVar13 + local_4c);
    if (local_34 <= puVar11) {
      local_d8 = &DAT_018aeb20;
      goto LAB_0063ffe8;
    }
  }
  local_4c = local_4c + (int)local_50;
  local_44 = (undefined4 *)((int)local_2c - (int)local_50);
LAB_0063f908:
  puVar11 = (undefined4 *)((int)local_2c + local_4c + -1);
  if (local_34 <= puVar11) goto LAB_0063fda8;
  goto LAB_0063f918;
LAB_0063fcec:
  local_d8 = &DAT_018aeb10;
  local_34 = local_2c;
  goto LAB_0063ffe8;
LAB_0063ffcc:
  puVar11 = (undefined4 *)(local_4c + (int)local_58);
LAB_0063ffe0:
  local_d8 = &DAT_018aeb30;
  if (puVar11 < local_34) {
    puVar11 = local_34;
  }
LAB_0063ffe8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(puVar11,local_34,local_d8);
}

