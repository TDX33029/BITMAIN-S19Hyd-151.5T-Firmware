// FUN_012e12ac @ 012e12ac size=48 calls_out=2 calls_in=4
// strings: 

void FUN_012e12ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_012e135c();
  FUN_01781558(param_1);
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  uVar1 = FUN_01beaf68(*(undefined4 *)(param_1 + 0x10));
  iVar2 = thunk_FUN_01bee080(6,uVar1,0,0,0,0,0);
  if (iVar2 == -4) {
    iVar2 = 0;
  }
  FUN_01be3b5a(iVar2);
  return;
}

