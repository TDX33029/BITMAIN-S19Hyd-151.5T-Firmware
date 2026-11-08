// FUN_01ab498c @ 01ab498c size=96 calls_out=1 calls_in=2
// strings: 

void FUN_01ab498c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int local_1c;
  
  uVar2 = *(uint *)(param_1 + 0x148);
  if (uVar2 < 9) {
    param_1 = param_1 + 8;
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
    param_1 = *(int *)(param_1 + 8);
  }
  if (uVar2 != 0) {
    iVar1 = uVar2 * 0x28;
    do {
      local_1c = param_1;
      FUN_01aacd68(param_2,&local_1c,&DAT_01d2ecc0);
      param_1 = param_1 + 0x28;
      iVar1 = iVar1 + -0x28;
    } while (iVar1 != 0);
  }
  return;
}

