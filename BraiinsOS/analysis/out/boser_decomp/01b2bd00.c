// FUN_01b2bd00 @ 01b2bd00 size=100 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01b2bd00(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01b2b938(param_1 + 0x118);
  FUN_01b2bb74(param_2,uVar1,param_4,*(undefined4 *)(param_1 + 0x11c));
  *param_3 = uVar1;
  return 0;
}

