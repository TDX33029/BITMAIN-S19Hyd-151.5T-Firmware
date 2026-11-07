// FUN_014d5d10 @ 014d5d10 size=416 calls_out=6 calls_in=4
// strings: 

void FUN_014d5d10(undefined2 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_21;
  
  puVar1 = (uint *)param_2[5];
  if (puVar1 == (uint *)param_2[7]) {
LAB_014d5d44:
    *param_1 = 0x400;
    return;
  }
  uVar4 = *puVar1;
  param_2[5] = (uint)(puVar1 + 8);
  if (uVar4 == 0x80000015) goto LAB_014d5d44;
  puVar2 = (uint *)((uint)&local_48 | 4);
  param_2[8] = param_2[8] + 1;
  uVar3 = puVar1[2];
  uVar5 = puVar1[3];
  *puVar2 = puVar1[1];
  puVar2[1] = uVar3;
  puVar2[2] = uVar5;
  local_38 = puVar1[4];
  local_34 = puVar1[5];
  uStack_30 = puVar1[6];
  uStack_2c = puVar1[7];
  local_48 = uVar4;
  if (*param_2 != 0x80000015) {
    FUN_014c81b0(param_2);
  }
  uVar3 = 0x15;
  if ((int)uVar4 < 0) {
    uVar3 = uVar4 ^ 0x80000000;
  }
  *param_2 = local_38;
  param_2[1] = local_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  switch(uVar3) {
  case 1:
    local_40 = local_44 & 0xff;
    local_3c = 0;
  case 4:
    FUN_014dbb88(&local_38,&switchD_014d5dd0::switchdataD_014d5dd4,local_40,local_3c);
    goto LAB_014d5e80;
  default:
    local_34 = FUN_014c8278(&local_48,&uStack_21,&DAT_01cf9e84);
    local_38 = CONCAT31(local_38._1_3_,1);
    goto LAB_014d5e94;
  case 0xc:
    FUN_014dc564(&local_38,local_40,local_3c);
    goto LAB_014d5e74;
  case 0xd:
    FUN_014dc564(&local_38,local_44,local_40);
    break;
  case 0xe:
    FUN_014db820(&local_38,local_40,local_3c);
LAB_014d5e74:
    FUN_019bb7e0(local_44,local_40);
LAB_014d5e80:
    if ((uVar3 | 2) == 0xe) goto LAB_014d5e94;
    break;
  case 0xf:
    FUN_014db820(&local_38,local_44,local_40);
  }
  FUN_014c81b0(&local_48);
LAB_014d5e94:
  if ((char)local_38 != '\x01') {
    *(undefined1 *)((int)param_1 + 1) = local_38._1_1_;
  }
  else {
    *(uint *)(param_1 + 2) = local_34;
  }
  *(bool *)param_1 = (char)local_38 == '\x01';
  return;
}

