// FUN_01266c70 @ 01266c70 size=160 calls_out=3 calls_in=0
// strings: 

void FUN_01266c70(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  undefined *local_1c;
  undefined1 auStack_18 [4];
  
  iVar7 = *param_1;
  iVar9 = param_1[1];
  *param_1 = 1;
  param_1[1] = 2;
  if (iVar7 == 1) {
    if (iVar9 == 2) {
      local_1c = &DAT_0188af78;
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(1,&DAT_00414ca0,auStack_18 + 4,0);
    }
    DataMemoryBarrier(0xb);
    *(int *)(param_1[2] + 0x2f8) = iVar9;
    return;
  }
  if ((char)param_1[3] == '\0') {
    FUN_0126617c(param_1[2],iVar9);
    return;
  }
  FUN_012632b4(iVar9);
  if (iVar9 == 0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar5 = uVar10 - 0x10, uVar10 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar13 = *(int *)(iVar7 + 8) + 0x10;
  iVar11 = iVar5 * uVar14 + iVar5 + -4;
  iVar5 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar5 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar5 - iVar9) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar5 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar7 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar7 + 0x10);
    uVar6 = *(uint *)(iVar7 + 0xc) | uVar12;
    if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar7,uVar14);
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
      *(uint *)(iVar7 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar15 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar12 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar6) {
      return;
    }
  } while( true );
}

