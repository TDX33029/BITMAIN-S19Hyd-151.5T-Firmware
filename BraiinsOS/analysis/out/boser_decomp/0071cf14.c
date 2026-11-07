// FUN_0071cf14 @ 0071cf14 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_0071cf14(int param_1)

{
  bool bVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint local_40 [3];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [2];
  int local_14;
  
  piVar3 = *(int **)(param_1 + 0x68);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0071ce80();
    }
  }
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar4 == 0) {
    local_20 = 0;
  }
  else {
    local_34 = *(undefined4 *)(param_1 + 0x70);
    local_20 = *(undefined4 *)(param_1 + 0x74);
    local_2c = 0;
    local_40[1] = 0;
    local_40[2] = iVar4;
    local_28 = iVar4;
    local_24 = local_34;
  }
  local_40[0] = (uint)(iVar4 != 0);
  local_30 = local_40[0];
  while (FUN_00724dd8(local_1c,local_40), local_1c[0] != 0) {
    pcVar2 = (char *)(local_1c[0] + local_14 * 0x10);
    if (*pcVar2 == 'O') {
      piVar3 = *(int **)(pcVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0071cf74(*(undefined4 *)(pcVar2 + 4));
      }
    }
  }
  return;
}

