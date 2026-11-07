// FUN_012f49f0 @ 012f49f0 size=72 calls_out=2 calls_in=0
// strings: 

void FUN_012f49f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  
  uVar2 = FUN_019ce0bc(auStack_38,param_3);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  FUN_01ac6cbc(param_2,(int)uVar2,uVar1);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 4;
  return;
}

