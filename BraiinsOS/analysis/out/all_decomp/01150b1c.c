// FUN_01150b1c @ 01150b1c size=116 calls_out=3 calls_in=6
// strings: 

void FUN_01150b1c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != 0) {
    iVar3 = 0;
    piVar2 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      bVar1 = *(byte *)(piVar2 + -1);
      iVar3 = iVar3 + 1;
      if (2 < bVar1) {
        if (bVar1 != 3) {
          if (bVar1 != 4) {
            FUN_0114868c(piVar2);
            goto LAB_01150b44;
          }
          FUN_01150b1c(piVar2);
        }
        if (*piVar2 != 0) {
          thunk_FUN_016d3fb4(piVar2[1]);
        }
      }
LAB_01150b44:
      piVar2 = piVar2 + 6;
    } while (iVar4 != iVar3);
  }
  return;
}

