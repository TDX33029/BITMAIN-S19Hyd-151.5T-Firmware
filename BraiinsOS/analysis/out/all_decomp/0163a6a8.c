// FUN_0163a6a8 @ 0163a6a8 size=288 calls_out=5 calls_in=2
// strings: assertion failed: prev.ref_count() >= 1

void FUN_0163a6a8(int param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(param_1 + 0x94);
  if (*pcVar5 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar1) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0163a6e4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar5);
LAB_0163a6e4:
  FUN_0128236c(pcVar5);
  if (*(char *)(param_1 + 0xac) == '\0') {
    iVar4 = *(int *)(param_1 + 0xa8);
    iVar3 = *(int *)(param_1 + 0x90);
    *(uint **)(param_1 + 0xa8) = param_2;
    if (iVar4 == 0) {
      *(uint **)(param_1 + 0xa4) = param_2;
    }
    else {
      *(uint **)(iVar4 + 4) = param_2;
    }
    DataMemoryBarrier(0xb);
    *(int *)(param_1 + 0x90) = iVar3 + 1;
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = uVar2 - 0x40;
    DataMemoryBarrier(0xb);
    if (uVar2 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
    }
    if ((uVar2 & 0xffffffc0) == 0x40) {
      (**(code **)(param_2[2] + 8))(param_2);
    }
  }
  FUN_01282570(pcVar5);
  if (*pcVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar1) {
        *pcVar5 = '\0';
        return;
      }
    } while (*pcVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar5);
  return;
}

