// FUN_009be4c0 @ 009be4c0 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_009be4c0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar2 = *(int **)(param_1 + iVar3);
    if (piVar2 != (int *)0x0) {
      if (((uint)piVar2 & 1) == 0) {
        FUN_009a1ddc(piVar2[1],piVar2[2]);
        if (*piVar2 != 0) {
          thunk_FUN_016d3fb4(piVar2[1]);
        }
        thunk_FUN_016d3fb4(piVar2);
      }
      else {
        iVar1 = param_2[2];
        if (iVar1 == *param_2) {
          FUN_009b6bc0(param_2);
        }
        *(uint *)(param_2[1] + iVar1 * 4) = (uint)piVar2 & 0xfffffffe;
        param_2[2] = iVar1 + 1;
      }
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != 0x400);
  return;
}

