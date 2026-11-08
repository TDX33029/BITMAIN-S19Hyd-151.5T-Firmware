// FUN_016638c8 @ 016638c8 size=160 calls_out=3 calls_in=13
// strings: 

uint FUN_016638c8(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  while ((uVar1 = FUN_0166463c(*(undefined4 *)*param_1), uVar1 == 0 &&
         (iVar2 = FUN_0163c044(param_1 + 1,param_2), iVar2 == 0))) {
    iVar2 = *(int *)*param_1;
    uVar1 = *(uint *)(iVar2 + 8);
    DataMemoryBarrier(0xb);
    FUN_0163bdc0(param_1 + 1);
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

