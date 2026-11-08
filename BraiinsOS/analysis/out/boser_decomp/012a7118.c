// FUN_012a7118 @ 012a7118 size=132 calls_out=2 calls_in=2
// strings: 

void FUN_012a7118(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (*(int *)(param_2 + 8) == 1) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (*param_3 == 0) {
      *param_3 = 1;
      param_3[1] = iVar1;
    }
    *(int *)(param_2 + 0xc) = iVar1 + 1;
  }
  iVar1 = *(int *)(param_2 + 100);
  if (iVar1 == *(int *)(param_2 + 0x5c)) {
    FUN_012ba2c4();
  }
  FUN_01bed4e2(iVar1 * 0x16c + *(int *)(param_2 + 0x60),param_3,0x16c);
  *(int *)(param_2 + 100) = iVar1 + 1;
  FUN_01bed4e2(param_1,param_2,0x16c);
  return;
}

