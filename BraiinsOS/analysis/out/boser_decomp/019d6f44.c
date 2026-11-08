// FUN_019d6f44 @ 019d6f44 size=44 calls_out=2 calls_in=2
// strings: 

void FUN_019d6f44(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  FUN_019d6e24(uVar1,iVar2);
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar1);
  return;
}

