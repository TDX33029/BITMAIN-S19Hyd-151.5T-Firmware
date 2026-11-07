// FUN_014323b0 @ 014323b0 size=120 calls_out=2 calls_in=37
// strings: 

void FUN_014323b0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    puVar5 = (undefined4 *)param_1[1];
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(iVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar4);
    }
  }
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[2]);
    return;
  }
  return;
}

