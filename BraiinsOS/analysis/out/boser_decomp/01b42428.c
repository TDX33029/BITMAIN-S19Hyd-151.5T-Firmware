// FUN_01b42428 @ 01b42428 size=144 calls_out=4 calls_in=5
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 * FUN_01b42428(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    FUN_01b053d4(0xf,0,0x43,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x20b);
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_01b6ad8c(0xd0);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = FUN_01b3d034(param_1);
      *puVar1 = uVar2;
      FUN_01b423dc(puVar1 + 1);
    }
  }
  return puVar1;
}

