// FUN_01646818 @ 01646818 size=268 calls_out=4 calls_in=6
// strings: 

void FUN_01646818(char *param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01646840;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(param_1);
LAB_01646840:
  FUN_0128236c(param_1);
  puVar2 = (uint *)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1;
  piVar3 = *(int **)(param_1 + 8);
  param_1[0xc] = '\x01';
  while (piVar3 != (int *)0x0) {
    iVar4 = piVar3[2];
    *(int *)(param_1 + 8) = iVar4;
    if (iVar4 == 0) {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
    }
    else {
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
    iVar4 = *piVar3;
    piVar3[2] = 0;
    piVar3[3] = 0;
    *piVar3 = 0;
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 4))(piVar3[1]);
    }
    piVar3 = *(int **)(param_1 + 8);
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

