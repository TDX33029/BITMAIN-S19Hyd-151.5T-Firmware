// FUN_01a17ec4 @ 01a17ec4 size=680 calls_out=12 calls_in=4
// strings: assertion failed: queued.load(Relaxed)

void FUN_01a17ec4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int local_148;
  undefined4 local_144;
  undefined1 *local_140;
  undefined1 *local_13c;
  undefined1 *local_130;
  int local_12c;
  undefined1 local_128;
  int aiStack_124 [65];
  
  piVar3 = (int *)(param_1 + 0x44);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 != 1) {
    return;
  }
  pcVar5 = (char *)(param_1 + 0x10);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar1) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01a17f1c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar5);
LAB_01a17f1c:
  FUN_0165098c(pcVar5);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  FUN_01bed93e(&local_148,0,0x11);
  local_13c = *(undefined1 **)(param_1 + 0x20);
  local_140 = *(undefined1 **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (local_13c == (undefined1 *)0x0) {
    local_140 = (undefined1 *)&local_148;
    local_13c = (undefined1 *)&local_148;
  }
  else {
    *(int **)(local_13c + 8) = &local_148;
    if (local_140 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2b718);
    }
    *(int **)(local_140 + 0xc) = &local_148;
  }
  local_12c = param_1 + 8;
  local_128 = 0;
  aiStack_124[0x40] = 0;
  local_130 = (undefined1 *)&local_148;
  do {
    while (0x1f < (uint)aiStack_124[0x40]) {
      FUN_01650a90(pcVar5);
      if (*pcVar5 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar5);
          if (bVar1) {
            *pcVar5 = '\0';
            goto LAB_01a18050;
          }
        } while (*pcVar5 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar5);
LAB_01a18050:
      FUN_019d83c4(aiStack_124);
      if (*pcVar5 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(pcVar5);
        if (!bVar1) goto LAB_01a18078;
        *pcVar5 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_01a18078:
        FUN_0164fba8(pcVar5);
      }
      FUN_0165098c(pcVar5);
    }
    piVar3 = (int *)FUN_012ccb24(&local_148);
    if (piVar3 == (int *)0x0) {
      local_128 = 1;
      FUN_01650a90(pcVar5);
      if (*pcVar5 != '\x01') goto LAB_01a180d4;
      DataMemoryBarrier(0xb);
      break;
    }
    iVar2 = *piVar3;
    iVar4 = piVar3[1];
    *piVar3 = 0;
    if (iVar2 != 0) {
      if (0x1f < (uint)aiStack_124[0x40]) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(aiStack_124[0x40],0x20,&DAT_01d28cc4);
      }
      aiStack_124[aiStack_124[0x40] * 2] = iVar2;
      aiStack_124[aiStack_124[0x40] * 2 + 1] = iVar4;
      aiStack_124[0x40] = aiStack_124[0x40] + 1;
    }
    if ((char)piVar3[4] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: queued.load(Relaxed)",0x26,&DAT_01d2a540);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar3 + 4) = 0;
  } while( true );
  while (*pcVar5 == '\x01') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar1) {
      *pcVar5 = '\0';
      goto LAB_01a180e0;
    }
  }
LAB_01a180d4:
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar5);
LAB_01a180e0:
  FUN_019d83c4(aiStack_124);
  FUN_019d8434(aiStack_124,aiStack_124[0x40]);
  FUN_01a147fc(&local_130);
  if (local_148 != 0) {
    (**(code **)(local_148 + 0xc))(local_144);
  }
  return;
}

