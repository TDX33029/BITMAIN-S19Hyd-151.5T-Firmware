// FUN_01250834 @ 01250834 size=104 calls_out=1 calls_in=0
// strings: 

int FUN_01250834(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8) * 0x14;
    do {
      iVar1 = FUN_011d018c(iVar3,param_2,param_3,param_4,param_5);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar3 = iVar3 + 0x14;
      iVar2 = iVar2 + -0x14;
    } while (iVar2 != 0);
  }
  return 0;
}

