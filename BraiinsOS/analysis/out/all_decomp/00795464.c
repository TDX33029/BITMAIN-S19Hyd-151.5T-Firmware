// FUN_00795464 @ 00795464 size=152 calls_out=1 calls_in=0
// strings: 

void FUN_00795464(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70 [9];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 8);
  local_74 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_90 = 0;
  local_70[1] = 0;
  local_70[7] = 0;
  local_70[6] = 0;
  local_70[5] = 0;
  local_70[4] = 0;
  local_70[3] = 0;
  local_70[2] = 0;
  local_70[0] = iVar1 << 7;
  local_78 = 0xffff0000;
  if (iVar1 == 0) {
    local_70[0] = 1;
  }
  FUN_01289fbc(local_70 + 8,&local_90,local_70);
  *param_1 = local_70[8];
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = uStack_38;
  param_1[7] = uStack_34;
  return;
}

