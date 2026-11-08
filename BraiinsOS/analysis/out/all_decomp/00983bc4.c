// FUN_00983bc4 @ 00983bc4 size=332 calls_out=5 calls_in=0
// strings: assertion failed: prev.ref_count() >= 1

void FUN_00983bc4(uint *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint unaff_r6;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  DataMemoryBarrier(0xb);
  do {
    uVar5 = *param_1;
    bVar15 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar15);
  *param_1 = uVar5 - 0x40;
  DataMemoryBarrier(0xb);
  if (uVar5 < 0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
  }
  if ((uVar5 & 0xffffffc0) != 0x40) {
    return;
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar15 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar15);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01659344(param_1[6]);
  }
  if (param_1[10] == 1) {
    bVar15 = param_1[0xc] == 0 && param_1[0xd] == 0;
    if (param_1[0xc] != 0 || param_1[0xd] != 0) {
      unaff_r6 = param_1[0xe];
      bVar15 = unaff_r6 == 0;
    }
    if (!bVar15) {
      puVar13 = (undefined4 *)param_1[0xf];
      pcVar4 = (code *)*puVar13;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(unaff_r6);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
    }
  }
  else if (param_1[10] == 0) {
    FUN_0096f698(param_1 + 0xc);
  }
  if (param_1[0x20] != 0) {
    (**(code **)(param_1[0x20] + 0xc))(param_1[0x21]);
  }
  piVar2 = (int *)param_1[0x22];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar15 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar15);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(param_1[0x22],param_1[0x23]);
    }
  }
  if (param_1 == (uint *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)((int)param_1 + -3) >> 5);
  iVar12 = *(int *)(iVar3 + 8) + 0x10;
  iVar10 = iVar6 * uVar5 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar6 - (int)param_1) < uVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar9 = 1 << uVar5;
  *(undefined1 *)((int)param_1 + -3) = 0xff;
  *(undefined2 *)((int)param_1 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar3 + 0x10);
    uVar7 = *(uint *)(iVar3 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar7 = *puVar14;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar15 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar15);
    *puVar14 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

