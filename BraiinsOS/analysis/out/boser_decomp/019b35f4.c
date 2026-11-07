// FUN_019b35f4 @ 019b35f4 size=44 calls_out=1 calls_in=0
// strings: 

void FUN_019b35f4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[1] != 0) {
    thunk_FUN_01be4678(*param_1);
  }
  uVar1 = FUN_01beaf68(param_1[5]);
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

