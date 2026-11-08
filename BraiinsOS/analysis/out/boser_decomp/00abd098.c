// FUN_00abd098 @ 00abd098 size=252 calls_out=2 calls_in=2
// strings: 

void FUN_00abd098(int *param_1,undefined4 *param_2)

{
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  
  if (param_2[4] == -0x7ffffff9) {
    local_98 = -0x80000000;
  }
  else {
    local_a8 = *param_2;
    uStack_a4 = param_2[1];
    uStack_a0 = param_2[2];
    uStack_9c = param_2[3];
    local_98 = param_2[4];
    uStack_94 = param_2[5];
    local_90 = param_2[6];
    uStack_8c = param_2[7];
    uStack_88 = param_2[8];
    uStack_84 = param_2[9];
    uStack_80 = param_2[10];
    uStack_7c = param_2[0xb];
    if (local_98 != -0x80000000) {
      FUN_006ce100(&local_60);
      if ((local_60 == 2) || (local_60 == 2)) {
        *param_1 = 2;
        param_1[1] = 1;
        param_1[2] = local_5c;
        return;
      }
      param_1[2] = local_58;
      param_1[3] = local_54;
      param_1[4] = local_50;
      param_1[5] = iStack_4c;
      param_1[6] = iStack_48;
      *param_1 = local_60;
      param_1[1] = local_5c;
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = 0;
  FUN_00abbec8(&local_a8);
  return;
}

