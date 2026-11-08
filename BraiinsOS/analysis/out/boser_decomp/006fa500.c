// FUN_006fa500 @ 006fa500 size=104 calls_out=3 calls_in=9
// strings: 

void FUN_006fa500(int *param_1,undefined4 *param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  local_3c = param_2[3];
  uStack_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  FUN_006fb748(&local_28,&local_48);
  if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c062b0);
  }
  *param_1 = local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  param_1[3] = iStack_1c;
  param_1[4] = iStack_18;
  FUN_006f6e98(local_48,local_3c);
  return;
}

