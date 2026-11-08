// FUN_010f8178 @ 010f8178 size=376 calls_out=2 calls_in=2
// strings: 

void FUN_010f8178(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((char)param_1[6] != '\0') {
    if ((char)param_1[6] != '\x03') {
      return;
    }
    iVar11 = param_1[5];
    DataMemoryBarrier(0xb);
    pcVar7 = (char *)(iVar11 + 0x1c);
    *(undefined1 *)(iVar11 + 0x2c) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar7;
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar2);
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar11 + 0x14);
      *(undefined4 *)(iVar11 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar11 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar11 + 0x18));
      }
    }
    pcVar7 = (char *)(iVar11 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar7;
      bVar2 = (bool)hasExclusiveAccess(pcVar7);
    } while (!bVar2);
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar5 = *(int *)(iVar11 + 0x20);
      *(undefined4 *)(iVar11 + 0x20) = 0;
      if (iVar5 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar11 + 0x28) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar7 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar11 + 0x24));
      }
    }
    piVar6 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010fee9c(param_1[5]);
    }
    *(undefined1 *)((int)param_1 + 0x1b) = 0;
    *(undefined2 *)((int)param_1 + 0x19) = 0;
    return;
  }
  puVar15 = (undefined4 *)(param_1[1] + 4);
  for (iVar11 = param_1[2]; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (puVar15[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar15);
    }
    puVar15 = puVar15 + 3;
  }
  if (*param_1 == 0) {
    return;
  }
  iVar11 = param_1[1];
  if (iVar11 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar16 = *(int *)(iVar5 + 8) + 0x10;
  iVar13 = iVar8 * uVar17 + iVar8 + -4;
  iVar8 = iVar16 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar12 = *(uint *)(iVar8 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar8 - iVar11) < uVar12) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar5 + 0x14);
  uVar12 = 1 << uVar17;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar14;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar15 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar15;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar15 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar18 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar9 = *puVar18;
      if (uVar14 != uVar9) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar2);
    *puVar18 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar9) {
      return;
    }
  } while( true );
}

