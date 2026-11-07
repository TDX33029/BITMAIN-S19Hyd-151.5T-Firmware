// FUN_01b3e7c4 @ 01b3e7c4 size=112 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b3e7c4(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_01bed4e2(param_2,param_3,0x44);
  FUN_01bed4e2(param_2 + 0x44,param_3 + 0x44);
  uVar1 = FUN_01b3e7b4(param_1);
  FUN_01bed4e2(param_2 + 0x88,uVar1,0x44);
  return 0;
}

