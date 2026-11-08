// FUN_019e6be4 @ 019e6be4 size=88 calls_out=1 calls_in=3
// strings: 

void FUN_019e6be4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  if (uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar4,uVar3,&DAT_01d2e4e0);
  }
  uVar1 = param_2[3];
  if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,uVar3,&DAT_01d292b4);
  }
  uVar2 = *param_2;
  param_1[2] = uVar1;
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}

