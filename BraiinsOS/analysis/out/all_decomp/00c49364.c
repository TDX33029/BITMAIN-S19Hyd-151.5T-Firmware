// FUN_00c49364 @ 00c49364 size=344 calls_out=2 calls_in=5
// strings: 

void FUN_00c49364(undefined4 *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar17 = (int *)*param_1;
  if (piVar17 == (int *)0x0) {
    return;
  }
  uVar13 = param_1[1];
  iVar16 = param_1[2];
  piVar7 = piVar17;
  if (iVar16 == 0) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      piVar7 = (int *)piVar7[0x18];
    }
  }
  else {
    piVar7 = (int *)0x0;
    piVar14 = piVar17;
LAB_00c4939c:
    do {
      if (piVar7 == (int *)0x0) {
        uVar10 = 0;
        piVar7 = piVar14;
        for (; uVar13 != 0; uVar13 = uVar13 - 1) {
          piVar7 = (int *)piVar7[0x18];
        }
        piVar14 = (int *)0x0;
        if (*(short *)((int)piVar7 + 0x5e) != 0) goto LAB_00c493bc;
LAB_00c493ec:
        do {
          piVar8 = (int *)*piVar7;
          if (piVar8 == (int *)0x0) {
            thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af358);
          }
          uVar10 = (uint)*(ushort *)(piVar7 + 0x17);
          thunk_FUN_016d3fb4();
          piVar14 = (int *)((int)piVar14 + 1);
          piVar7 = piVar8;
        } while (*(ushort *)((int)piVar8 + 0x5e) <= uVar10);
      }
      else {
        uVar10 = uVar13;
        if (*(ushort *)((int)piVar7 + 0x5e) <= uVar13) goto LAB_00c493ec;
LAB_00c493bc:
      }
      if (piVar14 == (int *)0x0) {
        uVar13 = uVar10 + 1;
        iVar16 = iVar16 + -1;
        piVar14 = (int *)0x0;
        if (iVar16 == 0) break;
        goto LAB_00c4939c;
      }
      piVar8 = piVar7 + uVar10 + 0x19;
      do {
        piVar7 = (int *)*piVar8;
        piVar14 = (int *)((int)piVar14 + -1);
        piVar8 = piVar7 + 0x18;
      } while (piVar14 != (int *)0x0);
      uVar13 = 0;
      iVar16 = iVar16 + -1;
      piVar14 = (int *)0x0;
    } while (iVar16 != 0);
    if (piVar17 == (int *)0x0) {
      return;
    }
  }
  piVar17 = (int *)*piVar7;
  piVar14 = piVar7;
  if ((int *)*piVar7 != (int *)0x0) {
    do {
      piVar7 = piVar17;
      thunk_FUN_016d3fb4(piVar14);
      piVar17 = (int *)*piVar7;
      piVar14 = piVar7;
    } while ((int *)*piVar7 != (int *)0x0);
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar13 = *(byte *)((int)piVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar5 = uVar10 - 0x10, uVar10 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)piVar7 + -3) >> 5);
  iVar15 = *(int *)(iVar16 + 8) + 0x10;
  iVar11 = iVar5 * uVar13 + iVar5 + -4;
  iVar5 = iVar15 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar5 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar5 - (int)piVar7) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar10 = 1 << uVar13;
  *(undefined1 *)((int)piVar7 + -3) = 0xff;
  *(undefined2 *)((int)piVar7 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar16 + 0x10);
    uVar6 = *(uint *)(iVar16 + 0xc) | uVar12;
    if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar16,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar18 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar6 = *puVar18;
      if (uVar12 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar6) {
      return;
    }
  } while( true );
}

