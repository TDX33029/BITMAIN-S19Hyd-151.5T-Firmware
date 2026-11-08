// FUN_0164210c @ 0164210c size=236 calls_out=2 calls_in=1
// strings: 

void FUN_0164210c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_3 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,8,param_3,&DAT_01d063b8);
  }
  if (param_3 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(8,0x10,param_3,&DAT_01d063b8);
  }
  if (param_3 < 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0x10,0x18,param_3,&DAT_01d063b8);
  }
  if (param_3 < 0x1a) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0x18,0x1a,param_3,&DAT_01d063b8);
  }
  if (param_3 == 0x1b) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0x1b,0x1b,&DAT_01d063b8);
  }
  if (param_3 == 0x1a) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0x1a,0x1a,&DAT_01d063b8);
  }
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar1 = param_2[6];
  param_1[2] = *param_2;
  param_1[3] = uVar5;
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *param_1 = 0;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar1;
  return;
}

