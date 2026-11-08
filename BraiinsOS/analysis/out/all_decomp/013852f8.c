// FUN_013852f8 @ 013852f8 size=500 calls_out=3 calls_in=5
// strings: 

void FUN_013852f8(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  int local_28;
  
  iVar8 = *(int *)(param_1 + 0x38);
  iVar10 = *(int *)(param_1 + 0x3c);
  if (iVar10 != 0) {
    piVar14 = (int *)(iVar8 + 4);
    do {
      if (((piVar14[-1] - 6U < 2) || (piVar14[-1] == 2)) && (*piVar14 != 0)) {
        thunk_FUN_016d3fb4(piVar14[1]);
      }
      piVar14 = piVar14 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
  }
  iVar10 = *(int *)(param_1 + 0x50);
  iVar19 = *(int *)(param_1 + 0x54);
  iVar8 = 0;
  local_28 = param_1;
  while (iVar15 = local_28, iVar8 != iVar19) {
    piVar14 = (int *)(iVar10 + iVar8 * 0xc);
    iVar15 = piVar14[2];
    if (iVar15 != 0) {
      iVar17 = piVar14[1];
      iVar11 = 0;
      do {
        piVar4 = (int *)(iVar17 + iVar11 * 8);
        piVar5 = (int *)*piVar4;
        if (piVar5 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(*piVar4,piVar4[1]);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar15);
    }
    iVar8 = iVar8 + 1;
    if (*piVar14 != 0) {
      thunk_FUN_016d3fb4(piVar14[1]);
    }
  }
  if (*(int *)(local_28 + 0x4c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(local_28 + 0x50));
  }
  iVar8 = *(int *)(iVar15 + 0x68);
  puVar16 = (undefined4 *)(iVar8 + 4);
  for (iVar10 = *(int *)(iVar15 + 0x6c); iVar10 != 0; iVar10 = iVar10 + -1) {
    if (puVar16[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar16);
    }
    puVar16 = puVar16 + 5;
  }
  if (*(int *)(iVar15 + 100) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  iVar8 = *(int *)(iVar15 + 0x7c);
  iVar10 = *(int *)(iVar15 + 0x80);
  for (iVar19 = 0; iVar10 != iVar19; iVar19 = iVar19 + 1) {
    if (*(int *)(iVar8 + iVar19 * 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar8 + iVar19 * 0x10 + 4));
    }
  }
  if (*(int *)(iVar15 + 0x78) != 0) {
    thunk_FUN_016d3fb4(iVar8);
  }
  FUN_013818c8(iVar15 + 0x88);
  if (*(int *)(iVar15 + 0xdc) == 0) {
    return;
  }
  iVar8 = *(int *)(iVar15 + 0xe0);
  if (iVar8 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar18 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar19 = uVar12 - 0x10, uVar12 == 0)) {
    iVar19 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar11 = *(int *)(iVar10 + 8) + 0x10;
  iVar15 = iVar19 * uVar18 + iVar19 + -4;
  iVar19 = iVar11 + iVar15;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar12 = *(uint *)(iVar19 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar19 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar19 - iVar8) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar19 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar11 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar10 + 0x14);
  uVar12 = 1 << uVar18;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar10 + 0x10);
    uVar7 = *(uint *)(iVar10 + 0xc) | uVar13;
    if ((uVar12 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar7 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar10,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar16 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar16;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar16 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar20 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar7 = *puVar20;
      if (uVar13 != uVar7) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar1);
    *puVar20 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar7) {
      return;
    }
  } while( true );
}

