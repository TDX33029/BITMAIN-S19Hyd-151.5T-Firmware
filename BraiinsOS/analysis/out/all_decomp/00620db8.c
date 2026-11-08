// FUN_00620db8 @ 00620db8 size=180 calls_out=1 calls_in=1
// strings: 

void FUN_00620db8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 2) {
    if (*param_1 != 0) {
      return;
    }
    iVar10 = param_1[1];
    puVar6 = (undefined4 *)(iVar10 + 4);
    iVar14 = param_1[2];
    for (iVar13 = iVar14; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (puVar6[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar6);
      }
      puVar6 = puVar6 + 3;
    }
    if (iVar14 != 0) {
      thunk_FUN_016d3fb4(iVar10);
    }
    iVar13 = param_1[4];
    if (iVar13 != 0) {
      iVar10 = param_1[3];
      piVar11 = (int *)(iVar10 + 4);
      do {
        if (*piVar11 != 0) {
          thunk_FUN_016d3fb4(piVar11[-1]);
        }
        piVar11 = piVar11 + 6;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (iVar10 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar10 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar7 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar14 = uVar7 - 0x10, uVar7 == 0)) {
        iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar7 = (uint)(*(byte *)(iVar10 + -3) >> 5);
      iVar12 = *(int *)(iVar13 + 8) + 0x10;
      iVar8 = iVar14 * uVar15 + iVar14 + -4;
      iVar14 = iVar12 + iVar8;
      if (4 < uVar7) {
        if (uVar7 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar7 = *(uint *)(iVar14 + -4);
        if (uVar7 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar14 - iVar10) < uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 - uVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar8) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar13 + 0x14);
      uVar7 = 1 << uVar15;
      *(undefined1 *)(iVar10 + -3) = 0xff;
      *(undefined2 *)(iVar10 + -2) = 0;
      do {
        uVar9 = *(uint *)(iVar13 + 0x10);
        uVar4 = *(uint *)(iVar13 + 0xc) | uVar9;
        if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar9 == 0) || (uVar4 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar5 = *puVar6;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar6 = uVar5;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar7 + uVar9;
          return;
        }
        puVar16 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar4 = *puVar16;
          if (uVar9 != uVar4) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar3);
        *puVar16 = uVar7 + uVar9;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar9 == uVar4) {
          return;
        }
      } while( true );
    }
  }
  return;
}

