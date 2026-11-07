// FUN_01733c9c @ 01733c9c size=148 calls_out=4 calls_in=5
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 * FUN_01733c9c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    FUN_016e9cd0(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x20b);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_0177a6c0(0xd0);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = FUN_0172c500(param_1);
      *puVar1 = uVar2;
      FUN_01733c50(puVar1 + 1);
    }
  }
  return puVar1;
}

