// FUN_006b8dfc @ 006b8dfc size=196 calls_out=3 calls_in=1
// strings: 

void FUN_006b8dfc(undefined4 param_1,undefined1 *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint local_28;
  undefined1 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  puVar7 = param_2 + -((uint)param_2 >> 1);
  puVar10 = (undefined1 *)0x8235;
  if (param_2 < (undefined1 *)0x8235) {
    puVar10 = param_2;
  }
  if (puVar10 <= puVar7) {
    puVar10 = puVar7;
  }
  if (puVar10 < (undefined1 *)0x31) {
    puVar10 = (undefined1 *)0x30;
  }
  iVar5 = (int)puVar10 * 0xf0;
  if (&LAB_00888888 < puVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  if (iVar5 == 0) {
    iVar4 = 8;
    puVar10 = (undefined1 *)0x0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar5);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar5);
    }
  }
  uStack_1c = 0;
  local_28 = (uint)(param_2 < (undefined1 *)0x41);
  puStack_24 = puVar10;
  iStack_20 = iVar4;
  FUN_00758f80(param_1,param_2,iVar4,puVar10);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar12 - 0x10, uVar12 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar15 = *(int *)(iVar5 + 8) + 0x10;
  iVar13 = iVar8 * uVar16 + iVar8 + -4;
  iVar8 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar8 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - iVar4) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar12 = 1 << uVar16;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar14;
    if ((uVar12 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar9 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar5,uVar16);
      puVar10 = puStack_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (puVar10 == (undefined1 *)0x0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar6;
      FUN_016d6ac4(local_28,puVar10);
      *puVar6 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar14 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar9) {
      return;
    }
  } while( true );
}

