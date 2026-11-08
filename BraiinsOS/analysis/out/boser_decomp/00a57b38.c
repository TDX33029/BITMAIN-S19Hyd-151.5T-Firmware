// FUN_00a57b38 @ 00a57b38 size=184 calls_out=3 calls_in=3
// strings: Schedule and Offset is required when enabling autoupgrade

void FUN_00a57b38(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int unaff_r7;
  undefined1 auStack_1a0 [176];
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int local_d4;
  undefined1 auStack_d0 [176];
  
  if (param_2 == 0) {
    local_d8 = -0x80000000;
    local_d4 = unaff_r7;
  }
  else {
    if (*param_3 == 2) {
      iVar1 = FUN_00667978("Schedule and Offset is required when enabling autoupgrade",0x39);
      *param_1 = -0x7fffffff;
      param_1[1] = iVar1;
      return;
    }
    local_f0 = *param_3;
    iStack_ec = param_3[1];
    iStack_e8 = param_3[2];
    iStack_e4 = param_3[3];
    iStack_e0 = param_3[4];
    iStack_dc = param_3[5];
    FUN_00a57bf4(&local_d8);
    if (local_d8 == -0x80000000) {
      *param_1 = -0x7fffffff;
      param_1[1] = local_d4;
      return;
    }
    FUN_01bed4e2(auStack_1a0,auStack_d0,0xb0);
  }
  *param_1 = local_d8;
  param_1[1] = local_d4;
  FUN_01bed4e2(param_1 + 2,auStack_1a0,0xb0);
  *(char *)(param_1 + 0x2e) = (char)param_2;
  return;
}

