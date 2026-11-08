// FUN_012c02fc @ 012c02fc size=224 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_012c02fc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x28) << 3;
  iVar3 = 0;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(int *)(iVar4 + iVar3 * 8 + 4) == param_3) &&
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar4 + iVar3 * 8),param_2,param_3), iVar1 == 0))
    break;
    iVar2 = iVar2 + -8;
    iVar3 = iVar3 + 1;
  }
  FUN_01298f6c(param_1 + 0x20,iVar3);
  FUN_01298ea8(&local_60,param_1 + 0x2c,iVar3);
  if (local_60 == 2) {
    return 0;
  }
  local_a8 = local_60;
  uStack_a4 = uStack_5c;
  uStack_a0 = uStack_58;
  uStack_9c = uStack_54;
  uStack_98 = uStack_50;
  local_94 = local_4c;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  uStack_88 = uStack_40;
  uStack_84 = uStack_3c;
  local_80 = local_38;
  uStack_7c = uStack_34;
  uStack_78 = uStack_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  if (local_60 == 2) {
    return 0;
  }
  FUN_0129ba30(&local_a8);
  return 1;
}

