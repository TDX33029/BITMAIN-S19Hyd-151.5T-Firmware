// FUN_011d2230 @ 011d2230 size=96 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_011d2230(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0xc))(*(undefined4 *)(param_1 + 0xc),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_011f0338(iVar1,param_2,param_3,*(undefined4 *)(param_1 + 0x14),
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8));
  return uVar2;
}

