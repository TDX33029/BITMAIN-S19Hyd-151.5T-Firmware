// FUN_0102fd00 @ 0102fd00 size=160 calls_out=3 calls_in=0
// strings: 

void FUN_0102fd00(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = *param_1;
  iVar6 = 0;
  if ((uint)(uVar5 < 4) <= -param_1[1]) {
    iVar6 = uVar5 - 3;
  }
  if (iVar6 != 0) {
    if (iVar6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0102fd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
      return;
    }
    FUN_01015c1c(param_1 + 2);
    return;
  }
  if (uVar5 != 3 || param_1[1] != 0) {
    FUN_0102fdcc();
    return;
  }
  FUN_01015c1c(param_1 + 2);
  uVar5 = param_1[0x12];
  if (uVar5 == 0) {
    return;
  }
  FUN_010cdcec(uVar5);
  if (uVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar13 = *(byte *)(uVar5 - 3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar9 - 0x10, uVar9 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(uVar5 - 3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar7 * uVar13 + iVar7 + -4;
  iVar7 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar7 + -4);
    if (uVar9 < 5) {
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
  if (iVar7 - uVar5 < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar9 = 1 << uVar13;
  *(undefined1 *)(uVar5 - 3) = 0xff;
  *(undefined2 *)(uVar5 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar6 + 0x10);
    uVar5 = *(uint *)(iVar6 + 0xc) | uVar11;
    if ((uVar9 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar5 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar5 = *puVar14;
      if (uVar11 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar5) {
      return;
    }
  } while( true );
}

