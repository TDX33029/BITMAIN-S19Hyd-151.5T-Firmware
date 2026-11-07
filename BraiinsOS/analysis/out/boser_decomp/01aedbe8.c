// FUN_01aedbe8 @ 01aedbe8 size=400 calls_out=4 calls_in=3
// strings: 

void FUN_01aedbe8(int *param_1,undefined4 param_2,code *param_3,code *param_4,undefined4 param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_88;
  int local_84;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  code *local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  local_88 = 0x8000001d;
  local_84 = CONCAT31(local_84._1_3_,0x11);
  local_64 = param_5;
  local_60 = param_6;
  local_5c = 0;
  FUN_01af347c(&local_48,&local_64,0x30);
  iVar2 = local_40;
  iVar1 = local_44;
  if (local_48 == -0x7fffffd3) {
    FUN_01af3980(&local_48,&local_64);
    if (local_48 == -0x7fffffd3) {
      if (local_5c == local_60) {
        FUN_01aeb5f4(&local_88);
        uVar5 = (*param_4)(param_2);
        if (((int)((ulonglong)uVar5 >> 0x20) != iVar2) ||
           (iVar1 = thunk_FUN_01bed842((int)uVar5,iVar1,iVar2), iVar1 != 0)) {
          *param_1 = (int)&DAT_8000002c;
          return;
        }
        iVar1 = (*param_3)(param_2,local_44,local_40,param_7,param_8,param_9,param_10);
        iVar2 = -0x7fffffd3;
        if (iVar1 != 0) {
          iVar2 = -0x7ffffff1;
        }
        *param_1 = iVar2;
        return;
      }
      iVar4 = -0x7fffffe3;
      iVar3 = local_84;
      goto LAB_01aedd00;
    }
    iVar3 = local_44;
    param_4 = local_38;
    iVar1 = local_3c;
    iVar2 = local_40;
    iVar4 = local_48;
  }
  else {
    iVar3 = local_44;
    param_4 = local_38;
    iVar1 = local_3c;
    iVar4 = local_48;
  }
  local_58 = local_34;
  iStack_54 = iStack_30;
  iStack_50 = iStack_2c;
  FUN_01aeb5f4(&local_88);
LAB_01aedd00:
  param_1[5] = local_58;
  param_1[6] = iStack_54;
  param_1[7] = iStack_50;
  *param_1 = iVar4;
  param_1[1] = iVar3;
  param_1[2] = iVar2;
  param_1[3] = iVar1;
  param_1[4] = (int)param_4;
  return;
}

