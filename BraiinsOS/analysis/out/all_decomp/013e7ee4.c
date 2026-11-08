// FUN_013e7ee4 @ 013e7ee4 size=424 calls_out=2 calls_in=1
// strings: 

void FUN_013e7ee4(int param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int unaff_r4;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  uint *puVar18;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar16 = *(uint *)(param_1 + 8);
  uVar14 = 0;
  local_28 = 1;
  local_2c = 0;
  local_30 = 4;
  local_34 = 0;
  local_38 = 0;
  local_3c = 4;
  local_40 = 0;
  if (uVar16 != 0) {
    piVar17 = *(int **)(param_1 + 4);
    piVar11 = piVar17;
    do {
      uVar4 = FUN_013e7b54(&local_40,piVar11[1],piVar11[2]);
      if ((uVar4 & 1) != 0) {
        if (*piVar11 != 0) {
          thunk_FUN_016d3fb4(piVar11[1]);
        }
        if (uVar14 + 1 < uVar16) {
          uVar4 = uVar14;
          do {
            uVar15 = uVar4 + 1;
            uVar5 = FUN_013e7b54(&local_40,piVar17[uVar4 * 4 + 5],piVar17[uVar4 * 4 + 6]);
            if ((uVar5 & 1) == 0) {
              iVar9 = piVar17[uVar4 * 4 + 5];
              iVar7 = piVar17[uVar4 * 4 + 6];
              iVar6 = piVar17[uVar4 * 4 + 7];
              piVar11 = piVar17 + uVar14 * 4;
              *piVar11 = piVar17[uVar4 * 4 + 4];
              uVar14 = uVar14 + 1;
              piVar11[1] = iVar9;
              piVar11[2] = iVar7;
              piVar11[3] = iVar6;
            }
            else if (piVar17[uVar4 * 4 + 4] != 0) {
              thunk_FUN_016d3fb4(piVar17[uVar4 * 4 + 5]);
            }
            uVar4 = uVar15;
          } while (uVar16 - 1 != uVar15);
        }
        *(uint *)(param_1 + 8) = uVar14;
        break;
      }
      uVar14 = uVar14 + 1;
      piVar11 = piVar11 + 4;
    } while (uVar16 != uVar14);
  }
  iVar6 = local_3c;
  puVar12 = (undefined4 *)(local_3c + 4);
  for (iVar9 = local_38; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (puVar12[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar12);
    }
    puVar12 = puVar12 + 3;
  }
  if (local_40 != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  iVar6 = local_30;
  if (local_34 == 0) {
    return;
  }
  if (local_30 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar16 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar7 = uVar16 - 0x10, uVar16 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar16 = (uint)(*(byte *)(iVar6 + -3) >> 5);
  iVar13 = *(int *)(iVar9 + 8) + 0x10;
  iVar10 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar13 + iVar10;
  if (4 < uVar16) {
    if (uVar16 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar16 = *(uint *)(iVar7 + -4);
    if (uVar16 < 5) {
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
  if ((uint)(iVar7 - iVar6) < uVar16) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar16 = 1 << uVar14;
  *(undefined1 *)(iVar6 + -3) = 0xff;
  *(undefined2 *)(iVar6 + -2) = 0;
  do {
    uVar5 = *(uint *)(iVar9 + 0x10);
    uVar4 = *(uint *)(iVar9 + 0xc) | uVar5;
    if ((uVar16 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar5 == 0) || (uVar4 + uVar16 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar9,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar12 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar12;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar12 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar16 + uVar5;
      return;
    }
    puVar18 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar4 = *puVar18;
      if (uVar5 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar16 + uVar5;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar5 == uVar4) {
      return;
    }
  } while( true );
}

