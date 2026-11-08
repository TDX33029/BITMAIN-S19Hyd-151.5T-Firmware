// FUN_0103b1a8 @ 0103b1a8 size=72 calls_out=2 calls_in=1
// strings: /usr/sbin/uninstall.shevent open/boser/boser-unix/src/uninstall.rs:76

void FUN_0103b1a8(undefined4 *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01982d98("/usr/sbin/uninstall.shevent open/boser/boser-unix/src/uninstall.rs:76",0x16)
  ;
  if (iVar1 == 0 || param_2 == '\0') {
    *param_1 = 0x8000000f;
    return;
  }
  FUN_00b7d6b4(param_1,param_3);
  return;
}

