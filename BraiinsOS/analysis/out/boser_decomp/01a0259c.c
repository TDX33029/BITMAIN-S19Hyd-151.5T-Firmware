// FUN_01a0259c @ 01a0259c size=72 calls_out=3 calls_in=5
// strings: 

void FUN_01a0259c(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_01a01c84(param_1 + 0x10);
  FUN_01bed4e2(param_1 + 0x10,param_2,0x88);
  FUN_019ec558((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}

