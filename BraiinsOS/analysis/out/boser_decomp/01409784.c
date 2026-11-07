// FUN_01409784 @ 01409784 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_01409784(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_108 [232];
  
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < param_3) {
    FUN_01af7b44(param_1,iVar2,param_3,4,0xe8);
    iVar2 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_014097f4;
  iVar1 = iVar2 * 0xe8 + param_1[1];
  do {
    FUN_01401ab8(auStack_108,param_2);
    FUN_01bed4e2(iVar1,auStack_108,0xe8);
    param_2 = param_2 + 0xe8;
    iVar1 = iVar1 + 0xe8;
    iVar2 = iVar2 + 1;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
LAB_014097f4:
  param_1[2] = iVar2;
  return;
}

