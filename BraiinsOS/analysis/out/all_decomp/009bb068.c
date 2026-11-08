// FUN_009bb068 @ 009bb068 size=192 calls_out=2 calls_in=0
// strings: 

void FUN_009bb068(int param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_010fc1b4(param_1 + 8);
  }
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\x02') {
    puVar5 = (undefined4 *)(param_1 + 0x2c);
    piVar6 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + -1;
  }
  else if (cVar1 == '\x03') {
    puVar5 = (undefined4 *)(param_1 + 0x28);
    piVar6 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + -1;
  }
  else {
    if (cVar1 != '\x04') goto LAB_009bb11c;
    puVar5 = (undefined4 *)(param_1 + 0x28);
    piVar6 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + -1;
  }
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba06c(*puVar5);
  }
LAB_009bb11c:
  if (param_1 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar15 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar12 = iVar8 * uVar15 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar8 - param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar4 = *(byte *)(iVar7 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar7 + 0x10);
    uVar9 = *(uint *)(iVar7 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar4 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar15);
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
      *(uint *)(iVar7 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar9 = *puVar16;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

