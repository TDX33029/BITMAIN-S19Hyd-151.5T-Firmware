// FUN_01125330 @ 01125330 size=220 calls_out=3 calls_in=0
// strings: 

void FUN_01125330(undefined4 *param_1,int *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uStack_2c;
  uint uStack_28;
  
  if (param_4 != 0) {
    iVar4 = param_2[2];
    uVar3 = param_2[1];
    do {
      uStack_28 = iVar4 - uVar3;
      uVar1 = uVar3 ^ 0x7fffffff;
      if (param_4 < (uVar3 ^ 0x7fffffff)) {
        uVar1 = param_4;
      }
      uVar2 = uVar3;
      if (uStack_28 < uVar1) {
        FUN_00f5f538(param_2,uVar1);
        uVar2 = param_2[1];
        iVar4 = param_2[2];
        uStack_28 = iVar4 - uVar2;
      }
      FUN_016dd1aa(*param_2 + uVar2,param_3,uVar1);
      if (uStack_28 < uVar1) {
        uStack_2c = uVar1;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&uStack_2c);
      }
      param_2[1] = uVar2 + uVar1;
      if (uVar3 == 0x7fffffff) {
        *param_1 = 2;
        param_1[1] = &DAT_018aeae8;
        return;
      }
      param_3 = param_3 + uVar1;
      param_4 = param_4 - uVar1;
      uVar3 = uVar2 + uVar1;
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

