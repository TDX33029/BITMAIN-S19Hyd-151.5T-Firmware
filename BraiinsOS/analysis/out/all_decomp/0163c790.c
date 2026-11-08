// FUN_0163c790 @ 0163c790 size=300 calls_out=5 calls_in=116
// strings: 

void FUN_0163c790(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(char *)(param_1 + 7) != '\x01') {
    return;
  }
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar3);
    if (!bVar1) goto LAB_0163c8b0;
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0163c8b0:
    FUN_01280da8(pcVar3);
  }
  FUN_0128236c(pcVar3);
  if (param_1[3] == 0) {
    if (*(undefined4 **)(pcVar3 + 4) != param_1 + 1) goto LAB_0163c830;
    iVar2 = param_1[4];
    *(int *)(pcVar3 + 4) = iVar2;
    if (iVar2 == 0) goto LAB_0163c824;
LAB_0163c7f0:
    *(undefined4 *)(iVar2 + 8) = param_1[3];
  }
  else {
    iVar2 = param_1[4];
    *(int *)(param_1[3] + 0xc) = iVar2;
    if (iVar2 != 0) goto LAB_0163c7f0;
LAB_0163c824:
    if (*(undefined4 **)(pcVar3 + 8) != param_1 + 1) goto LAB_0163c830;
    *(undefined4 *)(pcVar3 + 8) = param_1[3];
  }
  param_1[3] = 0;
  param_1[4] = 0;
LAB_0163c830:
  DataMemoryBarrier(0xb);
  if (param_1[6] != param_1[5]) {
    FUN_0163af68(*param_1,param_1[6] - param_1[5],pcVar3);
    return;
  }
  FUN_01282570(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar1) {
        *pcVar3 = '\0';
        return;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar3);
  return;
}

