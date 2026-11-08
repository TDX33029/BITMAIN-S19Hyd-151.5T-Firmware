// FUN_01006a24 @ 01006a24 size=260 calls_out=2 calls_in=14
// strings: 

void FUN_01006a24(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,int *param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *local_30;
  undefined2 *local_2c;
  undefined4 *local_28;
  undefined2 *local_24;
  
  local_64 = param_5;
  local_60 = *param_6;
  iStack_5c = param_6[1];
  iStack_58 = param_6[2];
  local_54 = *param_7;
  iStack_50 = param_7[1];
  iStack_4c = param_7[2];
  local_68 = param_4;
  if (local_60 == 0 && local_54 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (local_54 == 0 || local_60 == 0) {
      piVar1 = &local_60;
      if (local_54 == 0) {
        piVar1 = &local_54;
        param_7 = param_6;
      }
      iVar2 = param_7[1];
      iVar3 = param_7[2];
      param_1[1] = *param_7;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      *param_1 = 0;
      goto LAB_01006b1c;
    }
    local_28 = &local_48;
    local_24 = &DAT_0132b6a0;
    local_2c = &DAT_0132b6a0;
    local_48 = param_2;
    local_44 = param_3;
    local_30 = (undefined1 *)&local_68;
    FUN_00664898(&local_40,&DAT_0058eda6,&local_30);
    param_1[1] = local_40;
    param_1[2] = uStack_3c;
    param_1[3] = uStack_38;
    *param_1 = 1;
  }
  FUN_00feb758(&local_60);
  piVar1 = &local_54;
LAB_01006b1c:
  FUN_00feb758(piVar1);
  return;
}

