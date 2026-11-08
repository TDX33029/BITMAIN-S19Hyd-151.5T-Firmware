// FUN_0147bd28 @ 0147bd28 size=196 calls_out=5 calls_in=2
// strings: 

void FUN_0147bd28(byte *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  FUN_014aefc0();
  if (param_1[0x31] != 2) {
    FUN_014217b4(param_1 + 0x24);
    if (param_1[0x20] == 2) {
      FUN_01475b10(param_1 + 0x18);
    }
    else {
      FUN_0147e08c(param_1 + 0x18);
    }
  }
  if (1 < *param_1) {
    piVar13 = *(int **)(param_1 + 4);
    (**(code **)(*piVar13 + 0x10))(piVar13 + 3,piVar13[1],piVar13[2]);
    thunk_FUN_016d3fb4(piVar13);
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 + 1U < 2) {
    return;
  }
  piVar13 = (int *)(iVar4 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar13;
    bVar1 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar1);
  *piVar13 = iVar6 + -1;
  if (iVar6 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (iVar4 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar14 = *(int *)(iVar6 + 8) + 0x10;
  iVar11 = iVar7 * uVar15 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar7 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar6 + 0x10);
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar15);
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
      *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

