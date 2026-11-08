// FUN_016e993c @ 016e993c size=28 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_016e993c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}

