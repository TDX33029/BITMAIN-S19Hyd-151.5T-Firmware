// FUN_013438b8 @ 013438b8 size=52 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_013438b8(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1[2] + 0xc) == 0) {
    return 0;
  }
  uVar1 = FUN_013437d0(*param_1,param_1[1],*(int *)(param_1[2] + 4) + 1);
  return uVar1;
}

