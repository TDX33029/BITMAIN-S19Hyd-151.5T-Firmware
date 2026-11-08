// FUN_009cfc1c @ 009cfc1c size=112 calls_out=0 calls_in=3
// strings: 

int FUN_009cfc1c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x1d0);
  iVar2 = *(int *)(param_2 + 0x1c8);
  iVar1 = *(int *)(param_2 + 0x1cc);
  *(int *)(param_2 + 0x1c8) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0x1cc) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_009cfc78;
    }
LAB_009cfc6c:
    *(int *)(iVar1 + 0x1c8) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0x1cc) = iVar1;
    if (iVar1 != 0) goto LAB_009cfc6c;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x1d0) = iVar4 + -1;
LAB_009cfc78:
  return param_2 + -8;
}

