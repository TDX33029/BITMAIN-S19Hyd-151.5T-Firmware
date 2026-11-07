// FUN_008e89ac @ 008e89ac size=276 calls_out=1 calls_in=2
// strings: 

void FUN_008e89ac(uint *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  if ((uVar4 & 0xfffffffe) != 0x80000002) {
    uVar6 = 2;
    if ((int)uVar4 < 0) {
      uVar6 = uVar4 ^ 0x80000000;
    }
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        uVar6 = param_1[2];
        puVar15 = param_1 + 1;
        uVar4 = param_1[3];
        param_1 = puVar15;
        if (uVar4 != 0) {
          uVar11 = 0;
          do {
            piVar7 = *(int **)(uVar6 + uVar11 * 4);
            uVar13 = uVar11 + 1;
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar7;
              bVar1 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar1);
            *piVar7 = iVar8 + -1;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f31e8(*(undefined4 *)(uVar6 + uVar11 * 4));
            }
            uVar11 = uVar13;
          } while (uVar13 != uVar4);
        }
      }
      else {
        uVar6 = param_1[1];
        uVar4 = param_1[2];
        if (uVar4 != 0) {
          uVar11 = 0;
          do {
            piVar7 = *(int **)(uVar6 + uVar11 * 4);
            uVar13 = uVar11 + 1;
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar7;
              bVar1 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar1);
            *piVar7 = iVar8 + -1;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f31e8(*(undefined4 *)(uVar6 + uVar11 * 4));
            }
            uVar11 = uVar13;
          } while (uVar13 != uVar4);
        }
      }
      if (*param_1 != 0) {
        uVar4 = param_1[1];
        if (uVar4 == 0) {
          return;
        }
        iVar8 = FUN_016d3bc8();
        uVar6 = *(byte *)(uVar4 - 3) & 0x1f;
        if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
          iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar11 = (uint)(*(byte *)(uVar4 - 3) >> 5);
        iVar14 = *(int *)(iVar8 + 8) + 0x10;
        iVar12 = iVar9 * uVar6 + iVar9 + -4;
        iVar9 = iVar14 + iVar12;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar11 = *(uint *)(iVar9 + -4);
          if (uVar11 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if (iVar9 - uVar4 < uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar3 = *(byte *)(iVar8 + 0x14);
        uVar11 = 1 << uVar6;
        *(undefined1 *)(uVar4 - 3) = 0xff;
        *(undefined2 *)(uVar4 - 2) = 0;
        do {
          uVar13 = *(uint *)(iVar8 + 0x10);
          uVar4 = *(uint *)(iVar8 + 0xc) | uVar13;
          if ((uVar11 & uVar4) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar13 == 0) || (uVar4 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar8,uVar6);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar5 = (undefined4 *)FUN_016d2bc8();
            uVar10 = *puVar5;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar5 = uVar10;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar8 + 0x10) = uVar11 + uVar13;
            return;
          }
          puVar15 = (uint *)(iVar8 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar4 = *puVar15;
            if (uVar13 != uVar4) goto LAB_016d409c;
            bVar1 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar1);
          *puVar15 = uVar11 + uVar13;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar13 == uVar4) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

