// FUN_00eaaf60 @ 00eaaf60 size=1160 calls_out=13 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00eab224) */
/* WARNING: Removing unreachable block (ram,0x00eab06c) */

void FUN_00eaaf60(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int unaff_r4;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  if (*param_2 == 2) {
    FUN_00fa1f50(&local_30,param_2);
LAB_00eaafd8:
    uVar4 = *(byte *)((int)param_2 + 0xbd) & 0x1d;
    if (local_30 == 0x80000000) goto LAB_00eaaff0;
    uVar15 = local_30;
    puVar5 = local_2c;
    uVar13 = local_28;
    if (uVar4 == 0xc) goto LAB_00eab1cc;
LAB_00eab030:
    uVar16 = thunk_FUN_016de0ee(uVar4,0x240);
    puVar6 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    uVar4 = *puVar6;
    uVar11 = puVar6[1];
    if (uVar4 == 0 && uVar11 == 0) {
      ClearExclusiveLocal();
      do {
        if (DAT_018dd9a8 == 0xffffffff && DAT_018dd9ac == 0xffffffff) {
LAB_00eab3a8:
          FUN_015ee8c8();
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xeab3b4);
          (*pcVar1)();
        }
        uVar4 = DAT_018dd9a8 + 1;
        uVar11 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
        bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
      } while (!bVar2);
      DAT_018dd9a8 = uVar4;
      DAT_018dd9ac = uVar11;
      *puVar6 = uVar4;
      puVar6[1] = uVar11;
    }
    ClearExclusiveLocal();
    if (uVar4 == DAT_018dd9d8 && uVar11 == DAT_018dd9dc) {
      iVar7 = DAT_018dd9e4 + 1;
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
      iVar7 = 1;
      DAT_018dd9d8 = uVar4;
      DAT_018dd9dc = uVar11;
    }
    DAT_018dd9e4 = iVar7;
    FUN_015ee8f0(param_1,&DAT_018dd9d8,puVar5,uVar13);
    iVar7 = DAT_018dd9e0;
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
    if ((*param_2 & 1) == 0) {
      FUN_00fa3ebc(&local_30,param_2[2],param_2[3],param_2 + 0xf,0,0);
      goto LAB_00eaafd8;
    }
    local_30 = 0x80000000;
    local_2c = param_2 + 1;
    uVar4 = *(byte *)((int)param_2 + 0xbd) & 0x1d;
LAB_00eaaff0:
    uVar15 = local_2c[2];
    uVar13 = local_2c[1];
    bVar2 = uVar4 != 0xc;
    if (uVar15 == 0) {
      puVar5 = (uint *)&DAT_00000001;
    }
    else {
      puVar5 = (uint *)thunk_FUN_016d4a50(uVar15);
      if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar15);
      }
    }
    uVar4 = FUN_016dd1aa(puVar5,uVar13,uVar15);
    uVar13 = uVar15;
    if (bVar2) goto LAB_00eab030;
LAB_00eab1cc:
    DataMemoryBarrier(0xb);
    uVar8 = 0;
    if (DAT_018d9080 != 0) {
      uVar8 = FUN_015ef544();
    }
    uVar16 = thunk_FUN_016de0ee(uVar8,0x240);
    puVar6 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    uVar4 = *puVar6;
    uVar11 = puVar6[1];
    if (uVar4 == 0 && uVar11 == 0) {
      ClearExclusiveLocal();
      do {
        if (DAT_018dd9a8 == 0xffffffff && DAT_018dd9ac == 0xffffffff) goto LAB_00eab3a8;
        uVar4 = DAT_018dd9a8 + 1;
        uVar11 = DAT_018dd9ac + (0xfffffffe < DAT_018dd9a8);
        bVar2 = (bool)hasExclusiveAccess(0x18dd9a8);
      } while (!bVar2);
      DAT_018dd9a8 = uVar4;
      DAT_018dd9ac = uVar11;
      *puVar6 = uVar4;
      puVar6[1] = uVar11;
    }
    ClearExclusiveLocal();
    if (uVar4 == DAT_018d9058 && uVar11 == DAT_018d905c) {
      iVar7 = DAT_018d9064 + 1;
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
      iVar7 = 1;
      DAT_018d9058 = uVar4;
      DAT_018d905c = uVar11;
    }
    DAT_018d9064 = iVar7;
    FUN_015ef810(param_1,&DAT_018d9058,puVar5,uVar13);
    iVar7 = DAT_018d9060;
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
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,puVar9,0x81,1);
  }
joined_r0x00eab3d4:
  if (uVar15 == 0) {
    return;
  }
  if (puVar5 == (uint *)0x0) {
    return;
  }
  iVar7 = FUN_016d3bc8();
  uVar4 = *(byte *)((int)puVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar7 + 0x14) & 0x1f) != 0) ||
     (uVar15 = *(uint *)(iVar7 + 0x14) & 0xfffff000, iVar10 = uVar15 - 0x10, uVar15 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar7 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar15 = (uint)(*(byte *)((int)puVar5 + -3) >> 5);
  iVar14 = *(int *)(iVar7 + 8) + 0x10;
  iVar12 = iVar10 * uVar4 + iVar10 + -4;
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
  if ((uint)(iVar10 - (int)puVar5) < uVar15) {
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
  bVar3 = *(byte *)(iVar7 + 0x14);
  uVar15 = 1 << uVar4;
  *(undefined1 *)((int)puVar5 + -3) = 0xff;
  *(undefined2 *)((int)puVar5 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar7 + 0x10);
    uVar13 = *(uint *)(iVar7 + 0xc) | uVar11;
    if ((uVar15 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar13 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar7,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar9;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar9 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar7 + 0x10) = uVar15 + uVar11;
      return;
    }
    puVar5 = (uint *)(iVar7 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar5);
      uVar13 = *puVar5;
      if (uVar11 != uVar13) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar2);
    *puVar5 = uVar15 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar13) {
      return;
    }
  } while( true );
}

