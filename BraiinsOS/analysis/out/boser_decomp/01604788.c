// FUN_01604788 @ 01604788 size=4116 calls_out=9 calls_in=1
// strings: assertion failed: code < MAX_HUFF_SYMBOLS_2 | assertion failed: d.params.flush_remaining == 0

undefined4 FUN_01604788(undefined4 *param_1,int *param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  uint *puVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  int local_2d8;
  uint local_2d4;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  char local_2c4;
  byte abStack_2c0 [286];
  byte abStack_1a2 [34];
  byte local_180 [268];
  undefined4 auStack_74 [13];
  int local_40;
  short local_3c;
  byte local_3a;
  uint local_38 [5];
  
  iVar38 = *param_2;
  iVar28 = param_1[1];
  uVar2 = param_1[10];
  local_2c4 = '\x01';
  local_2d8 = iVar28;
  if ((iVar38 == 1) && (uVar10 = param_2[2], 0x14ccb < uVar10 - uVar2)) {
    bVar41 = 0xfffeb342 < uVar2;
    bVar40 = uVar2 == 0xfffeb343;
    if (uVar2 < 0xfffeb344) {
      bVar41 = uVar10 <= uVar2 + 0x14cbc;
      bVar40 = uVar2 + 0x14cbc == uVar10;
    }
    if (bVar41 && !bVar40) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4();
    }
    local_2c4 = '\0';
    local_2d8 = param_2[1] + uVar2;
  }
  local_2cc = param_1[0xb];
  local_2c8 = param_1[0xc];
  uVar10 = param_1[2];
  bVar40 = false;
  local_2d0 = 0;
  local_2d4 = 0x14cbc;
  if (((uVar10 & 0x80000) != 0) && ((uint)(param_1[0x16] - param_1[0x14]) <= (uint)param_1[0x17])) {
    bVar40 = true;
  }
  if (param_1[7] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: d.params.flush_remaining == 0",0x2f,&DAT_01d05880);
  }
  puVar36 = param_1 + 0x4019;
  bVar13 = 0;
  param_1[6] = 0;
  if (param_1[0x401c] == 8) {
    *puVar36 = *puVar36 - 1;
  }
  else {
    bVar13 = *(byte *)((int)param_1 + *(ushort *)(param_1 + 0x401a) + 100) >> (param_1[0x401c] & 7);
  }
  iVar17 = param_1[3];
  *(byte *)((int)param_1 + *(ushort *)(param_1 + 0x401a) + 100) = bVar13;
  if (((uVar10 & 0x1000) != 0) && (iVar17 == 0)) {
    uVar25 = 2;
    uVar9 = 0x800;
    if (2 < (uVar10 & 0xfff) >> 8) {
      uVar25 = 3;
    }
    if ((uVar10 & 0x14000) != 0) {
      uVar25 = (ushort)(1 < (uVar10 & 0xfff));
    }
    bVar41 = (uVar10 & 0x90000) == 0;
    if (bVar41) {
      uVar9 = 0x7800;
    }
    iVar14 = 8;
    uVar19 = (short)(uVar9 | uVar25 << 6) * 0x4211;
    if (bVar41) {
      iVar14 = 0x78;
    }
    local_2cc = local_2cc | iVar14 << (local_2c8 & 0x1f);
    local_2c8 = local_2c8 + 8;
    FUN_01605814(&local_2d8,((uVar19 >> 0x13) * 0x20 - (uVar19 >> 0x13)) + 0x1f & 0xff,8);
  }
  FUN_01605814(&local_2d8,param_3 == '\x04',1);
  cVar1 = local_2c4;
  uVar35 = local_2c8;
  uVar12 = local_2cc;
  uVar19 = local_2d0;
  if (bVar40) {
    uVar5 = param_1[0x401b];
  }
  else {
    iVar14 = param_1[0xe];
    uVar5 = param_1[0x401b];
    if (((uVar10 & 0x40000) == 0) && (0x2f < uVar5)) {
      iVar31 = 0;
      *(undefined2 *)(iVar14 + 0x200) = 1;
      FUN_016058bc(iVar14,0,0x120,0xf,0);
      FUN_016058bc(iVar14,1,0x20,0xf,0);
      do {
        if (*(char *)((iVar14 + 0xe9d) - iVar31) != '\0') goto LAB_01604a48;
        iVar31 = iVar31 + 1;
      } while (iVar31 != 0x1d);
      iVar31 = 0x1d;
LAB_01604a48:
      uVar27 = 0x11e - iVar31;
      iVar18 = 0;
      do {
        if (*(char *)((iVar14 + 0xebd) - iVar18) != '\0') goto LAB_01604a7c;
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0x1d);
      iVar18 = 0x1d;
LAB_01604a7c:
      FUN_01bed93e(abStack_2c0,0,0x140);
      FUN_01bed93e(local_180,0,0x140);
      if (0x140 < uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar27,0x140,&DAT_01d05920);
      }
      if (0x120 < uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar27,0x120,&DAT_01d05930);
      }
      uVar32 = 0x1e - iVar18;
      uVar24 = uVar32 + uVar27;
      FUN_01bed4e2(abStack_2c0,iVar14 + 0xd80,uVar27);
      if ((uVar24 < uVar27) || (0x140 < uVar24)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar27,uVar24,0x140,&DAT_01d05940);
      }
      if (0x120 < uVar32) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar32,0x120,&DAT_01d05950);
      }
      FUN_01bed4e2(abStack_2c0 + uVar27,iVar14 + 0xea0,uVar32);
      local_3a = 0xff;
      local_3c = 0;
      local_40 = 0;
      FUN_01bed93e(iVar14 + 0x480,0,0x26);
      local_38[0] = 0;
      if (uVar24 == 0) {
LAB_01604d14:
        iVar20 = FUN_016061cc(&local_40,local_180,local_38,iVar14);
      }
      else {
        iVar20 = iVar31 + iVar18 + -0x13c;
        pbVar22 = abStack_2c0;
        do {
          bVar13 = *pbVar22;
          uVar27 = (uint)bVar13;
          if (uVar27 == 0) {
            iVar3 = FUN_016062ac(&local_40,local_180,local_38,iVar14);
            if (iVar3 != 0) {
              return 1;
            }
            local_40 = local_40 + 1;
            if (local_40 == 0x8a) {
              iVar3 = FUN_016061cc(&local_40,local_180,local_38,iVar14);
LAB_01604bd8:
              if (iVar3 != 0) {
                return 1;
              }
            }
          }
          else {
            iVar3 = FUN_016061cc();
            if (iVar3 != 0) {
              return 1;
            }
            if (uVar27 == local_3a) {
              local_3c = local_3c + 1;
              if (local_3c == 6) {
                iVar3 = FUN_016062ac(&local_40,local_180,local_38,iVar14);
                goto LAB_01604bd8;
              }
            }
            else {
              iVar3 = FUN_016062ac(&local_40,local_180,local_38,iVar14);
              if (iVar3 != 0) {
                return 1;
              }
              psVar6 = (short *)(iVar14 + 0x480 + uVar27 * 2);
              *psVar6 = *psVar6 + 1;
              if (4 < local_38[0] >> 6) {
                return 1;
              }
              local_180[local_38[0]] = bVar13;
              local_38[0] = local_38[0] + 1;
            }
          }
          iVar20 = iVar20 + 1;
          local_3a = bVar13;
          pbVar22 = pbVar22 + 1;
        } while (iVar20 != 0);
        if (local_3c == 0) goto LAB_01604d14;
        iVar20 = FUN_016062ac(&local_40,local_180,local_38,iVar14);
      }
      if (iVar20 != 0) {
        return 1;
      }
      uVar27 = 0;
      FUN_016058bc(iVar14,2,0x13,7,0);
      local_2c8 = uVar35 + 0xc;
      iVar20 = iVar14 + 0xfc0;
      local_2cc = 2 << (uVar35 & 0x1f) | 0x1d - iVar31 << (uVar35 + 2 & 0x1f) |
                  0x1d - iVar18 << (uVar35 + 7 & 0x1f) | uVar12;
      do {
        if (*(char *)(iVar20 + (uint)(byte)(&DAT_004bae6c)[-uVar27]) != '\0') goto LAB_01604dc8;
        uVar27 = uVar27 + 1;
      } while (uVar27 != 0x13);
      uVar27 = 0x13;
LAB_01604dc8:
      uVar24 = 0x13 - uVar27;
      if (uVar24 < 5) {
        uVar24 = 4;
      }
      FUN_01605814(&local_2d8,uVar24 - 4,4);
      if (0x13 < uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar24,0x13,&DAT_01d05960);
      }
      pbVar22 = &DAT_004bae5a;
      do {
        FUN_01605814(&local_2d8,*(undefined1 *)(iVar20 + (uint)*pbVar22),3);
        uVar27 = local_38[0];
        uVar24 = uVar24 - 1;
        pbVar22 = pbVar22 + 1;
      } while (uVar24 != 0);
      if (local_38[0] != 0) {
        uVar24 = 0;
        do {
          if (4 < uVar24 >> 6) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar24,0x140,&DAT_01d05970);
          }
          uVar32 = (uint)local_180[uVar24];
          if (0x12 < uVar32) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: code < MAX_HUFF_SYMBOLS_2",0x2b,&DAT_01d05980);
          }
          uVar37 = uVar24 + 1;
          FUN_01605814(&local_2d8,*(undefined2 *)(iVar14 + 0xb40 + uVar32 * 2),
                       *(undefined1 *)(iVar20 + uVar32));
          if (0xf < uVar32) {
            if (uVar24 == 0x13f) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(0x140,0x140,&DAT_01d05990);
            }
            local_38[3] = 7;
            local_38[2] = 3;
            local_38[1] = 2;
            FUN_01605814(&local_2d8,local_180[uVar24 + 1],auStack_74[uVar32]);
            uVar37 = uVar24 + 2;
          }
          uVar24 = uVar37;
        } while (uVar37 < uVar27);
      }
    }
    else {
      FUN_01bed93e(iVar14 + 0xd80,8,0x90);
      FUN_01bed93e(iVar14 + 0xe10,9,0x70);
      FUN_01bed93e(iVar14 + 0xe80,7,0x18);
      *(undefined4 *)(iVar14 + 0xe9c) = 0x8080808;
      *(undefined4 *)(iVar14 + 0xe98) = 0x8080808;
      FUN_01bed93e(iVar14 + 0xea0,5,0x20);
      FUN_016058bc(iVar14,0,0x120,0xf,1);
      FUN_016058bc(iVar14,1,0x20,0xf,1);
      FUN_01605814(&local_2d8,1,2);
    }
    uVar24 = *puVar36;
    uVar27 = uVar24;
    if (0xffff < uVar24) {
      uVar27 = 0x10000;
    }
    uVar32 = local_2c8;
    uVar37 = local_2cc;
    if (uVar24 == 0) {
      uVar24 = 0;
    }
    else {
      uVar39 = 0;
      uVar33 = 1;
      uVar24 = 0;
      uVar4 = local_2d0;
      do {
        if (uVar33 == 1) {
          uVar33 = *(byte *)((int)param_1 + uVar39 + 100) | 0x100;
          uVar8 = uVar39 + 1;
        }
        else {
          uVar8 = uVar39;
        }
        uVar39 = uVar8 + 3;
        if ((uVar33 & 1) == 0) {
          iVar31 = 0;
          do {
            if (iVar31 == 3) goto LAB_016051ac;
            uVar11 = uVar8 + iVar31;
            uVar23 = uVar32 & 0x3f;
            iVar31 = iVar31 + 1;
            uVar16 = uVar33 >> 1;
            uVar15 = (uint)*(byte *)((int)param_1 + (uVar11 & 0xffff) + 100);
            uVar26 = uVar23 - 0x20;
            uVar25 = *(ushort *)(iVar14 + 0x6c0 + uVar15 * 2);
            uVar11 = (uint)(uVar25 >> (0x20 - uVar23 & 0xff));
            if (-1 < (int)uVar26) {
              uVar11 = (uint)uVar25 << (uVar26 & 0xff);
            }
            uVar24 = uVar11 | uVar24;
            uVar32 = uVar32 + *(byte *)(iVar14 + 0xd80 + uVar15);
            uVar23 = (uint)uVar25 << uVar23;
            if (-1 < (int)uVar26) {
              uVar23 = 0;
            }
            uVar37 = uVar23 | uVar37;
          } while (((uVar33 & 2) == 0) && (uVar33 = uVar16, iVar31 + uVar8 < uVar27));
          uVar33 = uVar16;
          uVar39 = iVar31 + uVar8;
        }
        else {
          uVar23 = (uint)*(byte *)((int)param_1 + (uVar8 & 0xffff) + 100);
          uVar15 = (byte)(&DAT_004ba90f)[uVar23] & 0x1f | 0x100;
          uVar11 = *(uint *)(&DAT_004baa40 + ((byte)(&DAT_004baa84)[uVar23] & 7) * 4) & uVar23;
          uVar34 = uVar32 + *(byte *)(iVar14 + 0xd80 + uVar15);
          uVar26 = uVar34 & 0x3f;
          uVar16 = uVar11 >> (0x20 - uVar26 & 0xff);
          uVar21 = uVar26 - 0x20;
          if (-1 < (int)uVar21) {
            uVar16 = uVar11 << (uVar21 & 0xff);
          }
          uVar11 = uVar11 << uVar26;
          if (-1 < (int)uVar21) {
            uVar11 = 0;
          }
          uVar32 = uVar32 & 0x3f;
          uVar25 = *(ushort *)(iVar14 + 0x6c0 + uVar15 * 2);
          uVar15 = (uint)(uVar25 >> (0x20 - uVar32 & 0xff));
          uVar26 = uVar32 - 0x20;
          if (-1 < (int)uVar26) {
            uVar15 = (uint)uVar25 << (uVar26 & 0xff);
          }
          uVar32 = (uint)uVar25 << uVar32;
          if (-1 < (int)uVar26) {
            uVar32 = 0;
          }
          bVar13 = *(byte *)((int)param_1 + (uVar8 + 2 & 0xffff) + 100);
          uVar26 = (uint)bVar13;
          uVar8 = (uint)CONCAT11(bVar13,*(undefined1 *)((int)param_1 + (uVar8 + 1 & 0xffff) + 100));
          if (uVar26 < 2) {
            pbVar22 = &DAT_004bac04 + uVar8;
            pbVar29 = &DAT_004ba70f + uVar8;
          }
          else {
            if ((char)bVar13 < '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar26,0x80,&DAT_01d05b10);
            }
            pbVar22 = &DAT_004bab84 + uVar26;
            pbVar29 = (byte *)("" + uVar26);
          }
          uVar34 = uVar34 + (byte)(&DAT_004baa84)[uVar23];
          uVar33 = uVar33 >> 1;
          uVar8 = *(uint *)(&DAT_004baa40 + (*pbVar22 & 0xf) * 4) & uVar8;
          uVar25 = *(ushort *)(iVar14 + 0x900 + (uint)*pbVar29 * 2);
          uVar30 = uVar34 + *(byte *)(iVar14 + 0xea0 + (uint)*pbVar29);
          uVar26 = uVar30 & 0x3f;
          uVar21 = uVar26 - 0x20;
          uVar23 = uVar8 >> (0x20 - uVar26 & 0xff);
          if (-1 < (int)uVar21) {
            uVar23 = uVar8 << (uVar21 & 0xff);
          }
          uVar8 = uVar8 << uVar26;
          if (-1 < (int)uVar21) {
            uVar8 = 0;
          }
          uVar34 = uVar34 & 0x3f;
          uVar21 = uVar34 - 0x20;
          uVar26 = (uint)uVar25 << uVar34;
          if (-1 < (int)uVar21) {
            uVar26 = 0;
          }
          uVar37 = uVar32 | uVar11 | uVar26 | uVar8 | uVar37;
          uVar32 = (uint)(uVar25 >> (0x20 - uVar34 & 0xff));
          if (-1 < (int)uVar21) {
            uVar32 = (uint)uVar25 << (uVar21 & 0xff);
          }
          uVar24 = uVar15 | uVar16 | uVar32 | uVar23 | uVar24;
          uVar32 = uVar30 + *pbVar22;
        }
LAB_016051ac:
        bVar42 = 0xfffffff6 < uVar4;
        bVar41 = uVar4 == 0xfffffff7;
        if (uVar4 < 0xfffffff8) {
          bVar42 = local_2d4 <= uVar4 + 8;
          bVar41 = uVar4 + 8 == local_2d4;
        }
        if (bVar42 && !bVar41) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4();
        }
        puVar7 = (uint *)(local_2d8 + uVar4);
        *puVar7 = uVar37;
        uVar4 = uVar4 + (uVar32 >> 3);
        puVar7[1] = uVar24;
        if (uVar4 < uVar32 >> 3) {
          return 1;
        }
        if (local_2d4 < uVar4) {
          return 1;
        }
        uVar8 = uVar32 & 0x38;
        uVar32 = uVar32 & 7;
        uVar37 = uVar37 >> uVar8 | uVar24 << (0x20 - uVar8 & 0xff);
        uVar16 = uVar8 - 0x20;
        if (-1 < (int)uVar16) {
          uVar37 = uVar24 >> (uVar16 & 0xff);
        }
        uVar24 = uVar24 >> uVar8;
        if (-1 < (int)uVar16) {
          uVar24 = 0;
        }
      } while (uVar39 < uVar27);
      local_2d0 = uVar4;
    }
    local_2cc = 0;
    local_2c8 = 0;
    if (uVar32 != 0) {
      do {
        uVar27 = uVar32;
        if (0xf < uVar32) {
          uVar27 = 0x10;
        }
        FUN_01605814(&local_2d8,*(uint *)(&DAT_004baa40 + uVar27 * 4) & uVar37,uVar27);
        uVar32 = uVar32 - uVar27;
        uVar37 = uVar37 >> (uVar27 & 0xff) | (uVar24 << 1) << ((uVar27 ^ 0x1f) & 0xff);
        uVar24 = uVar24 >> (uVar27 & 0xff);
      } while (uVar32 != 0);
    }
    FUN_01605814(&local_2d8,*(undefined2 *)(iVar14 + 0x8c0),*(undefined1 *)(iVar14 + 0xe80));
  }
  if ((uVar5 < 0x21) || ((local_2d0 - uVar19) + 1 < uVar5)) {
    if (!bVar40) goto LAB_01605448;
  }
  else if ((bool)(~bVar40 & (uint)param_1[0x17] < (uint)(param_1[0x16] - param_1[0x14])))
  goto LAB_01605448;
  local_2d0 = uVar19;
  local_2cc = uVar12;
  local_2c8 = uVar35;
  local_2c4 = cVar1;
  FUN_01605814(&local_2d8,0,2);
  if (local_2c8 != 0) {
    FUN_01605814(&local_2d8,0,8 - local_2c8);
  }
  FUN_01605814(&local_2d8,uVar5 & 0xffff,0x10);
  FUN_01605814(&local_2d8,uVar5 & 0xffff ^ 0xffff,0x10);
  uVar19 = local_2d4;
  iVar14 = local_2d8;
  uVar12 = param_1[0x14] & 0x7fff;
  uVar35 = uVar5 + param_1[0x14] & 0x7fff;
  if (uVar12 < uVar35) {
    uVar24 = local_2d0 + (uVar35 - uVar12);
    if ((CARRY4(local_2d0,uVar35 - uVar12)) || (local_2d4 < uVar24)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(local_2d0,uVar24,local_2d4,&DAT_01d05ae0);
    }
    FUN_01bed4e2(local_2d8 + local_2d0,param_1[0xf] + uVar12);
  }
  else {
    if (uVar5 == 0) goto LAB_01605448;
    uVar27 = local_2d0 + (0x8000 - uVar12);
    if ((CARRY4(local_2d0,0x8000 - uVar12)) || (local_2d4 < uVar27)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(local_2d0,uVar27,local_2d4,&DAT_01d05ae0);
    }
    iVar31 = param_1[0xf];
    FUN_01bed4e2(local_2d8 + local_2d0,iVar31 + uVar12);
    uVar24 = uVar27 + uVar35;
    if ((CARRY4(uVar27,uVar35)) || (uVar19 < uVar24)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar27,uVar24,uVar19,&DAT_01d05ae0);
    }
    FUN_01bed4e2(iVar14 + uVar27,iVar31,uVar35);
  }
  local_2d0 = uVar24;
LAB_01605448:
  if (param_3 != '\0') {
    if (param_3 == '\x04') {
      if (local_2c8 != 0) {
        FUN_01605814(&local_2d8,0,8 - local_2c8);
      }
      if ((uVar10 & 0x1000) != 0) {
        uVar10 = param_1[8];
        iVar14 = 4;
        do {
          FUN_01605814(&local_2d8,uVar10 >> 0x18,8);
          iVar14 = iVar14 + -1;
          uVar10 = uVar10 << 8;
        } while (iVar14 != 0);
      }
    }
    else {
      FUN_01605814(&local_2d8,0,3);
      if (local_2c8 != 0) {
        FUN_01605814(&local_2d8,0,8 - local_2c8);
      }
      FUN_01605814(&local_2d8,0,0x10);
      FUN_01605814(&local_2d8,0xffff,0x10);
    }
  }
  FUN_01bed93e(param_1[0xe],0,0x280);
  uVar10 = local_2d0;
  *puVar36 = 1;
  param_1[0x401c] = 8;
  param_1[0x401a] = 0;
  param_1[0x401b] = 0;
  param_1[3] = iVar17 + 1;
  param_1[0xb] = local_2cc;
  param_1[0xc] = local_2c8;
  param_1[0x14] = param_1[0x14] + uVar5;
  if (local_2d0 != 0) {
    if ((undefined4 *)param_2[5] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[5] = param_1[9];
    }
    if (iVar38 == 0) {
      if (0x14ccc < local_2d0) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_2d0,0x14ccc,&DAT_01d05890);
      }
      iVar28 = (**(code **)(param_2[2] + 0x10))(param_2[1],iVar28,local_2d0);
      if (iVar28 == 0) {
        *param_1 = 0xffffffff;
      }
    }
    else if (local_2c4 == '\0') {
      param_1[10] = local_2d0 + uVar2;
    }
    else {
      uVar12 = param_2[2];
      uVar35 = uVar12 - uVar2;
      uVar19 = local_2d0;
      if (uVar35 < local_2d0) {
        uVar19 = uVar35;
      }
      uVar5 = uVar19 + uVar2;
      if ((CARRY4(uVar19,uVar2)) || (uVar12 < uVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar2,uVar5,uVar12,&DAT_01d05850);
      }
      if (0x14ccc < uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar19,0x14ccc,&DAT_01d05860);
      }
      FUN_01bed4e2(param_2[1] + uVar2,iVar28,uVar19);
      param_1[10] = uVar5;
      if (uVar35 < uVar10) {
        param_1[6] = uVar19;
        param_1[7] = uVar10 - uVar19;
      }
    }
  }
  return 0;
}

