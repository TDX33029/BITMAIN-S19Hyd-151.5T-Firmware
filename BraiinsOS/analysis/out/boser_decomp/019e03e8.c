// FUN_019e03e8 @ 019e03e8 size=720 calls_out=10 calls_in=84
// strings: 

void FUN_019e03e8(uint *param_1)

{
  bool bVar1;
  int iVar2;
  uint ****ppppuVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint ****local_144;
  uint ****local_140;
  int local_13c;
  undefined4 local_138;
  undefined4 local_134;
  uint ****local_130;
  uint *local_12c;
  undefined1 local_128;
  int aiStack_124 [65];
  
  puVar6 = param_1 + 1;
  if ((char)*puVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(puVar6);
    if (bVar1) {
      *(char *)puVar6 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019e0418;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(puVar6);
LAB_019e0418:
  FUN_0165098c(puVar6);
  DataMemoryBarrier(0xb);
  if ((*param_1 & 1) == 0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = *param_1 + 4;
    DataMemoryBarrier(0xb);
    FUN_01650a90(puVar6);
    if ((char)*puVar6 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar6);
        if (bVar1) {
          *(char *)puVar6 = '\0';
          return;
        }
      } while ((char)*puVar6 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(puVar6);
    return;
  }
  DataMemoryBarrier(0xb);
  *param_1 = (*param_1 & 0xfffffffc) + 4;
  DataMemoryBarrier(0xb);
  local_140 = (uint ****)param_1[2];
  ppppuVar3 = (uint ****)param_1[3];
  local_134 = 0;
  local_13c = 0;
  local_144 = (uint ****)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (local_140 == (uint ****)0x0) {
    local_144 = (uint ****)&local_144;
    local_140 = (uint ****)&local_144;
  }
  else {
    *local_140 = (uint ***)&local_144;
    if (ppppuVar3 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2b718);
    }
    ppppuVar3[1] = (uint ***)&local_144;
    local_144 = ppppuVar3;
  }
  local_128 = 0;
  aiStack_124[0x40] = 0;
  local_130 = (uint ****)&local_144;
  local_12c = param_1;
  do {
    while (0x1f < (uint)aiStack_124[0x40]) {
      FUN_01650a90(puVar6);
      if ((char)*puVar6 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar6);
          if (bVar1) {
            *(char *)puVar6 = '\0';
            goto LAB_019e05b4;
          }
        } while ((char)*puVar6 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(puVar6);
LAB_019e05b4:
      FUN_019d83c4(aiStack_124);
      if ((char)*puVar6 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(puVar6);
        if (!bVar1) goto LAB_019e05dc;
        *(char *)puVar6 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_019e05dc:
        FUN_0164fba8(puVar6);
      }
      FUN_0165098c(puVar6);
    }
    iVar2 = FUN_019dfed4(&local_144);
    if (iVar2 == 0) break;
    iVar4 = *(int *)(iVar2 + 8);
    iVar5 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 8) = 0;
    if (iVar4 != 0) {
      if (0x1f < (uint)aiStack_124[0x40]) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(aiStack_124[0x40],0x20,&DAT_01d28cc4);
      }
      aiStack_124[aiStack_124[0x40] * 2] = iVar4;
      aiStack_124[aiStack_124[0x40] * 2 + 1] = iVar5;
      aiStack_124[0x40] = aiStack_124[0x40] + 1;
    }
    DataMemoryBarrier(0xb);
    *(undefined4 *)(iVar2 + 0x10) = 2;
  } while( true );
  local_128 = 1;
  FUN_01650a90(puVar6);
  if ((char)*puVar6 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar6);
      if (bVar1) {
        *(char *)puVar6 = '\0';
        goto LAB_019e0644;
      }
    } while ((char)*puVar6 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(puVar6);
LAB_019e0644:
  FUN_019d83c4(aiStack_124);
  FUN_019d8434(aiStack_124,aiStack_124[0x40]);
  FUN_019dfdfc(&local_130);
  if (local_13c != 0) {
    (**(code **)(local_13c + 0xc))(local_138);
  }
  return;
}

