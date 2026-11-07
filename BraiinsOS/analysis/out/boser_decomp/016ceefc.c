// FUN_016ceefc @ 016ceefc size=336 calls_out=5 calls_in=1
// strings: 

void FUN_016ceefc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_2 == param_2[1]) {
    *param_1 = 0x2b;
    return;
  }
  iVar3 = param_2[2];
  *param_2 = *param_2 + 0x1c;
  FUN_016cf170(&local_68,iVar3);
  if (local_68 == 0x2a) {
    FUN_016cf22c(&local_68,iVar3,0,0);
    iVar2 = local_60;
    iVar1 = local_64;
    iVar4 = local_60;
    if (local_68 == 0x2a) {
      FUN_016cf8b4(&local_68,iVar3);
      iVar4 = local_64;
      if (local_68 == 0x2a) {
        FUN_016ced90(&local_68,iVar3,iVar2,local_64);
        if ((local_68 == 0x2a) && (FUN_016cf98c(&local_68,iVar3,iVar1), local_68 == 0x2a)) {
          local_68 = 0x2a;
          local_64 = iVar1;
          goto LAB_016cf00c;
        }
        goto LAB_016cefe4;
      }
      iVar4 = local_60;
    }
  }
  else {
LAB_016cefe4:
    iVar4 = local_60;
  }
  local_a0 = local_5c;
  iStack_9c = iStack_58;
  iStack_98 = iStack_54;
  iStack_94 = iStack_50;
  local_90 = local_4c;
  iStack_8c = iStack_48;
  iStack_88 = iStack_44;
  iStack_84 = iStack_40;
  local_80 = local_3c;
  iStack_7c = iStack_38;
  iStack_78 = iStack_34;
  iStack_74 = iStack_30;
  iStack_70 = iStack_2c;
LAB_016cf00c:
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = iVar4;
  param_1[3] = local_a0;
  param_1[4] = iStack_9c;
  param_1[5] = iStack_98;
  param_1[6] = iStack_94;
  param_1[7] = local_90;
  param_1[8] = iStack_8c;
  param_1[9] = iStack_88;
  param_1[10] = iStack_84;
  param_1[0xb] = local_80;
  param_1[0xc] = iStack_7c;
  param_1[0xd] = iStack_78;
  param_1[0xe] = iStack_74;
  param_1[0xf] = iStack_70;
  return;
}

