// FUN_00656f00 @ 00656f00 size=280 calls_out=1 calls_in=9
// strings: 

void FUN_00656f00(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = param_1[3];
  if (iVar4 != 0) {
    piVar8 = (int *)(iVar4 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar6 + -1;
    DataMemoryBarrier(0xb);
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar7 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar4 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar9 = *puVar7;
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = uVar9 | 2;
      DataMemoryBarrier(0xb);
      if (uVar9 == 0) {
        iVar6 = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar1);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar4 + 0x1c));
        }
      }
    }
    piVar8 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar8;
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078f014(param_1[3]);
    }
  }
  if (*param_1 == 0) {
    return;
  }
  iVar4 = param_1[1];
  if (iVar4 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar9 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar16 = *(int *)(iVar6 + 8) + 0x10;
  iVar14 = iVar10 * uVar9 + iVar10 + -4;
  iVar10 = iVar16 + iVar14;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar10 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar10 - iVar4) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar6 + 0x14);
  uVar13 = 1 << uVar9;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar6 + 0x10);
    uVar11 = *(uint *)(iVar6 + 0xc) | uVar15;
    if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar7 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar7);
      uVar11 = *puVar7;
      if (uVar15 != uVar11) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar13 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar11) {
      return;
    }
  } while( true );
}

