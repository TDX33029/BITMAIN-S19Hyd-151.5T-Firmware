// FUN_0168cf44 @ 0168cf44 size=360 calls_out=2 calls_in=1
// strings: 

void FUN_0168cf44(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int unaff_r4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int local_28;
  
  iVar10 = param_1[1];
  local_28 = ((uint)(param_1[3] - iVar10) >> 3) * -0x3d70a3d7;
  for (iVar5 = 0; local_28 != iVar5; iVar5 = iVar5 + 1) {
    piVar12 = (int *)(iVar5 * 200 + iVar10);
    puVar13 = (undefined4 *)(piVar12[1] + 0x40);
    for (iVar15 = piVar12[2]; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (puVar13[-0x10] != 0) {
        thunk_FUN_016d3fb4(puVar13[-0xf]);
      }
      if ((puVar13[-0xd] != -0x7ffffffd) && (0 < (int)puVar13[-0xd])) {
        thunk_FUN_016d3fb4(puVar13[-0xc]);
      }
      if ((puVar13[-10] != -0x7ffffffd) && (0 < (int)puVar13[-10])) {
        thunk_FUN_016d3fb4(puVar13[-9]);
      }
      if ((puVar13[-7] != -0x7ffffffd) && (0 < (int)puVar13[-7])) {
        thunk_FUN_016d3fb4(puVar13[-6]);
      }
      if ((puVar13[-4] != -0x7ffffffd) && (0 < (int)puVar13[-4])) {
        thunk_FUN_016d3fb4(puVar13[-3]);
      }
      if ((puVar13[-1] != -0x7ffffffd) && (0 < (int)puVar13[-1])) {
        thunk_FUN_016d3fb4(*puVar13);
      }
      puVar13 = puVar13 + 0x12;
    }
    if (*piVar12 != 0) {
      thunk_FUN_016d3fb4(piVar12[1]);
    }
    FUN_0168d0fc(piVar12 + 4);
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar15 = uVar7 - 0x10, uVar7 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar7 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar11 = *(int *)(iVar10 + 8) + 0x10;
  iVar8 = iVar15 * uVar14 + iVar15 + -4;
  iVar15 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar15 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar15 - iVar5) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar10 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar10 + 0x10);
    uVar4 = *(uint *)(iVar10 + 0xc) | uVar9;
    if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar9 == 0) || (uVar4 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar10,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar13;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar13 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar16 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar4 = *puVar16;
      if (uVar9 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar4) {
      return;
    }
  } while( true );
}

