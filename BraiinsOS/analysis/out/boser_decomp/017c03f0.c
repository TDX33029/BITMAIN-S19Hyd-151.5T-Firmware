// FUN_017c03f0 @ 017c03f0 size=36 calls_out=0 calls_in=2
// strings: 

void FUN_017c03f0(int *param_1)

{
  int *piVar1;
  code *pcVar2;
  int unaff_r4;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    bVar5 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r4 = param_1[4];
      bVar5 = unaff_r4 == 0;
    }
    if (!bVar5) {
      puVar4 = (undefined4 *)param_1[5];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(unaff_r4);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_01be4678(unaff_r4);
        return;
      }
    }
    return;
  }
  if ((char)param_1[6] == '\x03') {
    return;
  }
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    FUN_01771f3c(iVar3);
    FUN_01771fbc(iVar3 + 0x10);
    thunk_FUN_01be4678(iVar3);
  }
  FUN_017720fc(param_1 + 4);
  piVar1 = (int *)param_1[3];
  if (piVar1 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar1;
    bVar5 = (bool)hasExclusiveAccess(piVar1);
  } while (!bVar5);
  *piVar1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01436864(param_1[3]);
    return;
  }
  return;
}

