// FUN_01965c5c @ 01965c5c size=60 calls_out=2 calls_in=3
// strings: 

void FUN_01965c5c(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  iVar1 = FUN_01965c98(uVar2);
  if (iVar1 == 0) {
    FUN_019646d0(param_1,uVar2);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 6;
  return;
}

