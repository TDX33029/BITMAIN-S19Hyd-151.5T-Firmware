// FUN_01630f00 @ 01630f00 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_01630f00(int *param_1)

{
  int iVar1;
  
  if (*param_1 == -0x80000000) {
    iVar1 = param_1[2];
    FUN_01631a4c(iVar1,param_1[3]);
    FUN_0134aee0(param_1[1],iVar1,4,0x10);
    return;
  }
  FUN_0134bd64(*param_1,param_1[1]);
  return;
}

