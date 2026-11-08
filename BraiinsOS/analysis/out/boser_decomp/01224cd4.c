// FUN_01224cd4 @ 01224cd4 size=164 calls_out=2 calls_in=1
// strings: 

void FUN_01224cd4(int *param_1,undefined4 *param_2)

{
  undefined4 local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  FUN_01965170(&local_48);
  if ((char)local_48 != '\x01') {
    if (local_48._1_1_ == '\0') {
      *param_1 = 5;
      param_1[1] = 0;
      return;
    }
    FUN_0124c770(&local_48,*param_2);
    if (local_48 != 5 || local_44 != 0) {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
      param_1[3] = iStack_3c;
      param_1[4] = local_38;
      param_1[5] = iStack_34;
      param_1[6] = iStack_30;
      param_1[7] = iStack_2c;
      param_1[8] = iStack_28;
      param_1[9] = local_24;
      param_1[10] = iStack_20;
      param_1[0xb] = iStack_1c;
      param_1[0xc] = iStack_18;
      param_1[0xd] = iStack_14;
      return;
    }
    local_44 = local_40;
  }
  *param_1 = 6;
  param_1[1] = 0;
  param_1[2] = local_44;
  return;
}

