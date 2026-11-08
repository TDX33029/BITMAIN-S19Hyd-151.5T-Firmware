// FUN_00c4496c @ 00c4496c size=400 calls_out=2 calls_in=4
// strings: 

void FUN_00c4496c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = *param_1;
  uVar11 = param_1[1];
  iVar15 = param_1[2];
  iVar9 = 0;
  if (iVar3 == 0) {
    bVar13 = false;
    iVar15 = 0;
  }
  else {
    bVar13 = true;
  }
  do {
    if (iVar15 == 0) {
      if (!bVar13) {
        return;
      }
      if (iVar9 == 0) {
        for (; iVar9 = iVar3, uVar11 != 0; uVar11 = uVar11 - 1) {
          iVar3 = *(int *)(iVar9 + 0xe4);
        }
      }
      iVar15 = *(int *)(iVar9 + 0xb0);
      iVar3 = iVar9;
      if (*(int *)(iVar9 + 0xb0) != 0) {
        do {
          iVar9 = iVar15;
          thunk_FUN_016d3fb4(iVar3);
          iVar15 = *(int *)(iVar9 + 0xb0);
          iVar3 = iVar9;
        } while (*(int *)(iVar9 + 0xb0) != 0);
      }
      if (iVar9 == 0) {
        return;
      }
      iVar15 = FUN_016d3bc8();
      uVar11 = *(byte *)(iVar9 + -3) & 0x1f;
      if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar3 = uVar14 - 0x10, uVar14 == 0)) {
        iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar14 = (uint)(*(byte *)(iVar9 + -3) >> 5);
      iVar12 = *(int *)(iVar15 + 8) + 0x10;
      iVar7 = iVar3 * uVar11 + iVar3 + -4;
      iVar3 = iVar12 + iVar7;
      if (4 < uVar14) {
        if (uVar14 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar14 = *(uint *)(iVar3 + -4);
        if (uVar14 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar3 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar3 - iVar9) < uVar14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar3 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 + iVar7) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar15 + 0x14);
      uVar14 = 1 << uVar11;
      *(undefined1 *)(iVar9 + -3) = 0xff;
      *(undefined2 *)(iVar9 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar15 + 0x10);
        uVar6 = *(uint *)(iVar15 + 0xc) | uVar10;
        if ((uVar14 & uVar6) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar10 == 0) || (uVar6 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar15,uVar11);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar15 + 0x10) = uVar14 + uVar10;
          return;
        }
        puVar16 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar6 = *puVar16;
          if (uVar10 != uVar6) goto LAB_016d409c;
          bVar13 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar13);
        *puVar16 = uVar14 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar6) {
          return;
        }
      } while( true );
    }
    if (!bVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af368);
    }
    if (iVar9 == 0) {
      uVar14 = 0;
      iVar9 = iVar3;
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        iVar9 = *(int *)(iVar9 + 0xe4);
      }
      iVar3 = 0;
      if (*(short *)(iVar9 + 0xe2) != 0) goto LAB_00c449c0;
LAB_00c449f0:
      do {
        iVar7 = *(int *)(iVar9 + 0xb0);
        if (iVar7 == 0) {
          thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af358);
        }
        uVar14 = (uint)*(ushort *)(iVar9 + 0xe0);
        thunk_FUN_016d3fb4();
        iVar3 = iVar3 + 1;
        iVar9 = iVar7;
      } while (*(ushort *)(iVar7 + 0xe2) <= uVar14);
    }
    else {
      uVar14 = uVar11;
      if (*(ushort *)(iVar9 + 0xe2) <= uVar11) goto LAB_00c449f0;
LAB_00c449c0:
      iVar7 = iVar9;
    }
    if (iVar3 == 0) {
      uVar11 = uVar14 + 1;
      iVar9 = iVar7;
    }
    else {
      piVar4 = (int *)(iVar7 + uVar14 * 4 + 0xe8);
      do {
        iVar9 = *piVar4;
        iVar3 = iVar3 + -1;
        piVar4 = (int *)(iVar9 + 0xe4);
      } while (iVar3 != 0);
      uVar11 = 0;
    }
    piVar4 = (int *)(iVar7 + uVar14 * 0x10);
    iVar15 = iVar15 + -1;
    bVar13 = true;
    iVar3 = 0;
    if (*piVar4 != 0) {
      thunk_FUN_016d3fb4(piVar4[1]);
      iVar3 = 0;
    }
  } while( true );
}

