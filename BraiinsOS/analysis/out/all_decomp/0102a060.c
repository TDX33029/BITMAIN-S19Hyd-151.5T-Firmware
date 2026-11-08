// FUN_0102a060 @ 0102a060 size=288 calls_out=3 calls_in=0
// strings: 

void FUN_0102a060(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  uVar6 = param_1[1];
  iVar7 = 0;
  if ((uint)(uVar4 < 4) <= -uVar6) {
    iVar7 = uVar4 - 3;
  }
  if (iVar7 != 0) {
    if (iVar7 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0102a0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[2] + 0x10))(param_1 + 5,param_1[3],param_1[4]);
      return;
    }
    FUN_01015c1c(param_1 + 2);
    return;
  }
  if (uVar4 == 3 && uVar6 == 0) {
    FUN_01015c1c(param_1 + 2);
    uVar4 = param_1[0x12];
    if (uVar4 == 0) {
      return;
    }
    FUN_010cdcec(uVar4);
  }
  else {
    if ((9 < (byte)param_1[0x1b]) && (param_1[0x1d] != 0)) {
      thunk_FUN_016d3fb4(param_1[0x1c],uVar6,0,-(uVar6 + (uVar4 >= 4)));
    }
    if (1 < (byte)param_1[0x10]) {
      piVar13 = (int *)param_1[0x11];
      (**(code **)(*piVar13 + 0x10))(piVar13 + 3,piVar13[1],piVar13[2]);
      thunk_FUN_016d3fb4(piVar13);
    }
    (**(code **)(param_1[0x12] + 0x10))(param_1 + 0x15,param_1[0x13],param_1[0x14]);
    (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x19,param_1[0x17],param_1[0x18]);
    FUN_01015c1c(param_1);
    uVar4 = param_1[0x20];
    if (uVar4 == 0) {
      return;
    }
    FUN_010cdcec(uVar4);
  }
  if (uVar4 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar6 = *(byte *)(uVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(uVar4 - 3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar11 = iVar8 * uVar6 + iVar8 + -4;
  iVar8 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar8 + -4);
    if (uVar10 < 5) {
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
  if (iVar8 - uVar4 < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar10 = 1 << uVar6;
  *(undefined1 *)(uVar4 - 3) = 0xff;
  *(undefined2 *)(uVar4 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar7 + 0x10);
    uVar4 = *(uint *)(iVar7 + 0xc) | uVar12;
    if ((uVar10 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar4 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar6);
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
      *(uint *)(iVar7 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar4 = *puVar15;
      if (uVar12 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar4) {
      return;
    }
  } while( true );
}

