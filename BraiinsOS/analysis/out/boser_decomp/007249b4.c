// FUN_007249b4 @ 007249b4 size=68 calls_out=3 calls_in=1
// strings: 

void FUN_007249b4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[1] != 0) {
    thunk_FUN_01be4678(*param_1);
  }
  uVar1 = param_1[2];
  iVar2 = param_1[3];
  FUN_007245d8(uVar1,iVar2);
  if (iVar2 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar1);
  return;
}

