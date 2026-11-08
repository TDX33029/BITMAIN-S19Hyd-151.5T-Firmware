// FUN_012778ac @ 012778ac size=156 calls_out=2 calls_in=0
// strings: 

void FUN_012778ac(int *param_1,int param_2,int param_3,int param_4)

{
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_58 = CONCAT31(local_58._1_3_,10);
  local_24 = param_4;
  FUN_01a41ac0(param_1,&local_58,&local_24,&DAT_01c25790);
  if (*param_1 == 2) {
    local_1c = 0;
    local_20 = param_2 + param_3 * 0x10;
    local_24 = param_2;
    FUN_01223e04(&local_58,&local_24);
    if (local_58 == 2) {
      *param_1 = 2;
    }
    else {
      *param_1 = local_58;
      param_1[1] = iStack_54;
      param_1[2] = iStack_50;
      param_1[3] = iStack_4c;
      param_1[4] = iStack_48;
      param_1[5] = iStack_44;
      param_1[6] = local_40;
      param_1[7] = iStack_3c;
      param_1[8] = iStack_38;
      param_1[9] = iStack_34;
      param_1[10] = iStack_30;
      param_1[0xb] = iStack_2c;
    }
  }
  return;
}

