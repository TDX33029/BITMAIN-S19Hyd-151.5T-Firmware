// FUN_014bfd38 @ 014bfd38 size=1136 calls_out=11 calls_in=0
// strings: 

void FUN_014bfd38(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int **ppiVar5;
  int iVar6;
  undefined1 uVar7;
  int **ppiVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int **local_a0;
  undefined1 *local_9c;
  int **local_98;
  int *local_88;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_50;
  int local_4c;
  int *local_28;
  
  puVar12 = (undefined4 *)((uint)&local_a0 | 0x10);
  do {
    do {
      iVar9 = DAT_018d9204;
      ppiVar8 = DAT_018d9200;
      ppiVar5 = (int **)((int)DAT_018d9200 + 1);
      iVar6 = DAT_018d9204 + (uint)((int **)0xfffffffe < DAT_018d9200);
      bVar2 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar2);
    bVar2 = DAT_018d9200 == (int **)0x0;
    bVar3 = DAT_018d9204 == 0;
    DAT_018d9200 = ppiVar5;
    DAT_018d9204 = iVar6;
  } while (bVar2 && bVar3);
  uVar13 = thunk_FUN_016de0ee(&DAT_018d9200,0x40);
  puVar11 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  if ((char)puVar11[0xe] != '\x01') {
    if ((char)puVar11[0xe] == '\x02') {
      if ((code *)*param_3 != (code *)0x0) {
        (*(code *)*param_3)(param_2);
      }
      uVar7 = 1;
      if (param_3[1] != 0) {
        thunk_FUN_016d3fb4(param_2);
      }
      goto LAB_014bfdd0;
    }
    FUN_015e8e6c(puVar11,FUN_0148592c);
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  if (0x7ffffffe < *puVar11) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_014c016c;
  }
  *puVar11 = *puVar11 + 1;
  if (puVar11[1] == 2) {
    if ((code *)*param_3 != (code *)0x0) {
      (*(code *)*param_3)(param_2);
    }
    if (param_3[1] != 0) {
      thunk_FUN_016d3fb4(param_2);
    }
    uVar7 = 0;
    *puVar11 = *puVar11 - 1;
LAB_014bfdd0:
    local_28 = (int *)CONCAT31(local_28._1_3_,uVar7);
    local_9c = &LAB_0164eda0;
    local_a0 = &local_28;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_a0,&DAT_018a6078);
  }
  local_70 = param_2;
  local_6c = param_3;
  if ((puVar11[1] & 1) == 0) {
    piVar10 = (int *)puVar11[2];
    do {
      iVar6 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar6 + 1;
    if (iVar6 < 0) goto LAB_014c016c;
    piVar4 = (int *)piVar10[0x8e];
    if (piVar4 == (int *)0x0) {
      local_50 = 0;
      local_4c = 0;
    }
    else {
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_014c016c;
      local_50 = piVar10[0x8e];
      local_4c = piVar10[0x8f];
    }
    *puVar12 = 0;
    puVar12[1] = 0;
    local_9c = (undefined1 *)0x0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_78 = 0;
    local_28 = (int *)0x0;
    puVar12[4] = ppiVar8;
    puVar12[5] = iVar9;
    local_a0 = (int **)0xcc;
    local_98 = (int **)&PTR_LAB_018a47fc;
    local_88 = piVar10;
    iVar6 = FUN_016d51b0(&local_28,0x20,0x60);
    piVar4 = local_28;
    if ((iVar6 != 0) || (local_28 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x60);
    }
    FUN_016dd1aa(local_28,&local_a0,0x60);
    iVar6 = FUN_014ae51c(piVar10 + 0x40,piVar4,piVar4);
    local_a0 = ppiVar8;
    local_9c = (undefined1 *)iVar9;
    if (piVar10[0x8c] != 0) {
      (**(code **)(piVar10[0x8d] + 0x14))
                (piVar10[0x8c] + (*(int *)(piVar10[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
    }
    if (iVar6 != 0) {
      FUN_01659ec0(puVar11[2],iVar6);
    }
  }
  else {
    piVar10 = (int *)puVar11[2];
    do {
      iVar6 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar6 + 1;
    if (iVar6 < 0) {
LAB_014c016c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14c016c);
      (*pcVar1)();
    }
    piVar4 = (int *)piVar10[0x5c];
    if (piVar4 == (int *)0x0) {
      local_50 = 0;
      local_4c = 0;
    }
    else {
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_014c016c;
      local_50 = piVar10[0x5c];
      local_4c = piVar10[0x5d];
    }
    *puVar12 = 0;
    puVar12[1] = 0;
    local_9c = (undefined1 *)0x0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_78 = 0;
    local_28 = (int *)0x0;
    puVar12[4] = ppiVar8;
    puVar12[5] = iVar9;
    local_a0 = (int **)0xcc;
    local_98 = (int **)&PTR_LAB_018a484c;
    local_88 = piVar10;
    iVar6 = FUN_016d51b0(&local_28,0x20,0x60);
    piVar4 = local_28;
    if ((iVar6 != 0) || (local_28 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x60);
    }
    FUN_016dd1aa(local_28,&local_a0,0x60);
    iVar6 = FUN_014ae51c(piVar10 + 0x14,piVar4,piVar4);
    local_a0 = ppiVar8;
    local_9c = (undefined1 *)iVar9;
    if (piVar10[0x5a] != 0) {
      (**(code **)(piVar10[0x5b] + 0x14))
                (piVar10[0x5a] + (*(int *)(piVar10[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
    }
    if (iVar6 != 0) {
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      local_a0 = (int **)(piVar10 + 2);
      local_9c = (undefined1 *)iVar6;
      local_98 = &local_28;
      FUN_0164511c(&local_a0);
    }
  }
  *puVar11 = *puVar11 - 1;
  if (*piVar4 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar4);
    if (bVar2) {
      *piVar4 = 0x84;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
                    /* WARNING: Could not recover jumptable at 0x014c013c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(piVar4[2] + 0x10))(piVar4);
  return;
}

