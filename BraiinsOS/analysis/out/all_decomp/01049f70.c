// FUN_01049f70 @ 01049f70 size=628 calls_out=8 calls_in=0
// strings: 

void FUN_01049f70(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined *local_190;
  undefined4 local_178;
  undefined4 local_174;
  undefined *local_170;
  undefined4 local_13c;
  undefined *local_138;
  undefined4 local_108;
  undefined *local_104;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined4 local_e8;
  undefined *local_e4;
  undefined *local_d8;
  undefined *local_d4;
  undefined *local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  uint local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined1 local_88 [18];
  undefined2 local_76;
  undefined2 uStack_74;
  undefined2 local_72;
  undefined2 uStack_70;
  undefined2 local_6e;
  undefined2 uStack_6c;
  uint *local_68;
  undefined2 local_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined4 local_5e;
  undefined2 local_5a;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      cVar1 = *param_2;
      if (cVar1 == '*') {
        param_1[1] = 0x2a;
        *param_1 = 0x10000;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        return;
      }
    }
    else {
      cVar1 = *param_2;
    }
    if (cVar1 == '_') {
      FUN_0104930c(param_1,param_2,param_3);
      return;
    }
  }
  local_d4 = &DAT_0188aa18;
  local_d0 = &DAT_0188aa48;
  local_ea = 0x41;
  local_ec = 0x41;
  local_c8 = &DAT_0188a948;
  local_cc = 0;
  local_d8 = &DAT_0188a9e8;
  local_e4 = &DAT_0188a9dc;
  local_e8 = 0;
  local_104 = &DAT_0188a9ac;
  local_108 = 0;
  local_138 = &DAT_0188a948;
  local_13c = 0;
  local_170 = &DAT_0188a978;
  local_174 = 0;
  local_178 = 1;
  local_190 = &DAT_0188a9c4;
  local_194 = 0;
  local_198 = 1;
  FUN_010d872c(&local_1a8,&local_198,param_2,param_3,0xffffffff,0xfc009fff,0xffffffff,0xf8000001,0,0
              );
  if (local_1a8 == 0x80000001) {
    local_98 = local_1a8;
    local_94 = local_1a4;
    uStack_90 = local_1a0;
    local_68 = &local_98;
    local_64 = 0xa278;
    uStack_62 = 0x104;
    FUN_00600d2c(local_88,&DAT_00581380,&local_68);
    local_68._0_2_ = 0x11;
    local_6e = local_88._8_2_;
    uStack_6c = local_88._10_2_;
    local_72 = local_88._4_2_;
    uStack_70 = local_88._6_2_;
    local_5e = CONCAT22(local_6e,uStack_70);
    local_76 = local_88._0_2_;
    uStack_74 = local_88._2_2_;
    uStack_62 = uStack_74;
    uStack_60 = local_72;
    local_64 = local_76;
    local_5a = uStack_6c;
    iVar2 = thunk_FUN_016d4a50(0x44);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
    FUN_016dd1aa(iVar2,&local_68,0x44);
    *(undefined2 *)param_1 = 2;
    param_1[1] = iVar2;
    if (((int)local_98 < -0x7ffffffe) || (local_98 == 0)) {
LAB_0104a180:
      FUN_01049d28(&local_198);
      return;
    }
    local_1a4 = local_94;
  }
  else {
    FUN_0104930c(param_1,local_1a4,local_1a0);
    if ((local_1a8 & 0x7fffffff) == 0) goto LAB_0104a180;
  }
  thunk_FUN_016d3fb4(local_1a4);
  FUN_01049d28(&local_198);
  return;
}

