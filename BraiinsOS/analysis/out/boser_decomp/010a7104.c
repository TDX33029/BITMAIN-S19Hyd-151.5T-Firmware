// FUN_010a7104 @ 010a7104 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_010a7104(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*param_1);
  }
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    puVar5 = (undefined4 *)param_1[3];
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar3);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar3);
      return;
    }
  }
  return;
}

