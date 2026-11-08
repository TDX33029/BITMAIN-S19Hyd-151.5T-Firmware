// FUN_01a3be00 @ 01a3be00 size=156 calls_out=3 calls_in=11
// strings: 

uint FUN_01a3be00(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  while ((uVar1 = FUN_01a3c89c(*(undefined4 *)*param_1), uVar1 == 0 &&
         (iVar2 = FUN_019e0cbc(param_1 + 1,param_2), iVar2 == 0))) {
    iVar2 = *(int *)*param_1;
    uVar1 = *(uint *)(iVar2 + 8);
    DataMemoryBarrier(0xb);
    FUN_019e0ae8(param_1 + 1);
    if (param_1[5] != 0) {
      (**(code **)(param_1[5] + 0xc))(param_1[6]);
    }
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[7] = 0;
    param_1[1] = iVar2 + 8;
    param_1[2] = uVar1 >> 2;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return uVar1 ^ 1;
}

