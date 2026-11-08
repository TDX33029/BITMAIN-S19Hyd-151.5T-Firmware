// FUN_005f7684 @ 005f7684 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_005f7684(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_019d1ae0(param_1 + 1);
  if (param_1[2] != 0) {
    thunk_FUN_01be4678(param_1[1]);
  }
  uVar1 = FUN_01beaf68(*param_1);
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

