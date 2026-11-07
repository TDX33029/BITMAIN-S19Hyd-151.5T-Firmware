// FUN_0155e4c8 @ 0155e4c8 size=104 calls_out=1 calls_in=0
// strings: 

int FUN_0155e4c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8) * 0x14;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_015776f4(iVar3,param_2,param_3,param_4,param_5);
    iVar2 = iVar2 + -0x14;
    iVar3 = iVar3 + 0x14;
  } while (iVar1 == 0);
  return iVar1;
}

