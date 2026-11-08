// FUN_008f2674 @ 008f2674 size=520 calls_out=3 calls_in=1
// strings: 

void FUN_008f2674(int param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar12 = 0;
    iVar3 = *(int *)(param_1 + 0x8c);
    uVar8 = *(uint *)(param_1 + 0x90);
    iVar15 = *(int *)(param_1 + 0x94);
    if (iVar3 == 0) {
      bVar10 = false;
      iVar15 = 0;
    }
    else {
      bVar10 = true;
    }
    while (iVar15 != 0) {
      if (!bVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af368);
      }
      if (iVar12 == 0) {
        uVar14 = 0;
        iVar12 = iVar3;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          iVar12 = *(int *)(iVar12 + 0x248);
        }
        iVar3 = 0;
        if (*(short *)(iVar12 + 0x242) != 0) goto LAB_008f26e0;
LAB_008f2710:
        do {
          iVar6 = *(int *)(iVar12 + 0x1b8);
          if (iVar6 == 0) {
            thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af358);
          }
          uVar14 = (uint)*(ushort *)(iVar12 + 0x240);
          thunk_FUN_016d3fb4();
          iVar3 = iVar3 + 1;
          iVar12 = iVar6;
        } while (*(ushort *)(iVar6 + 0x242) <= uVar14);
      }
      else {
        uVar14 = uVar8;
        if (*(ushort *)(iVar12 + 0x242) <= uVar8) goto LAB_008f2710;
LAB_008f26e0:
        iVar6 = iVar12;
      }
      if (iVar3 == 0) {
        uVar8 = uVar14 + 1;
        iVar12 = iVar6;
      }
      else {
        piVar4 = (int *)(iVar6 + uVar14 * 4 + 0x24c);
        do {
          iVar12 = *piVar4;
          iVar3 = iVar3 + -1;
          piVar4 = (int *)(iVar12 + 0x248);
        } while (iVar3 != 0);
        uVar8 = 0;
      }
      iVar15 = iVar15 + -1;
      iVar6 = iVar6 + uVar14 * 0xc;
      bVar10 = true;
      iVar3 = 0;
      if (*(int *)(iVar6 + 0x1bc) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar6 + 0x1c0));
        iVar3 = 0;
      }
    }
    if (bVar10) {
      if (iVar12 == 0) {
        for (; iVar12 = iVar3, uVar8 != 0; uVar8 = uVar8 - 1) {
          iVar3 = *(int *)(iVar12 + 0x248);
        }
      }
      iVar15 = *(int *)(iVar12 + 0x1b8);
      iVar3 = iVar12;
      if (*(int *)(iVar12 + 0x1b8) != 0) {
        do {
          iVar12 = iVar15;
          thunk_FUN_016d3fb4(iVar3);
          iVar15 = *(int *)(iVar12 + 0x1b8);
          iVar3 = iVar12;
        } while (*(int *)(iVar12 + 0x1b8) != 0);
      }
      thunk_FUN_016d3fb4(iVar12);
    }
  }
  iVar12 = *(int *)(param_1 + 0xcc);
  if (iVar12 != -0x80000000) {
    iVar15 = *(int *)(param_1 + 0xd0);
    piVar4 = (int *)(iVar15 + 0x10);
    for (iVar3 = *(int *)(param_1 + 0xd4); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*piVar4 != 0) {
        thunk_FUN_016d3fb4(piVar4[1]);
      }
      FUN_008ec96c(piVar4 + 4);
      piVar4 = piVar4 + 0xc;
    }
    if (iVar12 != 0) {
      if (iVar15 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar8 = *(byte *)(iVar15 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar14 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar3 = uVar14 - 0x10, uVar14 == 0)) {
        iVar3 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar14 = (uint)(*(byte *)(iVar15 + -3) >> 5);
      iVar13 = *(int *)(iVar12 + 8) + 0x10;
      iVar6 = iVar3 * uVar8 + iVar3 + -4;
      iVar3 = iVar13 + iVar6;
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
      if ((uint)(iVar3 - iVar15) < uVar14) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar3 - uVar14) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar6) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar12 + 0x14);
      uVar14 = 1 << uVar8;
      *(undefined1 *)(iVar15 + -3) = 0xff;
      *(undefined2 *)(iVar15 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar12 + 0x10);
        uVar7 = *(uint *)(iVar12 + 0xc) | uVar11;
        if ((uVar14 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar8);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar5;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar5 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar14 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar7 = *puVar16;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar10 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar10);
        *puVar16 = uVar14 + uVar11;
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

