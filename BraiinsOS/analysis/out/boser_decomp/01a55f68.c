// FUN_01a55f68 @ 01a55f68 size=356 calls_out=6 calls_in=3
// strings: 

void FUN_01a55f68(undefined4 *param_1,int *param_2)

{
  undefined1 auStack_168 [48];
  undefined1 auStack_138 [24];
  int local_120;
  undefined4 local_11c;
  undefined4 local_100;
  undefined4 uStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 local_a4;
  int local_a0 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 == 1) {
    if (1 < (uint)param_2[0x17]) goto LAB_014d2044;
    FUN_01bed4e2(auStack_168,param_2 + 2,0x68);
    local_34 = 0x80000003;
    local_40 = 0x80000003;
    FUN_01a4a968(&local_100);
    local_68 = local_40;
    uStack_64 = uStack_3c;
    uStack_60 = uStack_38;
    uStack_5c = local_34;
    uStack_58 = uStack_30;
    uStack_54 = uStack_2c;
    local_50 = 0;
    local_a0[0] = 0;
    local_44 = 0;
    local_98 = local_100;
    uStack_94 = uStack_fc;
    iStack_90 = local_f8;
    iStack_8c = iStack_f4;
    iStack_88 = iStack_f0;
    iStack_84 = iStack_ec;
    local_80 = local_e8;
    iStack_7c = local_e4;
    iStack_78 = local_e0;
    iStack_74 = iStack_dc;
    iStack_70 = iStack_d8;
    iStack_6c = iStack_d4;
    local_c8 = local_40;
    uStack_c4 = uStack_3c;
    uStack_c0 = uStack_38;
    uStack_bc = local_34;
    uStack_b8 = uStack_30;
    uStack_b4 = uStack_2c;
    local_a4 = 0;
    local_100 = 0;
    local_b0 = 0;
    uStack_ac = uStack_4c;
    uStack_a8 = uStack_48;
    local_f8 = param_2[2];
    iStack_f4 = param_2[3];
    iStack_f0 = param_2[4];
    iStack_ec = param_2[5];
    local_e8 = param_2[6];
    local_e4 = param_2[7];
    local_e0 = param_2[8];
    iStack_dc = param_2[9];
    iStack_d8 = param_2[10];
    iStack_d4 = param_2[0xb];
    iStack_d0 = param_2[0xc];
    iStack_cc = param_2[0xd];
    FUN_01272b84(&local_98);
    FUN_01a61150(local_e4,local_e0);
    FUN_01bed4e2(local_a0,&local_100,0x60);
    if (-1 < local_120) {
      FUN_0134bd64(local_120,local_11c);
    }
    FUN_01a60060(auStack_138);
    param_2 = local_a0;
  }
  else {
    if (*param_2 != 2) {
LAB_014d2044:
      FUN_01bed4e2(param_1,param_2,0x70);
      return;
    }
    param_2 = param_2 + 2;
  }
  FUN_01bed4e2(param_1 + 2,param_2,0x60);
  *param_1 = 4;
  return;
}

