// FUN_01b07f68 @ 01b07f68 size=184 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_01b07f68(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar1 = FUN_01b2b3b0(**(undefined4 **)(param_2 + 8));
  if (iVar1 != 0) {
    FUN_01b1f904(*piVar2);
    *piVar2 = iVar1;
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = FUN_01b2b3b0(*(undefined4 *)(*(int *)(param_2 + 8) + 4));
    if (iVar1 != 0) {
      FUN_01b1f904(*(undefined4 *)(iVar3 + 4));
      *(int *)(iVar3 + 4) = iVar1;
      iVar3 = *(int *)(param_1 + 8);
      iVar1 = FUN_01b2b3b0(*(undefined4 *)(*(int *)(param_2 + 8) + 8));
      if (iVar1 != 0) {
        FUN_01b1f904(*(undefined4 *)(iVar3 + 8));
        *(int *)(iVar3 + 8) = iVar1;
        return 1;
      }
    }
  }
  return 0;
}

