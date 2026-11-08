// FUN_01160078 @ 01160078 size=164 calls_out=3 calls_in=1
// strings: 

void FUN_01160078(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar14 = *param_1;
  if (iVar14 == -0x80000000) {
    iVar14 = param_1[2];
    FUN_0115f280(iVar14,param_1[3]);
    if (param_1[1] == 0) {
      return;
    }
  }
  else {
    iVar12 = param_1[1];
    FUN_0115f280(iVar12,param_1[2]);
    if (iVar14 != 0) {
      thunk_FUN_016d3fb4(iVar12);
    }
    uVar4 = param_1[9];
    uVar6 = 1;
    if ((int)uVar4 < 0) {
      uVar6 = uVar4 ^ 0x80000000;
    }
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        iVar14 = 0x28;
      }
      else {
        uVar4 = param_1[10];
        iVar14 = 0x2c;
      }
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar14));
      }
    }
    iVar14 = param_1[0x14];
    FUN_0115f2d0(iVar14);
  }
  if (iVar14 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar6 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar7 = uVar6 - 0x10, uVar6 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar6 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar13 = *(int *)(iVar12 + 8) + 0x10;
  iVar10 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar13 + iVar10;
  if (4 < uVar6) {
    if (uVar6 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar6 = *(uint *)(iVar7 + -4);
    if (uVar6 < 5) {
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
  if ((uint)(iVar7 - iVar14) < uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar6) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar12 + 0x14);
  uVar6 = 1 << uVar4;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar12 + 0x10);
    uVar8 = *(uint *)(iVar12 + 0xc) | uVar11;
    if ((uVar6 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar6 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar4);
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
      *(uint *)(iVar12 + 0x10) = uVar6 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar8 = *puVar15;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar6 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

