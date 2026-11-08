// FUN_01670d54 @ 01670d54 size=72 calls_out=1 calls_in=7
// strings: 

bool FUN_01670d54(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
      iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc));
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}

