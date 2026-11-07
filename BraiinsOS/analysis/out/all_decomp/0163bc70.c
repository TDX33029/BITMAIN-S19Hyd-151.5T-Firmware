// FUN_0163bc70 @ 0163bc70 size=284 calls_out=5 calls_in=1
// strings: assertion failed: prev.ref_count() >= 1

void FUN_0163bc70(char *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0163bca8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(param_1);
LAB_0163bca8:
  FUN_0128236c(param_1);
  if (param_1[0xc] == '\0') {
    iVar4 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0x10);
    *(uint **)(param_1 + 8) = param_2;
    if (iVar4 == 0) {
      *(uint **)(param_1 + 4) = param_2;
    }
    else {
      *(uint **)(iVar4 + 4) = param_2;
    }
    DataMemoryBarrier(0xb);
    *(int *)(param_1 + 0x10) = iVar3 + 1;
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
  FUN_01282570(param_1);
  if (*param_1 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = '\0';
        return;
      }
    } while (*param_1 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(param_1);
  return;
}

