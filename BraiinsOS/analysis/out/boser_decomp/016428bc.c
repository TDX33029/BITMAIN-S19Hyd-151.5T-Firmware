// FUN_016428bc @ 016428bc size=92 calls_out=1 calls_in=1
// strings: 

void FUN_016428bc(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,8,param_3,&DAT_01d06358);
  }
  if (param_3 < 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(8,0xc,param_3,&DAT_01d06358);
  }
  uVar3 = *param_2;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  *param_1 = 0;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return;
}

