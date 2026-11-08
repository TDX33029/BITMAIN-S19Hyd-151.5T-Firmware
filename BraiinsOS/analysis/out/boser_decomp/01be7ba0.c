// FUN_01be7ba0 @ 01be7ba0 size=76 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_01be7ba0(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  
  iVar1 = FUN_01be9c4e(1,0x80002,0);
  if (-1 < iVar1) {
    FUN_01bedc58(auStack_30,param_1,0x10);
    iVar1 = FUN_01be67dc(iVar1,0x8933,auStack_30);
    software_interrupt(0);
    if (-1 < iVar1) {
      return local_20;
    }
  }
  return 0;
}

