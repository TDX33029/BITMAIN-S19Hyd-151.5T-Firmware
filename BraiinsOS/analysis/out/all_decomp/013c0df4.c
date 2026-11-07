// FUN_013c0df4 @ 013c0df4 size=312 calls_out=3 calls_in=20
// strings: 

void FUN_013c0df4(int param_1)

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
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int local_28;
  
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
  }
  FUN_01363068(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
  }
  iVar18 = *(int *)(param_1 + 0x24);
  iVar19 = *(int *)(param_1 + 0x28);
  iVar16 = 0;
  local_28 = param_1;
  while (iVar13 = local_28, iVar16 != iVar19) {
    piVar15 = (int *)(iVar18 + iVar16 * 0xc);
    iVar13 = piVar15[2];
    if (iVar13 != 0) {
      iVar14 = piVar15[1];
      iVar10 = 0;
      do {
        piVar4 = (int *)(iVar14 + iVar10 * 8);
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
        iVar10 = iVar10 + 1;
      } while (iVar10 != iVar13);
    }
    iVar16 = iVar16 + 1;
    if (*piVar15 != 0) {
      thunk_FUN_016d3fb4(piVar15[1]);
    }
  }
  if (*(int *)(local_28 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(local_28 + 0x24));
  }
  if (iVar13 != -1) {
    piVar15 = (int *)(iVar13 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar16 = *piVar15;
      bVar1 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar1);
    *piVar15 = iVar16 + -1;
    if (iVar16 == 1) {
      DataMemoryBarrier(0xb);
      if (iVar13 == 0) {
        return;
      }
      iVar16 = FUN_016d3bc8();
      uVar17 = *(byte *)(iVar13 + -3) & 0x1f;
      if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
         (uVar11 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar18 = uVar11 - 0x10, uVar11 == 0)) {
        iVar18 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar11 = (uint)(*(byte *)(iVar13 + -3) >> 5);
      iVar10 = *(int *)(iVar16 + 8) + 0x10;
      iVar19 = iVar18 * uVar17 + iVar18 + -4;
      iVar18 = iVar10 + iVar19;
      if (4 < uVar11) {
        if (uVar11 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar11 = *(uint *)(iVar18 + -4);
        if (uVar11 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar18 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar18 - iVar13) < uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar18 - uVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar10 + iVar19) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar16 + 0x14);
      uVar11 = 1 << uVar17;
      *(undefined1 *)(iVar13 + -3) = 0xff;
      *(undefined2 *)(iVar13 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar16 + 0x10);
        uVar8 = *(uint *)(iVar16 + 0xc) | uVar12;
        if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&local_28,iVar16,uVar17);
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
          *(uint *)(iVar16 + 0x10) = uVar11 + uVar12;
          return;
        }
        puVar20 = (uint *)(iVar16 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar20);
          uVar8 = *puVar20;
          if (uVar12 != uVar8) goto LAB_016d409c;
          bVar1 = (bool)hasExclusiveAccess(puVar20);
        } while (!bVar1);
        *puVar20 = uVar11 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

