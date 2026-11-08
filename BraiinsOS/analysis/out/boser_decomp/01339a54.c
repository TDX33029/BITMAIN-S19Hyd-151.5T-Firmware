// FUN_01339a54 @ 01339a54 size=180 calls_out=3 calls_in=0
// strings: 

void FUN_01339a54(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar2 = *(int *)(param_2 + 0x3c);
  local_40 = -1;
  local_44 = iVar2 + 1;
  local_48 = 7;
  FUN_013387b0(param_2 + 0x34,&local_48);
  FUN_01339e00(&local_48,param_2,param_3,param_4);
  iVar1 = local_48;
  if (local_48 == 0x12) {
    local_48 = 0x10;
    FUN_013387b0(param_2 + 0x34,&local_48);
    FUN_01339954(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),iVar2,
                 *(undefined4 *)(param_2 + 0x3c),1);
  }
  else {
    param_1[1] = local_44;
    param_1[2] = local_40;
    param_1[3] = iStack_3c;
    param_1[4] = iStack_38;
  }
  *param_1 = iVar1;
  return;
}

