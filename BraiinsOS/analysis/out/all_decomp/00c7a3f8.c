// FUN_00c7a3f8 @ 00c7a3f8 size=152 calls_out=2 calls_in=0
// strings: 

void FUN_00c7a3f8(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_00f2d10c(param_1 + 8);
  }
  piVar7 = *(int **)(param_1 + 0x1c);
  if (*piVar7 == 1) {
    if ((char)piVar7[1] != '\x03') goto LAB_00c7a484;
    puVar8 = (undefined4 *)piVar7[2];
    uVar13 = *puVar8;
    puVar14 = (undefined4 *)puVar8[1];
    pcVar4 = (code *)*puVar14;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar13);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
  }
  else {
    if ((*piVar7 != 0) || (piVar7[2] == 0)) goto LAB_00c7a484;
    puVar8 = (undefined4 *)piVar7[1];
  }
  thunk_FUN_016d3fb4(puVar8);
LAB_00c7a484:
  if (piVar7 == (int *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar15 = *(byte *)((int)piVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)piVar7 + -3) >> 5);
  iVar12 = *(int *)(iVar3 + 8) + 0x10;
  iVar10 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar9 = *(uint *)(iVar5 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar5 - (int)piVar7) < uVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)((int)piVar7 + -3) = 0xff;
  *(undefined2 *)((int)piVar7 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar3 + 0x10);
    uVar6 = *(uint *)(iVar3 + 0xc) | uVar11;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar11 == 0) || (uVar6 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar6 = *puVar16;
      if (uVar11 != uVar6) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar6) {
      return;
    }
  } while( true );
}

