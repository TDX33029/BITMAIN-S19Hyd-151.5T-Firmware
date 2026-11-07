// FUN_00be4158 @ 00be4158 size=840 calls_out=19 calls_in=1
// strings: 

void FUN_00be4158(int param_1)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  undefined4 uStack_28;
  
  switch(*(undefined1 *)(param_1 + 0x50)) {
  case 3:
  case 6:
    if (*(char *)(param_1 + 0x94) == '\x03') {
      FUN_00b216bc(param_1 + 100);
      return;
    }
    break;
  case 4:
  case 7:
    if (*(char *)(param_1 + 0xa8) == '\x03') {
      FUN_00bbd058(param_1 + 0x74);
      return;
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xe5) == '\x03') {
      FUN_00accc50(param_1 + 0x70);
      *(undefined1 *)(param_1 + 0xe4) = 0;
    }
    piVar4 = *(int **)(param_1 + 0x6c);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar18 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar18);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(*(undefined4 *)(param_1 + 0x6c));
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar6 = *(int *)(param_1 + 100);
      if (iVar6 == 0) {
        return;
      }
      iVar12 = FUN_016d3bc8();
      uVar14 = *(byte *)(iVar6 + -3) & 0x1f;
      if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
         (uVar9 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar15 = uVar9 - 0x10, uVar9 == 0)) {
        iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar9 = (uint)(*(byte *)(iVar6 + -3) >> 5);
      iVar13 = *(int *)(iVar12 + 8) + 0x10;
      iVar11 = iVar15 * uVar14 + iVar15 + -4;
      iVar15 = iVar13 + iVar11;
      if (4 < uVar9) {
        if (uVar9 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar9 = *(uint *)(iVar15 + -4);
        if (uVar9 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar15 - iVar6) < uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar15 - uVar9) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar12 + 0x14);
      uVar9 = 1 << uVar14;
      *(undefined1 *)(iVar6 + -3) = 0xff;
      *(undefined2 *)(iVar6 + -2) = 0;
      do {
        uVar10 = *(uint *)(iVar12 + 0x10);
        uVar7 = *(uint *)(iVar12 + 0xc) | uVar10;
        if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar10 == 0) || (uVar7 + uVar9 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar12,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar8 = *puVar5;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar5 = uVar8;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar12 + 0x10) = uVar9 + uVar10;
          return;
        }
        puVar17 = (uint *)(iVar12 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar7 = *puVar17;
          if (uVar10 != uVar7) goto LAB_016d409c;
          bVar18 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar18);
        *puVar17 = uVar9 + uVar10;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar10 == uVar7) {
          return;
        }
      } while( true );
    }
    break;
  case 8:
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar18 = cVar1 == '\x03';
    if (bVar18) {
      cVar1 = *(char *)(param_1 + 0xd1);
    }
    if (bVar18 && cVar1 == '\x03') {
      FUN_00accc50(param_1 + 100);
      return;
    }
    break;
  case 9:
    FUN_00b317ec(param_1 + 0x60);
    return;
  case 10:
    FUN_00acb9a8(param_1 + 0x60);
    return;
  case 0xb:
    FUN_00654988(param_1 + 0x60);
    return;
  case 0xd:
    cVar1 = *(char *)(param_1 + 0x70);
    if (cVar1 == '\x05') {
      FUN_00bcb384(param_1 + 0x78);
      return;
    }
    if (cVar1 == '\x04') {
      FUN_00bce158(param_1 + 0x78);
      return;
    }
    if (cVar1 == '\x03') {
      FUN_00bcdee0(param_1 + 0x78);
      return;
    }
    break;
  case 0xe:
    FUN_00ad235c(param_1 + 0x60);
    goto LAB_00be4364;
  case 0xf:
    FUN_00b9fcc0(param_1 + 0x70);
    if (*(int *)(param_1 + 0x60) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
    }
LAB_00be4364:
    if (*(int *)(param_1 + 0x30) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x28));
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
    return;
  case 0x10:
    FUN_00beba6c(param_1 + 0x90);
    if (*(int *)(param_1 + 0x88) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x80));
    }
    iVar15 = *(int *)(param_1 + 100);
    iVar6 = 0;
    iVar12 = *(int *)(param_1 + 0x68);
    while (iVar6 != iVar12) {
      piVar4 = (int *)(iVar15 + iVar6 * 0xc);
      iVar13 = piVar4[1];
      iVar16 = piVar4[2];
      for (iVar11 = 0; iVar16 != iVar11; iVar11 = iVar11 + 1) {
        if (*(int *)(iVar13 + iVar11 * 0x10) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar13 + iVar11 * 0x10 + 4));
        }
      }
      iVar6 = iVar6 + 1;
      if (*piVar4 != 0) {
        thunk_FUN_016d3fb4(iVar13);
      }
    }
    if (*(int *)(param_1 + 0x60) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 100));
    }
    *(undefined1 *)(param_1 + 0x57) = 0;
    *(undefined1 *)(param_1 + 0x51) = 0;
    return;
  case 0x11:
    FUN_00bebe04(param_1 + 0x78);
    if (*(int *)(param_1 + 0x178) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x170));
    }
    *(undefined1 *)(param_1 + 0x56) = 0;
    return;
  case 0x12:
    FUN_00bd066c(param_1 + 0x68);
    *(undefined2 *)(param_1 + 0x54) = 0;
    return;
  case 0x13:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      FUN_00bd1f78(param_1 + 0x90);
      piVar4 = *(int **)(param_1 + 0xb8);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar18 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar18);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*(undefined4 *)(param_1 + 0xb8));
      }
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x60));
    }
    *(undefined1 *)(param_1 + 0x53) = 0;
    return;
  case 0x14:
    FUN_00bec080(param_1 + 0x80);
    if (*(int *)(param_1 + 0x78) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x70));
    }
    *(undefined1 *)(param_1 + 0x52) = 0;
    return;
  }
  return;
}

