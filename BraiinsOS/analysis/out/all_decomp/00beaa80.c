// FUN_00beaa80 @ 00beaa80 size=992 calls_out=2 calls_in=0
// strings: StatusDecodeUpgrade | StatusDecodeUpgrade

undefined4 FUN_00beaa80(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int local_c4;
  int local_c0;
  undefined1 *local_bc;
  undefined1 local_b5;
  int *local_b4;
  undefined *local_b0;
  int local_ac;
  int local_a8;
  int *local_a4;
  int *local_a0;
  undefined *local_9c;
  int *local_98;
  undefined *local_94;
  int *local_90;
  undefined *local_8c;
  int *local_88;
  undefined *local_84;
  int *local_80;
  undefined *local_7c;
  int *local_78;
  undefined *local_74;
  int *local_70;
  undefined *local_6c;
  int *local_68;
  undefined *local_64;
  int local_60;
  undefined *local_5c;
  int local_58;
  undefined *local_54;
  int local_50;
  undefined *local_4c;
  int *local_48;
  undefined *local_44;
  int *local_40;
  undefined *local_3c;
  int *local_38;
  undefined *local_34;
  int *local_30;
  undefined *local_2c;
  int **local_28;
  undefined *local_24;
  
  if (*param_1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00beaab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00568af8,4);
    return uVar1;
  }
  iVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(iVar4,&DAT_00569804,4);
  if (iVar2 != 0) {
    return 1;
  }
  local_a0 = param_1;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar2 = (*pcVar3)(iVar4,"(",1);
    if (iVar2 != 0) {
      return 1;
    }
    local_28 = &local_b4;
    local_30 = param_1 + 0x28;
    local_38 = param_1 + 0x20;
    local_40 = param_1 + 0x37;
    local_48 = param_1 + 0x36;
    local_50 = (int)param_1 + 0xef;
    local_58 = (int)param_1 + 0xee;
    local_60 = (int)param_1 + 0xed;
    local_68 = param_1 + 0x30;
    local_70 = param_1 + 0x18;
    local_78 = param_1 + 0x16;
    local_80 = param_1 + 0x3b;
    local_88 = param_1 + 0x39;
    local_90 = param_1 + 0x38;
    local_98 = param_1 + 0x33;
    local_24 = &DAT_018726b4;
    local_2c = &DAT_01872754;
    local_34 = &DAT_01872744;
    local_3c = &DAT_01872734;
    local_44 = &DAT_01872734;
    local_64 = &DAT_01872724;
    local_6c = &DAT_01872714;
    local_9c = &DAT_018726c4;
    local_b4 = param_1 + 0x3a;
    local_84 = &DAT_018726e4;
    local_8c = &DAT_018726e4;
    local_4c = &DAT_018726f4;
    local_54 = &DAT_018726f4;
    local_5c = &DAT_018726f4;
    local_74 = &DAT_01872704;
    local_7c = &DAT_018726f4;
    local_94 = &DAT_018726d4;
    iVar2 = FUN_00fb36b8(param_2,"StatusDecodeUpgrade",6,&DAT_01872764,0x10,&local_a0,0x10);
  }
  else {
    iVar2 = (*pcVar3)(iVar4,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_bc = &local_b5;
    local_b5 = 1;
    local_ac = param_2[2];
    local_a8 = param_2[3];
    local_b0 = &DAT_01880dc4;
    local_b4 = &local_c4;
    local_24 = &DAT_018726b4;
    local_28 = &local_a4;
    local_2c = &DAT_01872754;
    local_30 = param_1 + 0x28;
    local_38 = param_1 + 0x20;
    local_40 = param_1 + 0x37;
    local_34 = &DAT_01872744;
    local_48 = param_1 + 0x36;
    local_70 = param_1 + 0x18;
    local_50 = (int)param_1 + 0xef;
    local_58 = (int)param_1 + 0xee;
    local_60 = (int)param_1 + 0xed;
    local_68 = param_1 + 0x30;
    local_3c = &DAT_01872734;
    local_44 = &DAT_01872734;
    local_78 = param_1 + 0x16;
    local_64 = &DAT_01872724;
    local_6c = &DAT_01872714;
    local_84 = &DAT_018726e4;
    local_8c = &DAT_018726e4;
    local_90 = param_1 + 0x38;
    local_98 = param_1 + 0x33;
    local_a4 = param_1 + 0x3a;
    local_4c = &DAT_018726f4;
    local_54 = &DAT_018726f4;
    local_5c = &DAT_018726f4;
    local_7c = &DAT_018726f4;
    local_80 = param_1 + 0x3b;
    local_88 = param_1 + 0x39;
    local_74 = &DAT_01872704;
    local_94 = &DAT_018726d4;
    local_9c = &DAT_018726c4;
    local_c4 = iVar4;
    local_c0 = iVar5;
    iVar2 = FUN_00fb36b8(&local_b4,"StatusDecodeUpgrade",6,&DAT_01872764,0x10,&local_a0,0x10);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_b0 + 0xc))(local_b4,&DAT_00414a81,2);
  }
  if (iVar2 == 0) {
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar1;
  }
  return 1;
}

