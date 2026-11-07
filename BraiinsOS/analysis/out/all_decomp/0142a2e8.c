// FUN_0142a2e8 @ 0142a2e8 size=184 calls_out=2 calls_in=1
// strings: 

void FUN_0142a2e8(byte *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (1 < *param_1) {
    piVar12 = *(int **)(param_1 + 4);
    (**(code **)(*piVar12 + 0x10))(piVar12 + 3,piVar12[1],piVar12[2]);
    thunk_FUN_016d3fb4(piVar12);
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  uVar6 = *(uint *)(param_1 + 0x24);
  iVar13 = 0;
  if (uVar6 == 0) {
    uVar4 = 0;
    uVar7 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar8 = *(uint *)(param_1 + 0x20);
    uVar7 = uVar8 - uVar4;
    if (uVar8 < uVar4) {
      uVar7 = uVar8;
    }
    if (uVar4 - uVar7 < uVar6) {
      iVar13 = uVar6 - (uVar4 - uVar7);
    }
    else {
      uVar4 = uVar7 + uVar6;
    }
  }
  iVar15 = *(int *)(param_1 + 0x1c);
  FUN_014564ec(iVar15 + uVar7 * 4,uVar4 - uVar7);
  FUN_014564ec(iVar15,iVar13);
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar13 = *(int *)(param_1 + 0x1c);
  if (iVar13 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar6 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar9 = uVar7 - 0x10, uVar7 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar14 = *(int *)(iVar15 + 8) + 0x10;
  iVar11 = iVar9 * uVar6 + iVar9 + -4;
  iVar9 = iVar14 + iVar11;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar9 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar9 - iVar13) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar15 + 0x14);
  uVar7 = 1 << uVar6;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar15 + 0x10);
    uVar4 = *(uint *)(iVar15 + 0xc) | uVar8;
    if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar8 == 0) || (uVar4 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar15,uVar6);
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
      *(uint *)(iVar15 + 0x10) = uVar7 + uVar8;
      return;
    }
    puVar16 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar4 = *puVar16;
      if (uVar8 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar7 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar4) {
      return;
    }
  } while( true );
}

