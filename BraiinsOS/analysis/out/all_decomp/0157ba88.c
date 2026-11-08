// FUN_0157ba88 @ 0157ba88 size=2264 calls_out=10 calls_in=24
// strings:  at line EOF while parsing a listEOF while parsing an objectEOF while parsing a stringEOF while parsing a valueexpected `:`expected `;` or `]`expected `;` or `}`expected identexpected valueexpected `'`invalid escapeinvalid numbernumber out of rangeinvalid unicode code pointcontrol character (\u0000-\u001F) found while parsing a stringkey must be a stringinvalid value: expected key to be a number in quotesfloat key must be finite (got NaN or +/-inf)lone leading surrogate in hex escapetrailing commatrailing charactersunexpected end of hex escape

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0157ba88(uint *param_1)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  uint uVar19;
  undefined *local_90;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_48;
  int local_44;
  uint local_40;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  
  uVar6 = param_1[1];
  local_6c = param_1[2];
  FUN_00fb6cfc(&local_68,uVar6,local_6c,
               " at line EOF while parsing a listEOF while parsing an objectEOF while parsing a stringEOF while parsing a valueexpected `:`expected `,` or `]`expected `,` or `}`expected identexpected valueexpected `\"`invalid escapeinvalid numbernumber out of rangeinvalid unicode code pointcontrol character (\\u0000-\\u001F) found while parsing a stringkey must be a stringinvalid value: expected key to be a number in quotesfloat key must be finite (got NaN or +/-inf)lone leading surrogate in hex escapetrailing commatrailing charactersunexpected end of hex escape"
               ,9);
  if (local_68 == 1) {
    uVar16 = local_48 - local_2c;
    if (uVar16 < local_34) {
      local_70 = local_40;
      uVar19 = local_2c;
      if (local_2c < local_54) {
        uVar19 = local_54;
      }
      local_90 = &DAT_018a93dc;
LAB_0157bb54:
      uVar3 = *(byte *)(local_38 + uVar16) & 0x3f;
      uVar10 = local_60 >> uVar3 | local_5c << (0x20 - uVar3 & 0xff);
      if (-1 < (int)(uVar3 - 0x20)) {
        uVar10 = local_5c >> (uVar3 - 0x20 & 0xff);
      }
      if ((uVar10 & 1) != 0) {
        uVar10 = local_54;
        if (local_70 < local_54) {
          uVar10 = local_70;
        }
        if (local_44 == -1) {
          uVar10 = local_54;
        }
        uVar3 = uVar10 - 1;
        do {
          uVar8 = uVar3;
          if (uVar8 == 0xffffffff) {
            uVar10 = local_70;
            if (local_44 == -1) {
              uVar10 = local_2c;
            }
            if (uVar10 <= local_54) {
              uVar10 = local_54;
            }
            uVar3 = local_54;
            goto LAB_0157bc20;
          }
          if (local_2c <= uVar10 - 1) {
            local_34 = local_2c;
            goto LAB_0157c30c;
          }
          if (local_34 <= uVar16 + uVar8) {
            local_90 = &DAT_018a93ec;
            uVar19 = uVar16 + uVar8;
            goto LAB_0157c308;
          }
          uVar3 = uVar8 - 1;
        } while (*(char *)(local_30 + uVar8) == *(char *)(local_38 + uVar16 + uVar8));
        local_48 = (uVar8 + local_48) - local_54;
        uVar16 = local_2c;
        goto LAB_0157bb3c;
      }
      local_48 = uVar16;
      if (local_44 != -1) {
        local_70 = local_2c;
      }
      goto LAB_0157bb48;
    }
  }
  else if (local_5c._2_1_ == '\0') {
    if (local_60 != 0) {
      pcVar14 = (char *)(local_38 + local_60);
      puVar18 = &DAT_018a940c;
      if (local_60 < local_34) {
        if (-0x41 < *pcVar14) goto LAB_0157bcd4;
      }
      else if (local_60 == local_34) {
LAB_0157bcd4:
        uVar19 = (uint)pcVar14[-1];
        if ((int)uVar19 < 0) {
          bVar9 = pcVar14[-2];
          if ((char)bVar9 < -0x40) {
            bVar2 = pcVar14[-3];
            if ((char)bVar2 < -0x40) {
              uVar16 = (int)(char)bVar2 & 0x3fU | ((byte)pcVar14[-4] & 7) << 6;
            }
            else {
              uVar16 = bVar2 & 0xf;
            }
            uVar19 = uVar19 & 0x3f | ((int)(char)bVar9 & 0x3fU | uVar16 << 6) << 6;
          }
          else {
            uVar19 = uVar19 & 0x3f | (bVar9 & 0x1f) << 6;
          }
        }
        uVar16 = local_60;
        if ((local_5c & 0x100) != 0) {
LAB_0157bdc8:
          uVar3 = uVar16 + 9;
          iVar7 = uVar6 + 9;
          iVar11 = 9;
          iVar12 = (uVar16 - local_6c) + 9;
          uVar10 = uVar16 + 9;
          do {
            local_38 = uVar6;
            local_60 = local_6c;
            if (uVar10 != 0) {
              if (uVar10 < local_6c) {
                if (*(char *)(iVar7 + uVar16) < -0x40) goto LAB_0157c320;
              }
              else if (iVar12 != 0) {
LAB_0157c320:
                puVar18 = &DAT_018a9344;
                uVar19 = uVar10;
                goto LAB_0157c330;
              }
            }
            uVar8 = local_6c;
            if (iVar12 == 0) goto joined_r0x0157be4c;
            if (9 < *(byte *)(iVar7 + uVar16) - 0x30) goto LAB_0157be54;
            iVar7 = iVar7 + 1;
            iVar11 = iVar11 + 1;
            iVar12 = (uVar16 - local_6c) + iVar11;
            uVar10 = uVar16 + iVar11;
          } while( true );
        }
        iVar7 = -1;
        if (0x7f < uVar19) {
          iVar7 = -2;
        }
        if ((0x7ff < uVar19) && (iVar7 = -4, uVar19 < 0x10000)) {
          iVar7 = -3;
        }
        local_60 = iVar7 + local_60;
        if (local_60 == 0) {
          uVar16 = 0;
          goto LAB_0157bdc8;
        }
        uVar16 = local_60;
        if (local_60 < local_34) {
          if (-0x41 < *(char *)(local_38 + local_60)) goto LAB_0157bdc8;
        }
        else if (local_60 == local_34) goto LAB_0157bdc8;
      }
      uVar19 = 0;
      local_6c = local_34;
      goto LAB_0157c330;
    }
    uVar16 = 0;
    if ((local_5c & 0x100) != 0) goto LAB_0157bdc8;
  }
  goto LAB_0157bc74;
LAB_0157bc20:
  do {
    if (uVar10 == uVar3) goto LAB_0157bdc8;
    if (uVar19 == uVar3) {
      local_90 = &DAT_018a93bc;
      local_34 = local_2c;
LAB_0157c308:
      uVar8 = uVar19;
LAB_0157c30c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,local_34,local_90);
    }
    if (local_34 <= uVar16 + uVar3) {
      local_90 = &DAT_018a93cc;
      uVar8 = local_54 + uVar16;
      if (local_54 + uVar16 < local_34) {
        uVar8 = local_34;
      }
      goto LAB_0157c30c;
    }
    pcVar14 = (char *)(local_38 + uVar16 + uVar3);
    pcVar1 = (char *)(local_30 + uVar3);
    uVar3 = uVar3 + 1;
  } while (*pcVar1 == *pcVar14);
  local_48 = local_48 - local_50;
  uVar16 = local_50;
LAB_0157bb3c:
  if (local_44 != -1) {
    local_70 = uVar16;
  }
LAB_0157bb48:
  uVar16 = local_48 - local_2c;
  if (local_34 <= uVar16) goto LAB_0157bc74;
  goto LAB_0157bb54;
LAB_0157be54:
  uVar8 = uVar16 + iVar11;
joined_r0x0157be4c:
  if (uVar10 != 0) {
    puVar18 = &DAT_018a9354;
    if (uVar8 < local_6c) {
      if (*(char *)(uVar6 + uVar8) < -0x40) goto LAB_0157be80;
    }
    else if (local_6c != uVar8) {
LAB_0157be80:
      uVar19 = uVar8;
      goto LAB_0157c330;
    }
  }
  uVar17 = 0;
  if (7 < local_6c - uVar8) {
    iVar7 = 8;
    iVar11 = thunk_FUN_016dd50a(&DAT_0056a120,(char *)(uVar6 + uVar8),8);
    if (iVar11 == 0) {
      iVar11 = uVar6 + 8;
      uVar19 = uVar8 + 8;
      iVar12 = (uVar8 - local_6c) + 8;
      uVar4 = uVar8 + 8;
      do {
        if (uVar4 != 0) {
          if (uVar4 < local_6c) {
            if (*(char *)(iVar11 + uVar8) < -0x40) goto LAB_0157c34c;
          }
          else if (iVar12 != 0) {
LAB_0157c34c:
            puVar18 = &DAT_018a9364;
            uVar19 = uVar8 + iVar7;
            goto LAB_0157c330;
          }
        }
        if (iVar12 == 0) goto LAB_0157bf70;
        if (9 < *(byte *)(iVar11 + uVar8) - 0x30) goto LAB_0157bf58;
        iVar11 = iVar11 + 1;
        iVar7 = iVar7 + 1;
        iVar12 = (uVar8 - local_6c) + iVar7;
        uVar4 = uVar8 + iVar7;
      } while( true );
    }
    uVar10 = 0;
    goto LAB_0157c0fc;
  }
LAB_0157bea4:
  uVar10 = 0;
  goto LAB_0157c0fc;
LAB_0157bf58:
  local_60 = uVar4;
  if (local_6c <= uVar4) {
LAB_0157bf70:
    puVar18 = &DAT_018a9374;
    if (uVar8 < uVar3) goto LAB_0157bfd4;
    if (uVar3 != 0) {
      if (uVar3 < local_6c) {
        if (-0x41 < *(char *)(uVar6 + uVar3)) goto LAB_0157bfb4;
      }
      else if (uVar3 == local_6c) goto LAB_0157bfb4;
      goto LAB_0157bfd4;
    }
LAB_0157bfb4:
    if (uVar10 != 0) {
      if (uVar8 < local_6c) {
        if (*(char *)(uVar6 + uVar8) < -0x40) goto LAB_0157bfd4;
      }
      else if (local_6c != uVar8) {
LAB_0157bfd4:
        local_60 = uVar8;
        uVar19 = uVar3;
        goto LAB_0157c330;
      }
    }
    uVar8 = uVar8 - uVar3;
    if (uVar8 != 0) {
      pbVar15 = (byte *)(uVar6 + uVar3);
      if (uVar8 == 1) {
        bVar9 = *pbVar15;
        if ((bVar9 != 0x2b) && (bVar9 != 0x2d)) goto LAB_0157c034;
      }
      else {
        bVar9 = *pbVar15;
LAB_0157c034:
        uVar10 = 0;
        if (bVar9 == 0x2b) {
          pbVar15 = pbVar15 + 1;
          uVar8 = uVar8 - 1;
        }
        if (uVar8 < 9) {
          for (; uVar8 != 0; uVar8 = uVar8 - 1) {
            bVar9 = *pbVar15;
            if (9 < bVar9 - 0x30) goto LAB_0157c0f8;
            pbVar15 = pbVar15 + 1;
            uVar10 = (bVar9 - 0x30) + uVar10 * 10;
          }
LAB_0157c078:
          puVar18 = &DAT_018a9384;
          if (local_60 < uVar19) goto LAB_0157c330;
          if (uVar19 != 0) {
            if (uVar19 < local_6c) {
              if (*(char *)(uVar6 + uVar19) < -0x40) goto LAB_0157c330;
            }
            else if (uVar19 != local_6c) goto LAB_0157c330;
          }
          if (!(uVar4 == 0 || local_60 == local_6c)) {
LAB_0157c330:
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(local_38,local_6c,uVar19,local_60,puVar18);
          }
          local_60 = local_60 - uVar19;
          if (local_60 != 0) {
            pbVar15 = (byte *)(uVar6 + uVar19);
            if (local_60 == 1) {
              bVar9 = *pbVar15;
              if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_0157bea4;
            }
            else {
              bVar9 = *pbVar15;
            }
            uVar17 = 0;
            if (bVar9 == 0x2b) {
              pbVar15 = pbVar15 + 1;
              local_60 = local_60 - 1;
            }
            if (local_60 < 9) {
              for (; local_60 != 0; local_60 = local_60 - 1) {
                bVar9 = *pbVar15;
                if (9 < bVar9 - 0x30) goto LAB_0157c2b0;
                pbVar15 = pbVar15 + 1;
                uVar17 = (bVar9 - 0x30) + uVar17 * 10;
              }
LAB_0157c224:
              if (uVar16 <= local_6c) {
                if ((uVar16 == 0) || (local_6c <= uVar16)) {
                  local_6c = uVar16;
                }
                else {
                  local_6c = uVar16;
                  if (*(char *)(uVar6 + uVar16) < -0x40) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa464(&DAT_00418707,0x30,&DAT_018a9394);
                  }
                }
              }
            }
            else {
              do {
                if (local_60 == 0) goto LAB_0157c224;
                uVar19 = (uint)((ulonglong)uVar17 * 10);
                if ((int)((ulonglong)uVar17 * 10 >> 0x20) != 0) break;
                uVar3 = *pbVar15 - 0x30;
                uVar17 = uVar3 + uVar19;
                if (9 < uVar3) break;
                local_60 = local_60 - 1;
                pbVar15 = pbVar15 + 1;
              } while (!CARRY4(uVar3,uVar19));
LAB_0157c2b0:
              uVar10 = 0;
              uVar17 = 0;
            }
            goto LAB_0157c0fc;
          }
        }
        else {
          do {
            if (uVar8 == 0) goto LAB_0157c078;
            uVar3 = (uint)((ulonglong)uVar10 * 10);
            if ((int)((ulonglong)uVar10 * 10 >> 0x20) != 0) break;
            uVar13 = *pbVar15 - 0x30;
            uVar10 = uVar13 + uVar3;
            if (9 < uVar13) break;
            uVar8 = uVar8 - 1;
            pbVar15 = pbVar15 + 1;
          } while (!CARRY4(uVar13,uVar3));
        }
      }
LAB_0157c0f8:
      uVar10 = 0;
      uVar17 = uVar10;
      goto LAB_0157c0fc;
    }
  }
LAB_0157bc74:
  uVar10 = 0;
  uVar17 = uVar10;
LAB_0157c0fc:
  if (local_6c < *param_1) {
    if (local_6c == 0) {
      thunk_FUN_016d3fb4(uVar6);
      uVar6 = 1;
    }
    else {
      uVar6 = thunk_FUN_016d4ea4(uVar6,local_6c);
      if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_6c);
      }
    }
  }
  local_68 = 0;
  local_64 = uVar6;
  local_60 = local_6c;
  local_5c = uVar10;
  local_58 = uVar17;
  piVar5 = (int *)thunk_FUN_016d4a50(0x14);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *piVar5 = local_68;
  piVar5[1] = local_64;
  piVar5[2] = local_60;
  piVar5[3] = local_5c;
  piVar5[4] = local_58;
  return;
}

