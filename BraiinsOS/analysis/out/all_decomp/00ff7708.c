// FUN_00ff7708 @ 00ff7708 size=708 calls_out=6 calls_in=2
// strings: 

void FUN_00ff7708(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_14c [2];
  undefined4 local_144;
  int local_140;
  undefined4 local_13c;
  int local_134;
  int local_130;
  undefined4 local_12c;
  undefined1 local_118;
  undefined1 local_114;
  undefined2 local_112;
  undefined1 local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_bc [2];
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_9c;
  int *local_94;
  undefined4 local_90;
  char local_88;
  undefined1 local_84;
  undefined4 local_82;
  undefined4 local_7e;
  undefined1 local_7a;
  undefined1 local_78;
  undefined4 local_77;
  undefined2 local_73;
  undefined1 local_71;
  int local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = 3;
  local_110 = 2;
  local_118 = 3;
  local_13c = 2;
  local_144 = 2;
  local_134 = 2;
  if (*param_4 == 1) {
    local_144 = 1;
    iVar2 = param_4[1];
    local_140 = iVar2;
  }
  local_10b = 0x302;
  local_10f = 0x2020202;
  local_112 = 0x202;
  local_114 = 0;
  local_12c = 2;
  local_14c[0] = 0;
  iVar1 = param_4[2];
  local_7e = 0x2020202;
  bVar3 = iVar1 == 1;
  local_82 = 0x2020202;
  if (bVar3) {
    iVar2 = 1;
  }
  local_77 = 0x2020202;
  if (bVar3) {
    iVar1 = param_4[3];
    local_134 = iVar2;
  }
  local_70 = 0xfa;
  local_78 = 1;
  if (bVar3) {
    local_130 = iVar1;
  }
  local_73 = 0x202;
  local_7a = 3;
  local_88 = '\x03';
  local_6a = 0;
  local_6c = 0;
  local_84 = 0;
  local_9c = 2;
  local_a4 = 2;
  local_ac = 2;
  local_b4 = 2;
  local_bc[0] = 0;
  local_71 = 10;
  FUN_013c1294(local_bc,local_14c);
  local_70 = param_4[7];
  local_78 = (undefined1)param_4[10];
  local_6c = CONCAT11(*(undefined1 *)((int)param_4 + 0x29),*(undefined1 *)((int)param_4 + 0x26));
  local_71 = (undefined1)param_4[8];
  local_73 = CONCAT11('\x02' - (char)param_4[9],*(char *)((int)param_4 + 0x27) << 1);
  local_77 = CONCAT13('\x02' - *(char *)((int)param_4 + 0x25),
                      CONCAT12('\x02' - *(char *)((int)param_4 + 0x23),
                               CONCAT11('\x02' - *(char *)((int)param_4 + 0x22),
                                        '\x02' - *(char *)((int)param_4 + 0x21))));
  FUN_013bec5c(&local_108,local_bc,param_2,param_3);
  if (local_108 == 2) {
    if (local_88 != '\x03' && local_88 != '\x02') {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *local_94;
        bVar3 = (bool)hasExclusiveAccess(local_94);
      } while (!bVar3);
      *local_94 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(local_94,local_90);
      }
    }
    *param_1 = 0x12;
    param_1[1] = uStack_104;
    param_1[2] = uStack_100;
    return;
  }
  local_5c = local_fc;
  uStack_58 = uStack_f8;
  uStack_54 = uStack_f4;
  uStack_50 = uStack_f0;
  uStack_4c = uStack_ec;
  local_48 = local_e8;
  uStack_44 = uStack_e4;
  uStack_40 = uStack_e0;
  uStack_3c = uStack_dc;
  uStack_38 = uStack_d8;
  local_34 = local_d4;
  uStack_30 = uStack_d0;
  uStack_2c = uStack_cc;
  uStack_28 = uStack_c8;
  uStack_24 = uStack_c4;
  local_68 = local_108;
  uStack_64 = uStack_104;
  uStack_60 = uStack_100;
  iVar2 = thunk_FUN_016d4a50(0x48);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x48);
  }
  FUN_016dd1aa(iVar2,&local_68,0x48);
  *param_1 = 0x10;
  param_1[1] = iVar2;
  if (local_88 != '\x03' && local_88 != '\x02') {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *local_94;
      bVar3 = (bool)hasExclusiveAccess(local_94);
    } while (!bVar3);
    *local_94 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(local_94,local_90);
      return;
    }
  }
  return;
}

