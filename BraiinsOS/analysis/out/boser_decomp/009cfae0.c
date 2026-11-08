// FUN_009cfae0 @ 009cfae0 size=112 calls_out=0 calls_in=3
// strings: 

int FUN_009cfae0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0xe8);
  iVar2 = *(int *)(param_2 + 0xe0);
  iVar1 = *(int *)(param_2 + 0xe4);
  *(int *)(param_2 + 0xe0) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0xe4) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_009cfb3c;
    }
LAB_009cfb30:
    *(int *)(iVar1 + 0xe0) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0xe4) = iVar1;
    if (iVar1 != 0) goto LAB_009cfb30;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0xe8) = iVar4 + -1;
LAB_009cfb3c:
  return param_2 + -8;
}

