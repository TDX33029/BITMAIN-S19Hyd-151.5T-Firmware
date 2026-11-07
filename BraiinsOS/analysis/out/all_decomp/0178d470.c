// FUN_0178d470 @ 0178d470 size=148 calls_out=5 calls_in=1
// strings: 

int FUN_0178d470(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0178d1d0(param_1,param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_0178cdfc(iVar1);
    if (iVar2 == 0) {
      FUN_0178f618(iVar1);
      FUN_0178ce24(iVar1);
    }
    else {
      FUN_0178d588(iVar1);
      iVar1 = 0;
    }
  }
  return iVar1;
}

