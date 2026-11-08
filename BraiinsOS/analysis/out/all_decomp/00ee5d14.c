// FUN_00ee5d14 @ 00ee5d14 size=596 calls_out=1 calls_in=4
// strings: 

void FUN_00ee5d14(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  int *local_28;
  int local_24;
  
  if (*(int *)(param_1 + 0x5c) == -0x80000000 || *(int *)(param_1 + 0x5c) == 0) {
    if (*(int *)(param_1 + 0x68) == -0x80000000 || *(int *)(param_1 + 0x68) == 0) goto LAB_00ee5d3c;
LAB_00ee5dd4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
    if (*(int *)(param_1 + 0x74) != -0x80000000 && *(int *)(param_1 + 0x74) != 0) goto LAB_00ee5dec;
LAB_00ee5d4c:
    if (*(int *)(param_1 + 0x80) == -0x80000000 || *(int *)(param_1 + 0x80) == 0) goto LAB_00ee5d5c;
LAB_00ee5e04:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    if (*(int *)(param_1 + 0x8c) != -0x80000000 && *(int *)(param_1 + 0x8c) != 0) goto LAB_00ee5e1c;
LAB_00ee5d6c:
    if (*(int *)(param_1 + 0x98) == -0x80000000 || *(int *)(param_1 + 0x98) == 0) goto LAB_00ee5d7c;
LAB_00ee5e34:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x9c));
    if (*(int *)(param_1 + 0xa4) != -0x80000000 && *(int *)(param_1 + 0xa4) != 0) goto LAB_00ee5e4c;
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x60));
    if (*(int *)(param_1 + 0x68) != -0x80000000 && *(int *)(param_1 + 0x68) != 0) goto LAB_00ee5dd4;
LAB_00ee5d3c:
    if (*(int *)(param_1 + 0x74) == -0x80000000 || *(int *)(param_1 + 0x74) == 0) goto LAB_00ee5d4c;
LAB_00ee5dec:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x78));
    if (*(int *)(param_1 + 0x80) != -0x80000000 && *(int *)(param_1 + 0x80) != 0) goto LAB_00ee5e04;
LAB_00ee5d5c:
    if (*(int *)(param_1 + 0x8c) == -0x80000000 || *(int *)(param_1 + 0x8c) == 0) goto LAB_00ee5d6c;
LAB_00ee5e1c:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
    if (*(int *)(param_1 + 0x98) != -0x80000000 && *(int *)(param_1 + 0x98) != 0) goto LAB_00ee5e34;
LAB_00ee5d7c:
    if (*(int *)(param_1 + 0xa4) != -0x80000000 && *(int *)(param_1 + 0xa4) != 0) {
LAB_00ee5e4c:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa8));
      iVar4 = *(int *)(param_1 + 0x50);
      goto joined_r0x00ee5e5c;
    }
  }
  iVar4 = *(int *)(param_1 + 0x50);
joined_r0x00ee5e5c:
  if (iVar4 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 0xb0) != -0x80000000 && *(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
  }
  local_28 = (int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 != 0) {
    iVar16 = *(int *)(param_1 + 0x3c);
    local_24 = unaff_r4;
    if (iVar16 != 0) {
      puVar15 = (uint *)*local_28;
      puVar17 = puVar15 + 1;
      uVar13 = ~*puVar15 & 0x80808080;
      do {
        puVar8 = puVar17;
        if (uVar13 == 0) {
          do {
            puVar17 = puVar8 + 1;
            uVar13 = *puVar8;
            puVar15 = puVar15 + -0x18;
            puVar8 = puVar17;
          } while ((uVar13 & 0x80808080) == 0x80808080);
          uVar13 = uVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar10 = (uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                               (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3;
        if (puVar15[uVar10 * -6 + -6] != 0) {
          thunk_FUN_016d3fb4(puVar15[uVar10 * -6 + -5]);
        }
        if (puVar15[uVar10 * -6 + -3] != 0) {
          thunk_FUN_016d3fb4(puVar15[uVar10 * -6 + -2]);
        }
        iVar16 = iVar16 + -1;
        uVar13 = uVar13 - 1 & uVar13;
      } while (iVar16 != 0);
    }
    if (iVar4 * 0x19 != -0x1d) {
      iVar4 = *local_28 + iVar4 * -0x18;
      if (iVar4 + -0x18 == 0) {
        return;
      }
      iVar16 = FUN_016d3bc8();
      uVar13 = *(byte *)(iVar4 + -0x1b) & 0x1f;
      if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)(iVar4 + -0x1b) >> 5);
      iVar14 = *(int *)(iVar16 + 8) + 0x10;
      iVar11 = iVar6 * uVar13 + iVar6 + -4;
      iVar6 = iVar14 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar6 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar6 - (iVar4 + -0x18)) < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar16 + 0x14);
      uVar10 = 1 << uVar13;
      *(undefined1 *)(iVar4 + -0x1b) = 0xff;
      *(undefined2 *)(iVar4 + -0x1a) = 0;
      do {
        uVar12 = *(uint *)(iVar16 + 0x10);
        uVar7 = *(uint *)(iVar16 + 0xc) | uVar12;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar16,uVar13);
          FUN_016dddc0(&DAT_018ddd48);
          if (local_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(local_28,local_24);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar16 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar17 = (uint *)(iVar16 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar12 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar3);
        *puVar17 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

