// FUN_01be34a6 @ 01be34a6 size=90 calls_out=2 calls_in=10
// strings: 

void FUN_01be34a6(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (((param_2 & 0x40) != 0) || (uVar1 = 0, (~param_2 & 0x404000) == 0)) {
    uVar1 = param_3;
  }
  uVar2 = thunk_FUN_01bee080(5,param_1,param_2 | 0x20000,uVar1,0,0,0);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if ((-1 < (int)uVar2) && ((int)(param_2 << 0xc) < 0)) {
    uVar1 = 2;
    software_interrupt(0);
  }
  FUN_01be3b5a((int)uVar2,uVar1);
  return;
}

