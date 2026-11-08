// FUN_016dae88 @ 016dae88 size=42 calls_out=1 calls_in=3
// strings: 

uint FUN_016dae88(int param_1)

{
  int iVar1;
  uint uVar2;
  byte local_9;
  
  iVar1 = FUN_016dae0a();
  if ((iVar1 == 0) && (iVar1 = (**(code **)(param_1 + 0x20))(param_1,&local_9,1), iVar1 == 1)) {
    uVar2 = (uint)local_9;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

