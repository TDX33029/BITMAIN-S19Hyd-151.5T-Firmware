// FUN_016456d0 @ 016456d0 size=264 calls_out=4 calls_in=1
// strings: 

void FUN_016456d0(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(param_1[1]);
    }
    FUN_01645a88(param_1[3]);
    iVar12 = param_1[6];
    iVar14 = param_1[7];
    for (iVar6 = 0; iVar14 != iVar6; iVar6 = iVar6 + 1) {
      piVar4 = (int *)(iVar12 + iVar6 * 8);
      (**(code **)(*piVar4 + 0xc))(piVar4[1]);
    }
  }
  else {
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659540(param_1[1]);
    }
    if (param_1[3] != 0) {
      FUN_016458f0();
    }
    iVar12 = param_1[6];
    iVar14 = param_1[7];
    for (iVar6 = 0; iVar14 != iVar6; iVar6 = iVar6 + 1) {
      piVar4 = (int *)(iVar12 + iVar6 * 8);
      (**(code **)(*piVar4 + 0xc))(piVar4[1]);
    }
  }
  if (param_1[5] == 0) {
    return;
  }
  if (iVar12 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar14 = uVar9 - 0x10, uVar9 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar12 + -3) >> 5);
  iVar13 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar14 * uVar15 + iVar14 + -4;
  iVar14 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar9 = *(uint *)(iVar14 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar14 - iVar12) < uVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar6 + 0x10);
    uVar7 = *(uint *)(iVar6 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar16 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar1);
    *puVar16 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

