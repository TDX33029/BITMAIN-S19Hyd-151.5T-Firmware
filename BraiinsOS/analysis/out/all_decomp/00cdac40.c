// FUN_00cdac40 @ 00cdac40 size=196 calls_out=3 calls_in=0
// strings: 

void FUN_00cdac40(undefined4 param_1,undefined1 *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint local_28;
  undefined1 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  puVar6 = param_2 + -((uint)param_2 >> 1);
  puVar9 = (undefined1 *)0xba03;
  if (param_2 < (undefined1 *)0xba03) {
    puVar9 = param_2;
  }
  if (puVar9 <= puVar6) {
    puVar9 = puVar6;
  }
  if (puVar9 < (undefined1 *)0x31) {
    puVar9 = (undefined1 *)0x30;
  }
  iVar14 = (int)puVar9 * 0xa8;
  if (&LAB_00c30c30 < puVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar14);
  }
  if (iVar14 == 0) {
    iVar4 = 8;
    puVar9 = (undefined1 *)0x0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar14);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar14);
    }
  }
  uStack_1c = 0;
  local_28 = (uint)(param_2 < (undefined1 *)0x41);
  puStack_24 = puVar9;
  iStack_20 = iVar4;
  FUN_00b867e0(param_1,param_2,iVar4,puVar9);
  if (iVar4 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar15 = *(int *)(iVar14 + 8) + 0x10;
  iVar12 = iVar7 * uVar16 + iVar7 + -4;
  iVar7 = iVar15 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - iVar4) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar14 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar14 + 0x10);
    uVar8 = *(uint *)(iVar14 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar14,uVar16);
      puVar9 = puStack_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (puVar9 == (undefined1 *)0x0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(local_28,puVar9);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

