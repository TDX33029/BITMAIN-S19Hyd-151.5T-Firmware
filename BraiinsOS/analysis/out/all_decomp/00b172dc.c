// FUN_00b172dc @ 00b172dc size=156 calls_out=5 calls_in=1
// strings: 

void FUN_00b172dc(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  cVar1 = *(char *)(param_1 + 0x134);
  if (cVar1 == '\x03') {
    FUN_00b1545c(param_1 + 0x138);
  }
  else {
    if (cVar1 == '\x04') {
      FUN_00b13014(param_1 + 400);
      *(undefined1 *)(param_1 + 0x135) = 0;
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_00b13014(param_1 + 0x138);
    }
    FUN_00ad1570(param_1 + 0x70);
  }
  FUN_00c48cbc(param_1 + 0x128);
  iVar14 = *(int *)(param_1 + 0x124) + 1;
  iVar5 = *(int *)(param_1 + 0x120);
  while (iVar14 = iVar14 + -1, iVar14 != 0) {
    FUN_00cde3bc(iVar5);
    iVar5 = iVar5 + 0x3e0;
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x120);
  if (iVar5 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar13 = *(int *)(iVar14 + 8) + 0x10;
  iVar11 = iVar7 * uVar15 + iVar7 + -4;
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
  if ((uint)(iVar7 - iVar5) < uVar10) {
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
  bVar3 = *(byte *)(iVar14 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar14 + 0x10);
    uVar8 = *(uint *)(iVar14 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar14,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar4 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar4);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

