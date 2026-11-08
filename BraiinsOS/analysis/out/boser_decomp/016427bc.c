// FUN_016427bc @ 016427bc size=184 calls_out=1 calls_in=1
// strings: 

void FUN_016427bc(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_3 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,8,param_3,&DAT_01d063a8);
  }
  if (param_3 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(8,0x10,param_3,&DAT_01d063a8);
  }
  if (param_3 < 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0x10,0x18,param_3,&DAT_01d063a8);
  }
  if (param_3 < 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0x18,0x20,param_3,&DAT_01d063a8);
  }
  uVar7 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[3];
  uVar8 = param_2[2];
  *param_1 = 0;
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[6];
  uVar1 = param_2[7];
  param_1[2] = uVar7;
  param_1[3] = uVar6;
  param_1[4] = uVar8;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar1;
  return;
}

