// FUN_01089504 @ 01089504 size=392 calls_out=2 calls_in=1
// strings: 

void FUN_01089504(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int extraout_r1;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  bool bVar20;
  int local_28;
  
  if (param_2 == 0) {
    return;
  }
  iVar8 = 0;
  do {
    piVar4 = (int *)(param_1 + iVar8 * 8);
    iVar13 = *piVar4;
    iVar15 = piVar4[1];
    if (iVar15 != 0) {
      iVar16 = 0;
      local_28 = iVar8;
      do {
        puVar18 = (undefined4 *)(iVar13 + iVar16 * 0x18);
        while (pcVar14 = (char *)puVar18[3], pcVar14 != (char *)0x0) {
          pcVar5 = (char *)*puVar18;
          bVar20 = pcVar5 == &DAT_00000001;
          if (bVar20) {
            pcVar5 = (char *)puVar18[1];
          }
          if (bVar20 && pcVar5 == pcVar14) {
            iVar8 = *(int *)(pcVar5 + 0xc);
          }
          puVar6 = *(undefined4 **)(pcVar14 + 0xc);
          if (bVar20 && pcVar5 == pcVar14) {
            *puVar18 = 1;
            puVar18[1] = iVar8;
          }
          puVar18[3] = puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = puVar18;
          }
          puVar6[4] = 0;
          iVar8 = puVar18[2];
          cVar1 = *pcVar14;
          pcVar14[0xc] = '\0';
          pcVar14[0xd] = '\0';
          pcVar14[0xe] = '\0';
          pcVar14[0xf] = '\0';
          pcVar14[0x10] = '\0';
          pcVar14[0x11] = '\0';
          pcVar14[0x12] = '\0';
          pcVar14[0x13] = '\0';
          puVar18[2] = iVar8 + -1;
          if (cVar1 != '\0') {
            piVar4 = *(int **)(pcVar14 + 4);
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar4;
              bVar20 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar20);
            *piVar4 = iVar8 + -1;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              piVar7 = (int *)piVar4[4];
              DataMemoryBarrier(0xb);
              do {
                iVar8 = *piVar7;
                bVar20 = (bool)hasExclusiveAccess(piVar7);
              } while (!bVar20);
              *piVar7 = iVar8 + -1;
              if (iVar8 == 1) {
                DataMemoryBarrier(0xb);
                FUN_0108a158(piVar4[4]);
              }
              thunk_FUN_016d3fb4(piVar4);
            }
            piVar4 = *(int **)(pcVar14 + 8);
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar4;
              bVar20 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar20);
            *piVar4 = iVar8 + -1;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              thunk_FUN_016d3fb4();
            }
          }
          thunk_FUN_016d3fb4(pcVar14);
          iVar8 = extraout_r1;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != iVar15);
      thunk_FUN_016d3fb4(iVar13);
      iVar8 = local_28;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != param_2);
  if (param_1 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar17 = *(byte *)(param_1 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar13 = uVar11 - 0x10, uVar11 == 0)) {
    iVar13 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(param_1 + -3) >> 5);
  iVar16 = *(int *)(iVar8 + 8) + 0x10;
  iVar15 = iVar13 * uVar17 + iVar13 + -4;
  iVar13 = iVar16 + iVar15;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar13 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar13 - param_1) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar16 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar8 + 0x14);
  uVar11 = 1 << uVar17;
  *(undefined1 *)(param_1 + -3) = 0xff;
  *(undefined2 *)(param_1 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar8 + 0x10);
    uVar9 = *(uint *)(iVar8 + 0xc) | uVar12;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar8,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar18 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar18;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar18 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar19 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar19);
      uVar9 = *puVar19;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar20 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar20);
    *puVar19 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

