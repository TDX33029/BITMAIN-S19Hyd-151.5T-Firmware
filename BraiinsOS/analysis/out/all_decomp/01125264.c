// FUN_01125264 @ 01125264 size=192 calls_out=3 calls_in=0
// strings: 

void FUN_01125264(undefined1 *param_1,int *param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_28;
  uint uStack_24;
  
  param_4 = param_4 << 3;
  puVar1 = (uint *)(param_3 + 4);
  do {
    puVar3 = puVar1;
    if (param_4 == 0) {
      uVar4 = 1;
      uVar2 = 0;
      goto LAB_011252a4;
    }
    uVar2 = *puVar3;
    param_4 = param_4 + -8;
    puVar1 = puVar3 + 2;
  } while (uVar2 == 0);
  uVar4 = puVar3[-1];
LAB_011252a4:
  uVar6 = param_2[1];
  uStack_24 = param_2[2] - uVar6;
  uVar5 = uVar6 ^ 0x7fffffff;
  if (uVar2 < (uVar6 ^ 0x7fffffff)) {
    uVar5 = uVar2;
  }
  if (uStack_24 < uVar5) {
    FUN_00f5f538(param_2,uVar5);
    uVar6 = param_2[1];
    uStack_24 = param_2[2] - uVar6;
  }
  FUN_016dd1aa(*param_2 + uVar6,uVar4,uVar5);
  if (uStack_24 < uVar5) {
    uStack_28 = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&uStack_28);
  }
  param_2[1] = uVar6 + uVar5;
  *(uint *)(param_1 + 4) = uVar5;
  *param_1 = 4;
  return;
}

