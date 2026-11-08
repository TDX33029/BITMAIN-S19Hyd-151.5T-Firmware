// FUN_008f4380 @ 008f4380 size=156 calls_out=0 calls_in=33
// strings: 

void FUN_008f4380(int param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar9 = *(uint *)(param_1 + 0x20);
  if ((uVar9 & 1) != 0) {
    (**(code **)(*(int *)(param_1 + 0x18) + 0xc))(*(undefined4 *)(param_1 + 0x1c));
  }
  if ((uVar9 & 8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(*(undefined4 *)(param_1 + 0x14));
  }
  bVar15 = *(int *)(param_1 + 8) != 0;
  puVar3 = (undefined4 *)0x0;
  if (bVar15) {
    puVar3 = *(undefined4 **)(param_1 + 0xc);
  }
  if (bVar15 && puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)();
  }
  if (param_1 == -1) {
    return;
  }
  piVar4 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar15 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar15);
  *piVar4 = iVar5 + -1;
  if (iVar5 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (param_1 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar9 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar6 * uVar9 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar6 - param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar9;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar7 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar3 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar3;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar3 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar14 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar7 = *puVar14;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

