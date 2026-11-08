// FUN_00b81ecc @ 00b81ecc size=108 calls_out=1 calls_in=1
// strings: 

bool FUN_00b81ecc(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  if ((*(int *)(param_3 + 8) == *(int *)(param_1 + 8)) &&
     (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_1 + 4)),
     iVar2 == 0)) {
    return false;
  }
  bVar1 = false;
  if (*(int *)(param_4 + 0x10) == *(int *)(param_2 + 8)) {
    iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_4 + 0xc),*(undefined4 *)(param_2 + 4));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

