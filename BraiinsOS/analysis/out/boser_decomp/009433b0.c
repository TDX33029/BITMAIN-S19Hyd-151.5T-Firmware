// FUN_009433b0 @ 009433b0 size=80 calls_out=3 calls_in=2
// strings: 

void FUN_009433b0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  while ((uVar2 = FUN_0093e888(param_1 + 0x50,param_1), (int)uVar2 != 2 && ((uVar2 & 1) == 0))) {
    FUN_01209910((int)(uVar2 >> 0x20));
  }
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    iVar1 = *(int *)(iVar1 + 0x44);
    thunk_FUN_01be4678();
  } while (iVar1 != 0);
  return;
}

