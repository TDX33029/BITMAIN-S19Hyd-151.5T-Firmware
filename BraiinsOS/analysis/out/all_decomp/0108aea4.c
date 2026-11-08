// FUN_0108aea4 @ 0108aea4 size=392 calls_out=2 calls_in=15
// strings: 

void FUN_0108aea4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  piVar3 = (int *)*param_1;
  uVar6 = param_1[1];
  iVar12 = param_1[2];
  piVar9 = (int *)0x0;
  if (piVar3 == (int *)0x0) {
    iVar12 = 0;
  }
  bVar5 = piVar3 != (int *)0x0;
joined_r0x0108aecc:
  if (iVar12 != 0) {
    do {
      if (!bVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018af368);
      }
      if (piVar9 == (int *)0x0) {
        uVar16 = 0;
        piVar9 = piVar3;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          piVar9 = (int *)piVar9[0xd];
        }
        piVar3 = (int *)0x0;
        if (*(short *)((int)piVar9 + 0x32) == 0) goto LAB_0108af40;
LAB_0108af10:
      }
      else {
        uVar16 = uVar6;
        if (uVar6 < *(ushort *)((int)piVar9 + 0x32)) goto LAB_0108af10;
LAB_0108af40:
        do {
          piVar10 = (int *)*piVar9;
          if (piVar10 == (int *)0x0) {
            thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_018af358);
          }
          uVar16 = (uint)*(ushort *)(piVar9 + 0xc);
          thunk_FUN_016d3fb4();
          piVar3 = (int *)((int)piVar3 + 1);
          piVar9 = piVar10;
        } while (*(ushort *)((int)piVar10 + 0x32) <= uVar16);
      }
      iVar12 = iVar12 + -1;
      if (piVar3 != (int *)0x0) goto code_r0x0108af74;
      uVar6 = uVar16 + 1;
      bVar5 = true;
      piVar3 = (int *)0x0;
      if (iVar12 == 0) break;
    } while( true );
  }
  if (!bVar5) {
    return;
  }
  if (piVar9 == (int *)0x0) {
    for (; piVar9 = piVar3, uVar6 != 0; uVar6 = uVar6 - 1) {
      piVar3 = (int *)piVar9[0xd];
    }
  }
  piVar3 = (int *)*piVar9;
  piVar10 = piVar9;
  if ((int *)*piVar9 != (int *)0x0) {
    do {
      piVar9 = piVar3;
      thunk_FUN_016d3fb4(piVar10);
      piVar3 = (int *)*piVar9;
      piVar10 = piVar9;
    } while ((int *)*piVar9 != (int *)0x0);
  }
  if (piVar9 == (int *)0x0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar6 = *(byte *)((int)piVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar16 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar7 = uVar16 - 0x10, uVar16 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar16 = (uint)(*(byte *)((int)piVar9 + -3) >> 5);
  iVar15 = *(int *)(iVar12 + 8) + 0x10;
  iVar13 = iVar7 * uVar6 + iVar7 + -4;
  iVar7 = iVar15 + iVar13;
  if (4 < uVar16) {
    if (uVar16 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar16 = *(uint *)(iVar7 + -4);
    if (uVar16 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - (int)piVar9) < uVar16) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar16 = 1 << uVar6;
  *(undefined1 *)((int)piVar9 + -3) = 0xff;
  *(undefined2 *)((int)piVar9 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar12 + 0x10);
    uVar8 = *(uint *)(iVar12 + 0xc) | uVar14;
    if ((uVar16 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar8 + uVar16 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar16 + uVar14;
      return;
    }
    puVar17 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar14 != uVar8) goto LAB_016d409c;
      bVar5 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar5);
    *puVar17 = uVar16 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar8) {
      return;
    }
  } while( true );
code_r0x0108af74:
  piVar10 = piVar9 + uVar16 + 0xe;
  do {
    piVar9 = (int *)*piVar10;
    piVar3 = (int *)((int)piVar3 + -1);
    piVar10 = piVar9 + 0xd;
  } while (piVar3 != (int *)0x0);
  bVar5 = true;
  uVar6 = 0;
  piVar3 = (int *)0x0;
  goto joined_r0x0108aecc;
}

