// FUN_005fd794 @ 005fd794 size=60 calls_out=1 calls_in=0
// strings: 

void FUN_005fd794(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_34 [36];
  
  uVar1 = *param_2;
  iVar2 = param_2[1];
  FUN_01ae1bfc(auStack_34,param_1);
  (**(code **)(iVar2 + 0xc))(uVar1,auStack_34,0x24);
  return;
}

