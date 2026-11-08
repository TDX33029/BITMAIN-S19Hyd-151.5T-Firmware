// FUN_019ddb6c @ 019ddb6c size=104 calls_out=3 calls_in=0
// strings: 

void FUN_019ddb6c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 8);
  FUN_019ddf10(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db128(*piVar4);
    }
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_012d40d0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}

