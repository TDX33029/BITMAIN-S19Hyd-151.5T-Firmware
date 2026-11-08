// FUN_00964c20 @ 00964c20 size=584 calls_out=7 calls_in=2
// strings: 

void FUN_00964c20(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 3:
    if (*(char *)(param_1 + 0x6c) != '\x03') goto LAB_00964e00;
    if (*(char *)(param_1 + 0x68) == '\x03') {
      if (*(short *)(param_1 + 0x48) == 3) {
        piVar3 = *(int **)(param_1 + 0x4c);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(piVar3);
          if (bVar1) {
            *piVar3 = 0x84;
            goto LAB_00964e00;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar3[2] + 0x10))();
      }
      goto LAB_00964e00;
    }
    if ((*(char *)(param_1 + 0x68) != '\0') || (*(int *)(param_1 + 0x3c) == 0)) goto LAB_00964e00;
    piVar3 = (int *)(param_1 + 0x40);
    goto LAB_00964d88;
  case 4:
    if ((*(char *)(param_1 + 0x38) == '\x03') && (*(int *)(param_1 + 0x30) != 0)) {
      FUN_0099a108(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
    }
    goto LAB_00964e00;
  case 5:
    if ((*(char *)(param_1 + 0x38) == '\x03') && (*(int *)(param_1 + 0x30) != 0)) {
      FUN_00999924(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),1);
    }
    break;
  case 6:
    FUN_009656d8(param_1 + 0x3c);
    uVar11 = *(undefined4 *)(param_1 + 0x34);
    puVar14 = *(undefined4 **)(param_1 + 0x38);
    pcVar5 = (code *)*puVar14;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar11);
    }
    if (puVar14[1] != 0) {
      thunk_FUN_016d3fb4(uVar11);
    }
    piVar3 = *(int **)(param_1 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078e66c(*(undefined4 *)(param_1 + 0x30));
    }
    FUN_00ce2c78(param_1 + 0xa4);
    break;
  default:
    goto switchD_00964c40_default;
  }
  piVar3 = (int *)(param_1 + 0x18);
  iVar17 = *piVar3;
  iVar6 = *(int *)(param_1 + 0x1c);
  if (iVar6 != 0) {
    iVar9 = 0;
    do {
      piVar7 = *(int **)(iVar17 + iVar9 * 4);
      iVar12 = iVar9 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar7;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078ecac(*(undefined4 *)(iVar17 + iVar9 * 4));
      }
      iVar9 = iVar12;
    } while (iVar12 != iVar6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
LAB_00964d88:
    thunk_FUN_016d3fb4(*piVar3);
  }
LAB_00964e00:
  puVar13 = (uint *)(*(int *)(param_1 + 0xc) + 0x10);
  for (iVar6 = *(int *)(param_1 + 0x10); iVar6 != 0; iVar6 = iVar6 + -1) {
    if ((*puVar13 & 0x7fffffff) == 0) {
      uVar4 = puVar13[-3];
    }
    else {
      thunk_FUN_016d3fb4(puVar13[1]);
      uVar4 = puVar13[-3];
    }
    if (uVar4 != 0) {
      thunk_FUN_016d3fb4(puVar13[-2]);
    }
    puVar13 = puVar13 + 9;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 == 0) {
      return;
    }
    iVar17 = FUN_016d3bc8();
    uVar4 = *(byte *)(iVar6 + -3) & 0x1f;
    if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
       (uVar15 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar9 = uVar15 - 0x10, uVar15 == 0)) {
      iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) <<
              4;
    }
    uVar15 = (uint)(*(byte *)(iVar6 + -3) >> 5);
    iVar8 = *(int *)(iVar17 + 8) + 0x10;
    iVar12 = iVar9 * uVar4 + iVar9 + -4;
    iVar9 = iVar8 + iVar12;
    if (4 < uVar15) {
      if (uVar15 != 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar5)();
      }
      uVar15 = *(uint *)(iVar9 + -4);
      if (uVar15 < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar5)();
      }
      if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar5)();
      }
    }
    if ((uint)(iVar9 - iVar6) < uVar15) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar5)();
    }
    if (*(char *)(iVar9 - uVar15) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar5)();
    }
    if (*(char *)(iVar8 + iVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar5)();
    }
    bVar2 = *(byte *)(iVar17 + 0x14);
    uVar15 = 1 << uVar4;
    *(undefined1 *)(iVar6 + -3) = 0xff;
    *(undefined2 *)(iVar6 + -2) = 0;
    do {
      uVar16 = *(uint *)(iVar17 + 0x10);
      uVar10 = *(uint *)(iVar17 + 0xc) | uVar16;
      if ((uVar15 & uVar10) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar5)();
      }
      if ((uVar16 == 0) || (uVar10 + uVar15 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar17,uVar4);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar14 = (undefined4 *)FUN_016d2bc8();
        uVar11 = *puVar14;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar14 = uVar11;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar17 + 0x10) = uVar15 + uVar16;
        return;
      }
      puVar13 = (uint *)(iVar17 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar13);
        uVar10 = *puVar13;
        if (uVar16 != uVar10) goto LAB_016d409c;
        bVar1 = (bool)hasExclusiveAccess(puVar13);
      } while (!bVar1);
      *puVar13 = uVar15 + uVar16;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar16 == uVar10) {
        return;
      }
    } while( true );
  }
switchD_00964c40_default:
  return;
}

