// FUN_0144ba54 @ 0144ba54 size=1608 calls_out=11 calls_in=0
// strings: Out of bounds access

/* WARNING: Removing unreachable block (ram,0x0144c064) */

uint FUN_0144ba54(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  undefined *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 in_stack_00000000;
  int local_4c;
  undefined *local_48;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  piVar13 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (piVar13 == (int *)0x0) {
    return 0;
  }
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar13 + 0x10) = 1;
  piVar10 = piVar13 + 0xc;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *(char *)piVar10 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar2 == '\0') {
    iVar2 = piVar13[10];
    piVar13[10] = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar13 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(piVar13[0xb]);
    }
  }
  piVar10 = piVar13 + 0xf;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *(char *)piVar10 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar2 == '\0') {
    iVar2 = piVar13[0xd];
    piVar13[0xd] = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar13 + 0xf) = 0;
    DataMemoryBarrier(0xb);
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 4))(piVar13[0xe]);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar13;
    bVar1 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar1);
  *piVar13 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143f6a0(piVar13);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    return (uint)DAT_018dd947;
  }
  piVar13 = (int *)(iVar2 + 8);
  do {
    if (*piVar13 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar13);
      goto LAB_0144bb90;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar1);
  *piVar13 = 1;
  DataMemoryBarrier(0xb);
LAB_0144bb90:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(iVar2 + 0xc) != '\0') {
LAB_0144bbb8:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(iVar2 + 0xc) = 1;
      }
LAB_0144bbd0:
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar13;
        bVar1 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar1);
      *piVar13 = 0;
      if (iVar2 == 2) {
        software_interrupt(0);
        uVar15 = FUN_016d3496(piVar13,0x81,1,in_stack_00000000);
        return uVar15;
      }
      return 0;
    }
    uVar15 = 0;
  }
  else {
    uVar15 = FUN_015bf3f8();
    uVar15 = uVar15 ^ 1;
    if (*(char *)(iVar2 + 0xc) != '\0') {
      if (uVar15 != 0) goto LAB_0144bbd0;
      goto LAB_0144bbb8;
    }
  }
  if (*(int *)(iVar2 + 0x6c) != 0) {
    uVar3 = FUN_01441568(*(undefined4 *)(iVar2 + 0x70),*(undefined4 *)(iVar2 + 0x74),
                         *(undefined4 *)(iVar2 + 0x78),*(undefined4 *)(iVar2 + 0x7c),param_1);
    uVar18 = uVar3 >> 0x19;
    uVar12 = *(uint *)(iVar2 + 100);
    iVar9 = *(int *)(iVar2 + 0x60);
    local_4c = 0;
    while( true ) {
      uVar3 = uVar12 & uVar3;
      uVar4 = *(uint *)(iVar9 + uVar3);
      uVar5 = uVar4 ^ uVar18 * 0x1010101;
      uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
      while (uVar5 != 0) {
        uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                       (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar12;
        iVar7 = FUN_014c953c(param_1,iVar9 + -0x28 + uVar6 * -0x28);
        uVar5 = uVar5 - 1 & uVar5;
        if (iVar7 != 0) {
          iVar9 = iVar9 + uVar6 * -0x28;
          uVar18 = 0;
          uVar3 = *(uint *)(iVar9 + -4);
          if (uVar3 != 0) {
            puVar11 = &DAT_018a6c00;
            goto LAB_0144bd40;
          }
          uVar12 = 0;
          goto LAB_0144be74;
        }
      }
      if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
      local_4c = local_4c + 4;
      uVar3 = uVar3 + local_4c;
    }
  }
  goto LAB_0144bf88;
  while( true ) {
    iVar7 = *(int *)(iVar9 + -8);
    if (*(uint *)(iVar9 + -0x10) <= uVar18 + iVar7) {
      iVar7 = iVar7 - *(uint *)(iVar9 + -0x10);
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(*(int *)(*(int *)(iVar9 + -0xc) + (uVar18 + iVar7) * 4) + 0x40) != '\0') {
      uVar12 = uVar18 + 1;
      if (uVar3 <= uVar12) goto LAB_0144be74;
      puVar11 = &DAT_018a6c10;
      local_48 = &DAT_018a6c20;
      puVar8 = &DAT_005666b0;
      goto LAB_0144bdb8;
    }
    uVar18 = uVar18 + 1;
    if (uVar3 == uVar18) break;
LAB_0144bd40:
    if (*(uint *)(iVar9 + -4) <= uVar18) goto LAB_0144bfe0;
  }
LAB_0144bef8:
  uVar3 = *(uint *)(iVar9 + -4);
  goto LAB_0144befc;
LAB_0144bdb8:
  do {
    if (*(uint *)(iVar9 + -4) <= uVar12) {
LAB_0144bfe0:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("Out of bounds access",0x14,puVar11);
    }
    iVar7 = *(int *)(iVar9 + -8);
    if (*(uint *)(iVar9 + -0x10) <= uVar12 + iVar7) {
      iVar7 = iVar7 - *(uint *)(iVar9 + -0x10);
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(*(int *)(*(int *)(iVar9 + -0xc) + (uVar12 + iVar7) * 4) + 0x40) != '\0') {
      uVar12 = uVar12 + 1;
      if (uVar3 <= uVar12) break;
      goto LAB_0144bdb8;
    }
    if (*(uint *)(iVar9 + -4) <= uVar18) {
LAB_0144c090:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(puVar8,0x20,local_48);
    }
    if (*(uint *)(iVar9 + -4) <= uVar12) {
      puVar8 = &DAT_00566b90;
      local_48 = &DAT_018a6c30;
      goto LAB_0144c090;
    }
    uVar16 = *(uint *)(iVar9 + -0x10);
    uVar6 = *(int *)(iVar9 + -8) + uVar12;
    uVar5 = *(int *)(iVar9 + -8) + uVar18;
    iVar7 = *(int *)(iVar9 + -0xc);
    uVar4 = uVar6 - uVar16;
    if (uVar6 < uVar16) {
      uVar4 = uVar6;
    }
    uVar6 = uVar5 - uVar16;
    if (uVar5 < uVar16) {
      uVar6 = uVar5;
    }
    uVar12 = uVar12 + 1;
    uVar17 = *(undefined4 *)(iVar7 + uVar6 * 4);
    uVar18 = uVar18 + 1;
    *(undefined4 *)(iVar7 + uVar6 * 4) = *(undefined4 *)(iVar7 + uVar4 * 4);
    *(undefined4 *)(iVar7 + uVar4 * 4) = uVar17;
  } while (uVar12 < uVar3);
LAB_0144be74:
  if (uVar12 == uVar18) goto LAB_0144bef8;
  uVar3 = *(uint *)(iVar9 + -4);
  if (uVar18 < uVar3) {
    uVar4 = *(uint *)(iVar9 + -0x10);
    uVar5 = *(uint *)(iVar9 + -8);
    iVar7 = *(int *)(iVar9 + -0xc);
    *(uint *)(iVar9 + -4) = uVar18;
    uVar12 = uVar5 - uVar4;
    if (uVar5 < uVar4) {
      uVar12 = uVar5;
    }
    uVar4 = uVar4 - uVar12;
    iVar14 = uVar3 - uVar4;
    if (uVar3 < uVar4) {
      iVar14 = 0;
    }
    if (uVar4 < uVar3) {
      uVar3 = uVar4;
    }
    if (uVar4 < uVar18) {
      iVar14 = iVar14 - (uVar18 - uVar3);
      iVar7 = iVar7 + (uVar18 - uVar3) * 4;
    }
    else {
      FUN_014564ec(iVar7 + uVar12 * 4 + uVar18 * 4,uVar3 - uVar18);
    }
    FUN_014564ec(iVar7,iVar14);
    goto LAB_0144bef8;
  }
LAB_0144befc:
  if ((uVar3 == 0) && (FUN_0142b76c(&local_34,iVar2 + 0x60,param_1), local_34 != 0x80000000)) {
    iVar9 = 0;
    if (local_28 == 0) {
      uVar18 = 0;
      uVar3 = 0;
    }
    else {
      uVar18 = local_2c - local_34;
      if (local_2c < local_34) {
        uVar18 = local_2c;
      }
      if (local_34 - uVar18 < local_28) {
        iVar9 = local_28 - (local_34 - uVar18);
        uVar3 = local_34;
      }
      else {
        uVar3 = uVar18 + local_28;
      }
    }
    FUN_014564ec(local_30 + uVar18 * 4,uVar3 - uVar18);
    FUN_014564ec(local_30,iVar9);
    if (local_34 != 0) {
      thunk_FUN_016d3fb4(local_30);
    }
  }
LAB_0144bf88:
  if (((uVar15 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(iVar2 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar13;
    bVar1 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar1);
  *piVar13 = 0;
  if (iVar2 == 2) {
    FUN_016d6968(0xf0,piVar13,0x81,1);
  }
  return 0;
}

