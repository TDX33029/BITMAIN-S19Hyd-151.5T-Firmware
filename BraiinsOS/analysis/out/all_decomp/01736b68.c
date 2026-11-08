// FUN_01736b68 @ 01736b68 size=168 calls_out=3 calls_in=1
// strings: 

int FUN_01736b68(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_01733c9c(param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_01736ab8(iVar1,param_1);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  FUN_0172c788(iVar1);
  return 0;
}

