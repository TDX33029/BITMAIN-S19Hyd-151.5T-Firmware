// FUN_00b0de70 @ 00b0de70 size=232 calls_out=4 calls_in=2
// strings: 

void FUN_00b0de70(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  
  FUN_00962de4(&local_58);
  uVar1 = *(undefined1 *)(param_3 + 7);
  local_48 = param_3[3];
  uStack_44 = param_3[4];
  uStack_40 = param_3[5];
  uStack_3c = param_3[6];
  local_30 = 0;
  local_34 = 1;
  local_38 = 0;
  local_28 = &LAB_00632348;
  local_2c = param_3;
  iVar2 = FUN_012fa178(&local_38,&DAT_01c10bb0,&DAT_00590e5f,&local_2c);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_2c,&DAT_01c10bf8,&DAT_01d30334);
  }
  param_1[3] = local_38;
  param_1[4] = local_34;
  param_1[5] = local_30;
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  *(undefined1 *)(param_1 + 10) = uVar1;
  param_1[6] = local_48;
  param_1[7] = uStack_44;
  param_1[8] = uStack_40;
  param_1[9] = uStack_3c;
  FUN_019bb7e0(*param_3,param_3[1]);
  return;
}

