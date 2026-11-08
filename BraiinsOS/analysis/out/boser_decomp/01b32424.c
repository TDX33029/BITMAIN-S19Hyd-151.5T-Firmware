// FUN_01b32424 @ 01b32424 size=116 calls_out=1 calls_in=1
// strings: 

int FUN_01b32424(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = FUN_01b2b33c();
    if ((iVar1 == 0) || (iVar1 = FUN_01b2b33c(param_1 + 0x14,param_2 + 0x14), iVar1 == 0)) {
      param_2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
      param_2 = param_1;
    }
  }
  return param_2;
}

