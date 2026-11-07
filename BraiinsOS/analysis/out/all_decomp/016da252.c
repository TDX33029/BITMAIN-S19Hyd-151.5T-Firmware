// FUN_016da252 @ 016da252 size=56 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016da252(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((int)(param_2 | param_3) < 0) {
    return 9;
  }
  piVar1 = (int *)thunk_FUN_016d4a50(0x1c);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xc;
  }
  else {
    piVar1[4] = param_2;
    piVar1[2] = 2;
    piVar1[3] = param_3;
    iVar3 = *(int *)(param_1 + 8);
    *piVar1 = iVar3;
    if (iVar3 != 0) {
      *(int **)(iVar3 + 4) = piVar1;
    }
    uVar2 = 0;
    piVar1[1] = 0;
    *(int **)(param_1 + 8) = piVar1;
  }
  return uVar2;
}

