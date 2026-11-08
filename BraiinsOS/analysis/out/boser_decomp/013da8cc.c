// FUN_013da8cc @ 013da8cc size=536 calls_out=7 calls_in=1
// strings: 

void FUN_013da8cc(undefined2 *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined *local_178;
  undefined4 local_160;
  undefined4 local_15c;
  undefined *local_158;
  undefined4 local_124;
  undefined *local_120;
  undefined4 local_f0;
  undefined *local_ec;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined4 local_d0;
  undefined *local_cc;
  undefined *local_c0;
  undefined *local_bc;
  undefined *local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  int local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *local_64;
  code *local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      if (*param_2 == '_') {
LAB_013da93c:
        FUN_013d9998(param_1,param_2,param_3);
        return;
      }
      if (*param_2 == '*') {
        *(undefined1 *)(param_1 + 2) = 0x2a;
        param_1[1] = 1;
        FUN_01bed93e((int)param_1 + 5,0,0x17);
        *param_1 = 0;
        return;
      }
    }
    else if (*param_2 == '_') goto LAB_013da93c;
  }
  local_cc = &DAT_01cf9014;
  local_ec = &DAT_01cf9054;
  local_d2 = 0x41;
  local_d4 = 0x41;
  local_b0 = &DAT_01cf9084;
  local_b4 = 0;
  local_d0 = 0;
  local_f0 = 0;
  local_120 = &DAT_01cf9084;
  local_124 = 0;
  local_158 = &DAT_01cf9020;
  local_15c = 0;
  local_160 = 1;
  local_178 = &DAT_01cf906c;
  local_17c = 0;
  local_180 = 1;
  local_b8 = &DAT_01cf912c;
  local_bc = &DAT_01cf90fc;
  local_c0 = &DAT_01cf915c;
  FUN_0144d298(&local_190,&local_180,param_2,param_3,0xffffffff,0xfc009fff,0xffffffff,0xf8000001,0,0
              );
  if (local_190 == -0x7fffffff) {
    local_64 = &local_80;
    local_80 = local_190;
    local_7c = local_18c;
    uStack_78 = local_188;
    local_60 = FUN_013dab58;
    FUN_00664898(&local_70,&DAT_0058353d,&local_64);
    local_60 = (code *)local_70;
    uStack_5c = uStack_6c;
    uStack_58 = uStack_68;
    local_64 = (int *)CONCAT22(local_64._2_2_,0x11);
    uVar1 = FUN_013e649c(&local_64);
    *param_1 = 2;
    *(undefined4 *)(param_1 + 2) = uVar1;
    if (local_80 < -0x7ffffffe) goto LAB_013daad4;
    local_190 = local_80;
    local_18c = local_7c;
  }
  else {
    FUN_013d9998(param_1,local_18c,local_188);
    if (local_190 == -0x80000000) goto LAB_013daad4;
  }
  FUN_019bb7e0(local_190,local_18c);
LAB_013daad4:
  FUN_013da4dc(&local_180);
  return;
}

