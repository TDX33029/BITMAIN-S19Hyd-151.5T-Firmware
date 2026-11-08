// FUN_017db4ac @ 017db4ac size=72 calls_out=2 calls_in=3
// strings: 

void FUN_017db4ac(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    FUN_017db5e8(param_1 + 0x46);
    FUN_017db510(param_1);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  FUN_017db5e8(param_1 + 2);
  FUN_0187266c((char)param_1[0x4e],param_1[0x4f]);
  return;
}

