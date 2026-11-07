// FUN_012b5c88 @ 012b5c88 size=248 calls_out=4 calls_in=7
// strings: 

void FUN_012b5c88(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  undefined *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined **local_28;
  undefined1 *local_24;
  
  iVar5 = *(int *)(param_2 + 4);
  local_58 = 0;
  uStack_54 = 1;
  local_50 = 0;
  FUN_01bed4e2(auStack_48,iVar5 + 0x1c,0xe);
  bVar3 = *(char *)(iVar5 + 0x1c) != '\x03';
  bVar4 = *(char *)(iVar5 + 0x20) != '\x03';
  bVar2 = *(char *)(iVar5 + 0x24) != '\x03';
  bVar1 = *(short *)(iVar5 + 0x28) != 0;
  local_34 = 0;
  if (((bVar3 || bVar4) || bVar2) || bVar1) {
    local_34 = 4;
  }
  local_38 = &DAT_0056e530;
  local_28 = &local_38;
  if (((!bVar3 && !bVar4) && !bVar2) && !bVar1) {
    local_38 = (undefined *)0x1;
  }
  local_24 = &LAB_018a13b8;
  local_2c = &DAT_00666994;
  local_30 = auStack_48;
  FUN_012fa178(&local_58,&DAT_01ce25b4,&DAT_005bc6b1,&local_30);
  FUN_012b3a90(param_2,&local_58,param_3,param_4);
  FUN_012b3044(&local_58);
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = local_50;
  return;
}

