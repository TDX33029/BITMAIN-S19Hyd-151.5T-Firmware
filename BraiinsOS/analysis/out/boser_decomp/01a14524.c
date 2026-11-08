// FUN_01a14524 @ 01a14524 size=588 calls_out=12 calls_in=14
// strings: assertion failed: queued.load(Relaxed)

void FUN_01a14524(int param_1,char *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_148;
  undefined4 local_144;
  int *local_140;
  int *local_13c;
  int *local_130;
  int local_12c;
  undefined1 local_128;
  int aiStack_124 [65];
  
  FUN_01bed93e(&local_148,0,0x11);
  local_13c = *(int **)(param_2 + 0x10);
  local_140 = *(int **)(param_2 + 0x14);
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
    if (local_140 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2b718);
    }
    local_140[3] = (int)&local_148;
  }
  pcVar5 = (char *)(param_1 + 8);
  local_128 = 0;
  aiStack_124[0x40] = 0;
  local_130 = &local_148;
  local_12c = param_1;
  do {
    while (0x1f < (uint)aiStack_124[0x40]) {
      FUN_01650a90(param_2);
      if (*param_2 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(param_2);
          if (bVar1) {
            *param_2 = '\0';
            goto LAB_01a1465c;
          }
        } while (*param_2 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(param_2);
LAB_01a1465c:
      FUN_019d83c4(aiStack_124);
      if (*pcVar5 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(pcVar5);
        if (!bVar1) goto LAB_01a14684;
        *pcVar5 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_01a14684:
        FUN_0164fba8(pcVar5);
      }
      FUN_0165098c(pcVar5);
      param_2 = pcVar5;
    }
    piVar2 = (int *)FUN_012ccb24(&local_148);
    if (piVar2 == (int *)0x0) {
      local_128 = 1;
      FUN_01650a90(param_2);
      if (*param_2 != '\x01') goto LAB_01a146e8;
      DataMemoryBarrier(0xb);
      break;
    }
    iVar3 = *piVar2;
    iVar4 = piVar2[1];
    *piVar2 = 0;
    if (iVar3 != 0) {
      if (0x1f < (uint)aiStack_124[0x40]) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(aiStack_124[0x40],0x20,&DAT_01d28cc4);
      }
      aiStack_124[aiStack_124[0x40] * 2] = iVar3;
      aiStack_124[aiStack_124[0x40] * 2 + 1] = iVar4;
      aiStack_124[0x40] = aiStack_124[0x40] + 1;
    }
    if ((char)piVar2[4] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: queued.load(Relaxed)",0x26,&DAT_01d2a540);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 4) = 0;
  } while( true );
  while (*param_2 == '\x01') {
    bVar1 = (bool)hasExclusiveAccess(param_2);
    if (bVar1) {
      *param_2 = '\0';
      goto LAB_01a146f4;
    }
  }
LAB_01a146e8:
  ClearExclusiveLocal();
  FUN_0164f86c(param_2);
LAB_01a146f4:
  FUN_019d83c4(aiStack_124);
  FUN_019d8434(aiStack_124,aiStack_124[0x40]);
  FUN_01a147fc(&local_130);
  if (local_148 != 0) {
    (**(code **)(local_148 + 0xc))(local_144);
  }
  return;
}

