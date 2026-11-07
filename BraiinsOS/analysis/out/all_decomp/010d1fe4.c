// FUN_010d1fe4 @ 010d1fe4 size=272 calls_out=2 calls_in=13
// strings: internal error: entered unreachable code: invalid Once state

void FUN_010d1fe4(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  int *local_28;
  
  iVar5 = param_1[4];
  if (iVar5 != 0) {
    if (iVar5 == 2) {
      return;
    }
    if (iVar5 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: invalid Once state",0x79,&DAT_018a9874
                  );
    }
  }
  iVar5 = param_1[2];
  iVar13 = param_1[1];
  local_28 = param_1;
  if (iVar5 != 0) {
    iVar8 = 0;
    do {
      iVar11 = iVar13 + iVar8 * 0x1c;
      iVar15 = *(int *)(iVar11 + 0x14);
      iVar16 = *(int *)(iVar11 + 0x18);
      if (iVar16 != 0) {
        piVar12 = (int *)(iVar15 + 0x14);
        do {
          while( true ) {
            if ((piVar12[3] & 0x7fffffffU) != 0) {
              thunk_FUN_016d3fb4(piVar12[4]);
            }
            iVar3 = piVar12[-1];
            bVar18 = iVar3 != 2;
            if (bVar18) {
              iVar3 = *piVar12;
            }
            if (bVar18 && iVar3 != 0) break;
            piVar12 = piVar12 + 0xb;
            iVar16 = iVar16 + -1;
            if (iVar16 == 0) goto LAB_010d209c;
          }
          thunk_FUN_016d3fb4(piVar12[1]);
          piVar12 = piVar12 + 0xb;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
LAB_010d209c:
      if (*(int *)(iVar11 + 0x10) != 0) {
        thunk_FUN_016d3fb4(iVar15);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar5);
  }
  if (*local_28 == 0) {
    return;
  }
  if (iVar13 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar9 - 0x10, uVar9 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar15 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar8 * uVar14 + iVar8 + -4;
  iVar8 = iVar15 + iVar11;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar8 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar8 - iVar13) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar5 + 0x10);
    uVar6 = *(uint *)(iVar5 + 0xc) | uVar10;
    if ((uVar9 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar6 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar5,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar4;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar4 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar9 + uVar10;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar6 = *puVar17;
      if (uVar10 != uVar6) goto LAB_016d409c;
      bVar18 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar18);
    *puVar17 = uVar9 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar6) {
      return;
    }
  } while( true );
}

