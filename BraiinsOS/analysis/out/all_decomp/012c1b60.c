// FUN_012c1b60 @ 012c1b60 size=408 calls_out=2 calls_in=1
// strings: 

void FUN_012c1b60(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = (int *)*param_1;
  uVar14 = param_1[1];
  iVar17 = param_1[2];
  piVar11 = (int *)0x0;
  if (piVar3 == (int *)0x0) {
    bVar8 = false;
    iVar17 = 0;
  }
  else {
    bVar8 = true;
  }
  do {
    if (iVar17 == 0) {
      if (!bVar8) {
        return;
      }
      if (piVar11 == (int *)0x0) {
        for (; piVar11 = piVar3, uVar14 != 0; uVar14 = uVar14 - 1) {
          piVar3 = (int *)piVar11[0x23];
        }
      }
      piVar3 = (int *)*piVar11;
      piVar9 = piVar11;
      if ((int *)*piVar11 != (int *)0x0) {
        do {
          piVar11 = piVar3;
          thunk_FUN_016d3fb4(piVar9);
          piVar3 = (int *)*piVar11;
          piVar9 = piVar11;
        } while ((int *)*piVar11 != (int *)0x0);
      }
      if (piVar11 == (int *)0x0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      uVar14 = *(byte *)((int)piVar11 + -3) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar16 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar6 = uVar16 - 0x10, uVar16 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar16 = (uint)(*(byte *)((int)piVar11 + -3) >> 5);
      iVar15 = *(int *)(iVar17 + 8) + 0x10;
      iVar12 = iVar6 * uVar14 + iVar6 + -4;
      iVar6 = iVar15 + iVar12;
      if (4 < uVar16) {
        if (uVar16 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar16 = *(uint *)(iVar6 + -4);
        if (uVar16 < 5) {
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
      if ((uint)(iVar6 - (int)piVar11) < uVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar16) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar17 + 0x14);
      uVar16 = 1 << uVar14;
      *(undefined1 *)((int)piVar11 + -3) = 0xff;
      *(undefined2 *)((int)piVar11 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar17 + 0x10);
        uVar7 = *(uint *)(iVar17 + 0xc) | uVar13;
        if ((uVar16 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar13 == 0) || (uVar7 + uVar16 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar14);
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
          *(uint *)(iVar17 + 0x10) = uVar16 + uVar13;
          return;
        }
        puVar18 = (uint *)(iVar17 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar18);
          uVar7 = *puVar18;
          if (uVar13 != uVar7) goto LAB_016d409c;
          bVar8 = (bool)hasExclusiveAccess(puVar18);
        } while (!bVar8);
        *puVar18 = uVar16 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar7) {
          return;
        }
      } while( true );
    }
    if (!bVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af368);
    }
    if (piVar11 == (int *)0x0) {
      uVar16 = 0;
      piVar11 = piVar3;
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        piVar11 = (int *)piVar11[0x23];
      }
      piVar3 = (int *)0x0;
      if (*(short *)((int)piVar11 + 0x8a) != 0) goto LAB_012c1bb4;
LAB_012c1be4:
      do {
        piVar9 = (int *)*piVar11;
        if (piVar9 == (int *)0x0) {
          thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af358);
        }
        uVar16 = (uint)*(ushort *)(piVar11 + 0x22);
        thunk_FUN_016d3fb4();
        piVar3 = (int *)((int)piVar3 + 1);
        piVar11 = piVar9;
      } while (*(ushort *)((int)piVar9 + 0x8a) <= uVar16);
    }
    else {
      uVar16 = uVar14;
      if (*(ushort *)((int)piVar11 + 0x8a) <= uVar14) goto LAB_012c1be4;
LAB_012c1bb4:
      piVar9 = piVar11;
    }
    if (piVar3 == (int *)0x0) {
      uVar14 = uVar16 + 1;
      piVar11 = piVar9;
    }
    else {
      piVar4 = piVar9 + uVar16 + 0x24;
      do {
        piVar11 = (int *)*piVar4;
        piVar3 = (int *)((int)piVar3 + -1);
        piVar4 = piVar11 + 0x23;
      } while (piVar3 != (int *)0x0);
      uVar14 = 0;
    }
    iVar17 = iVar17 + -1;
    bVar8 = true;
    piVar3 = (int *)0x0;
    if (piVar9[uVar16 * 3 + 1] != 0) {
      thunk_FUN_016d3fb4(piVar9[uVar16 * 3 + 2]);
      piVar3 = (int *)0x0;
    }
  } while( true );
}

