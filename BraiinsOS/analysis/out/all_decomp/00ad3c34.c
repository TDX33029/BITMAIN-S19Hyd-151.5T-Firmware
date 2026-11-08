// FUN_00ad3c34 @ 00ad3c34 size=220 calls_out=4 calls_in=2
// strings: 

void FUN_00ad3c34(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x20) == '\x05') {
    cVar1 = *(char *)(param_1 + 0x60);
    bVar16 = cVar1 == '\x03';
    if (bVar16) {
      cVar1 = *(char *)(param_1 + 0x3d);
    }
    if (bVar16 && cVar1 == '\x04') {
      FUN_0163bdc0(param_1 + 0x40);
      if (*(int *)(param_1 + 0x50) != 0) {
        (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
      }
      *(undefined1 *)(param_1 + 0x3c) = 0;
    }
    iVar4 = *(int *)(param_1 + 100);
    piVar6 = (int *)(iVar4 + 0x194);
    do {
      iVar7 = *piVar6;
      bVar16 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar16);
    *piVar6 = iVar7 + -1;
    if (iVar7 == 1) {
      FUN_0163b708(iVar4 + 0x88);
    }
    piVar6 = *(int **)(param_1 + 100);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar16 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar16);
    *piVar6 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f17d0(*(undefined4 *)(param_1 + 100));
    }
  }
  else if (*(char *)(param_1 + 0x20) == '\x04') {
    FUN_00a07b4c(param_1 + 0x28);
  }
  if (param_1 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar14 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar13 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
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
  if ((uint)(iVar7 - param_1) < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar14);
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
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

