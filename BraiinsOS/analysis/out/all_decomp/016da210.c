// FUN_016da210 @ 016da210 size=66 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_016da210(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_016dd8a2(param_2);
  piVar2 = (int *)thunk_FUN_016d4a50(iVar1 + 0x1d);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xc;
  }
  else {
    piVar2[2] = 4;
    piVar2[3] = -1;
    FUN_016dd832(piVar2 + 7,param_2);
    iVar1 = *(int *)(param_1 + 8);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      *(int **)(iVar1 + 4) = piVar2;
    }
    *(int **)(param_1 + 8) = piVar2;
    uVar3 = 0;
    piVar2[1] = 0;
  }
  return uVar3;
}

