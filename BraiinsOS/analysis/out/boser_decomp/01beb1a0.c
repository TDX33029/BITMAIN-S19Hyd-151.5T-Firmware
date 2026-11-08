// FUN_01beb1a0 @ 01beb1a0 size=42 calls_out=1 calls_in=3
// strings: 

uint FUN_01beb1a0(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = FUN_01beb122();
  if ((iVar1 == 0) && (iVar1 = (**(code **)(param_1 + 0x20))(param_1,&local_9,1), iVar1 == 1)) {
    uVar2 = (uint)local_9;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

