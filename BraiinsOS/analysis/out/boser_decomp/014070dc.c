// FUN_014070dc @ 014070dc size=68 calls_out=2 calls_in=1
// strings: 

void FUN_014070dc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01401904(param_2);
  if (iVar1 == 0) {
    return;
  }
  if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(param_1 + 0x54) != iVar1)) {
    return;
  }
  FUN_013fc740(param_1 + 0x48);
  return;
}

