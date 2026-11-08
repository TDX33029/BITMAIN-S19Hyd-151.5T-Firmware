// FUN_0127899c @ 0127899c size=60 calls_out=2 calls_in=3
// strings: 

void FUN_0127899c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  iVar1 = FUN_0167459c(uVar2);
  if (iVar1 == 0) {
    FUN_0127fefc(param_1,uVar2);
    return;
  }
  *param_1 = 0x80000015;
  param_1[1] = iVar1;
  return;
}

