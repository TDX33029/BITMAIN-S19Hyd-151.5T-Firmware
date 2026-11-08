// FUN_011e0d78 @ 011e0d78 size=436 calls_out=7 calls_in=3
// strings: 

void FUN_011e0d78(int param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_011db330();
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_011db330();
  }
  iVar12 = *(int *)(param_1 + 0x5c);
  if (iVar12 != 0) {
    FUN_011e0d78(iVar12);
    thunk_FUN_016d3fb4(iVar12);
  }
  iVar12 = *(int *)(param_1 + 0x60);
  if (iVar12 != 0) {
    FUN_011e0d78(iVar12);
    thunk_FUN_016d3fb4(iVar12);
  }
  piVar5 = *(int **)(param_1 + 100);
  if (piVar5 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar12 + -1;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011e0ca8();
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_011e1180();
  }
  iVar12 = *(int *)(param_1 + 0x10);
  if (iVar12 != -0x80000000) {
    iVar13 = *(int *)(param_1 + 0x14);
    iVar14 = *(int *)(param_1 + 0x18);
    iVar6 = iVar13;
    for (iVar9 = 0; iVar14 != iVar9; iVar9 = iVar9 + 1) {
      FUN_0115ccf0(iVar6);
      FUN_0115f93c(iVar6 + 0x14);
      iVar6 = iVar6 + 0x84;
    }
    if (iVar12 != 0) {
      thunk_FUN_016d3fb4(iVar13);
    }
  }
  iVar12 = *(int *)(param_1 + 0x1c);
  if (iVar12 != -0x80000000) {
    iVar13 = *(int *)(param_1 + 0x20);
    iVar14 = *(int *)(param_1 + 0x24);
    iVar6 = iVar13;
    for (iVar9 = 0; iVar14 != iVar9; iVar9 = iVar9 + 1) {
      FUN_0115ccf0(iVar6);
      FUN_0115f93c(iVar6 + 0x14);
      iVar6 = iVar6 + 0x84;
    }
    if (iVar12 != 0) {
      thunk_FUN_016d3fb4(iVar13);
    }
  }
  iVar12 = *(int *)(param_1 + 0x28);
  if (iVar12 != -0x80000000) {
    iVar13 = *(int *)(param_1 + 0x2c);
    iVar14 = *(int *)(param_1 + 0x30);
    iVar6 = iVar13;
    for (iVar9 = 0; iVar14 != iVar9; iVar9 = iVar9 + 1) {
      FUN_0115ccf0(iVar6);
      FUN_0115f93c(iVar6 + 0x14);
      iVar6 = iVar6 + 0x84;
    }
    if (iVar12 != 0) {
      if (iVar13 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar13 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar6 = uVar10 - 0x10, uVar10 == 0)) {
        iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar10 = (uint)(*(byte *)(iVar13 + -3) >> 5);
      iVar14 = *(int *)(iVar12 + 8) + 0x10;
      iVar9 = iVar6 * uVar15 + iVar6 + -4;
      iVar6 = iVar14 + iVar9;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar10 = *(uint *)(iVar6 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar6 - iVar13) < uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar6 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar12 + 0x14);
      uVar10 = 1 << uVar15;
      *(undefined1 *)(iVar13 + -3) = 0xff;
      *(undefined2 *)(iVar13 + -2) = 0;
      do {
        uVar11 = *(uint *)(iVar12 + 0x10);
        uVar7 = *(uint *)(iVar12 + 0xc) | uVar11;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar4;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar4 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar10 + uVar11;
          return;
        }
        puVar16 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar16);
          uVar7 = *puVar16;
          if (uVar11 != uVar7) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar1);
        *puVar16 = uVar10 + uVar11;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar11 == uVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

