// FUN_016277b0 @ 016277b0 size=92 calls_out=1 calls_in=1
// strings: 

void FUN_016277b0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,4,param_3,&DAT_01d06188);
  }
  if (param_3 < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(4,0xc,param_3,&DAT_01d06188);
  }
  uVar3 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  *param_1 = 0;
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  return;
}

