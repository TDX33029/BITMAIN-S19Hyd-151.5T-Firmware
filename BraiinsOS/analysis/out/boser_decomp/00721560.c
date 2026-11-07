// FUN_00721560 @ 00721560 size=80 calls_out=2 calls_in=2
// strings: 

void FUN_00721560(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar2 + 4);
    do {
      if (*piVar1 != 0) {
        thunk_FUN_01be4678(piVar1[-1]);
      }
      piVar1 = piVar1 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0134c054(*param_1,iVar2,8,0x18);
  return;
}

