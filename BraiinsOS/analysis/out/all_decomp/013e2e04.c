// FUN_013e2e04 @ 013e2e04 size=184 calls_out=4 calls_in=2
// strings: 

void FUN_013e2e04(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  uStack_28 = param_2[4];
  iStack_24 = param_2[5];
  *param_2 = 0;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x34);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  puVar4[3] = 0;
  *puVar4 = 1;
  puVar4[1] = 0;
  puVar4[2] = 1;
  puVar4[4] = 1;
  *(undefined2 *)(puVar4 + 0xc) = 1;
  uVar7 = param_2[6];
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  *(undefined1 *)((int)puVar4 + 0x32) = 0;
  param_2[6] = puVar4;
  *param_1 = uVar8;
  param_1[1] = uVar9;
  param_1[2] = uVar12;
  param_1[3] = uVar13;
  param_1[4] = uStack_28;
  param_1[5] = iStack_24;
  param_1[6] = uVar7;
  FUN_013e0514(param_2);
  FUN_013e0a18(param_2);
  iVar5 = param_2[6];
  if (iVar5 == 0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar18 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar10 = uVar14 - 0x10, uVar14 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar17 = *(int *)(iVar6 + 8) + 0x10;
  iVar15 = iVar10 * uVar18 + iVar10 + -4;
  iVar10 = iVar17 + iVar15;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar10 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar10 - iVar5) < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar14 = 1 << uVar18;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar16 = *(uint *)(iVar6 + 0x10);
    uVar11 = *(uint *)(iVar6 + 0xc) | uVar16;
    if ((uVar14 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar16 == 0) || (uVar11 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar6,uVar18);
      iVar5 = iStack_24;
      FUN_016dddc0(&DAT_018ddd48);
      if (iVar5 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar4;
      FUN_016d6ac4(uStack_28,iVar5);
      *puVar4 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar14 + uVar16;
      return;
    }
    puVar19 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar19);
      uVar11 = *puVar19;
      if (uVar16 != uVar11) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar3);
    *puVar19 = uVar14 + uVar16;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar16 == uVar11) {
      return;
    }
  } while( true );
}

