// FUN_00eaaf28 @ 00eaaf28 size=56 calls_out=3 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00eab224) */
/* WARNING: Removing unreachable block (ram,0x00eab06c) */

void FUN_00eaaf28(int param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uStack_40;
  uint *puStack_3c;
  uint uStack_38;
  int iStack_34;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  FUN_00eaaf60(local_10,param_1);
  FUN_008d3668(local_10[0],local_c);
  uVar4 = 0;
  if ((*(byte *)(param_1 + 0xbd) & 0x1d) != 0xc) {
    uVar4 = 2;
  }
  uVar16 = FUN_015fc8dc(uVar4);
  puVar6 = (uint *)((ulonglong)uVar16 >> 0x20);
  iStack_34 = param_1;
  if (*puVar6 == 2) {
    FUN_00fa1f50(&uStack_40,puVar6);
LAB_00eaafd8:
    uVar5 = *(byte *)((int)puVar6 + 0xbd) & 0x1d;
    if (uStack_40 == 0x80000000) goto LAB_00eaaff0;
    uVar15 = uStack_40;
    puVar6 = puStack_3c;
    uVar13 = uStack_38;
    if (uVar5 == 0xc) goto LAB_00eab1cc;
LAB_00eab030:
    uVar17 = thunk_FUN_016de0ee(uVar5,0x240);
    puVar7 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
    uVar5 = *puVar7;
    uVar11 = puVar7[1];
    if (uVar5 == 0 && uVar11 == 0) {
      ClearExclusiveLocal();
      do {
        if (DAT_018dd9a8 == 0xffffffff && DAT_018dd9ac == 0xffffffff) {
LAB_00eab3a8:
          FUN_015ee8c8();
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xeab3b4);
          (*pcVar1)();
        }
        uVar5 = DAT_018dd9a8 + 1;
        uVar11 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
        bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
      } while (!bVar2);
      DAT_018dd9a8 = uVar5;
      DAT_018dd9ac = uVar11;
      *puVar7 = uVar5;
      puVar7[1] = uVar11;
    }
    ClearExclusiveLocal();
    if (uVar5 == DAT_018dd9d8 && uVar11 == DAT_018dd9dc) {
      iVar8 = DAT_018dd9e4 + 1;
      if (DAT_018dd9e4 == -1) {
LAB_00eab2b8:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410806,0x26,&DAT_018aaff4);
      }
    }
    else {
      do {
        if (DAT_018dd9e0 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680();
          goto LAB_00eab134;
        }
        bVar2 = (bool)hasExclusiveAccess(0x18dd9e0);
      } while (!bVar2);
      DAT_018dd9e0 = 1;
      DataMemoryBarrier(0xb);
LAB_00eab134:
      do {
        bVar2 = (bool)hasExclusiveAccess(0x18dd9d8);
      } while (!bVar2);
      iVar8 = 1;
      DAT_018dd9d8 = uVar5;
      DAT_018dd9dc = uVar11;
    }
    DAT_018dd9e4 = iVar8;
    FUN_015ee8f0((int)uVar16,&DAT_018dd9d8,puVar6,uVar13);
    iVar8 = DAT_018dd9e0;
    DAT_018dd9e4 = DAT_018dd9e4 + -1;
    if (DAT_018dd9e4 != 0) goto joined_r0x00eab3d4;
    do {
      bVar2 = (bool)hasExclusiveAccess(0x18dd9d8);
    } while (!bVar2);
    DAT_018dd9d8 = 0;
    DAT_018dd9dc = 0;
    puVar9 = &DAT_018dd9e0;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(0x18dd9e0);
    } while (!bVar2);
    DAT_018dd9e0 = 0;
  }
  else {
    if ((*puVar6 & 1) == 0) {
      FUN_00fa3ebc(&uStack_40,puVar6[2],puVar6[3],puVar6 + 0xf,0,0);
      goto LAB_00eaafd8;
    }
    uStack_40 = 0x80000000;
    puStack_3c = puVar6 + 1;
    uVar5 = *(byte *)((int)puVar6 + 0xbd) & 0x1d;
LAB_00eaaff0:
    uVar15 = puStack_3c[2];
    uVar13 = puStack_3c[1];
    bVar2 = uVar5 != 0xc;
    if (uVar15 == 0) {
      puVar6 = (uint *)&DAT_00000001;
    }
    else {
      puVar6 = (uint *)thunk_FUN_016d4a50(uVar15);
      if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar15);
      }
    }
    uVar5 = FUN_016dd1aa(puVar6,uVar13,uVar15);
    uVar13 = uVar15;
    if (bVar2) goto LAB_00eab030;
LAB_00eab1cc:
    DataMemoryBarrier(0xb);
    uVar4 = 0;
    if (DAT_018d9080 != 0) {
      uVar4 = FUN_015ef544();
    }
    uVar17 = thunk_FUN_016de0ee(uVar4,0x240);
    puVar7 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
    uVar5 = *puVar7;
    uVar11 = puVar7[1];
    if (uVar5 == 0 && uVar11 == 0) {
      ClearExclusiveLocal();
      do {
        if (DAT_018dd9a8 == 0xffffffff && DAT_018dd9ac == 0xffffffff) goto LAB_00eab3a8;
        uVar5 = DAT_018dd9a8 + 1;
        uVar11 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
        bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
      } while (!bVar2);
      DAT_018dd9a8 = uVar5;
      DAT_018dd9ac = uVar11;
      *puVar7 = uVar5;
      puVar7[1] = uVar11;
    }
    ClearExclusiveLocal();
    if (uVar5 == DAT_018d9058 && uVar11 == DAT_018d905c) {
      iVar8 = DAT_018d9064 + 1;
      if (DAT_018d9064 == -1) goto LAB_00eab2b8;
    }
    else {
      do {
        if (DAT_018d9060 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680();
          goto LAB_00eab2fc;
        }
        bVar2 = (bool)hasExclusiveAccess(0x18d9060);
      } while (!bVar2);
      DAT_018d9060 = 1;
      DataMemoryBarrier(0xb);
LAB_00eab2fc:
      do {
        bVar2 = (bool)hasExclusiveAccess(0x18d9058);
      } while (!bVar2);
      iVar8 = 1;
      DAT_018d9058 = uVar5;
      DAT_018d905c = uVar11;
    }
    DAT_018d9064 = iVar8;
    FUN_015ef810((int)uVar16,&DAT_018d9058,puVar6,uVar13);
    iVar8 = DAT_018d9060;
    DAT_018d9064 = DAT_018d9064 + -1;
    if (DAT_018d9064 != 0) goto joined_r0x00eab3d4;
    do {
      bVar2 = (bool)hasExclusiveAccess(0x18d9058);
    } while (!bVar2);
    DAT_018d9058 = 0;
    DAT_018d905c = 0;
    puVar9 = &DAT_018d9060;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(0x18d9060);
    } while (!bVar2);
    DAT_018d9060 = 0;
  }
  if (iVar8 == 2) {
    FUN_016d6968(0xf0,puVar9,0x81,1);
  }
joined_r0x00eab3d4:
  if (uVar15 == 0) {
    return;
  }
  if (puVar6 == (uint *)0x0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar5 = *(byte *)((int)puVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar15 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar10 = uVar15 - 0x10, uVar15 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar15 = (uint)(*(byte *)((int)puVar6 + -3) >> 5);
  iVar14 = *(int *)(iVar8 + 8) + 0x10;
  iVar12 = iVar10 * uVar5 + iVar10 + -4;
  iVar10 = iVar14 + iVar12;
  if (4 < uVar15) {
    if (uVar15 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar15 = *(uint *)(iVar10 + -4);
    if (uVar15 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar10 - (int)puVar6) < uVar15) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 - uVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar3 = *(byte *)(iVar8 + 0x14);
  uVar15 = 1 << uVar5;
  *(undefined1 *)((int)puVar6 + -3) = 0xff;
  *(undefined2 *)((int)puVar6 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar8 + 0x10);
    uVar13 = *(uint *)(iVar8 + 0xc) | uVar11;
    if ((uVar15 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar13 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_38,iVar8,uVar5);
      iVar8 = iStack_34;
      FUN_016dddc0(&DAT_018ddd48);
      if (iVar8 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar4 = *puVar9;
      FUN_016d6ac4(uStack_38,iVar8);
      *puVar9 = uVar4;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar15 + uVar11;
      return;
    }
    puVar6 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar6);
      uVar13 = *puVar6;
      if (uVar11 != uVar13) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar2);
    *puVar6 = uVar15 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar13) {
      return;
    }
  } while( true );
}

