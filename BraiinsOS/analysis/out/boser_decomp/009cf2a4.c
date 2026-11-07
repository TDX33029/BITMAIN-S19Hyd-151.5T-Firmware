// FUN_009cf2a4 @ 009cf2a4 size=112 calls_out=0 calls_in=2
// strings: 

int FUN_009cf2a4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x80);
  iVar2 = *(int *)(param_2 + 0x78);
  iVar1 = *(int *)(param_2 + 0x7c);
  *(int *)(param_2 + 0x78) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_009cf300;
    }
LAB_009cf2f4:
    *(int *)(iVar1 + 0x78) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0x7c) = iVar1;
    if (iVar1 != 0) goto LAB_009cf2f4;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x80) = iVar4 + -1;
LAB_009cf300:
  return param_2 + -8;
}

