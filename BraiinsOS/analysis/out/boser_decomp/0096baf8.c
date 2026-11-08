// FUN_0096baf8 @ 0096baf8 size=484 calls_out=12 calls_in=1
// strings: static | internal error: entered unreachable code | serialize_value called before serialize_key

void FUN_0096baf8(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38 [4];
  int local_34;
  
  local_78 = -0x80000000;
  local_7c = 0;
  local_84 = 0;
  local_88 = 0;
  iVar3 = FUN_01271f48(&local_88,&DAT_00570b90,8,DAT_01d4bf58,DAT_01d4bf5c);
  if (iVar3 == 0) {
    if (local_88 == 1) {
      local_68 = 10;
      iVar3 = FUN_01966fbc(&local_68,0,0);
      goto LAB_0096bba4;
    }
    iVar3 = FUN_007025b0(&local_88,&DAT_00570770,8);
    uVar2 = local_74;
    iVar1 = local_78;
    if (iVar3 != 0) goto LAB_0096bba4;
    if (local_88 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
    }
    bVar4 = local_78 == -0x80000000;
    local_78 = -0x80000000;
    if (bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
    }
    local_3c = local_70;
    local_40 = local_74;
    local_44 = iVar1;
    if (DAT_01d4bf60 == -0x80000000) {
      FUN_00a45368(local_38,0x70636864);
    }
    else {
      if (DAT_01d4bf60 == -0x7fffffff) {
        local_38[0] = '\0';
        goto LAB_0096bc5c;
      }
      FUN_00a44f88(local_38,"static",&DAT_01d4bf60);
    }
    if (local_38[0] != '\x06') {
LAB_0096bc5c:
      FUN_0196b484(&local_68,(uint)&local_88 | 4,&local_44,local_38);
      if ((char)local_68 != '\x06') {
        FUN_00db4764(&local_68);
      }
      local_68 = local_88;
      uStack_64 = local_84;
      uStack_60 = uStack_80;
      uStack_5c = local_7c;
      local_58 = local_78;
      uStack_54 = local_74;
      uStack_50 = local_70;
      uStack_4c = uStack_6c;
      FUN_0196ac88(param_1,&local_68);
      return;
    }
    FUN_019bb7e0(iVar1,uVar2);
    iVar3 = local_34;
  }
LAB_0096bba4:
  *(int *)(param_1 + 4) = iVar3;
  *param_1 = 6;
  FUN_0127464c(&local_88);
  return;
}

