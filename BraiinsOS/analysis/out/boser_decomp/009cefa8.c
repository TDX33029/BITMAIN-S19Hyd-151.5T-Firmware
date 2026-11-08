// FUN_009cefa8 @ 009cefa8 size=112 calls_out=0 calls_in=2
// strings: 

int FUN_009cefa8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x168);
  iVar2 = *(int *)(param_2 + 0x160);
  iVar1 = *(int *)(param_2 + 0x164);
  *(int *)(param_2 + 0x160) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0x164) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_009cf004;
    }
LAB_009ceff8:
    *(int *)(iVar1 + 0x160) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0x164) = iVar1;
    if (iVar1 != 0) goto LAB_009ceff8;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x168) = iVar4 + -1;
LAB_009cf004:
  return param_2 + -8;
}

