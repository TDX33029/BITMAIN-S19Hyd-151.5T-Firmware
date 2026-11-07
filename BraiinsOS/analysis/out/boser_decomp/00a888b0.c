// FUN_00a888b0 @ 00a888b0 size=112 calls_out=1 calls_in=0
// strings: 

void FUN_00a888b0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_012672ac(0,0,param_1 + 0x428,param_2[1],*param_2,param_2[1],
                       *(undefined4 *)(param_1 + 0x420),*(undefined4 *)(param_1 + 0x424));
  if ((uVar1 & 0xfd) == 1) {
    FUN_012672ac(0,0,param_1 + 0x428);
  }
  return;
}

