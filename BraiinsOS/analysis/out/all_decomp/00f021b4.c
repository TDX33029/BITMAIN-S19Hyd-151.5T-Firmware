// FUN_00f021b4 @ 00f021b4 size=1336 calls_out=11 calls_in=0
// strings: 

void FUN_00f021b4(undefined4 *param_1,int **param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int **ppiVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined8 uVar16;
  uint local_5c0;
  int local_5bc;
  int local_5b8 [64];
  uint *local_4b8;
  undefined1 *local_4b4;
  undefined1 auStack_4b0 [264];
  int local_3a8 [64];
  undefined4 *local_2a8;
  int *local_2a0;
  undefined1 *local_29c;
  undefined **local_298;
  int *local_288;
  undefined4 local_278;
  undefined1 auStack_274 [260];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_160;
  int **local_15c;
  undefined1 local_130 [260];
  int *local_2c;
  undefined1 uStack_25;
  
  ppiVar13 = &local_2a0;
  puVar14 = (undefined4 *)((uint)ppiVar13 | 0x10);
  do {
    do {
      local_5c0 = DAT_018d9200;
      local_5bc = DAT_018d9204;
      uVar9 = DAT_018d9200 + 1;
      iVar10 = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == 0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = uVar9;
    DAT_018d9204 = iVar10;
  } while (bVar2 && bVar3);
  uVar4 = FUN_016dd1aa(local_5b8,param_2,0x100);
  uVar16 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar11 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  local_4b4 = &uStack_25;
  local_4b8 = &local_5c0;
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      uVar8 = 1;
      if (local_5b8[0] != 2) {
        FUN_00e44d70(local_5b8);
      }
      goto LAB_00f02268;
    }
    FUN_015e8e6c(puVar11,FUN_005bc49c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  FUN_016dd1aa(auStack_4b0,local_5b8,0x108);
  uVar9 = *puVar11;
  if (0x7ffffffe < uVar9) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00f026c0;
  }
  *puVar11 = uVar9 + 1;
  uVar12 = puVar11[1];
  FUN_016dd1aa(local_3a8,local_5b8,0x108);
  if (uVar12 == 2) {
    if (local_3a8[0] != 2) {
      FUN_00e44d70(local_3a8);
      uVar9 = *puVar11 - 1;
    }
    *puVar11 = uVar9;
    uVar8 = 0;
LAB_00f02268:
    local_3a8[0] = CONCAT31(local_3a8[0]._1_3_,uVar8);
    local_29c = &LAB_0164eda0;
    local_2a0 = local_3a8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_2a0,&DAT_0187c55c);
  }
  piVar7 = (int *)*local_2a8;
  iVar10 = local_2a8[1];
  if ((uVar12 & 1) == 0) {
    piVar15 = (int *)puVar11[2];
    do {
      iVar5 = *piVar15;
      bVar2 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar2);
    *piVar15 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_00f026c0;
    piVar6 = (int *)piVar15[0x8e];
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
      ppiVar13 = param_2;
    }
    else {
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00f026c0;
      iVar5 = piVar15[0x8e];
      ppiVar13 = (int **)piVar15[0x8f];
    }
    FUN_016dd1aa((uint)local_130 | 4,param_2,0x100);
    local_298 = &PTR_LAB_018792cc;
    local_2a0 = (int *)0xcc;
    puVar14[4] = piVar7;
    puVar14[5] = iVar10;
    *puVar14 = 0;
    puVar14[1] = 0;
    local_29c = (undefined1 *)0x0;
    local_278 = 0;
    local_288 = piVar15;
    FUN_016dd1aa(auStack_274,local_130,0x104);
    local_168 = 0;
    local_16c = 0;
    local_170 = 0;
    local_2c = (int *)0x0;
    local_160 = iVar5;
    local_15c = ppiVar13;
    iVar5 = FUN_016d51b0(&local_2c,0x20,0x160);
    piVar6 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x160);
    }
    FUN_016dd1aa(local_2c,&local_2a0,0x160);
    iVar5 = FUN_00ee0238(piVar15 + 0x40,piVar6,piVar6);
    local_2a0 = piVar7;
    local_29c = (undefined1 *)iVar10;
    if (piVar15[0x8c] != 0) {
      (**(code **)(piVar15[0x8d] + 0x14))
                (piVar15[0x8c] + (*(int *)(piVar15[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_2a0);
    }
    if (iVar5 != 0) {
      FUN_01659ec0(puVar11[2],iVar5);
    }
  }
  else {
    piVar15 = (int *)puVar11[2];
    do {
      iVar5 = *piVar15;
      bVar2 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar2);
    *piVar15 = iVar5 + 1;
    if (iVar5 < 0) {
LAB_00f026c0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xf026c0);
      (*pcVar1)();
    }
    piVar6 = (int *)piVar15[0x5c];
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_00f026c0;
      iVar5 = piVar15[0x5c];
      ppiVar13 = (int **)piVar15[0x5d];
    }
    FUN_016dd1aa((uint)local_130 | 4,param_2,0x100);
    local_298 = &PTR_LAB_01879754;
    local_2a0 = (int *)0xcc;
    puVar14[4] = piVar7;
    puVar14[5] = iVar10;
    *puVar14 = 0;
    puVar14[1] = 0;
    local_29c = (undefined1 *)0x0;
    local_278 = 0;
    local_288 = piVar15;
    FUN_016dd1aa(auStack_274,local_130,0x104);
    local_168 = 0;
    local_16c = 0;
    local_170 = 0;
    local_2c = (int *)0x0;
    local_160 = iVar5;
    local_15c = ppiVar13;
    iVar5 = FUN_016d51b0(&local_2c,0x20,0x160);
    piVar6 = local_2c;
    if ((iVar5 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x160);
    }
    FUN_016dd1aa(local_2c,&local_2a0,0x160);
    iVar5 = FUN_00ee0238(piVar15 + 0x14,piVar6,piVar6);
    local_2a0 = piVar7;
    local_29c = (undefined1 *)iVar10;
    if (piVar15[0x5a] != 0) {
      (**(code **)(piVar15[0x5b] + 0x14))
                (piVar15[0x5a] + (*(int *)(piVar15[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_2a0);
    }
    if (iVar5 != 0) {
      local_130[0] = 0;
      local_2a0 = piVar15 + 2;
      local_29c = (undefined1 *)iVar5;
      local_298 = (undefined **)local_130;
      FUN_0164511c(&local_2a0);
    }
  }
  *puVar11 = *puVar11 - 1;
  if (*piVar6 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar6);
    if (bVar2) {
      *piVar6 = 0x84;
      goto LAB_00f02680;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(piVar6[2] + 0x10))(piVar6);
LAB_00f02680:
  piVar7 = param_2[0x41];
  piVar15 = param_2[0x42];
  *param_1 = param_2[0x40];
  param_1[1] = piVar7;
  param_1[2] = piVar15;
  return;
}

