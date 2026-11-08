// FUN_011be384 @ 011be384 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_011be384(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_2;
  iVar1 = FUN_011bdfc0(uVar2);
  if (iVar1 == 0) {
    FUN_011be3c0(param_1,uVar2);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 6;
  return;
}

