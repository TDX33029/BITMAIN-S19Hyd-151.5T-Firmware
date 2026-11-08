// FUN_0146c8dc @ 0146c8dc size=252 calls_out=7 calls_in=1
// strings: 

void FUN_0146c8dc(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    iVar4 = 1;
    if ((uint)((uint)param_1[2] < 4) <= (uint)-param_1[3]) {
      iVar4 = param_1[2] - 4;
    }
    if (iVar4 != 1) {
      if (iVar4 == 0) {
        FUN_0146cc00(param_1 + 0x2a);
        FUN_0146be90(param_1 + 4);
      }
      goto LAB_0146c930;
    }
  }
  FUN_0146cd24();
LAB_0146c930:
  FUN_0146cc00(param_1 + 0x80);
  FUN_014087f0(param_1 + 0xc9);
  if ((9 < *(byte *)(param_1 + 0xd9)) && (param_1[0xdb] != 0)) {
    thunk_FUN_016d3fb4(param_1[0xda]);
  }
  FUN_0145d5e0(param_1 + 0xce);
  FUN_01015c1c(param_1 + 0x70);
  if (param_1[0xc4] != 0) {
    return;
  }
  if (param_1[0xc5] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0146c99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0xc5] + 0x10))(param_1 + 200,param_1[0xc6],param_1[199]);
    return;
  }
  iVar4 = param_1[0xc6];
  puVar8 = (undefined4 *)param_1[199];
  pcVar5 = (code *)*puVar8;
  if (pcVar5 != (code *)0x0) {
    (*pcVar5)(iVar4);
  }
  if (puVar8[1] == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar11 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar10 = *(uint *)(iVar6 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar6 - iVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar3 + 0x10);
    uVar7 = *(uint *)(iVar3 + 0xc) | uVar12;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

