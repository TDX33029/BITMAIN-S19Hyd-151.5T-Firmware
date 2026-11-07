// FUN_0173cab0 @ 0173cab0 size=52 calls_out=0 calls_in=8
// strings: 

undefined4 FUN_0173cab0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0x800) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

