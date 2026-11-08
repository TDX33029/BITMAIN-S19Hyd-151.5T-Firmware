// FUN_016d78cc @ 016d78cc size=76 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_016d78cc(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  
  iVar1 = FUN_016d997a(1,0x80002,0);
  if (-1 < iVar1) {
    FUN_016dd920(auStack_30,param_1,0x10);
    iVar1 = FUN_016d6590(iVar1,0x8933,auStack_30);
    software_interrupt(0);
    if (-1 < iVar1) {
      return local_20;
    }
  }
  return 0;
}

