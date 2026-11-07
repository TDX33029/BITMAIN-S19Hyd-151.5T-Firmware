// FUN_0147af54 @ 0147af54 size=1984 calls_out=12 calls_in=2
// strings: Out of bounds access

/* WARNING: Removing unreachable block (ram,0x0147b6dc) */
/* WARNING: Removing unreachable block (ram,0x0147b648) */
/* WARNING: Removing unreachable block (ram,0x0147b650) */

void FUN_0147af54(byte *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  int *piVar12;
  char *pcVar13;
  undefined *puVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  int local_50;
  undefined *local_4c;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  pbVar18 = param_1 + 0x1c;
  piVar16 = *(int **)pbVar18;
  pbVar18[0] = 0;
  pbVar18[1] = 0;
  pbVar18[2] = 0;
  pbVar18[3] = 0;
  if (piVar16 == (int *)0x0) goto LAB_0147b0f4;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar16 + 0x10) = 1;
  piVar12 = piVar16 + 0xc;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *(char *)piVar12 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar3 == '\0') {
    iVar3 = piVar16[10];
    piVar16[10] = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar16 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(piVar16[0xb]);
    }
  }
  piVar12 = piVar16 + 0xf;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar12;
    bVar2 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar2);
  *(char *)piVar12 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar3 == '\0') {
    iVar3 = piVar16[0xd];
    piVar16[0xd] = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar16 + 0xf) = 0;
    DataMemoryBarrier(0xb);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 4))(piVar16[0xe]);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014a5c48(piVar16);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) goto LAB_0147b0f4;
  piVar16 = (int *)(iVar3 + 8);
  do {
    if (*piVar16 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar16);
      goto LAB_0147b094;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
LAB_0147b094:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(iVar3 + 0xc) != '\0') {
LAB_0147b0bc:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(iVar3 + 0xc) = 1;
      }
      goto LAB_0147b0d4;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    if (*(char *)(iVar3 + 0xc) != '\0') {
      if (uVar5 == 0) goto LAB_0147b0bc;
LAB_0147b0d4:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar16;
        bVar2 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar2);
      *piVar16 = 0;
      if (iVar3 == 2) {
        FUN_016d6968(0xf0,piVar16,0x81,1);
      }
      goto LAB_0147b0f4;
    }
  }
  if (*(int *)(iVar3 + 0x6c) != 0) {
    uVar6 = FUN_014c854c(*(undefined4 *)(iVar3 + 0x70),*(undefined4 *)(iVar3 + 0x74),
                         *(undefined4 *)(iVar3 + 0x78),*(undefined4 *)(iVar3 + 0x7c),param_1);
    uVar21 = uVar6 >> 0x19;
    uVar15 = *(uint *)(iVar3 + 100);
    iVar4 = *(int *)(iVar3 + 0x60);
    local_50 = 0;
    while( true ) {
      uVar6 = uVar15 & uVar6;
      uVar7 = *(uint *)(iVar4 + uVar6);
      uVar8 = uVar7 ^ uVar21 * 0x1010101;
      uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
      while (uVar8 != 0) {
        uVar9 = uVar6 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                       (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar15;
        iVar10 = FUN_014c953c(param_1,iVar4 + -0x28 + uVar9 * -0x28);
        uVar8 = uVar8 - 1 & uVar8;
        if (iVar10 != 0) {
          iVar4 = iVar4 + uVar9 * -0x28;
          uVar21 = 0;
          uVar6 = *(uint *)(iVar4 + -4);
          if (uVar6 == 0) {
            uVar15 = 0;
            goto LAB_0147b4e4;
          }
          puVar14 = &DAT_018a6c00;
          goto LAB_0147b3b0;
        }
      }
      if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
      local_50 = local_50 + 4;
      uVar6 = uVar6 + local_50;
    }
  }
  goto LAB_0147b5f4;
  while( true ) {
    iVar10 = *(int *)(iVar4 + -8);
    if (*(uint *)(iVar4 + -0x10) <= uVar21 + iVar10) {
      iVar10 = iVar10 - *(uint *)(iVar4 + -0x10);
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(*(int *)(*(int *)(iVar4 + -0xc) + (uVar21 + iVar10) * 4) + 0x40) != '\0') {
      uVar15 = uVar21 + 1;
      if (uVar6 <= uVar15) goto LAB_0147b4e4;
      puVar14 = &DAT_018a6c10;
      local_4c = &DAT_018a6c20;
      puVar11 = &DAT_005666b0;
      goto LAB_0147b428;
    }
    uVar21 = uVar21 + 1;
    if (uVar6 == uVar21) break;
LAB_0147b3b0:
    if (*(uint *)(iVar4 + -4) <= uVar21) goto LAB_0147b654;
  }
LAB_0147b564:
  uVar6 = *(uint *)(iVar4 + -4);
  goto LAB_0147b568;
  while (uVar15 = uVar15 + 1, uVar15 < uVar6) {
LAB_0147b428:
    if (*(uint *)(iVar4 + -4) <= uVar15) {
LAB_0147b654:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("Out of bounds access",0x14,puVar14);
    }
    iVar10 = *(int *)(iVar4 + -8);
    if (*(uint *)(iVar4 + -0x10) <= uVar15 + iVar10) {
      iVar10 = iVar10 - *(uint *)(iVar4 + -0x10);
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(*(int *)(*(int *)(iVar4 + -0xc) + (uVar15 + iVar10) * 4) + 0x40) == '\0') {
      if (uVar21 < *(uint *)(iVar4 + -4)) {
        if (uVar15 < *(uint *)(iVar4 + -4)) {
          uVar19 = *(uint *)(iVar4 + -0x10);
          uVar9 = *(int *)(iVar4 + -8) + uVar15;
          uVar8 = *(int *)(iVar4 + -8) + uVar21;
          iVar10 = *(int *)(iVar4 + -0xc);
          uVar7 = uVar9 - uVar19;
          if (uVar9 < uVar19) {
            uVar7 = uVar9;
          }
          uVar9 = uVar8 - uVar19;
          if (uVar8 < uVar19) {
            uVar9 = uVar8;
          }
          uVar15 = uVar15 + 1;
          uVar20 = *(undefined4 *)(iVar10 + uVar9 * 4);
          uVar21 = uVar21 + 1;
          *(undefined4 *)(iVar10 + uVar9 * 4) = *(undefined4 *)(iVar10 + uVar7 * 4);
          *(undefined4 *)(iVar10 + uVar7 * 4) = uVar20;
          if (uVar6 <= uVar15) break;
          goto LAB_0147b428;
        }
        puVar11 = &DAT_00566b90;
        local_4c = &DAT_018a6c30;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(puVar11,0x20,local_4c);
    }
  }
LAB_0147b4e4:
  if (uVar15 == uVar21) goto LAB_0147b564;
  uVar6 = *(uint *)(iVar4 + -4);
  if (uVar21 < uVar6) {
    *(uint *)(iVar4 + -4) = uVar21;
    uVar7 = *(uint *)(iVar4 + -0x10);
    iVar10 = *(int *)(iVar4 + -0xc);
    uVar8 = *(uint *)(iVar4 + -8);
    uVar15 = uVar8 - uVar7;
    if (uVar8 < uVar7) {
      uVar15 = uVar8;
    }
    uVar7 = uVar7 - uVar15;
    iVar17 = uVar6 - uVar7;
    if (uVar6 < uVar7) {
      iVar17 = 0;
    }
    if (uVar7 < uVar6) {
      uVar6 = uVar7;
    }
    if (uVar7 < uVar21) {
      iVar17 = iVar17 - (uVar21 - uVar6);
      iVar10 = iVar10 + (uVar21 - uVar6) * 4;
    }
    else {
      FUN_014ef91c(iVar10 + uVar15 * 4 + uVar21 * 4,uVar6 - uVar21);
    }
    FUN_014ef91c(iVar10,iVar17);
    goto LAB_0147b564;
  }
LAB_0147b568:
  if ((uVar6 == 0) && (FUN_01492b74(&local_34,iVar3 + 0x60,param_1), local_34 != 0x80000000)) {
    iVar4 = 0;
    if (local_28 == 0) {
      uVar21 = 0;
      uVar6 = 0;
    }
    else {
      uVar21 = local_2c - local_34;
      if (local_2c < local_34) {
        uVar21 = local_2c;
      }
      if (local_34 - uVar21 < local_28) {
        iVar4 = local_28 - (local_34 - uVar21);
        uVar6 = local_34;
      }
      else {
        uVar6 = uVar21 + local_28;
      }
    }
    FUN_014ef91c(local_30 + uVar21 * 4,uVar6 - uVar21);
    FUN_014ef91c(local_30,iVar4);
    if (local_34 != 0) {
      thunk_FUN_016d3fb4(local_30);
    }
  }
LAB_0147b5f4:
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(iVar3 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = 0;
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,piVar16,0x81,1);
  }
LAB_0147b0f4:
  if (1 < *param_1) {
    piVar16 = *(int **)(param_1 + 4);
    (**(code **)(*piVar16 + 0x10))(piVar16 + 3,piVar16[1],piVar16[2]);
    thunk_FUN_016d3fb4(piVar16);
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x10))
            (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  piVar16 = *(int **)(param_1 + 0x18);
  if (piVar16 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149f9e0(*(undefined4 *)(param_1 + 0x18));
    }
  }
  iVar3 = *(int *)pbVar18;
  if (iVar3 != 0) {
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar3 + 0x40) = 1;
    pcVar13 = (char *)(iVar3 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar13;
      bVar2 = (bool)hasExclusiveAccess(pcVar13);
    } while (!bVar2);
    *pcVar13 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar4 = *(int *)(iVar3 + 0x28);
      *(undefined4 *)(iVar3 + 0x28) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar3 + 0x30) = 0;
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar3 + 0x2c));
      }
    }
    pcVar13 = (char *)(iVar3 + 0x3c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar13;
      bVar2 = (bool)hasExclusiveAccess(pcVar13);
    } while (!bVar2);
    *pcVar13 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar4 = *(int *)(iVar3 + 0x34);
      *(undefined4 *)(iVar3 + 0x34) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar3 + 0x3c) = 0;
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x38));
      }
    }
    piVar16 = *(int **)pbVar18;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar16;
      bVar2 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar2);
    *piVar16 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014a5c48(*(undefined4 *)pbVar18);
      return;
    }
  }
  return;
}

