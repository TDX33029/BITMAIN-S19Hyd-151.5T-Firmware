// FUN_0113cf28 @ 0113cf28 size=856 calls_out=11 calls_in=2
// strings: a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

undefined4 FUN_0113cf28(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  uint local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint *local_50;
  undefined *local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 uStack_30;
  int local_2c;
  
  local_7c = 0x1b6;
  local_80 = 0;
  local_78 = 0x1000100;
  local_74 = 0;
  FUN_015ec1bc(&local_70,&local_80,param_1,param_2);
  if ((char)local_70 != '\x04') {
    local_68 = local_70;
    local_64 = local_6c;
    local_60 = 0;
    local_5c = 1;
    local_4c = &DAT_018886e4;
    local_50 = &local_60;
    local_58 = 0;
    local_44 = 0;
    local_48 = &DAT_60000020;
    if (param_2 == 0) {
      iVar3 = FUN_00faace8(&local_50,1,0);
LAB_0113d248:
      if (iVar3 == 0) {
LAB_0113d250:
        local_38 = local_60;
        local_34 = local_5c;
        uStack_30 = local_58;
        uVar4 = FUN_0113d76c(&local_68,&local_38);
        return uVar4;
      }
    }
    else {
      local_40 = param_1;
      local_3c = param_2;
      do {
        FUN_00fb7f7c(&local_38,&local_40);
        if (local_38 == 0) goto LAB_0113d250;
        if (local_2c == 0) {
          iVar3 = FUN_00faace8(&local_50,local_38,local_34);
          goto LAB_0113d248;
        }
        iVar3 = FUN_01009e50(&local_60);
      } while ((iVar3 == 0) && (iVar3 = FUN_01009eb0(&local_60,0xfffd), iVar3 == 0));
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_40,
                 &DAT_018886fc,&DAT_018af130);
  }
  if (param_4 != 0) {
    puVar5 = &DAT_018aeaf8;
    do {
      while (uVar2 = FUN_016e034e(local_6c,param_3,param_4), uVar2 == 0xffffffff) {
        puVar1 = (uint *)FUN_016d2bc8();
        local_38 = local_38 & 0xffffff00;
        local_34 = *puVar1;
        if (*puVar1 != 4) {
          puVar5 = &local_38;
LAB_0113d010:
          local_68 = *puVar5;
          if ((local_68 & 0xff) != 4) {
            local_64 = puVar5[1];
            local_58 = 0;
            local_60 = 0;
            local_44 = 0;
            local_5c = 1;
            local_48 = &DAT_60000020;
            local_50 = &local_60;
            local_4c = &DAT_018886e4;
            if (param_2 == 0) {
              iVar3 = FUN_00faace8(&local_50,1,0);
              goto LAB_0113d178;
            }
            local_40 = param_1;
            local_3c = param_2;
            goto LAB_0113d094;
          }
          goto LAB_0113d020;
        }
        if (param_4 == 0) goto LAB_0113d020;
      }
      local_34 = uVar2;
      local_38 = CONCAT31(local_38._1_3_,4);
      if (uVar2 == 0) goto LAB_0113d010;
      if (param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,param_4,param_4,&DAT_018aeb00);
      }
      param_3 = param_3 + uVar2;
      param_4 = param_4 - uVar2;
    } while (param_4 != 0);
  }
LAB_0113d020:
  FUN_016dffb2(local_6c);
  return 0;
LAB_0113d094:
  FUN_00fb7f7c(&local_38,&local_40);
  if (local_38 == 0) goto LAB_0113d180;
  if (local_2c == 0) {
    iVar3 = FUN_00faace8(&local_50,local_38,local_34);
LAB_0113d178:
    if (iVar3 == 0) {
LAB_0113d180:
      local_38 = local_60;
      local_34 = local_5c;
      uStack_30 = local_58;
      uVar4 = FUN_0113d76c(&local_68,&local_38);
      FUN_016dffb2(local_6c);
      return uVar4;
    }
LAB_0113d0e0:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_40,
                 &DAT_018886fc,&DAT_018af130);
  }
  iVar3 = FUN_01009e50(&local_60);
  if ((iVar3 != 0) || (iVar3 = FUN_01009eb0(&local_60,0xfffd), iVar3 != 0)) goto LAB_0113d0e0;
  goto LAB_0113d094;
}

