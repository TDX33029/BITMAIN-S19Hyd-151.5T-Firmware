// FUN_01966564 @ 01966564 size=2184 calls_out=8 calls_in=15
// strings:  at line EOF while parsing a listEOF while parsing an objectEOF while parsing a stringEOF while parsing a valueexpected `:`expected `;` or `]`expected `;` or `}`expected identexpected valueexpected `'`invalid escapeinvalid numbernumber out of rangeinvalid unicode code pointcontrol character (\u0000-\u001F) found while parsing a stringkey must be a stringinvalid value: expected key to be a number in quotesfloat key must be finite (got NaN or +/-inf)lone leading surrogate in hex escapetrailing commatrailing charactersunexpected end of hex escape

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01966564(undefined4 *param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  char *pcVar20;
  uint uVar21;
  undefined *puVar22;
  undefined *local_98;
  uint local_74;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar17 = param_1[1];
  uVar11 = param_1[2];
  FUN_01306b30(&local_70,iVar17,uVar11,
               " at line EOF while parsing a listEOF while parsing an objectEOF while parsing a stringEOF while parsing a valueexpected `:`expected `,` or `]`expected `,` or `}`expected identexpected valueexpected `\"`invalid escapeinvalid numbernumber out of rangeinvalid unicode code pointcontrol character (\\u0000-\\u001F) found while parsing a stringkey must be a stringinvalid value: expected key to be a number in quotesfloat key must be finite (got NaN or +/-inf)lone leading surrogate in hex escapetrailing commatrailing charactersunexpected end of hex escape"
               ,9);
  if (local_70 == 1) {
    uVar18 = local_50 - local_34;
    if (uVar18 < local_3c) {
      uVar9 = local_34;
      if (local_34 < local_5c) {
        uVar9 = local_5c;
      }
      local_74 = local_48;
      local_98 = &DAT_01d272a4;
LAB_01966618:
      uVar4 = *(byte *)(local_40 + uVar18) & 0x3f;
      uVar12 = local_6c._4_4_ >> uVar4 | local_64 << (0x20 - uVar4 & 0xff);
      if (-1 < (int)(uVar4 - 0x20)) {
        uVar12 = local_64 >> (uVar4 - 0x20 & 0xff);
      }
      if ((uVar12 & 1) == 0) {
        uVar12 = local_34;
        local_50 = uVar18;
        if (local_4c == -1) goto LAB_019666d8;
        goto LAB_019666d4;
      }
      uVar12 = local_5c;
      if (local_74 < local_5c) {
        uVar12 = local_74;
      }
      if (local_4c == -1) {
        uVar12 = local_5c;
      }
      uVar4 = uVar12 - 1;
      do {
        uVar14 = uVar4;
        if (uVar14 == 0xffffffff) {
          uVar12 = local_74;
          if (local_4c == -1) {
            uVar12 = local_34;
          }
          uVar4 = local_5c;
          if (uVar12 <= local_5c) {
            uVar12 = local_5c;
          }
          goto LAB_01966708;
        }
        if (local_34 <= uVar12 - 1) {
          local_3c = local_34;
          goto LAB_01966d34;
        }
        if (local_3c <= uVar18 + uVar14) {
          local_98 = &DAT_01d272b4;
          uVar9 = uVar18 + uVar14;
          goto LAB_01966d30;
        }
        uVar4 = uVar14 - 1;
      } while (*(char *)(local_38 + uVar14) == *(char *)(local_40 + uVar18 + uVar14));
      local_50 = (uVar14 + local_50) - local_5c;
      if (local_4c != -1) {
        local_74 = local_34;
      }
      goto LAB_019666d8;
    }
  }
  else if (local_64._2_1_ == '\0') {
    if (local_6c._4_4_ != 0) {
      puVar22 = &DAT_01d272d4;
      uVar18 = local_6c._4_4_;
      do {
        pcVar20 = (char *)(local_40 + uVar18);
        if (uVar18 < local_3c) {
          if (*pcVar20 < -0x40) goto LAB_01966d68;
        }
        else if (uVar18 != local_3c) {
LAB_01966d68:
          uVar9 = 0;
          iVar17 = local_40;
          uVar11 = local_3c;
          goto LAB_01966d74;
        }
        uVar9 = (uint)pcVar20[-1];
        if (0x7fffffff < uVar9) {
          bVar3 = pcVar20[-2];
          if ((char)bVar3 < -0x40) {
            bVar2 = pcVar20[-3];
            if ((char)bVar2 < -0x40) {
              uVar12 = (int)(char)bVar2 & 0x3fU | ((byte)pcVar20[-4] & 7) << 6;
            }
            else {
              uVar12 = bVar2 & 0xf;
            }
            uVar12 = (int)(char)bVar3 & 0x3fU | uVar12 << 6;
          }
          else {
            uVar12 = bVar3 & 0x1f;
          }
          uVar9 = uVar9 & 0x3f | uVar12 << 6;
        }
        if ((local_64._1_1_ & 1) != 0) goto LAB_01966858;
        iVar8 = -1;
        if (0x7f < uVar9) {
          iVar8 = -2;
        }
        if ((0x7ff < uVar9) && (iVar8 = -4, uVar9 < 0x10000)) {
          iVar8 = -3;
        }
        uVar18 = iVar8 + uVar18;
        local_64._1_1_ = 1;
      } while (uVar18 != 0);
      uVar18 = 0;
LAB_01966858:
      uVar12 = uVar18 + 9;
      iVar13 = 9;
      iVar8 = iVar17 + 9;
      do {
        iVar15 = (uVar18 - uVar11) + iVar13;
        uVar4 = uVar18 + iVar13;
        if (uVar4 != 0) {
          if (uVar4 < uVar11) {
            if (*(char *)(iVar8 + uVar18) < -0x40) goto LAB_01966d4c;
          }
          else if (iVar15 != 0) {
LAB_01966d4c:
            puVar22 = &DAT_01d2720c;
            uVar9 = uVar4;
            goto LAB_01966d58;
          }
        }
        if (iVar15 == 0) {
          uVar9 = uVar11;
          goto LAB_019668d0;
        }
        if (9 < *(byte *)(iVar8 + uVar18) - 0x30) goto LAB_019668cc;
        iVar8 = iVar8 + 1;
        iVar13 = iVar13 + 1;
      } while( true );
    }
    uVar18 = 0;
    if ((local_64 & 0x100) != 0) goto LAB_01966858;
  }
  goto LAB_01966928;
LAB_01966708:
  do {
    if (uVar12 == uVar4) goto LAB_01966858;
    if (uVar9 == uVar4) {
      local_98 = &DAT_01d27284;
      local_3c = local_34;
LAB_01966d30:
      uVar14 = uVar9;
LAB_01966d34:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar14,local_3c,local_98);
    }
    if (local_3c <= uVar18 + uVar4) {
      local_98 = &DAT_01d27294;
      uVar14 = local_5c + uVar18;
      if (local_5c + uVar18 < local_3c) {
        uVar14 = local_3c;
      }
      goto LAB_01966d34;
    }
    pcVar20 = (char *)(local_40 + uVar18 + uVar4);
    pcVar1 = (char *)(local_38 + uVar4);
    uVar4 = uVar4 + 1;
  } while (*pcVar1 == *pcVar20);
  uVar18 = local_50 - local_58;
  uVar12 = local_58;
  local_50 = uVar18;
  if (local_4c != -1) {
LAB_019666d4:
    local_50 = uVar18;
    local_74 = uVar12;
  }
LAB_019666d8:
  uVar18 = local_50 - local_34;
  if (local_3c <= uVar18) goto LAB_01966928;
  goto LAB_01966618;
LAB_01966a18:
  uVar10 = uVar21;
  if (uVar11 <= uVar21) {
LAB_01966a24:
    puVar22 = &DAT_01d2723c;
    if (uVar9 < uVar12) {
      uVar18 = uVar9;
LAB_01966da4:
      uVar9 = uVar12;
      goto LAB_01966d74;
    }
    if (uVar12 != 0) {
      if (uVar12 < uVar11) {
        if (-0x41 < *(char *)(iVar17 + uVar12)) goto LAB_01966a68;
      }
      else if (uVar12 == uVar11) goto LAB_01966a68;
      goto LAB_01966a88;
    }
LAB_01966a68:
    if (uVar4 != 0) {
      if (uVar9 < uVar11) {
        if (-0x41 < *pcVar20) goto LAB_01966a98;
      }
      else if (uVar11 == uVar9) goto LAB_01966a98;
LAB_01966a88:
      uVar14 = uVar12;
      uVar10 = uVar9;
      goto LAB_01966df0;
    }
LAB_01966a98:
    uVar9 = uVar9 - uVar12;
    if (uVar9 != 0) {
      pbVar19 = (byte *)(iVar17 + uVar12);
      if (uVar9 == 1) {
        bVar3 = *pbVar19;
        if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) goto LAB_01966928;
      }
      else {
        bVar3 = *pbVar19;
      }
      if (bVar3 == 0x2b) {
        pbVar19 = pbVar19 + 1;
        uVar9 = uVar9 - 1;
      }
      if (8 < uVar9) {
        uVar6 = 0;
        uVar4 = 0;
        uVar12 = 0;
        do {
          if (uVar9 == 0) goto LAB_01966b64;
          uVar7 = (uint)((ulonglong)uVar6 * 10);
          if ((int)((ulonglong)uVar6 * 10 >> 0x20) != 0) goto LAB_01966928;
          uVar16 = *pbVar19 - 0x30;
          uVar6 = uVar16 + uVar7;
          if (9 < uVar16) goto LAB_01966928;
          uVar9 = uVar9 - 1;
          pbVar19 = pbVar19 + 1;
        } while (!CARRY4(uVar16,uVar7));
        goto LAB_0196692c;
      }
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          bVar3 = *pbVar19;
          if (9 < bVar3 - 0x30) goto LAB_01966928;
          pbVar19 = pbVar19 + 1;
          uVar9 = uVar9 - 1;
          uVar6 = (bVar3 - 0x30) + uVar6 * 10;
        } while (uVar9 != 0);
      }
LAB_01966b64:
      puVar22 = &UNK_01d2724c;
      if (uVar10 < uVar14) goto LAB_01966df0;
      uVar9 = 0;
      if (uVar14 == 0) {
LAB_01966ba4:
        if (uVar21 != 0) {
          uVar9 = uVar11;
        }
        if (uVar21 == 0 || uVar10 == uVar9) {
          uVar10 = uVar10 - uVar14;
          if (uVar10 != 0) {
            pbVar19 = (byte *)(iVar17 + uVar14);
            if (uVar10 == 1) {
              bVar3 = *pbVar19;
              if (bVar3 == 0x2b) goto LAB_01966928;
              uVar4 = 0;
              uVar12 = 0;
              if (bVar3 == 0x2d) goto LAB_0196692c;
            }
            else {
              bVar3 = *pbVar19;
            }
            if (bVar3 == 0x2b) {
              pbVar19 = pbVar19 + 1;
              uVar10 = uVar10 - 1;
            }
            if (uVar10 < 9) {
              if (uVar10 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0;
                do {
                  bVar3 = *pbVar19;
                  if (9 < bVar3 - 0x30) {
                    uVar4 = 0;
                    uVar12 = 0;
                    goto LAB_0196692c;
                  }
                  pbVar19 = pbVar19 + 1;
                  uVar10 = uVar10 - 1;
                  uVar9 = (bVar3 - 0x30) + uVar9 * 10;
                } while (uVar10 != 0);
              }
LAB_01966c9c:
              uVar4 = uVar9;
              if (uVar18 <= uVar11) {
                if (((uVar18 != 0) && (uVar18 < uVar11)) && (*(char *)(iVar17 + uVar18) < -0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d2725c);
                }
                param_1[2] = uVar18;
              }
              uVar12 = uVar6;
            }
            else {
              uVar9 = 0;
              uVar4 = 0;
              uVar12 = 0;
              do {
                if (uVar10 == 0) goto LAB_01966c9c;
                uVar14 = (uint)((ulonglong)uVar9 * 10);
                if ((int)((ulonglong)uVar9 * 10 >> 0x20) != 0) goto LAB_01966928;
                uVar21 = *pbVar19 - 0x30;
                uVar9 = uVar21 + uVar14;
                if (9 < uVar21) goto LAB_01966928;
                uVar10 = uVar10 - 1;
                pbVar19 = pbVar19 + 1;
              } while (!CARRY4(uVar21,uVar14));
            }
            goto LAB_0196692c;
          }
          goto LAB_01966be8;
        }
      }
      else if (uVar14 < uVar11) {
        uVar9 = (int)*(char *)(iVar17 + uVar14);
        if (-0x41 < *(char *)(iVar17 + uVar14)) goto LAB_01966ba4;
      }
      else {
        uVar9 = uVar11;
        if (uVar14 == uVar11) goto LAB_01966ba4;
      }
LAB_01966df0:
      uVar9 = uVar14;
      uVar18 = uVar10;
LAB_01966d74:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar17,uVar11,uVar9,uVar18,puVar22);
    }
LAB_01966be8:
    uVar4 = 0;
    uVar12 = uVar4;
    goto LAB_0196692c;
  }
  goto LAB_01966928;
LAB_019668cc:
  uVar9 = uVar18 + iVar13;
LAB_019668d0:
  pcVar20 = (char *)(iVar17 + uVar9);
  if (uVar4 != 0) {
    puVar22 = &DAT_01d2721c;
    if (uVar11 <= uVar9) {
      uVar4 = 0;
      uVar12 = 0;
      uVar18 = uVar11;
      if (uVar11 != uVar9) goto LAB_01966d74;
      goto LAB_0196692c;
    }
    if (*pcVar20 < -0x40) {
LAB_01966d58:
      uVar18 = uVar11;
      goto LAB_01966d74;
    }
  }
  if (7 < uVar11 - uVar9) {
    iVar13 = 8;
    iVar8 = thunk_FUN_01bed842(&DAT_005705b8,pcVar20,8);
    if (iVar8 == 0) {
      uVar14 = uVar9 + 8;
      iVar8 = iVar17 + 8;
      do {
        iVar15 = (uVar9 - uVar11) + iVar13;
        uVar21 = uVar9 + iVar13;
        if (uVar21 != 0) {
          if (uVar21 < uVar11) {
            if (*(char *)(iVar8 + uVar9) < -0x40) goto LAB_01966d8c;
          }
          else if (iVar15 != 0) {
LAB_01966d8c:
            uVar12 = uVar9 + iVar13;
            puVar22 = &DAT_01d2722c;
            uVar18 = uVar11;
            goto LAB_01966da4;
          }
        }
        uVar10 = uVar11;
        if (iVar15 == 0) goto LAB_01966a24;
        if (9 < *(byte *)(iVar8 + uVar9) - 0x30) goto LAB_01966a18;
        iVar8 = iVar8 + 1;
        iVar13 = iVar13 + 1;
      } while( true );
    }
  }
LAB_01966928:
  uVar4 = 0;
  uVar12 = 0;
LAB_0196692c:
  local_30 = *param_1;
  uStack_2c = param_1[1];
  uStack_28 = param_1[2];
  local_6c = FUN_016571c0();
  local_70 = 0;
  local_64 = uVar12;
  local_60 = uVar4;
  piVar5 = (int *)thunk_FUN_01be5118(0x14);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *piVar5 = local_70;
  *(undefined8 *)(piVar5 + 1) = local_6c;
  piVar5[3] = local_64;
  piVar5[4] = local_60;
  return;
}

