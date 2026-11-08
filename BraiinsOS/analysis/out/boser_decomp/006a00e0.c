// FUN_006a00e0 @ 006a00e0 size=28 calls_out=1 calls_in=2
// strings: 

void FUN_006a00e0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00ead68c(param_1 + 1);
  uVar1 = FUN_01beaf68(*param_1);
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

