// FUN_00962de4 @ 00962de4 size=172 calls_out=3 calls_in=2
// strings: 

void FUN_00962de4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  uVar2 = param_2[1];
  local_2c = &local_38;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_34 = 1;
  local_24 = 0x60000020;
  local_28 = &DAT_01c0c458;
  iVar1 = FUN_012fb940(&local_2c,uVar2,param_2[2]);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_19,&DAT_01c0c470,&DAT_01d30334);
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  FUN_019bb7e0(*param_2,uVar2);
  return;
}

