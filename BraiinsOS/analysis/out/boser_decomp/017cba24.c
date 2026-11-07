// FUN_017cba24 @ 017cba24 size=72 calls_out=4 calls_in=3
// strings: 

void FUN_017cba24(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    FUN_0177a2a4();
    return;
  }
  if (*param_1 == 1) {
    iVar1 = param_1[1];
    FUN_017cbab8(iVar1);
  }
  else {
    iVar1 = param_1[1];
    FUN_017cba84(iVar1);
  }
  thunk_FUN_01be4678(iVar1);
  return;
}

