// FUN_0070e75c @ 0070e75c size=264 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0070e75c(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  char local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28;
  undefined2 local_27;
  undefined1 local_25;
  
  local_80 = *param_2;
  uStack_7c = param_2[1];
  uStack_78 = param_2[2];
  uStack_74 = param_2[3];
  local_70 = param_2[4];
  uStack_6c = param_2[5];
  uStack_68 = param_2[6];
  uStack_64 = param_2[7];
  uVar1 = param_2[8];
  local_60._0_1_ = (char)uVar1;
  if ((char)local_60 != '\x02') {
    local_60._1_2_ = (undefined2)((uint)uVar1 >> 8);
    local_60._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    local_25 = local_60._3_1_;
    local_27 = local_60._1_2_;
    local_28 = (char)local_60;
    local_60 = uVar1;
    local_48 = local_80;
    uStack_44 = uStack_7c;
    uStack_40 = uStack_78;
    uStack_3c = uStack_74;
    local_38 = local_70;
    uStack_34 = uStack_6c;
    uStack_30 = uStack_68;
    uStack_2c = uStack_64;
    FUN_00714c58(&local_5c,param_3,&local_48,&local_38);
    if (local_4c != '\x02') {
      (**(code **)(local_5c + 0x10))(auStack_50,uStack_58,uStack_54);
    }
    uVar1 = local_60;
  }
  local_60 = uVar1;
  FUN_00712de0(&local_80,1,1);
  FUN_01bed4e2(param_1,param_3,0x50);
  return;
}

