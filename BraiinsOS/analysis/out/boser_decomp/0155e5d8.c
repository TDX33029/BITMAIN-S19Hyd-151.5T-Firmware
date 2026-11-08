// FUN_0155e5d8 @ 0155e5d8 size=400 calls_out=6 calls_in=0
// strings: 

void FUN_0155e5d8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)FUN_01671160();
  uVar2 = *puVar1;
  iVar3 = puVar1[1];
  puVar1 = (undefined4 *)FUN_01671044();
  uVar2 = (**(code **)(iVar3 + 0xc))(uVar2);
  FUN_00653054(&local_40,puVar1[2],*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1 + 8,uVar2);
  iVar3 = thunk_FUN_01be5118(0x8c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x8c);
  }
  local_70 = (undefined4 *)(iVar3 + 0x80);
  *local_70 = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x88) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x84) = 0xffffffff;
  local_60 = local_40;
  uStack_5c = uStack_3c;
  local_58 = uStack_38;
  uStack_54 = uStack_34;
  local_50 = local_30;
  uStack_4c = uStack_2c;
  uStack_48 = uStack_28;
  uStack_44 = uStack_24;
  local_64 = 0;
  local_68 = 7;
  local_6c = 7;
  FUN_01541c00(&local_70,&DAT_004a6762,6,FUN_0155e7bc,FUN_0155e808);
  FUN_01541c00(&local_70,&DAT_004a6768,9,FUN_0155e8d8,FUN_0155e924);
  FUN_01541c00(&local_70,&DAT_004a6771,6,FUN_0155e9f4,FUN_0155ea40);
  FUN_01541c00(&local_70,&DAT_004a6777,9,FUN_0155eb10,FUN_0155eb5c);
  FUN_01541c00(&local_70,&DAT_004a6780,6,FUN_0155ec2c,FUN_0155ecec);
  *param_1 = local_70;
  param_1[1] = local_6c;
  param_1[2] = local_68;
  param_1[3] = local_64;
  param_1[4] = local_60;
  param_1[5] = uStack_5c;
  param_1[6] = local_58;
  param_1[7] = uStack_54;
  param_1[8] = local_50;
  param_1[9] = uStack_4c;
  param_1[10] = uStack_48;
  param_1[0xb] = uStack_44;
  return;
}

