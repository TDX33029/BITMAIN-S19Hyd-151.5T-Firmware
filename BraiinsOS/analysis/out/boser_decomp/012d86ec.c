// FUN_012d86ec @ 012d86ec size=56 calls_out=3 calls_in=1
// strings: 

void FUN_012d86ec(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == -0x80000000) {
    return;
  }
  FUN_012d858c(param_1);
  FUN_012cebd8(param_1 + 0x20);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  uVar1 = FUN_01beaf68(*(undefined4 *)(param_1 + 0x38));
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

