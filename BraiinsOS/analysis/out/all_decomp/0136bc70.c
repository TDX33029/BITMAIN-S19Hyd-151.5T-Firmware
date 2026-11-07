// FUN_0136bc70 @ 0136bc70 size=328 calls_out=2 calls_in=1
// strings: 

void FUN_0136bc70(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  int local_28;
  
  iVar9 = *(int *)(param_1 + 0x18);
  iVar11 = *(int *)(param_1 + 0x1c);
  if (iVar11 != 0) {
    piVar15 = (int *)(iVar9 + 4);
    do {
      if (((piVar15[-1] - 6U < 2) || (piVar15[-1] == 2)) && (*piVar15 != 0)) {
        thunk_FUN_016d3fb4(piVar15[1]);
      }
      piVar15 = piVar15 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  iVar11 = *(int *)(param_1 + 0x30);
  iVar19 = *(int *)(param_1 + 0x34);
  iVar9 = 0;
  local_28 = param_1;
  while (iVar9 != iVar19) {
    piVar15 = (int *)(iVar11 + iVar9 * 0xc);
    iVar16 = piVar15[2];
    if (iVar16 != 0) {
      iVar17 = piVar15[1];
      iVar12 = 0;
      do {
        piVar4 = (int *)(iVar17 + iVar12 * 8);
        piVar6 = (int *)*piVar4;
        if (piVar6 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(*piVar4,piVar4[1]);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar16);
    }
    iVar9 = iVar9 + 1;
    if (*piVar15 != 0) {
      thunk_FUN_016d3fb4(piVar15[1]);
    }
  }
  if (*(int *)(local_28 + 0x2c) == 0) {
    return;
  }
  iVar9 = *(int *)(local_28 + 0x30);
  if (iVar9 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar18 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar19 = uVar13 - 0x10, uVar13 == 0)) {
    iVar19 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar13 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar16 = iVar19 * uVar18 + iVar19 + -4;
  iVar19 = iVar12 + iVar16;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar13 = *(uint *)(iVar19 + -4);
    if (uVar13 < 5) {
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
  if ((uint)(iVar19 - iVar9) < uVar13) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar19 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar12 + iVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar11 + 0x14);
  uVar13 = 1 << uVar18;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar11 + 0x10);
    uVar8 = *(uint *)(iVar11 + 0xc) | uVar14;
    if ((uVar13 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar14 == 0) || (uVar8 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar11,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar13 + uVar14;
      return;
    }
    puVar20 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar8 = *puVar20;
      if (uVar14 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar1);
    *puVar20 = uVar13 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar8) {
      return;
    }
  } while( true );
}

