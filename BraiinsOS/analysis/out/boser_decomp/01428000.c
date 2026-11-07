// FUN_01428000 @ 01428000 size=100 calls_out=2 calls_in=15
// strings: 

void FUN_01428000(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 != (int *)0x0) {
    do {
      piVar4 = (int *)*param_1;
      piVar2 = (int *)param_1[1];
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_014210d0(param_1[1]);
        }
      }
      thunk_FUN_01be4678(param_1);
      param_1 = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  return;
}

