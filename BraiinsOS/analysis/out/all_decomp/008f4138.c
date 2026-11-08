// FUN_008f4138 @ 008f4138 size=256 calls_out=1 calls_in=72
// strings: 

void FUN_008f4138(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  
  iVar15 = *(int *)(param_1 + 0x14);
  if (iVar15 != 0) {
    iVar16 = *(int *)(param_1 + 0x1c);
    if (iVar16 != 0) {
      puVar14 = *(uint **)(param_1 + 0x10);
      puVar17 = puVar14 + 1;
      uVar12 = ~*puVar14 & 0x80808080;
      do {
        puVar8 = puVar17;
        if (uVar12 == 0) {
          do {
            puVar17 = puVar8 + 1;
            uVar12 = *puVar8;
            puVar14 = puVar14 + -0xc;
            puVar8 = puVar17;
          } while ((uVar12 & 0x80808080) == 0x80808080);
          uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = (uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                              (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3;
        (**(code **)(puVar14[uVar9 * -3 + -2] + 0xc))(puVar14[uVar9 * -3 + -1]);
        iVar16 = iVar16 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (iVar16 != 0);
    }
    if (iVar15 * 0xd != -0x11) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x10) + iVar15 * -0xc + -0xc);
    }
  }
  if (param_1 != -1) {
    piVar4 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar15 = FUN_016d3bc8();
      uVar12 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar16 = uVar9 - 0x10, uVar9 == 0)) {
        iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar15 + 8) + 0x10;
      iVar10 = iVar16 * uVar12 + iVar16 + -4;
      iVar16 = iVar13 + iVar10;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar9 = *(uint *)(iVar16 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar16 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar16 - param_1) < uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar16 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar15 + 0x14);
      uVar9 = 1 << uVar12;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar15 + 0x10);
        uVar6 = *(uint *)(iVar15 + 0xc) | uVar11;
        if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar15,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar7 = *puVar5;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar5 = uVar7;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar15 + 0x10) = uVar9 + uVar11;
          return;
        }
        puVar17 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar6 = *puVar17;
          if (uVar11 != uVar6) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar1);
        *puVar17 = uVar9 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar6) {
          return;
        }
      } while( true );
    }
  }
  return;
}

