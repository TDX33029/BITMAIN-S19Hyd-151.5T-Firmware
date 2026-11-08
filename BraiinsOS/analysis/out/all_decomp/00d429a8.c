// FUN_00d429a8 @ 00d429a8 size=100 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00d429a8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  uVar1 = 3;
  if (*piVar3 != 2 || piVar3[1] != 0) {
    iVar2 = FUN_01657fc4(piVar3,*param_2);
    if (iVar2 != 0) {
      return 2;
    }
    if (*piVar3 != 2 || piVar3[1] != 0) {
      FUN_00a07b4c(piVar3);
    }
    *piVar3 = 2;
    piVar3[1] = 0;
    uVar1 = 1;
  }
  return uVar1;
}

