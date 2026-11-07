// FUN_0070e9c0 @ 0070e9c0 size=384 calls_out=5 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0070e9c0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int iStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28;
  undefined2 local_27;
  undefined1 local_25;
  
  local_88 = *param_2;
  iStack_84 = param_2[1];
  iStack_80 = param_2[2];
  iStack_7c = param_2[3];
  local_78 = param_2[4];
  local_74 = param_2[5];
  if (local_78 != 0) {
    local_70 = local_88;
    local_6c = iStack_84;
    local_68 = iStack_80;
    iStack_64 = iStack_7c;
    FUN_01ac61a4(&local_60,local_78,local_74);
    if (local_50 == '\x02') {
      *param_1 = 3;
      param_1[1] = 0;
      if (local_70 != 0) {
        (**(code **)(local_70 + 0x10))(&iStack_64,local_6c,local_68);
      }
      FUN_00711e0c(&local_88,1,1);
      FUN_0070e8fc(param_3);
      return;
    }
    local_38 = local_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    local_25 = local_4d;
    local_27 = local_4f;
    local_48 = local_70;
    iStack_44 = local_6c;
    iStack_40 = local_68;
    iStack_3c = iStack_64;
    local_28 = local_50;
    FUN_00714c58(&local_60,param_3);
    if (local_50 != '\x02') {
      (**(code **)(local_60 + 0x10))(&uStack_54,uStack_5c,uStack_58);
    }
  }
  FUN_00711e0c(&local_88,1,1);
  FUN_01bed4e2(param_1,param_3,0x50);
  return;
}

