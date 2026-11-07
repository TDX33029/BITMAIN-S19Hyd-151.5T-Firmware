// FUN_0072a3d4 @ 0072a3d4 size=1164 calls_out=9 calls_in=2
// strings: 

void FUN_0072a3d4(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int local_148;
  undefined4 local_144;
  int *local_140;
  int *local_13c;
  undefined1 local_138;
  int *local_134;
  int *local_130;
  undefined1 local_12c;
  int local_128 [65];
  
  pcVar10 = (char *)(param_2 + 0x10);
  if (*pcVar10 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar2) goto LAB_0072a7f8;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0072a7f8:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 == 0) {
    FUN_016dd1aa(param_1,param_3,0x14);
    FUN_01282570(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar2) {
          *pcVar10 = '\0';
          return;
        }
      } while (*pcVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar10);
    return;
  }
  uVar12 = *(uint *)(param_2 + 0x18);
  iVar13 = *(int *)(param_2 + 0x1c);
  uVar4 = *(uint *)(param_2 + 0x40) & uVar12;
  *(uint *)(param_2 + 0x18) = uVar12 + 1;
  *(uint *)(param_2 + 0x1c) = iVar13 + (uint)(0xfffffffe < uVar12);
  if (*(uint *)(param_2 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,*(uint *)(param_2 + 0xc),&DAT_0187ab50);
  }
  pcVar11 = (char *)(*(int *)(param_2 + 8) + uVar4 * 0x28);
  if (*pcVar11 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar11);
    if (bVar2) {
      *pcVar11 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0072a4e0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar11);
LAB_0072a4e0:
  FUN_0128236c(pcVar11);
  *(int *)(pcVar11 + 0x10) = iVar3;
  *(uint *)(pcVar11 + 8) = uVar12;
  *(int *)(pcVar11 + 0xc) = iVar13;
  FUN_016dd1aa(pcVar11 + 0x14,param_3,0x14);
  FUN_01282570(pcVar11);
  if (*pcVar11 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar11);
      if (bVar2) {
        *pcVar11 = '\0';
        goto LAB_0072a548;
      }
    } while (*pcVar11 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar11);
LAB_0072a548:
  local_13c = *(int **)(param_2 + 0x20);
  piVar8 = *(int **)(param_2 + 0x24);
  local_138 = 0;
  local_140 = (int *)0x0;
  local_148 = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  if (local_13c == (int *)0x0) {
    local_140 = &local_148;
    local_13c = &local_148;
  }
  else {
    local_13c[2] = (int)&local_148;
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac73c);
    }
    piVar8[3] = (int)&local_148;
    local_140 = piVar8;
  }
  local_12c = 0;
  local_128[0x40] = 0;
  local_134 = &local_148;
  local_130 = (int *)(param_2 + 8);
  do {
    while (piVar8 = local_140, 0x1f < (uint)local_128[0x40]) {
      FUN_01282570(pcVar10);
      if (*pcVar10 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar2) {
            *pcVar10 = '\0';
            goto LAB_0072a6a4;
          }
        } while (*pcVar10 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar10);
LAB_0072a6a4:
      iVar13 = local_128[0x40];
      local_128[0x40] = 0;
      piVar8 = local_128;
      for (iVar13 = iVar13 << 3; iVar13 != 0; iVar13 = iVar13 + -8) {
        iVar9 = *piVar8;
        piVar5 = piVar8 + 1;
        piVar8 = piVar8 + 2;
        (**(code **)(iVar9 + 4))(*piVar5);
      }
      if (*pcVar10 == '\0') {
        bVar2 = (bool)hasExclusiveAccess(pcVar10);
        if (!bVar2) goto LAB_0072a5c8;
        *pcVar10 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0072a5c8:
        FUN_01280da8(pcVar10);
      }
      FUN_0128236c(pcVar10);
    }
    if (local_140 == (int *)0x0) {
      puVar7 = &DAT_018ac74c;
LAB_0072a818:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar7);
    }
    if (local_140 == &local_148) {
      local_12c = 1;
      FUN_01282570(pcVar10);
      if (*pcVar10 != '\x01') goto LAB_0072a72c;
      DataMemoryBarrier(0xb);
      break;
    }
    piVar5 = (int *)local_140[2];
    if (piVar5 == (int *)0x0) {
      puVar7 = &DAT_018ac75c;
      goto LAB_0072a818;
    }
    piVar5[3] = (int)&local_148;
    iVar13 = *local_140;
    iVar9 = local_140[1];
    piVar1 = local_140 + 2;
    local_140 = piVar5;
    *piVar1 = 0;
    piVar8[3] = 0;
    *piVar8 = 0;
    if (iVar13 != 0) {
      if (0x1f < (uint)local_128[0x40]) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_128[0x40],0x20,&DAT_018ad394);
      }
      local_128[local_128[0x40] * 2] = iVar13;
      local_128[local_128[0x40] * 2 + 1] = iVar9;
      local_128[0x40] = local_128[0x40] + 1;
    }
    if ((char)piVar8[4] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0035e35f,0x26,&DAT_01880ab4);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar8 + 4) = 0;
  } while( true );
  while (*pcVar10 == '\x01') {
    bVar2 = (bool)hasExclusiveAccess(pcVar10);
    if (bVar2) {
      *pcVar10 = '\0';
      goto LAB_0072a738;
    }
  }
LAB_0072a72c:
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar10);
LAB_0072a738:
  iVar13 = local_128[0x40];
  piVar8 = local_128;
  local_128[0x40] = 0;
  for (iVar9 = 0; iVar13 * 8 != iVar9; iVar9 = iVar9 + 8) {
    iVar6 = *piVar8;
    piVar5 = piVar8 + 1;
    piVar8 = piVar8 + 2;
    (**(code **)(iVar6 + 4))(*piVar5);
  }
  piVar8 = local_128 + 1;
  for (iVar13 = local_128[0x40]; iVar13 != 0; iVar13 = iVar13 + -1) {
    piVar5 = piVar8 + -1;
    iVar9 = *piVar8;
    piVar8 = piVar8 + 2;
    (**(code **)(*piVar5 + 0xc))(iVar9);
  }
  FUN_00fa83fc(&local_134);
  if (local_148 != 0) {
    (**(code **)(local_148 + 0xc))(local_144);
  }
  *(undefined1 *)((int)param_1 + 0x13) = 2;
  *param_1 = iVar3;
  return;
}

