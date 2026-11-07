// FUN_014dc6c8 @ 014dc6c8 size=632 calls_out=8 calls_in=4
// strings: 

void FUN_014dc6c8(undefined2 *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  int local_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  char local_60;
  undefined1 local_5f;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  int local_2c;
  
  iVar5 = param_2[5];
  if (param_2[4] == iVar5) {
LAB_014dc72c:
    *param_1 = 0x200;
    return;
  }
  iVar4 = param_2[6];
  iVar6 = param_2[7];
  iVar2 = param_2[4];
LAB_014dc6f8:
  iVar3 = iVar2 + 0x20;
  param_2[4] = iVar3;
  FUN_01962c44(&local_80,iVar2,iVar4,iVar6);
  if (local_80 == 0x80000015) goto code_r0x014dc720;
  if (*param_2 != -0x7fffffeb) {
    FUN_014dbd38(param_2);
  }
  *param_2 = local_70;
  param_2[1] = iStack_6c;
  param_2[2] = iStack_68;
  param_2[3] = iStack_64;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  uVar1 = 0x15;
  if ((int)local_80 < 0) {
    uVar1 = local_80 ^ 0x80000000;
  }
  switch(uVar1) {
  case 1:
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    uStack_7c = uStack_7c & 0xff;
    if (uStack_7c == 0) {
LAB_014dc8e4:
      local_60 = '\0';
      local_5f = 0;
    }
    else {
      if (uStack_7c == 1) goto LAB_014dc8a8;
      local_2c = 0;
      local_38 = CONCAT31(local_38._1_3_,1);
      local_30 = uStack_7c;
      local_5c = FUN_01967740(&local_38,&local_48,&DAT_01cf9df4);
LAB_014dc974:
      local_60 = '\x01';
    }
    break;
  default:
    local_5c = FUN_014c8278(&local_80,&local_58,&DAT_01cf9df4);
    local_60 = '\x01';
    goto LAB_014dc8f8;
  case 4:
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    if (uStack_78 == 0 && local_74 == 0) goto LAB_014dc8e4;
    if (!(uStack_78 == 1 && local_74 == 0)) {
      local_30 = uStack_78;
      local_38 = CONCAT31(local_38._1_3_,1);
      local_2c = local_74;
      local_5c = FUN_01967740(&local_38,&local_48,&DAT_01cf9df4);
      goto LAB_014dc974;
    }
LAB_014dc8a8:
    local_60 = '\0';
    local_5f = 1;
    break;
  case 0xc:
    local_38 = *param_3;
    uStack_34 = param_3[1];
    local_30 = param_3[2];
    local_2c = param_3[3];
    FUN_014c9538(&local_60,&local_38,uStack_78);
    goto LAB_014dc8d4;
  case 0xd:
    local_38 = *param_3;
    uStack_34 = param_3[1];
    local_30 = param_3[2];
    local_2c = param_3[3];
    FUN_014c9538(&local_60,&local_38,uStack_7c,uStack_78);
    break;
  case 0xe:
    local_38 = *param_3;
    uStack_34 = param_3[1];
    local_30 = param_3[2];
    local_2c = param_3[3];
    FUN_014c95ec(&local_60,&local_38,uStack_78);
LAB_014dc8d4:
    FUN_019bb7e0(uStack_7c,uStack_78);
    goto LAB_014dc8f8;
  case 0xf:
    local_38 = *param_3;
    uStack_34 = param_3[1];
    local_30 = param_3[2];
    local_2c = param_3[3];
    FUN_014c95ec(&local_60,&local_38,uStack_7c,uStack_78);
  }
  FUN_014c81b0(&local_80);
LAB_014dc8f8:
  if (local_60 != '\x01') {
    *(undefined1 *)((int)param_1 + 1) = local_5f;
  }
  else {
    *(undefined4 *)(param_1 + 2) = local_5c;
  }
  *(bool *)param_1 = local_60 == '\x01';
  return;
code_r0x014dc720:
  iVar2 = iVar3;
  if (iVar3 == iVar5) goto LAB_014dc72c;
  goto LAB_014dc6f8;
}

