// FUN_007aa3ac @ 007aa3ac size=84 calls_out=2 calls_in=2
// strings: 

void FUN_007aa3ac(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int local_1c [3];
  
  if (*param_3 == -0x7ffffff9) {
    *param_1 = -0x7ffffff9;
  }
  else {
    FUN_007a8c6c(local_1c);
    if (local_1c[0] != -0x7ffffff9) {
      FUN_007a90c8(local_1c);
    }
    iVar1 = param_3[1];
    iVar2 = param_3[2];
    *param_1 = *param_3;
    param_1[1] = iVar1;
    param_1[2] = iVar2;
  }
  return;
}

