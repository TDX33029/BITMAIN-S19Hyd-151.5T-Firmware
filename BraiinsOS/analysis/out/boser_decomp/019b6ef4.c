// FUN_019b6ef4 @ 019b6ef4 size=76 calls_out=1 calls_in=1
// strings: 

void FUN_019b6ef4(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (1 < *param_1) {
    FUN_01bf01d6(param_1[1]);
  }
  if (1 < param_1[2]) {
    FUN_01bf01d6(param_1[3]);
  }
  if (param_1[4] < 2) {
    return;
  }
  uVar1 = FUN_01beaf68(param_1[5]);
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

