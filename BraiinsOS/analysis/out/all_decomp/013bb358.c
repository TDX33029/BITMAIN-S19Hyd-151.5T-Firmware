// FUN_013bb358 @ 013bb358 size=264 calls_out=3 calls_in=2
// strings: 

void FUN_013bb358(int *param_1)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int *local_28;
  
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  iVar9 = param_1[4];
  FUN_01363068(iVar9,param_1[5]);
  if (param_1[3] != 0) {
    thunk_FUN_016d3fb4(iVar9);
  }
  iVar18 = param_1[7];
  iVar19 = param_1[8];
  iVar9 = 0;
  local_28 = param_1;
  while (iVar9 != iVar19) {
    piVar16 = (int *)(iVar18 + iVar9 * 0xc);
    iVar14 = piVar16[2];
    if (iVar14 != 0) {
      iVar15 = piVar16[1];
      iVar11 = 0;
      do {
        piVar4 = (int *)(iVar15 + iVar11 * 8);
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
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar14);
    }
    iVar9 = iVar9 + 1;
    if (*piVar16 != 0) {
      thunk_FUN_016d3fb4(piVar16[1]);
    }
  }
  if (local_28[6] == 0) {
    return;
  }
  iVar9 = local_28[7];
  if (iVar9 == 0) {
    return;
  }
  iVar18 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar19 = uVar12 - 0x10, uVar12 == 0)) {
    iVar19 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar12 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar11 = *(int *)(iVar18 + 8) + 0x10;
  iVar14 = iVar19 * uVar17 + iVar19 + -4;
  iVar19 = iVar11 + iVar14;
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
  if ((uint)(iVar19 - iVar9) < uVar12) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar19 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar11 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar18 + 0x14);
  uVar12 = 1 << uVar17;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar18 + 0x10);
    uVar8 = *(uint *)(iVar18 + 0xc) | uVar13;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar12 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar18,uVar17);
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
      *(uint *)(iVar18 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar20 = (uint *)(iVar18 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar20);
      uVar8 = *puVar20;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar20);
    } while (!bVar1);
    *puVar20 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

