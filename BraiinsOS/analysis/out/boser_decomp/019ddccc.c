// FUN_019ddccc @ 019ddccc size=136 calls_out=4 calls_in=1
// strings: 

void FUN_019ddccc(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar4 = param_1 + 3;
  FUN_019b3d30(piVar4);
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
      FUN_019b3e50(piVar4);
    }
  }
  uVar5 = param_1[1];
  FUN_014fe9f8(uVar5,param_1[2]);
  FUN_0134c054(*param_1,uVar5,4,8);
  return;
}

