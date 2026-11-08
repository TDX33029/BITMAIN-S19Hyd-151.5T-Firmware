// FUN_0168274c @ 0168274c size=196 calls_out=3 calls_in=1
// strings: 

void FUN_0168274c(undefined4 param_1,uint param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint local_28;
  uint uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  uVar7 = param_2 - (param_2 >> 1);
  uVar10 = 0xa2c2;
  if (param_2 < 0xa2c2) {
    uVar10 = param_2;
  }
  if (uVar10 <= uVar7) {
    uVar10 = uVar7;
  }
  if (uVar10 < 0x31) {
    uVar10 = 0x30;
  }
  iVar5 = uVar10 * 0xc0;
  if (0xaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  if (iVar5 == 0) {
    iVar4 = 8;
    uVar10 = 0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(iVar5);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar5);
    }
  }
  uStack_1c = 0;
  local_28 = (uint)(param_2 < 0x41);
  uStack_24 = uVar10;
  iStack_20 = iVar4;
  FUN_0167c154(param_1,param_2,iVar4,uVar10);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar10 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar7 - 0x10, uVar7 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar12 = iVar8 * uVar10 + iVar8 + -4;
  iVar8 = iVar14 + iVar12;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar8 + -4);
    if (uVar7 < 5) {
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
  if ((uint)(iVar8 - iVar4) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar7 = 1 << uVar10;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar13;
    if ((uVar7 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar5,uVar10);
      uVar10 = uStack_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (uVar10 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar6;
      FUN_016d6ac4(local_28,uVar10);
      *puVar6 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar7 + uVar13;
      return;
    }
    puVar15 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar9 = *puVar15;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar7 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

