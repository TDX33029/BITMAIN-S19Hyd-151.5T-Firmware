// FUN_01896960 @ 01896960 size=120 calls_out=1 calls_in=2
// strings: 

undefined4
FUN_01896960(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int local_58 [13];
  
  iVar2 = 0x65;
  while( true ) {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 1;
    }
    iVar1 = (*param_3)(param_2,param_4,param_5);
    if (iVar1 != 0) break;
    FUN_01896374(local_58,param_1,param_4,param_5);
    if (local_58[0] == 0) {
      return 0;
    }
  }
  return 1;
}

