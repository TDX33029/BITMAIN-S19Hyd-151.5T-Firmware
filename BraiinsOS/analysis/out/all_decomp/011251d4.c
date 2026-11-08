// FUN_011251d4 @ 011251d4 size=144 calls_out=3 calls_in=0
// strings: 

void FUN_011251d4(undefined1 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uStack_28;
  uint uStack_24;
  
  uVar2 = param_2[1];
  uStack_24 = param_2[2] - uVar2;
  uVar1 = uVar2 ^ 0x7fffffff;
  if (param_4 < (uVar2 ^ 0x7fffffff)) {
    uVar1 = param_4;
  }
  if (uStack_24 < uVar1) {
    FUN_00f5f538(param_2,uVar1);
    uVar2 = param_2[1];
    uStack_24 = param_2[2] - uVar2;
  }
  FUN_016dd1aa(*param_2 + uVar2,param_3,uVar1);
  if (uStack_24 < uVar1) {
    uStack_28 = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&uStack_28);
  }
  param_2[1] = uVar2 + uVar1;
  *(uint *)(param_1 + 4) = uVar1;
  *param_1 = 4;
  return;
}

