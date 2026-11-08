// FUN_015026f8 @ 015026f8 size=460 calls_out=2 calls_in=1
// strings: 

void FUN_015026f8(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int unaff_r4;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uStack_28;
  
  piVar3 = (int *)*param_1;
  uVar16 = param_1[1];
  iVar17 = param_1[2];
  piVar14 = (int *)0x0;
  if (piVar3 == (int *)0x0) {
    iVar17 = 0;
  }
  bVar8 = piVar3 != (int *)0x0;
  do {
    if (iVar17 == 0) {
      if (!bVar8) {
        return;
      }
      if (piVar14 == (int *)0x0) {
        for (; piVar14 = piVar3, uVar16 != 0; uVar16 = uVar16 - 1) {
          piVar3 = (int *)piVar14[0x44];
        }
      }
      piVar3 = (int *)*piVar14;
      piVar9 = piVar14;
      if ((int *)*piVar14 != (int *)0x0) {
        do {
          piVar14 = piVar3;
          thunk_FUN_016d3fb4(piVar9);
          piVar3 = (int *)*piVar14;
          piVar9 = piVar14;
        } while ((int *)*piVar14 != (int *)0x0);
      }
      if (piVar14 == (int *)0x0) {
        return;
      }
      iVar17 = FUN_016d3bc8();
      uVar16 = *(byte *)((int)piVar14 + -3) & 0x1f;
      if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar11 = (uint)(*(byte *)((int)piVar14 + -3) >> 5);
      iVar15 = *(int *)(iVar17 + 8) + 0x10;
      iVar12 = iVar6 * uVar16 + iVar6 + -4;
      iVar6 = iVar15 + iVar12;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar11 = *(uint *)(iVar6 + -4);
        if (uVar11 < 5) {
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
      if ((uint)(iVar6 - (int)piVar14) < uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar6 - uVar11) != '\0') {
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
      uVar11 = 1 << uVar16;
      *(undefined1 *)((int)piVar14 + -3) = 0xff;
      *(undefined2 *)((int)piVar14 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar17 + 0x10);
        uVar7 = *(uint *)(iVar17 + 0xc) | uVar13;
        if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar13 == 0) || (uVar7 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar17,uVar16);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar10 = *puVar5;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar5 = uVar10;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar17 + 0x10) = uVar11 + uVar13;
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
        *puVar18 = uVar11 + uVar13;
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
    if (piVar14 == (int *)0x0) {
      uVar11 = 0;
      piVar14 = piVar3;
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        piVar14 = (int *)piVar14[0x44];
      }
      piVar3 = (int *)0x0;
      if (*(short *)((int)piVar14 + 0x10e) != 0) goto LAB_0150275c;
LAB_0150278c:
      do {
        piVar9 = (int *)*piVar14;
        if (piVar9 == (int *)0x0) {
          thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018af358);
        }
        uVar11 = (uint)*(ushort *)(piVar14 + 0x43);
        thunk_FUN_016d3fb4();
        piVar3 = (int *)((int)piVar3 + 1);
        piVar14 = piVar9;
      } while (*(ushort *)((int)piVar9 + 0x10e) <= uVar11);
    }
    else {
      uVar11 = uVar16;
      if (*(ushort *)((int)piVar14 + 0x10e) <= uVar16) goto LAB_0150278c;
LAB_0150275c:
      piVar9 = piVar14;
    }
    if (piVar3 == (int *)0x0) {
      uVar16 = uVar11 + 1;
      piVar14 = piVar9;
    }
    else {
      piVar4 = piVar9 + uVar11 + 0x45;
      do {
        piVar14 = (int *)*piVar4;
        piVar3 = (int *)((int)piVar3 + -1);
        piVar4 = piVar14 + 0x44;
      } while (piVar3 != (int *)0x0);
      uVar16 = 0;
    }
    if (piVar9[uVar11 * 3 + 1] != 0) {
      thunk_FUN_016d3fb4(piVar9[uVar11 * 3 + 2]);
    }
    iVar17 = iVar17 + -1;
    bVar8 = true;
    piVar3 = (int *)0x0;
    if ((piVar9[uVar11 * 3 + 0x22] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(piVar9[uVar11 * 3 + 0x23]);
      piVar3 = (int *)0x0;
    }
  } while( true );
}

