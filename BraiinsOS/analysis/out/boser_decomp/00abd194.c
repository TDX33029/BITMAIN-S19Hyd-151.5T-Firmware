// FUN_00abd194 @ 00abd194 size=312 calls_out=2 calls_in=3
// strings: 

void FUN_00abd194(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_58 [4];
  int local_48;
  int iStack_44;
  int iStack_40;
  
  if (param_2[4] == -0x7ffffff9) {
    local_a8 = -0x80000000;
  }
  else {
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = param_2[4];
    uStack_a4 = param_2[5];
    local_a0 = param_2[6];
    uStack_9c = param_2[7];
    uStack_98 = param_2[8];
    uStack_94 = param_2[9];
    uStack_90 = param_2[10];
    uStack_8c = param_2[0xb];
    if (local_a8 != -0x80000000) {
      FUN_006c8594(local_58);
      if (local_58[0] == 2) {
        piVar1 = (int *)((uint)local_58 | 4);
        local_68 = *piVar1;
        iStack_64 = piVar1[1];
        iStack_60 = piVar1[2];
      }
      else {
        piVar1 = (int *)((uint)local_58 | 4);
        local_68 = *piVar1;
        iStack_64 = piVar1[1];
        iStack_60 = piVar1[2];
        if (local_58[0] != 2) {
          param_1[4] = local_48;
          param_1[5] = iStack_44;
          param_1[6] = iStack_40;
          param_1[1] = local_68;
          param_1[2] = iStack_64;
          param_1[3] = iStack_60;
          *param_1 = local_58[0];
          return;
        }
      }
      param_1[1] = local_68;
      param_1[2] = iStack_64;
      param_1[3] = iStack_60;
      *param_1 = 2;
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = -0x80000000;
  FUN_00abbec8(&local_b8);
  return;
}

