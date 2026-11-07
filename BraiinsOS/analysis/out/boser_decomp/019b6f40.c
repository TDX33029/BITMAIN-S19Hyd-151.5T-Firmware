// FUN_019b6f40 @ 019b6f40 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_019b6f40(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != -1) {
    FUN_01bf01d6();
  }
  if (param_1[1] != -1) {
    FUN_01bf01d6();
  }
  if (param_1[2] == -1) {
    return;
  }
  uVar1 = FUN_01beaf68();
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

