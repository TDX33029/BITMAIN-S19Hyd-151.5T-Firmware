// FUN_00c8d994 @ 00c8d994 size=876 calls_out=10 calls_in=2
// strings: 

void FUN_00c8d994(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  switch(*(undefined1 *)(param_1 + 0x134)) {
  case 0:
    piVar3 = *(int **)(param_1 + 0x120);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x120));
    }
    puVar17 = *(undefined4 **)(param_1 + 0x84);
    iVar4 = *(int *)(param_1 + 0x80);
    pcVar7 = (code *)*puVar17;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(iVar4);
    }
    if (puVar17[1] == 0) {
      return;
    }
    if (iVar4 == 0) {
      return;
    }
    iVar5 = FUN_016d3bc8();
    uVar8 = *(byte *)(iVar4 + -3) & 0x1f;
    if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
       (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar9 = uVar11 - 0x10, uVar11 == 0)) {
      iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4
      ;
    }
    uVar11 = (uint)(*(byte *)(iVar4 + -3) >> 5);
    iVar16 = *(int *)(iVar5 + 8) + 0x10;
    iVar12 = iVar9 * uVar8 + iVar9 + -4;
    iVar9 = iVar16 + iVar12;
    if (4 < uVar11) {
      if (uVar11 != 5) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar7)();
      }
      uVar11 = *(uint *)(iVar9 + -4);
      if (uVar11 < 5) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar7)();
      }
      if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar7)();
      }
    }
    if ((uint)(iVar9 - iVar4) < uVar11) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar7)();
    }
    if (*(char *)(iVar9 - uVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar7)();
    }
    if (*(char *)(iVar16 + iVar12) != '\0') {
                    /* WARNING: Does not return */
      pcVar7 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar7)();
    }
    bVar2 = *(byte *)(iVar5 + 0x14);
    uVar11 = 1 << uVar8;
    *(undefined1 *)(iVar4 + -3) = 0xff;
    *(undefined2 *)(iVar4 + -2) = 0;
    do {
      uVar13 = *(uint *)(iVar5 + 0x10);
      uVar10 = *(uint *)(iVar5 + 0xc) | uVar13;
      if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar7)();
      }
      if ((uVar13 == 0) || (uVar10 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar5,uVar8);
        FUN_016dddc0(&DAT_018ddd48);
        if (iStack_24 == 0) {
          return;
        }
        puVar17 = (undefined4 *)FUN_016d2bc8();
        uVar15 = *puVar17;
        FUN_016d6ac4(uStack_28,iStack_24);
        *puVar17 = uVar15;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
        return;
      }
      puVar6 = (uint *)(iVar5 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar6);
        uVar10 = *puVar6;
        if (uVar13 != uVar10) goto LAB_016d409c;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar11 + uVar13;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar13 == uVar10) {
        return;
      }
    } while( true );
  default:
    goto switchD_00c8d9b0_caseD_1;
  case 3:
    puVar17 = *(undefined4 **)(param_1 + 0x144);
    uVar15 = *(undefined4 *)(param_1 + 0x140);
    pcVar7 = (code *)*puVar17;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar15);
    }
    if (puVar17[1] != 0) {
      thunk_FUN_016d3fb4(uVar15);
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x210) == '\x03') {
      if (*(char *)(param_1 + 0x150) == '\x04') {
        FUN_00c8f738(param_1 + 0x168);
      }
      else if (*(char *)(param_1 + 0x150) == '\x03') {
        FUN_00c8f68c(param_1 + 0x158);
      }
    }
    break;
  case 5:
    FUN_00654988(param_1 + 0x144);
    (**(code **)**(undefined4 **)(param_1 + 0x140))();
  }
  piVar14 = (int *)(param_1 + 0x130);
  FUN_00d0b738(piVar14);
  piVar3 = (int *)*piVar14;
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*piVar14);
    }
  }
  iVar4 = *(int *)(param_1 + 300);
  *(undefined1 *)(param_1 + 0x136) = 0;
  if (iVar4 != 0) {
    piVar3 = (int *)(iVar4 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    DataMemoryBarrier(0xb);
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar6 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar1);
        *puVar6 = *puVar6 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar6 = (uint *)(iVar4 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar6;
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = uVar8 | 2;
      DataMemoryBarrier(0xb);
      if (uVar8 == 0) {
        iVar5 = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar1);
        *puVar6 = *puVar6 & 0xfffffffd;
        if (iVar5 != 0) {
          (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x1c));
        }
      }
    }
    piVar3 = *(int **)(param_1 + 300);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 300));
    }
  }
  iVar4 = *(int *)(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x137) = 0;
  piVar3 = (int *)(iVar4 + 0x194);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_0163b708(iVar4 + 0x88);
  }
  piVar3 = *(int **)(param_1 + 0x110);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(*(undefined4 *)(param_1 + 0x110));
  }
  *(undefined1 *)(param_1 + 0x138) = 0;
  FUN_00d3e838(*(undefined4 *)(param_1 + 0x128));
  piVar3 = *(int **)(param_1 + 0x128);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(*(undefined4 *)(param_1 + 0x128));
  }
  puVar17 = *(undefined4 **)(param_1 + 0x10c);
  uVar15 = *(undefined4 *)(param_1 + 0x108);
  pcVar7 = (code *)*puVar17;
  *(undefined1 *)(param_1 + 0x139) = 0;
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(uVar15);
  }
  if (puVar17[1] != 0) {
    thunk_FUN_016d3fb4(uVar15);
  }
  *(undefined1 *)(param_1 + 0x13a) = 0;
  if (*(char *)(param_1 + 0x135) != '\0') {
    piVar3 = *(int **)(param_1 + 0x124);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0x124));
    }
  }
  *(undefined1 *)(param_1 + 0x135) = 0;
switchD_00c8d9b0_caseD_1:
  return;
}

