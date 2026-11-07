// FUN_0072a978 @ 0072a978 size=768 calls_out=8 calls_in=34
// strings: 

void FUN_0072a978(int param_1,char *param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
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
  
  local_13c = *(int **)(param_2 + 0x10);
  piVar6 = *(int **)(param_2 + 0x14);
  local_138 = 0;
  local_140 = (int *)0x0;
  local_148 = 0;
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  if (local_13c == (int *)0x0) {
    local_140 = &local_148;
    local_13c = &local_148;
  }
  else {
    local_13c[2] = (int)&local_148;
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac73c);
    }
    piVar6[3] = (int)&local_148;
    local_140 = piVar6;
  }
  local_12c = 0;
  pcVar9 = (char *)(param_1 + 8);
  local_128[0x40] = 0;
  local_134 = &local_148;
  local_130 = param_1;
  do {
    while (piVar6 = local_140, 0x1f < (uint)local_128[0x40]) {
      FUN_01282570(param_2);
      if (*param_2 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(param_2);
          if (bVar2) {
            *param_2 = '\0';
            goto LAB_0072aaf0;
          }
        } while (*param_2 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(param_2);
LAB_0072aaf0:
      iVar7 = local_128[0x40];
      local_128[0x40] = 0;
      piVar6 = local_128;
      for (iVar7 = iVar7 << 3; iVar7 != 0; iVar7 = iVar7 + -8) {
        iVar8 = *piVar6;
        piVar3 = piVar6 + 1;
        piVar6 = piVar6 + 2;
        (**(code **)(iVar8 + 4))(*piVar3);
      }
      if (*pcVar9 == '\0') {
        bVar2 = (bool)hasExclusiveAccess(pcVar9);
        if (!bVar2) goto LAB_0072aa08;
        *pcVar9 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0072aa08:
        FUN_01280da8(pcVar9);
      }
      FUN_0128236c(pcVar9);
      param_2 = pcVar9;
    }
    if (local_140 == (int *)0x0) {
      puVar5 = &DAT_018ac74c;
LAB_0072ac3c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar5);
    }
    if (local_140 == &local_148) {
      local_12c = 1;
      FUN_01282570(param_2);
      if (*param_2 != '\x01') goto LAB_0072ab7c;
      DataMemoryBarrier(0xb);
      break;
    }
    piVar3 = (int *)local_140[2];
    if (piVar3 == (int *)0x0) {
      puVar5 = &DAT_018ac75c;
      goto LAB_0072ac3c;
    }
    piVar3[3] = (int)&local_148;
    iVar7 = *local_140;
    iVar8 = local_140[1];
    piVar1 = local_140 + 2;
    local_140 = piVar3;
    *piVar1 = 0;
    piVar6[3] = 0;
    *piVar6 = 0;
    if (iVar7 != 0) {
      if (0x1f < (uint)local_128[0x40]) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_128[0x40],0x20,&DAT_018ad394);
      }
      local_128[local_128[0x40] * 2] = iVar7;
      local_128[local_128[0x40] * 2 + 1] = iVar8;
      local_128[0x40] = local_128[0x40] + 1;
    }
    if ((char)piVar6[4] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0035e35f,0x26,&DAT_01880ab4);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar6 + 4) = 0;
  } while( true );
  while (*param_2 == '\x01') {
    bVar2 = (bool)hasExclusiveAccess(param_2);
    if (bVar2) {
      *param_2 = '\0';
      goto LAB_0072ab88;
    }
  }
LAB_0072ab7c:
  ClearExclusiveLocal();
  FUN_01280a5c(param_2);
LAB_0072ab88:
  iVar7 = local_128[0x40];
  piVar6 = local_128;
  local_128[0x40] = 0;
  for (iVar8 = 0; iVar7 * 8 != iVar8; iVar8 = iVar8 + 8) {
    iVar4 = *piVar6;
    piVar3 = piVar6 + 1;
    piVar6 = piVar6 + 2;
    (**(code **)(iVar4 + 4))(*piVar3);
  }
  piVar6 = local_128 + 1;
  for (iVar7 = local_128[0x40]; iVar7 != 0; iVar7 = iVar7 + -1) {
    piVar3 = piVar6 + -1;
    iVar8 = *piVar6;
    piVar6 = piVar6 + 2;
    (**(code **)(*piVar3 + 0xc))(iVar8);
  }
  FUN_00fa83fc(&local_134);
  if (local_148 != 0) {
    (**(code **)(local_148 + 0xc))(local_144);
  }
  return;
}

