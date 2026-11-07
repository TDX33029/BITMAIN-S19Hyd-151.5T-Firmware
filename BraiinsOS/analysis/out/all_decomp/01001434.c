// FUN_01001434 @ 01001434 size=244 calls_out=1 calls_in=4
// strings: 

void FUN_01001434(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar15 = *(int *)(param_1 + 0xc);
  if (iVar15 != 0) {
    iVar16 = *(int *)(param_1 + 0x14);
    if (iVar16 != 0) {
      puVar14 = *(uint **)(param_1 + 8);
      puVar17 = puVar14 + 1;
      uVar12 = ~*puVar14 & 0x80808080;
      do {
        puVar9 = puVar17;
        if (uVar12 == 0) {
          do {
            puVar17 = puVar9 + 1;
            uVar12 = *puVar9;
            puVar14 = puVar14 + -0x10;
            puVar9 = puVar17;
          } while ((uVar12 & 0x80808080) == 0x80808080);
          uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar4 = LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8
                        | uVar12 >> 0x18) & 0x38;
        if (*(int *)((int)puVar14 + uVar4 * -2 + -0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)((int)puVar14 + uVar4 * -2 + -0xc));
        }
        iVar16 = iVar16 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (iVar16 != 0);
    }
    if (iVar15 * 0x11 != -0x15) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 8) + iVar15 * -0x10 + -0x10);
    }
  }
  if (param_1 != -1) {
    piVar5 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar15 + -1;
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      if (param_1 == 0) {
        return;
      }
      iVar15 = FUN_016d3bc8();
      uVar12 = *(byte *)(param_1 + -3) & 0x1f;
      if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
         (uVar4 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar16 = uVar4 - 0x10, uVar4 == 0)) {
        iVar16 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar4 = (uint)(*(byte *)(param_1 + -3) >> 5);
      iVar13 = *(int *)(iVar15 + 8) + 0x10;
      iVar10 = iVar16 * uVar12 + iVar16 + -4;
      iVar16 = iVar13 + iVar10;
      if (4 < uVar4) {
        if (uVar4 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar4 = *(uint *)(iVar16 + -4);
        if (uVar4 < 5) {
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
      if ((uint)(iVar16 - param_1) < uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar16 - uVar4) != '\0') {
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
      uVar4 = 1 << uVar12;
      *(undefined1 *)(param_1 + -3) = 0xff;
      *(undefined2 *)(param_1 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar15 + 0x10);
        uVar7 = *(uint *)(iVar15 + 0xc) | uVar11;
        if ((uVar4 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar4 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar15,uVar12);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar15 + 0x10) = uVar4 + uVar11;
          return;
        }
        puVar17 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar1);
        *puVar17 = uVar4 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

