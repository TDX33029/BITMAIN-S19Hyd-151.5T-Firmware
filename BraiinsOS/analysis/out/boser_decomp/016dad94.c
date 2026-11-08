// FUN_016dad94 @ 016dad94 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_016dad94(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_3c [7];
  
  iVar2 = *param_2;
  iVar1 = *(int *)(iVar2 + 0x5c);
  iVar3 = iVar1 + 1;
  if (iVar1 == -1) {
    local_3c[0] = 0;
    FUN_016d4540(&local_80,param_2[1],param_2[2],param_3,local_3c);
    iVar3 = local_7c;
    if (local_80 != 0x22) {
      param_1[2] = local_78;
      param_1[3] = iStack_74;
      param_1[4] = iStack_70;
      param_1[5] = iStack_6c;
      param_1[6] = local_68;
      param_1[7] = iStack_64;
      param_1[8] = iStack_60;
      param_1[9] = iStack_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = local_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
      param_1[0xe] = iStack_48;
      param_1[0xf] = iStack_44;
      *param_1 = local_80;
      param_1[1] = local_7c;
      return;
    }
  }
  *(int *)(iVar2 + 0x5c) = iVar3;
  *param_1 = 0x22;
  param_1[1] = iVar3;
  return;
}

