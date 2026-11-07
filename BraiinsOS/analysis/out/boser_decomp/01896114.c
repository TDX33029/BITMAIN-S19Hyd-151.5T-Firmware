// FUN_01896114 @ 01896114 size=176 calls_out=4 calls_in=4
// strings: 

bool FUN_01896114(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  bool bVar2;
  int local_20;
  int local_1c;
  
  iVar1 = FUN_01895ca0(param_1,param_2,param_6,param_7);
  bVar2 = true;
  if (iVar1 == 0) {
    local_1c = param_5;
    local_20 = param_7;
    if (param_7 != param_5) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_20,&local_1c,0);
    }
    iVar1 = FUN_01bd4ff4(param_6,param_4,param_7);
    bVar2 = iVar1 != -1;
    if (param_3 == 0 && iVar1 == -1) {
      iVar1 = FUN_01bd4ea8(param_6,param_7);
      bVar2 = false;
      if (iVar1 != 0) {
        bVar2 = true;
      }
    }
  }
  return bVar2;
}

