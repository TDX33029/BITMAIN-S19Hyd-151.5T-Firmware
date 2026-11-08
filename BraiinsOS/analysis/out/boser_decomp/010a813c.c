// FUN_010a813c @ 010a813c size=76 calls_out=1 calls_in=6
// strings: 

void FUN_010a813c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) != -1) {
    FUN_01bf01d6();
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    FUN_01bf01d6();
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    FUN_01bf01d6();
  }
  if (*(int *)(param_1 + 0x18) == -1) {
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

