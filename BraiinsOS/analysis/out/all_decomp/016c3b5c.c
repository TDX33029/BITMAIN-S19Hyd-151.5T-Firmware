// FUN_016c3b5c @ 016c3b5c size=284 calls_out=3 calls_in=2
// strings: 

void FUN_016c3b5c(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  
  local_4c = 0;
  uStack_54 = param_2;
  local_50 = param_3;
  FUN_016c607c(&local_38,&uStack_54,0x30);
  iVar2 = local_30;
  iVar1 = local_34;
  if (local_38 == -0x7fffffd3) {
    FUN_016c87f0(&local_38,&uStack_54);
    if (local_38 == -0x7fffffd3) {
      if (local_4c == local_50) {
        param_1[2] = iVar2;
        *param_1 = -0x7fffffd3;
        param_1[1] = iVar1;
        param_1[3] = local_34;
        param_1[4] = local_30;
        FUN_016c3a1c(param_4);
        return;
      }
      iVar1 = param_4[1];
      iVar2 = param_4[2];
      iVar3 = param_4[3];
      *param_1 = *param_4;
      param_1[1] = iVar1;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      iVar1 = param_4[5];
      iVar2 = param_4[6];
      iVar3 = param_4[7];
      param_1[4] = param_4[4];
      param_1[5] = iVar1;
      param_1[6] = iVar2;
      param_1[7] = iVar3;
      return;
    }
    local_48 = local_24;
    local_44 = iStack_20;
    local_40 = local_1c;
  }
  else {
    local_48 = local_24;
    local_44 = iStack_20;
    local_40 = local_1c;
  }
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  param_1[3] = local_2c;
  param_1[4] = local_28;
  param_1[5] = local_48;
  param_1[6] = local_44;
  param_1[7] = local_40;
  FUN_016c3a1c(param_4);
  return;
}

