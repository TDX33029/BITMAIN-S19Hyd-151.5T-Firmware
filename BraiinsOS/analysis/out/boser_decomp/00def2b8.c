// FUN_00def2b8 @ 00def2b8 size=256 calls_out=4 calls_in=4
// strings: 

void FUN_00def2b8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_25;
  
  local_3c = &DAT_01c1695c;
  local_40 = &local_4c;
  local_44 = 0;
  local_4c = 0;
  local_48 = 1;
  local_34 = 0;
  local_38 = 0x60000020;
  iVar4 = FUN_00aeeb78(param_2,&local_40);
  uVar3 = local_44;
  uVar2 = local_48;
  uVar1 = local_4c;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c16984,&DAT_01d30334);
  }
  local_38 = *param_2;
  local_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_3c = (undefined *)0x1;
  local_40 = (undefined4 *)0x1;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar5 = local_40;
  puVar5[1] = local_3c;
  puVar5[2] = local_38;
  puVar5[3] = local_34;
  puVar5[4] = uStack_30;
  puVar5[5] = uStack_2c;
  param_1[7] = puVar5;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[8] = &DAT_01c169f4;
  *param_1 = 0;
  return;
}

