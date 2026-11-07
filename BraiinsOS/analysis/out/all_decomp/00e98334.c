// FUN_00e98334 @ 00e98334 size=416 calls_out=2 calls_in=4
// strings: 

void FUN_00e98334(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = *param_1;
  uVar14 = param_1[1];
  iVar15 = param_1[2];
  iVar10 = 0;
  if (iVar3 == 0) {
    iVar15 = 0;
  }
  bVar8 = iVar3 != 0;
  do {
    if (iVar15 == 0) {
      if (!bVar8) {
        return;
      }
      if (iVar10 == 0) {
        for (; iVar10 = iVar3, uVar14 != 0; uVar14 = uVar14 - 1) {
          iVar3 = *(int *)(iVar10 + 0x248);
        }
      }
      iVar15 = *(int *)(iVar10 + 0x1b8);
      iVar3 = iVar10;
      if (*(int *)(iVar10 + 0x1b8) != 0) {
        do {
          iVar10 = iVar15;
          thunk_FUN_016d3fb4(iVar3);
          iVar15 = *(int *)(iVar10 + 0x1b8);
          iVar3 = iVar10;
        } while (*(int *)(iVar10 + 0x1b8) != 0);
      }
      if (iVar10 == 0) {
        return;
      }
      iVar15 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar10 + -3) & 0x1f;
      if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
         (uVar12 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar3 = uVar12 - 0x10, uVar12 == 0)) {
        iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar12 = (uint)(*(byte *)(iVar10 + -3) >> 5);
      iVar13 = *(int *)(iVar15 + 8) + 0x10;
      iVar6 = iVar3 * uVar14 + iVar3 + -4;
      iVar3 = iVar13 + iVar6;
      if (4 < uVar12) {
        if (uVar12 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar12 = *(uint *)(iVar3 + -4);
        if (uVar12 < 5) {
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
      if ((uint)(iVar3 - iVar10) < uVar12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar3 - uVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar15 + 0x14);
      uVar12 = 1 << uVar14;
      *(undefined1 *)(iVar10 + -3) = 0xff;
      *(undefined2 *)(iVar10 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar15 + 0x10);
        uVar7 = *(uint *)(iVar15 + 0xc) | uVar11;
        if ((uVar12 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar15,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar15 + 0x10) = uVar12 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar7 = *puVar16;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar8 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar8);
        *puVar16 = uVar12 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
    if (!bVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af368);
    }
    if (iVar10 == 0) {
      uVar12 = 0;
      iVar10 = iVar3;
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        iVar10 = *(int *)(iVar10 + 0x248);
      }
      iVar3 = 0;
      if (*(short *)(iVar10 + 0x242) != 0) goto LAB_00e98390;
LAB_00e983c0:
      do {
        iVar6 = *(int *)(iVar10 + 0x1b8);
        if (iVar6 == 0) {
          thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af358);
        }
        uVar12 = (uint)*(ushort *)(iVar10 + 0x240);
        thunk_FUN_016d3fb4();
        iVar3 = iVar3 + 1;
        iVar10 = iVar6;
      } while (*(ushort *)(iVar6 + 0x242) <= uVar12);
    }
    else {
      uVar12 = uVar14;
      if (*(ushort *)(iVar10 + 0x242) <= uVar14) goto LAB_00e983c0;
LAB_00e98390:
      iVar6 = iVar10;
    }
    if (iVar3 == 0) {
      uVar14 = uVar12 + 1;
      iVar10 = iVar6;
    }
    else {
      piVar4 = (int *)(iVar6 + uVar12 * 4 + 0x24c);
      do {
        iVar10 = *piVar4;
        iVar3 = iVar3 + -1;
        piVar4 = (int *)(iVar10 + 0x248);
      } while (iVar3 != 0);
      uVar14 = 0;
    }
    iVar15 = iVar15 + -1;
    iVar6 = iVar6 + uVar12 * 0xc;
    bVar8 = true;
    iVar3 = 0;
    if (*(int *)(iVar6 + 0x1bc) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar6 + 0x1c0));
      iVar3 = 0;
    }
  } while( true );
}

