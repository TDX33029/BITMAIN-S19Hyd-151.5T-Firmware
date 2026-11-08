// FUN_01503064 @ 01503064 size=240 calls_out=2 calls_in=2
// strings: 

void FUN_01503064(undefined8 *param_1,uint param_2,undefined4 param_3,uint *param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int unaff_r4;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  param_4[2] = 0;
  if (*param_4 < 0x100) {
    FUN_01503178(param_4,0,0x100);
  }
  while( true ) {
    uVar13 = *param_4;
    uVar11 = param_4[1];
    software_interrupt(0);
    if ((-0x1000 < (int)param_2) && ((int)param_2 < 0)) break;
    if (param_2 < uVar13) {
      param_4[2] = param_2;
      local_30 = *param_4;
      uStack_2c = param_4[1];
      uStack_28 = param_4[2];
      uVar15 = FUN_00600c38(&local_30);
      *param_1 = uVar15;
      return;
    }
    if (param_4[2] <= uVar13) {
      FUN_01503178(param_4,param_4[2],uVar13 + 1);
    }
  }
  *(undefined4 *)param_1 = 0;
  *(short *)((int)param_1 + 4) = (short)param_2;
  if (uVar13 == 0) {
    return;
  }
  if (uVar11 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar13 = *(byte *)(uVar11 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(uVar11 - 3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar9 = iVar6 * uVar13 + iVar6 + -4;
  iVar6 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar6 - uVar11 < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar8 = 1 << uVar13;
  *(undefined1 *)(uVar11 - 3) = 0xff;
  *(undefined2 *)(uVar11 - 2) = 0;
  do {
    uVar10 = *(uint *)(iVar4 + 0x10);
    uVar11 = *(uint *)(iVar4 + 0xc) | uVar10;
    if ((uVar8 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar11 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar11 = *puVar14;
      if (uVar10 != uVar11) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar11) {
      return;
    }
  } while( true );
}

