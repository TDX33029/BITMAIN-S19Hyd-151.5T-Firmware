// FUN_0163b708 @ 0163b708 size=924 calls_out=7 calls_in=163
// strings: 

void FUN_0163b708(uint *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 ****ppppuVar6;
  undefined4 ***pppuVar7;
  undefined4 ***pppuVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 ****local_148;
  undefined4 ****local_144;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 ****local_134;
  uint *local_130;
  undefined1 local_12c;
  int local_128 [65];
  
  puVar9 = param_1 + 1;
  if ((char)*puVar9 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(puVar9);
    if (bVar2) {
      *(char *)puVar9 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0163b738;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(puVar9);
LAB_0163b738:
  FUN_0128236c(puVar9);
  DataMemoryBarrier(0xb);
  if ((*param_1 & 1) == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = *param_1 + 4;
    DataMemoryBarrier(0xb);
    FUN_01282570(puVar9);
    if ((char)*puVar9 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar9);
        if (bVar2) {
          *(char *)puVar9 = '\0';
          return;
        }
      } while ((char)*puVar9 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(puVar9);
    return;
  }
  DataMemoryBarrier(0xb);
  *param_1 = (*param_1 & 0xfffffffc) + 4;
  DataMemoryBarrier(0xb);
  local_144 = (undefined4 ****)param_1[2];
  ppppuVar6 = (undefined4 ****)param_1[3];
  local_138 = 0;
  local_140 = 0;
  local_148 = (undefined4 ****)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (local_144 == (undefined4 ****)0x0) {
    local_148 = &local_148;
    local_144 = &local_148;
  }
  else {
    *local_144 = &local_148;
    if (ppppuVar6 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac73c);
    }
    ppppuVar6[1] = &local_148;
    local_148 = ppppuVar6;
  }
  local_12c = 0;
  local_128[0x40] = 0;
  local_134 = &local_148;
  local_130 = param_1;
  do {
    while (ppppuVar6 = local_148, 0x1f < (uint)local_128[0x40]) {
      FUN_01282570(puVar9);
      if ((char)*puVar9 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(puVar9);
          if (bVar2) {
            *(char *)puVar9 = '\0';
            goto LAB_0163b8f0;
          }
        } while ((char)*puVar9 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(puVar9);
LAB_0163b8f0:
      iVar11 = local_128[0x40];
      local_128[0x40] = 0;
      piVar12 = local_128;
      for (iVar11 = iVar11 << 3; iVar11 != 0; iVar11 = iVar11 + -8) {
        iVar10 = *piVar12;
        piVar1 = piVar12 + 1;
        piVar12 = piVar12 + 2;
        (**(code **)(iVar10 + 4))(*piVar1);
      }
      if ((char)*puVar9 == '\0') {
        bVar2 = (bool)hasExclusiveAccess(puVar9);
        if (!bVar2) goto LAB_0163b94c;
        *(char *)puVar9 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0163b94c:
        FUN_01280da8(puVar9);
      }
      FUN_0128236c(puVar9);
    }
    if (local_148 == (undefined4 ****)0x0) {
      puVar5 = &DAT_018ac74c;
      goto LAB_0163ba78;
    }
    if ((undefined4 *****)local_148 == &local_148) {
      local_12c = 1;
      FUN_01282570(puVar9);
      if ((char)*puVar9 != '\x01') goto LAB_0163b9a8;
      DataMemoryBarrier(0xb);
      break;
    }
    ppppuVar3 = (undefined4 ****)*local_148;
    if (ppppuVar3 == (undefined4 ****)0x0) {
      puVar5 = &DAT_018ac75c;
LAB_0163ba78:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar5);
    }
    ppppuVar3[1] = &local_148;
    pppuVar7 = local_148[2];
    pppuVar8 = local_148[3];
    local_148[1] = (undefined4 ***)0x0;
    *local_148 = (undefined4 ***)0x0;
    local_148 = ppppuVar3;
    ppppuVar6[2] = (undefined4 ***)0x0;
    if (pppuVar7 != (undefined4 ***)0x0) {
      if (0x1f < (uint)local_128[0x40]) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_128[0x40],0x20,&DAT_018ad394);
      }
      local_128[local_128[0x40] * 2] = (int)pppuVar7;
      local_128[local_128[0x40] * 2 + 1] = (int)pppuVar8;
      local_128[0x40] = local_128[0x40] + 1;
    }
    DataMemoryBarrier(0xb);
    ppppuVar6[4] = (undefined4 ***)0x2;
  } while( true );
  while ((char)*puVar9 == '\x01') {
    bVar2 = (bool)hasExclusiveAccess(puVar9);
    if (bVar2) {
      *(char *)puVar9 = '\0';
      goto LAB_0163b9b4;
    }
  }
LAB_0163b9a8:
  ClearExclusiveLocal();
  FUN_01280a5c(puVar9);
LAB_0163b9b4:
  iVar11 = local_128[0x40];
  piVar12 = local_128;
  local_128[0x40] = 0;
  for (iVar10 = 0; iVar11 * 8 != iVar10; iVar10 = iVar10 + 8) {
    iVar4 = *piVar12;
    piVar1 = piVar12 + 1;
    piVar12 = piVar12 + 2;
    (**(code **)(iVar4 + 4))(*piVar1);
  }
  piVar12 = local_128 + 1;
  for (iVar11 = local_128[0x40]; iVar11 != 0; iVar11 = iVar11 + -1) {
    piVar1 = piVar12 + -1;
    iVar10 = *piVar12;
    piVar12 = piVar12 + 2;
    (**(code **)(*piVar1 + 0xc))(iVar10);
  }
  FUN_0163b3c8(&local_134);
  if (local_140 != 0) {
    (**(code **)(local_140 + 0xc))(local_13c);
  }
  return;
}

