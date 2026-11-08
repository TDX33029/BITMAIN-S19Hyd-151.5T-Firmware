// FUN_00c35bbc @ 00c35bbc size=1440 calls_out=9 calls_in=2
// strings: 

void FUN_00c35bbc(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar10;
  undefined4 *puVar9;
  uint uVar11;
  undefined *puVar12;
  int unaff_r4;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint unaff_r7;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  int local_54;
  uint *local_50;
  uint local_4c;
  uint local_48;
  undefined4 *local_44;
  uint local_40;
  int local_3c;
  undefined4 *local_38;
  uint local_34;
  uint local_30;
  undefined4 *local_2c;
  uint local_28;
  
  FUN_00c362b8(&local_54);
  FUN_00c362b8(&local_3c,param_4,param_5);
  uVar11 = local_34;
  puVar7 = local_38;
  uVar4 = 0;
  if ((0x3fffffff < local_34) || (unaff_r7 = local_34 * 4, 0x7ffffffc < unaff_r7)) {
LAB_00c35c28:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar4,unaff_r7);
  }
  if (unaff_r7 == 0) {
    uVar13 = 0;
    puVar5 = (undefined4 *)&DAT_00000004;
  }
  else {
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(unaff_r7);
    if (puVar5 == (undefined4 *)0x0) {
      uVar4 = 4;
      goto LAB_00c35c28;
    }
    uVar13 = uVar11;
  }
  FUN_016dd1aa(puVar5,puVar7,unaff_r7);
  local_28 = uVar11;
  local_30 = uVar13;
  local_2c = puVar5;
  if (uVar11 < 4) {
    if (uVar11 == uVar13) {
      FUN_005fd37c(&local_30);
    }
    uVar13 = uVar11 + 1;
    local_2c[uVar11] = 0;
    local_28 = uVar13;
    if (uVar13 != 4) {
      if (uVar13 == local_30) {
        FUN_005fd37c(&local_30);
      }
      uVar17 = uVar11 + 2;
      local_2c[uVar13] = 0;
      local_28 = uVar17;
      if (uVar17 != 4) {
        if (uVar17 == local_30) {
          FUN_005fd37c(&local_30);
        }
        uVar13 = uVar11 + 3;
        local_2c[uVar17] = 0;
        local_28 = uVar13;
        if (uVar13 != 4) {
          if (uVar13 == local_30) {
            FUN_005fd37c(&local_30);
          }
          local_28 = uVar11 | 4;
          local_2c[uVar13] = 0;
        }
      }
    }
    puVar7 = local_38;
    if (local_34 == 0) goto LAB_00c35d64;
    puVar5 = local_38 + local_34;
  }
  else {
    puVar5 = puVar7 + uVar11;
  }
  puVar9 = puVar7;
  do {
    puVar10 = puVar9 + 1;
    *puVar9 = 0;
    puVar9 = puVar10;
  } while (puVar10 != puVar5);
LAB_00c35d64:
  local_34 = 0;
  if (local_3c != 0) {
    iVar8 = local_3c << 2;
    do {
      *(undefined1 *)puVar7 = 0;
      iVar8 = iVar8 + -1;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    } while (iVar8 != 0);
  }
  local_48 = local_30;
  local_44 = local_2c;
  local_40 = local_28;
  if (local_3c != 0) {
    thunk_FUN_016d3fb4(local_38);
  }
  uVar11 = local_4c;
  if (local_4c == 0) {
    uVar17 = 0;
    uVar13 = 0;
    puVar12 = &DAT_0187319c;
LAB_00c360ec:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar17,uVar13,puVar12);
  }
  iVar8 = FUN_018462e8(0x34,local_4c);
  puVar22 = local_50;
  uVar19 = iVar8 * -0x61c88647 + 0xb54cda56;
  uVar13 = uVar11;
  if (uVar19 != 0) {
    uVar23 = uVar11 - 1;
    puVar12 = &DAT_018731bc;
    if (uVar23 == 0) {
      do {
        uVar17 = (uVar19 & 0xf) >> 2;
        if (local_40 <= uVar17) {
          uVar13 = local_40;
          goto LAB_00c360ec;
        }
        uVar11 = *local_50;
        *local_50 = uVar11 - ((local_44[uVar17] ^ uVar11) + (uVar11 ^ uVar19) ^
                             (uVar11 >> 5 ^ uVar11 << 2) + (uVar11 << 4 ^ uVar11 >> 3));
        uVar19 = uVar19 + 0x61c88647;
      } while (uVar19 != 0);
    }
    else {
      uVar18 = *local_50;
      do {
        uVar20 = (uVar19 & 0xf) >> 2;
        uVar17 = uVar23;
        iVar8 = uVar11 * 4;
        do {
          iVar21 = iVar8 + -4;
          uVar6 = uVar17 - 1;
          if (uVar13 <= uVar6) {
            uVar17 = uVar17 - 1;
            puVar12 = &DAT_018731cc;
            goto LAB_00c360ec;
          }
          if (uVar13 <= uVar17) {
            puVar12 = &DAT_018731dc;
            goto LAB_00c360ec;
          }
          uVar15 = (uVar17 ^ uVar19 >> 2) & 3;
          if (local_40 <= uVar15) {
            puVar12 = &DAT_018731bc;
            uVar13 = local_40;
            uVar17 = uVar15;
            goto LAB_00c360ec;
          }
          uVar13 = *(uint *)((int)local_50 + iVar8 + -8);
          *(uint *)((int)local_50 + iVar21) =
               *(int *)((int)local_50 + iVar21) -
               ((local_44[uVar15] ^ uVar13) + (uVar18 ^ uVar19) ^
               (uVar13 >> 5 ^ uVar18 << 2) + (uVar13 << 4 ^ uVar18 >> 3));
          if (local_4c <= uVar17) {
            puVar12 = &DAT_018731ec;
            uVar13 = local_4c;
            goto LAB_00c360ec;
          }
          uVar18 = local_50[uVar17];
          uVar13 = local_4c;
          uVar17 = uVar6;
          iVar8 = iVar21;
        } while (uVar6 != 0);
        if (local_4c <= uVar23) {
          puVar12 = &DAT_018731ac;
          uVar13 = local_4c;
          uVar17 = uVar23;
          goto LAB_00c360ec;
        }
        if (local_40 <= uVar20) {
          puVar12 = &DAT_018731bc;
          uVar13 = local_40;
          uVar17 = uVar20;
          goto LAB_00c360ec;
        }
        uVar17 = local_50[uVar23];
        uVar18 = *local_50 -
                 ((local_44[uVar20] ^ uVar17) + (uVar18 ^ uVar19) ^
                 (uVar17 >> 5 ^ uVar18 << 2) + (uVar17 << 4 ^ uVar18 >> 3));
        uVar19 = uVar19 + 0x61c88647;
        *local_50 = uVar18;
      } while (uVar19 != 0);
    }
  }
  uVar11 = uVar13 * 4;
  uVar17 = FUN_016d38c8(uVar11,1);
  if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar13 << 2);
  }
  uVar23 = 0;
  puVar12 = &DAT_018731fc;
  uVar19 = 0;
  do {
    uVar18 = uVar19 >> 2;
    if (uVar13 <= uVar19 >> 2) {
LAB_00c3611c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,uVar13,puVar12);
    }
    if (uVar11 == uVar19) {
      puVar12 = &DAT_0187320c;
      uVar18 = uVar11;
      uVar13 = uVar11;
      goto LAB_00c3611c;
    }
    uVar20 = uVar23 & 0x18;
    uVar6 = uVar19 + 1;
    uVar23 = uVar23 + 8;
    *(char *)(uVar17 + uVar19) = (char)(puVar22[uVar18] >> uVar20);
    uVar19 = uVar6;
    if (uVar11 == uVar6) {
      *param_1 = uVar11;
      param_1[1] = uVar17;
      param_1[2] = uVar11;
      if (local_40 != 0) {
        iVar8 = local_40 << 2;
        puVar7 = local_44;
        do {
          *puVar7 = 0;
          iVar8 = iVar8 + -4;
          puVar7 = puVar7 + 1;
        } while (iVar8 != 0);
      }
      local_40 = 0;
      if (local_48 != 0) {
        iVar8 = local_48 << 2;
        puVar7 = local_44;
        do {
          *(undefined1 *)puVar7 = 0;
          iVar8 = iVar8 + -1;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        } while (iVar8 != 0);
      }
      if (local_48 != 0) {
        thunk_FUN_016d3fb4(local_44);
      }
      if (local_4c != 0) {
        iVar8 = local_4c << 2;
        puVar22 = local_50;
        do {
          *puVar22 = 0;
          iVar8 = iVar8 + -4;
          puVar22 = puVar22 + 1;
        } while (iVar8 != 0);
      }
      local_4c = 0;
      if (local_54 != 0) {
        iVar8 = local_54 << 2;
        puVar22 = local_50;
        do {
          *(undefined1 *)puVar22 = 0;
          iVar8 = iVar8 + -1;
          puVar22 = (uint *)((int)puVar22 + 1);
        } while (iVar8 != 0);
      }
      if (local_54 == 0) {
        return;
      }
      if (local_50 == (uint *)0x0) {
        return;
      }
      iVar8 = FUN_016d3bc8();
      uVar11 = *(byte *)((int)local_50 + -3) & 0x1f;
      if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
         (uVar13 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar21 = uVar13 - 0x10, uVar13 == 0)) {
        iVar21 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar13 = (uint)(*(byte *)((int)local_50 + -3) >> 5);
      iVar16 = *(int *)(iVar8 + 8) + 0x10;
      iVar14 = iVar21 * uVar11 + iVar21 + -4;
      iVar21 = iVar16 + iVar14;
      if (4 < uVar13) {
        if (uVar13 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar13 = *(uint *)(iVar21 + -4);
        if (uVar13 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar21 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar21 - (int)local_50) < uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar21 - uVar13) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar8 + 0x14);
      uVar13 = 1 << uVar11;
      *(undefined1 *)((int)local_50 + -3) = 0xff;
      *(undefined2 *)((int)local_50 + -2) = 0;
      do {
        uVar19 = *(uint *)(iVar8 + 0x10);
        uVar17 = *(uint *)(iVar8 + 0xc) | uVar19;
        if ((uVar13 & uVar17) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar19 == 0) || (uVar17 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar8,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar7 = (undefined4 *)FUN_016d2bc8();
          uVar4 = *puVar7;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar7 = uVar4;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar8 + 0x10) = uVar13 + uVar19;
          return;
        }
        puVar22 = (uint *)(iVar8 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar22);
          uVar17 = *puVar22;
          if (uVar19 != uVar17) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar3);
        *puVar22 = uVar13 + uVar19;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar19 == uVar17) {
          return;
        }
      } while( true );
    }
  } while( true );
}

