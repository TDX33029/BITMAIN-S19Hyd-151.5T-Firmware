// FUN_01714eb4 @ 01714eb4 size=104 calls_out=2 calls_in=25
// strings: 

int FUN_01714eb4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01714e64();
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0171429c(*(undefined4 *)(*param_1 + (iVar1 + 0x3fffffff) * 4));
    iVar2 = iVar2 + (iVar1 + -1) * 0x20;
  }
  return iVar2;
}

