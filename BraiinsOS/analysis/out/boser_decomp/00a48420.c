// FUN_00a48420 @ 00a48420 size=664 calls_out=13 calls_in=1
// strings: netmask | internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a48420(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  undefined4 local_80;
  int local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int local_64;
  uint uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint local_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 == 0) {
    uVar1 = FUN_007025b0(param_1,&DAT_0056ff88,8);
    if (uVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      iVar4 = param_1[4];
      iVar3 = param_1[5];
      local_94 = param_1[6];
      param_1[4] = -0x80000000;
      if (iVar4 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_9c = iVar4;
      local_98 = iVar3;
      FUN_0196aa8c(&local_48,param_3);
      if (local_48 == 0x80000000) {
        uVar1 = local_44;
LAB_00a48670:
        FUN_019bb7e0(iVar4,iVar3);
      }
      else {
        local_90 = local_48;
        local_8c = local_44;
        local_88 = uStack_40;
        for (param_3 = param_3 * 0x18; param_3 != 0; param_3 = param_3 + -0x18) {
          local_58 = 0x80000000;
          local_5c = 0;
          local_64 = 0;
          local_68 = 0;
          uVar1 = FUN_01271f48(&local_68,&DAT_004cfb47,7,*(undefined4 *)(param_2 + 4),
                               *(undefined4 *)(param_2 + 8));
          if ((uVar1 != 0) ||
             (uVar1 = FUN_01271f48(&local_68,"netmask",7,*(undefined4 *)(param_2 + 0x10),
                                   *(undefined4 *)(param_2 + 0x14)), uVar1 != 0)) {
            FUN_0127464c(&local_68);
LAB_00a48668:
            FUN_00949b70(&local_90);
            goto LAB_00a48670;
          }
          local_48 = local_68;
          local_44 = local_64;
          uStack_40 = uStack_60;
          uStack_3c = local_5c;
          uStack_38 = local_58;
          uStack_34 = uStack_54;
          uStack_30 = uStack_50;
          uStack_2c = uStack_4c;
          FUN_0196ac88(&local_80);
          uVar1 = local_88;
          if ((char)local_80 == '\x06') {
            uVar1 = local_7c;
            goto LAB_00a48668;
          }
          if (local_88 == local_90) {
            FUN_01969b6c(&local_90);
          }
          param_2 = param_2 + 0x18;
          puVar2 = (undefined4 *)(local_8c + uVar1 * 0x18);
          *puVar2 = local_80;
          puVar2[1] = local_7c;
          puVar2[2] = uStack_78;
          puVar2[3] = uStack_74;
          puVar2[4] = uStack_70;
          puVar2[5] = uStack_6c;
          local_88 = uVar1 + 1;
        }
        uStack_40 = *(undefined4 *)((uint)&local_90 | 4);
        uStack_3c = ((undefined4 *)((uint)&local_90 | 4))[1];
        local_44 = local_90;
        local_48 = CONCAT31(local_48._1_3_,4);
        FUN_0196b484(&local_68,param_1 + 1,&local_9c,&local_48);
        uVar1 = 0;
        if ((local_68 & 0xff) != 6) {
          FUN_00db4764(&local_68);
        }
      }
    }
  }
  else {
    local_48 = 10;
    uVar1 = FUN_01966fbc(&local_48,0,0);
  }
  return uVar1;
}

