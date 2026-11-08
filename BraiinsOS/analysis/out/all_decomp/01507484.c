// FUN_01507484 @ 01507484 size=256 calls_out=1 calls_in=0
// strings: 

void FUN_01507484(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int unaff_r4;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  uint *puVar20;
  int *local_28;
  
  iVar13 = param_1[1];
  iVar14 = param_1[2];
  iVar10 = 0;
  local_28 = param_1;
  while (iVar10 != iVar14) {
    piVar16 = (int *)(iVar13 + iVar10 * 0x18);
    if ((piVar16[3] & 0x7fffffffU) == 0) {
      iVar19 = piVar16[2];
      piVar8 = (int *)piVar16[1];
    }
    else {
      thunk_FUN_016d3fb4(piVar16[4]);
      iVar19 = piVar16[2];
      piVar8 = (int *)piVar16[1];
    }
    if (iVar19 != 0) {
      iVar15 = 0;
      piVar18 = piVar8;
      do {
        iVar4 = *piVar18;
        if (iVar4 != -0x80000000) {
          piVar6 = piVar18;
          if (iVar4 == -0x7fffffff) {
            iVar4 = piVar18[1];
            if (iVar4 == -0x80000000) goto LAB_015074f0;
            piVar6 = piVar8 + iVar15 * 4 + 1;
          }
          if (iVar4 != 0) {
            thunk_FUN_016d3fb4(piVar6[1]);
          }
        }
LAB_015074f0:
        iVar15 = iVar15 + 1;
        piVar18 = piVar18 + 4;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    iVar10 = iVar10 + 1;
    if (*piVar16 != 0) {
      thunk_FUN_016d3fb4(piVar8);
    }
  }
  if (*local_28 == 0) {
    return;
  }
  if (iVar13 == 0) {
    return;
  }
  iVar10 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar10 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar10 + 0x14) & 0xfffff000, iVar14 = uVar11 - 0x10, uVar11 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar10 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar15 = *(int *)(iVar10 + 8) + 0x10;
  iVar19 = iVar14 * uVar17 + iVar14 + -4;
  iVar14 = iVar15 + iVar19;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar14 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar14 - iVar13) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar19) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar10 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar10 + 0x10);
    uVar7 = *(uint *)(iVar10 + 0xc) | uVar12;
    if ((uVar11 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar7 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar10,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar10 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar20 = (uint *)(iVar10 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar7 = *puVar20;
      if (uVar12 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar3);
    *puVar20 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar7) {
      return;
    }
  } while( true );
}

