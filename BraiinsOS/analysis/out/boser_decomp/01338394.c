// FUN_01338394 @ 01338394 size=544 calls_out=6 calls_in=3
// strings: 

void FUN_01338394(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 local_144 [2];
  undefined4 local_13c;
  int local_138;
  undefined4 local_134;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  undefined1 local_110;
  undefined1 local_10c;
  undefined2 local_10a;
  undefined1 local_108;
  undefined4 local_107;
  undefined2 local_103;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int local_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined1 auStack_c4 [40];
  undefined1 auStack_9c [28];
  undefined1 local_80;
  char local_7f;
  char local_7e;
  char local_7d;
  char local_7c;
  char local_7b;
  char local_7a;
  undefined1 local_79;
  int local_78;
  undefined1 local_74;
  undefined1 local_73;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  local_10a = 0x202;
  local_107 = 0x2020202;
  local_110 = 3;
  local_108 = 2;
  local_134 = 2;
  local_13c = 2;
  local_144[0] = 0;
  local_103 = 0x302;
  local_124 = 2;
  local_12c = 2;
  local_10c = 0;
  if (*param_4 != 0) {
    local_138 = param_4[1];
    local_13c = 1;
  }
  if (param_4[2] != 0) {
    local_128 = param_4[3];
    local_12c = 1;
  }
  FUN_016bed94(auStack_c4);
  FUN_016c04f8(auStack_c4,local_144);
  local_74 = *(undefined1 *)((int)param_4 + 0x26);
  local_73 = *(undefined1 *)((int)param_4 + 0x29);
  local_7e = '\x02' - *(char *)((int)param_4 + 0x22);
  local_78 = param_4[7];
  local_80 = (undefined1)param_4[10];
  local_7c = '\x02' - *(char *)((int)param_4 + 0x25);
  local_79 = (undefined1)param_4[8];
  local_7d = '\x02' - *(char *)((int)param_4 + 0x23);
  local_7f = '\x02' - *(char *)((int)param_4 + 0x21);
  local_7a = '\x02' - (char)param_4[9];
  local_7b = *(char *)((int)param_4 + 0x27) << 1;
  FUN_016bfc64(&local_70,auStack_c4,param_2,param_3);
  if (local_70 == 2) {
    FUN_013385f8(auStack_9c);
    param_1[2] = local_68;
    *param_1 = 0x12;
    param_1[1] = local_6c;
  }
  else {
    local_100 = local_64;
    iStack_fc = iStack_60;
    iStack_f8 = iStack_5c;
    iStack_f4 = iStack_58;
    iStack_f0 = iStack_54;
    local_ec = local_50;
    iStack_e8 = iStack_4c;
    iStack_e4 = iStack_48;
    iStack_e0 = iStack_44;
    iStack_dc = iStack_40;
    local_d8 = local_3c;
    iStack_d4 = iStack_38;
    iStack_d0 = iStack_34;
    iStack_cc = iStack_30;
    iStack_c8 = iStack_2c;
    piVar1 = (int *)thunk_FUN_01be5118(0x48);
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x48);
    }
    *piVar1 = local_70;
    piVar1[1] = local_6c;
    piVar1[2] = local_68;
    piVar1[3] = local_100;
    piVar1[4] = iStack_fc;
    piVar1[5] = iStack_f8;
    piVar1[6] = iStack_f4;
    piVar1[7] = iStack_f0;
    piVar1[8] = local_ec;
    piVar1[9] = iStack_e8;
    piVar1[10] = iStack_e4;
    piVar1[0xb] = iStack_e0;
    piVar1[0xc] = iStack_dc;
    piVar1[0xd] = local_d8;
    piVar1[0xe] = iStack_d4;
    piVar1[0xf] = iStack_d0;
    piVar1[0x10] = iStack_cc;
    piVar1[0x11] = iStack_c8;
    *param_1 = 0x10;
    param_1[1] = piVar1;
    FUN_013385f8(auStack_9c);
  }
  return;
}

