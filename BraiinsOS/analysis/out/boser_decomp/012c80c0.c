// FUN_012c80c0 @ 012c80c0 size=72 calls_out=3 calls_in=5
// strings: 

void FUN_012c80c0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_012c7fbc(param_1 + 0x10);
  FUN_01bed4e2(param_1 + 0x10,param_2,0x100);
  FUN_019ec558((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}

