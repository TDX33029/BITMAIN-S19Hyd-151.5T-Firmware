// FUN_012b55e8 @ 012b55e8 size=236 calls_out=1 calls_in=1
// strings: 

void FUN_012b55e8(int *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  uint *puVar17;
  int local_28;
  
  local_28 = param_1[1];
  if (local_28 != 0) {
    iVar15 = param_1[3];
    if (iVar15 != 0) {
      puVar13 = (uint *)*param_1;
      puVar17 = puVar13 + 1;
      uVar11 = ~*puVar13 & 0x80808080;
      do {
        puVar8 = puVar17;
        if (uVar11 == 0) {
          do {
            puVar17 = puVar8 + 1;
            uVar11 = *puVar8;
            puVar13 = puVar13 + -0x10;
            puVar8 = puVar17;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar3 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8
                        | uVar11 >> 0x18) & 0x38;
        puVar16 = *(undefined4 **)((int)puVar13 + uVar3 * -2 + -4);
        uVar14 = *(undefined4 *)((int)puVar13 + uVar3 * -2 + -8);
        pcVar5 = (code *)*puVar16;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar14);
        }
        if (puVar16[1] != 0) {
          thunk_FUN_016d3fb4(uVar14);
        }
        iVar15 = iVar15 + -1;
        uVar11 = uVar11 - 1 & uVar11;
      } while (iVar15 != 0);
    }
    if (local_28 * 0x11 != -0x15) {
      iVar15 = *param_1 + local_28 * -0x10;
      if (iVar15 + -0x10 == 0) {
        return;
      }
      iVar4 = FUN_016d3bc8();
      uVar11 = *(byte *)(iVar15 + -0x13) & 0x1f;
      if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
         (uVar3 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar3 - 0x10, uVar3 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar3 = (uint)(*(byte *)(iVar15 + -0x13) >> 5);
      iVar12 = *(int *)(iVar4 + 8) + 0x10;
      iVar9 = iVar6 * uVar11 + iVar6 + -4;
      iVar6 = iVar12 + iVar9;
      if (4 < uVar3) {
        if (uVar3 != 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar5)();
        }
        uVar3 = *(uint *)(iVar6 + -4);
        if (uVar3 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar5)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar5)();
        }
      }
      if ((uint)(iVar6 - (iVar15 + -0x10)) < uVar3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar5)();
      }
      if (*(char *)(iVar6 - uVar3) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar5)();
      }
      if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar5)();
      }
      bVar1 = *(byte *)(iVar4 + 0x14);
      uVar3 = 1 << uVar11;
      *(undefined1 *)(iVar15 + -0x13) = 0xff;
      *(undefined2 *)(iVar15 + -0x12) = 0;
      do {
        uVar10 = *(uint *)(iVar4 + 0x10);
        uVar7 = *(uint *)(iVar4 + 0xc) | uVar10;
        if ((uVar3 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar5)();
        }
        if ((uVar10 == 0) || (uVar7 + uVar3 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar4,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar16 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar16;
          FUN_016d6ac4(local_28,unaff_r4);
          *puVar16 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar4 + 0x10) = uVar3 + uVar10;
          return;
        }
        puVar17 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar10 != uVar7) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar2);
        *puVar17 = uVar3 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

