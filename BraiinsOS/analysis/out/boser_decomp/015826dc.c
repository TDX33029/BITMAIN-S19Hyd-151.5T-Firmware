// FUN_015826dc @ 015826dc size=356 calls_out=3 calls_in=1
// strings: 

void FUN_015826dc(int *param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  undefined4 local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int *local_38;
  undefined2 *local_34;
  undefined4 *local_30;
  undefined2 *local_2c;
  int *local_28;
  undefined2 *local_24;
  
  local_5c = param_5;
  local_60 = param_4;
  if (*param_1 == -0x80000000) {
    local_58 = param_1[1];
    uVar1 = param_1[2];
    if (param_2 != 0) {
      if (param_2 < uVar1) {
        if (*(char *)(local_58 + param_2) < -0x40) {
LAB_0158272c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_58,uVar1,0,param_2,&DAT_01cfc038);
        }
      }
      else if (param_2 != uVar1) goto LAB_0158272c;
    }
    local_54 = param_2;
    if (param_3 != 0) {
      if (param_3 < uVar1) {
        if (*(char *)(local_58 + param_3) < -0x40) {
LAB_0158279c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_58,uVar1,param_3,uVar1,&DAT_01cfc048);
        }
      }
      else if (uVar1 != param_3) goto LAB_0158279c;
    }
    local_50 = local_58 + param_3;
    local_28 = &local_50;
    local_30 = &local_60;
    local_24 = &DAT_0132b6a0;
    local_2c = &DAT_0132b6a0;
    local_34 = &DAT_0132b6a0;
    local_38 = &local_58;
    local_4c = uVar1 - param_3;
    FUN_00664898(&local_48,&DAT_005a902e,&local_38);
    *param_1 = local_48;
    param_1[1] = iStack_44;
    param_1[2] = iStack_40;
  }
  else {
    FUN_01ad0484(param_1,param_1[3] + param_2,param_3 + param_1[3],param_4,param_5,&DAT_01cfc058);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = (param_5 - param_3) + param_2 + param_1[3];
  return;
}

