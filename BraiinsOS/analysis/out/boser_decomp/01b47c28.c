// FUN_01b47c28 @ 01b47c28 size=248 calls_out=6 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/evp.c | algorithm %d

/* WARNING: Removing unreachable block (ram,0x01b47804) */

undefined4 FUN_01b47c28(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_01b1c878();
  }
  iVar1 = FUN_01b2052c(param_2);
  if (iVar1 == 0) {
    FUN_01b053d4(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/evp.c",0x13f);
    FUN_01b05488("algorithm %d",param_2);
    uVar2 = 0;
  }
  else {
    if (param_1 != 0) {
      FUN_01b4777c(param_1,iVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

