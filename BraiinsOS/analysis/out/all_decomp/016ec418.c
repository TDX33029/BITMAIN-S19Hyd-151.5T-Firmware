// FUN_016ec418 @ 016ec418 size=212 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_016ec418(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar1 = FUN_0171485c(**(undefined4 **)(param_2 + 8));
  if (iVar1 != 0) {
    FUN_017046e0(*piVar2);
    *piVar2 = iVar1;
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = FUN_0171485c(*(undefined4 *)(*(int *)(param_2 + 8) + 4));
    if (iVar1 != 0) {
      FUN_017046e0(*(undefined4 *)(iVar3 + 4));
      *(int *)(iVar3 + 4) = iVar1;
      iVar3 = *(int *)(param_1 + 8);
      iVar1 = FUN_0171485c(*(undefined4 *)(*(int *)(param_2 + 8) + 8));
      if (iVar1 != 0) {
        FUN_017046e0(*(undefined4 *)(iVar3 + 8));
        *(int *)(iVar3 + 8) = iVar1;
        return 1;
      }
    }
  }
  return 0;
}

