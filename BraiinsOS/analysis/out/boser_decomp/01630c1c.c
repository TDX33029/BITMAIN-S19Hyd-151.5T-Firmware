// FUN_01630c1c @ 01630c1c size=88 calls_out=3 calls_in=1
// strings: 

void FUN_01630c1c(int *param_1)

{
  int iVar1;
  
  if (*param_1 - 2U < 6) {
    return;
  }
  if (*param_1 == 0) {
    iVar1 = param_1[2];
    FUN_01630c74(iVar1,param_1[3]);
    FUN_0134aee0(param_1[1],iVar1,8,0x10);
    return;
  }
  FUN_0134bd64(param_1[1],param_1[2]);
  return;
}

