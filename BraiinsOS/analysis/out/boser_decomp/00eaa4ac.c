// FUN_00eaa4ac @ 00eaa4ac size=116 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_00eaa4ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = 0;
  FUN_01bed93e(auStack_50,0,0x2d);
  FUN_00eaa520(param_1,auStack_50);
  FUN_012650dc(&local_20,param_2,auStack_50,0x24);
  if ((char)local_20 != '\x04') {
    uVar1 = FUN_01966f50(local_20,local_1c);
  }
  return uVar1;
}

