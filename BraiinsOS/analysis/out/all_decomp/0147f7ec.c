// FUN_0147f7ec @ 0147f7ec size=84 calls_out=2 calls_in=2
// strings: Ready polled after completion

void FUN_0147f7ec(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *param_2 = 4;
  param_2[1] = 0;
  if (iVar1 == 4 && iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Ready polled after completion",0x1d,&DAT_018a4fc0);
  }
  FUN_016dd1aa(param_1 + 2,param_2 + 2,0x60);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return;
}

