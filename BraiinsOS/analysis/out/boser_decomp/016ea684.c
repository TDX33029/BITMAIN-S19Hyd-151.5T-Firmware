// FUN_016ea684 @ 016ea684 size=80 calls_out=1 calls_in=1
// strings: 

void FUN_016ea684(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piStack_18;
  code *pcStack_14;
  
  if (*param_2 != 9) {
    pcStack_14 = FUN_016ea744;
    piStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0058d21c,&piStack_18,&DAT_01d0a4a8);
  }
  iVar1 = param_2[2];
  iVar2 = param_2[3];
  iVar3 = param_2[4];
  *param_1 = param_2[1];
  param_1[1] = iVar1;
  param_1[2] = iVar2;
  param_1[3] = iVar3;
  return;
}

