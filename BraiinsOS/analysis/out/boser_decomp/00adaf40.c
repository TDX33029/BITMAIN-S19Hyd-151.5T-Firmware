// FUN_00adaf40 @ 00adaf40 size=828 calls_out=14 calls_in=5
// strings: 

undefined4
FUN_00adaf40(undefined4 ***param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 ***pppuVar2;
  undefined4 uVar1;
  int iVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined4 ***local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  char local_70;
  undefined2 local_6f;
  undefined1 local_6d;
  undefined4 ***local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 local_5c [2];
  byte bStack_5a;
  undefined1 local_59;
  char local_58;
  undefined4 ***local_50;
  undefined1 *local_4c;
  undefined4 ***local_48;
  undefined1 *local_44;
  undefined4 ***local_38;
  undefined1 *local_34;
  undefined4 ***local_2c;
  undefined1 *local_28;
  
  uVar7 = FUN_019aff98();
  iVar3 = (int)(uVar7 >> 0x20);
  pcVar6 = (char *)uVar7;
  if (pcVar6 == (char *)0x0) {
    uVar1 = FUN_00adb354(param_1,param_2);
    return uVar1;
  }
  FUN_0069f5ac(&local_68,pcVar6,iVar3);
  local_38 = param_1;
  local_34 = param_2;
  if (local_5c[0] == '\x02') {
    local_28 = &LAB_019ba78c;
    local_2c = &local_38;
    local_4c = local_64;
    local_50 = local_68;
    FUN_00664898(&local_48,&DAT_0059ec59,&local_2c);
    pppuVar2 = &local_50;
    pppuVar4 = &local_48;
LAB_00adb1dc:
    uVar1 = FUN_014b6844(pppuVar2,pppuVar4);
  }
  else {
    local_6f = stack0xffffffa5;
    local_6d = local_59;
    local_74 = local_60;
    local_78 = local_64;
    local_70 = local_5c[0];
    local_7c = local_68;
    FUN_01281710(&local_68,local_68,param_3,param_4);
    FUN_006926b4(&local_50,&local_68,local_64,local_60);
    local_2c = param_1;
    local_28 = param_2;
    if ((char)local_50 == '\x04') {
      FUN_019a6110(&local_50,local_68);
      if ((char)local_50 == '\x04') {
        FUN_01bf01d6(local_68);
        FUN_0069ff64(&local_68,&local_78,param_1,param_2);
        if (local_58 != '\x02') {
          local_28 = &LAB_019ba78c;
          local_2c = &local_38;
          FUN_00664898(&local_48,&DAT_005b42a8,&local_2c);
          uVar1 = FUN_0069f48c(&local_68,&local_48);
          goto LAB_00adb1e4;
        }
        local_68 = (undefined4 ***)0x0;
        if (iVar3 == 0) {
          pcVar6 = ".";
        }
        _local_5c = (uint3)bStack_5a << 0x10;
        local_64 = (undefined1 *)0x1b6;
        local_60 = 1;
        iVar5 = 1;
        if (0x1ffffffff < uVar7) {
          iVar5 = iVar3;
        }
        FUN_019a581c(&local_48,&local_68,pcVar6,iVar5);
        if ((char)local_48 == '\x04') {
          FUN_019a60bc(&local_50,local_44);
          FUN_01bf01d6(local_44);
        }
        else {
          local_50 = local_48;
          local_4c = local_44;
        }
        if (((uint)local_50 & 0xff) == 4) {
          return 0;
        }
        local_44 = &LAB_019ba78c;
        local_48 = &local_2c;
        local_34 = local_4c;
        local_38 = local_50;
        FUN_00664898(&local_68,&DAT_0059651e,&local_48);
        pppuVar2 = &local_38;
        pppuVar4 = &local_68;
        goto LAB_00adb1dc;
      }
      local_44 = &LAB_019ba78c;
      local_48 = &local_2c;
      local_38 = local_50;
      local_34 = local_4c;
      FUN_00664898(&local_68,&DAT_005b930e,&local_48);
      uVar1 = FUN_014b6844(&local_38,&local_68);
    }
    else {
      local_44 = &LAB_019ba78c;
      local_48 = &local_2c;
      local_38 = local_50;
      local_34 = local_4c;
      FUN_00664898(&local_68,&DAT_00578a4c,&local_48);
      uVar1 = FUN_014b6844(&local_38,&local_68);
    }
    FUN_006a00e0(&local_7c);
  }
LAB_00adb1e4:
  return uVar1;
}

