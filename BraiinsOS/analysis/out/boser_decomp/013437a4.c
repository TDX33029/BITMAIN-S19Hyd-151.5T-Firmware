// FUN_013437a4 @ 013437a4 size=44 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_013437a4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1[2] + 8) == 0) {
    return 0;
  }
  uVar1 = FUN_013437d0(*param_1,param_1[1],0);
  return uVar1;
}

