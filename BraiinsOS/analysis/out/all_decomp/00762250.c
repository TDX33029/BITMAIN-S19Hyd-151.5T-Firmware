// FUN_00762250 @ 00762250 size=196 calls_out=3 calls_in=0
// strings: 

void FUN_00762250(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  local_74 = *param_3;
  uStack_70 = param_3[1];
  uStack_6c = param_3[2];
  local_78 = 2;
  FUN_0161cae8(&local_90,&local_78);
  if (*(char *)(param_2 + 0x1b8) == '\x02') {
    local_64 = CONCAT31(local_64._1_3_,1);
    local_78 = local_90;
    local_74 = uStack_8c;
    uStack_70 = uStack_88;
    uStack_6c = uStack_84;
  }
  else {
    FUN_006b9970(&local_78,param_2 + 0x1b0,&local_90);
  }
  uVar1 = 0x11;
  if (local_78 != -0x80000000) {
    local_38 = local_78;
    uStack_34 = local_74;
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    uStack_24 = local_64;
    FUN_0078592c(param_1 + 1);
    uVar1 = 0xb;
  }
  *param_1 = uVar1;
  return;
}

