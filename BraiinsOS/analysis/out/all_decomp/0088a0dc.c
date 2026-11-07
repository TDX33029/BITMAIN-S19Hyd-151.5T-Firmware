// FUN_0088a0dc @ 0088a0dc size=424 calls_out=3 calls_in=1
// strings: 

void FUN_0088a0dc(int *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    piVar8 = (int *)param_1[2];
    if (piVar8 != (int *)0x0) {
      FUN_016dea68(param_1[4]);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(param_1[2]);
      }
      piVar8 = (int *)param_1[3];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0127c778(param_1[3]);
      }
      FUN_016dea68(param_1[7]);
      piVar8 = (int *)param_1[5];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(param_1[5]);
      }
      piVar8 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0127c778(param_1[6]);
      }
      FUN_016dea68(param_1[10]);
      piVar8 = (int *)param_1[8];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(param_1[8]);
      }
      piVar8 = (int *)param_1[9];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar8;
        bVar15 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar15);
      *piVar8 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0127c778(param_1[9]);
        return;
      }
      return;
    }
  }
  else if (*param_1 == 1) {
    bVar15 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r6 = param_1[4];
      bVar15 = unaff_r6 == 0;
    }
    if (!bVar15) {
      puVar6 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(unaff_r6);
      }
      if (puVar6[1] != 0) {
        if (unaff_r6 == 0) {
          return;
        }
        iVar2 = FUN_016d3bc8();
        uVar13 = *(byte *)(unaff_r6 + -3) & 0x1f;
        if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
           (uVar9 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar4 = uVar9 - 0x10, uVar9 == 0)) {
          iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar9 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
        iVar12 = *(int *)(iVar2 + 8) + 0x10;
        iVar10 = iVar4 * uVar13 + iVar4 + -4;
        iVar4 = iVar12 + iVar10;
        if (4 < uVar9) {
          if (uVar9 != 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar3)();
          }
          uVar9 = *(uint *)(iVar4 + -4);
          if (uVar9 < 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar3)();
          }
          if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar3)();
          }
        }
        if ((uint)(iVar4 - unaff_r6) < uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar3)();
        }
        if (*(char *)(iVar4 - uVar9) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar3)();
        }
        if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar3)();
        }
        bVar1 = *(byte *)(iVar2 + 0x14);
        uVar9 = 1 << uVar13;
        *(undefined1 *)(unaff_r6 + -3) = 0xff;
        *(undefined2 *)(unaff_r6 + -2) = 0;
        do {
          uVar11 = *(uint *)(iVar2 + 0x10);
          uVar5 = *(uint *)(iVar2 + 0xc) | uVar11;
          if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar3)();
          }
          if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar2,uVar13);
            FUN_016dddc0(&DAT_018ddd48);
            if (iStack_24 == 0) {
              return;
            }
            puVar6 = (undefined4 *)FUN_016d2bc8();
            uVar7 = *puVar6;
            FUN_016d6ac4(uStack_28,iStack_24);
            *puVar6 = uVar7;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar2 + 0x10) = uVar9 + uVar11;
            return;
          }
          puVar14 = (uint *)(iVar2 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar14);
            uVar5 = *puVar14;
            if (uVar11 != uVar5) goto LAB_016d409c;
            bVar15 = (bool)hasExclusiveAccess(puVar14);
          } while (!bVar15);
          *puVar14 = uVar9 + uVar11;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar11 == uVar5) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}

