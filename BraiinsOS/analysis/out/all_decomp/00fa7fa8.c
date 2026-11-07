// FUN_00fa7fa8 @ 00fa7fa8 size=860 calls_out=8 calls_in=2
// strings: 

void FUN_00fa7fa8(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int local_148;
  undefined4 local_144;
  int *local_140;
  int *local_13c;
  undefined1 local_138;
  int *local_134;
  int local_130;
  undefined1 local_12c;
  int local_128 [65];
  
  piVar7 = (int *)(param_1 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar3 + -1;
  DataMemoryBarrier(0xb);
  if (iVar3 != 1) {
    return;
  }
  pcVar9 = (char *)(param_1 + 0x10);
  if (*pcVar9 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar9);
    if (bVar2) {
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00fa8000;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar9);
LAB_00fa8000:
  FUN_0128236c(pcVar9);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  local_13c = *(int **)(param_1 + 0x20);
  piVar7 = *(int **)(param_1 + 0x24);
  local_138 = 0;
  local_140 = (int *)0x0;
  local_148 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (local_13c == (int *)0x0) {
    local_140 = &local_148;
    local_13c = &local_148;
  }
  else {
    local_13c[2] = (int)&local_148;
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac73c);
    }
    piVar7[3] = (int)&local_148;
    local_140 = piVar7;
  }
  local_130 = param_1 + 8;
  local_12c = 0;
  local_128[0x40] = 0;
  local_134 = &local_148;
  do {
    while (piVar7 = local_140, 0x1f < (uint)local_128[0x40]) {
      FUN_01282570(pcVar9);
      if (*pcVar9 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(pcVar9);
          if (bVar2) {
            *pcVar9 = '\0';
            goto LAB_00fa8170;
          }
        } while (*pcVar9 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar9);
LAB_00fa8170:
      iVar3 = local_128[0x40];
      local_128[0x40] = 0;
      piVar7 = local_128;
      for (iVar3 = iVar3 << 3; iVar3 != 0; iVar3 = iVar3 + -8) {
        iVar8 = *piVar7;
        piVar4 = piVar7 + 1;
        piVar7 = piVar7 + 2;
        (**(code **)(iVar8 + 4))(*piVar4);
      }
      if (*pcVar9 == '\0') {
        bVar2 = (bool)hasExclusiveAccess(pcVar9);
        if (!bVar2) goto LAB_00fa8094;
        *pcVar9 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00fa8094:
        FUN_01280da8(pcVar9);
      }
      FUN_0128236c(pcVar9);
    }
    if (local_140 == (int *)0x0) {
      puVar6 = &DAT_018ac74c;
LAB_00fa82c8:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar6);
    }
    if (local_140 == &local_148) {
      local_12c = 1;
      FUN_01282570(pcVar9);
      if (*pcVar9 != '\x01') goto LAB_00fa81f8;
      DataMemoryBarrier(0xb);
      break;
    }
    piVar4 = (int *)local_140[2];
    if (piVar4 == (int *)0x0) {
      puVar6 = &DAT_018ac75c;
      goto LAB_00fa82c8;
    }
    piVar4[3] = (int)&local_148;
    iVar3 = *local_140;
    iVar8 = local_140[1];
    piVar1 = local_140 + 2;
    local_140 = piVar4;
    *piVar1 = 0;
    piVar7[3] = 0;
    *piVar7 = 0;
    if (iVar3 != 0) {
      if (0x1f < (uint)local_128[0x40]) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_128[0x40],0x20,&DAT_018ad394);
      }
      local_128[local_128[0x40] * 2] = iVar3;
      local_128[local_128[0x40] * 2 + 1] = iVar8;
      local_128[0x40] = local_128[0x40] + 1;
    }
    if ((char)piVar7[4] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0035e35f,0x26,&DAT_01880ab4);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar7 + 4) = 0;
  } while( true );
  while (*pcVar9 == '\x01') {
    bVar2 = (bool)hasExclusiveAccess(pcVar9);
    if (bVar2) {
      *pcVar9 = '\0';
      goto LAB_00fa8204;
    }
  }
LAB_00fa81f8:
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar9);
LAB_00fa8204:
  iVar3 = local_128[0x40];
  piVar7 = local_128;
  local_128[0x40] = 0;
  for (iVar8 = 0; iVar3 * 8 != iVar8; iVar8 = iVar8 + 8) {
    iVar5 = *piVar7;
    piVar4 = piVar7 + 1;
    piVar7 = piVar7 + 2;
    (**(code **)(iVar5 + 4))(*piVar4);
  }
  piVar7 = local_128 + 1;
  for (iVar3 = local_128[0x40]; iVar3 != 0; iVar3 = iVar3 + -1) {
    piVar4 = piVar7 + -1;
    iVar8 = *piVar7;
    piVar7 = piVar7 + 2;
    (**(code **)(*piVar4 + 0xc))(iVar8);
  }
  FUN_00fa83fc(&local_134);
  if (local_148 != 0) {
    (**(code **)(local_148 + 0xc))(local_144);
  }
  return;
}

