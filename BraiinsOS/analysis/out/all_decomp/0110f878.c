// FUN_0110f878 @ 0110f878 size=228 calls_out=1 calls_in=1
// strings: 

void FUN_0110f878(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = (uint)*param_1;
  iVar5 = uVar3 - 8;
  if (uVar3 < 8 || iVar5 == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    if (uVar3 != 6) {
      return;
    }
    piVar8 = *(int **)(param_1 + 4);
    if (*piVar8 == 1) {
      if ((char)piVar8[1] != '\x03') goto LAB_014b47f4;
      puVar9 = (undefined4 *)piVar8[2];
      uVar14 = *puVar9;
      puVar15 = (undefined4 *)puVar9[1];
      pcVar4 = (code *)*puVar15;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar14);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar14);
      }
    }
    else {
      if ((*piVar8 != 0) || (piVar8[2] == 0)) goto LAB_014b47f4;
      puVar9 = (undefined4 *)piVar8[1];
    }
    thunk_FUN_016d3fb4(puVar9);
  }
  else {
    if ((iVar5 != 5) || (piVar8 = *(int **)(param_1 + 4), piVar8 == (int *)0x0)) {
      return;
    }
    puVar9 = *(undefined4 **)(param_1 + 8);
    pcVar4 = (code *)*puVar9;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(piVar8);
    }
    if (puVar9[1] == 0) {
      return;
    }
  }
LAB_014b47f4:
  if (piVar8 == (int *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar3 = *(byte *)((int)piVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)piVar8 + -3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar6 * uVar3 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar6 - (int)piVar8) < uVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar3;
  *(undefined1 *)((int)piVar8 + -3) = 0xff;
  *(undefined2 *)((int)piVar8 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar14 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar14;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

