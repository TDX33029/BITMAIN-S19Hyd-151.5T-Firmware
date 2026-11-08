// FUN_0178190c @ 0178190c size=56 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_0178190c(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (uint *)0x0) {
    if (param_2 < *param_1) {
      uVar1 = *(undefined4 *)(param_1[1] + param_2 * 4);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

