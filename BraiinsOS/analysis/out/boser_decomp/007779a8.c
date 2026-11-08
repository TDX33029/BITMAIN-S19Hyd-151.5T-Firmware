// FUN_007779a8 @ 007779a8 size=112 calls_out=0 calls_in=2
// strings: 

int FUN_007779a8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x100);
  iVar2 = *(int *)(param_2 + 0xf8);
  iVar1 = *(int *)(param_2 + 0xfc);
  *(int *)(param_2 + 0xf8) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0xfc) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_00777a04;
    }
LAB_007779f8:
    *(int *)(iVar1 + 0xf8) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0xfc) = iVar1;
    if (iVar1 != 0) goto LAB_007779f8;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x100) = iVar4 + -1;
LAB_00777a04:
  return param_2 + -8;
}

