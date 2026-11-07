// FUN_01a753d4 @ 01a753d4 size=384 calls_out=6 calls_in=2
// strings: application/grpc

void FUN_01a753d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  int local_100;
  int local_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [4];
  char local_f0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined *puStack_88;
  char *pcStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  local_104 = 200;
  local_144 = 0;
  local_148 = 0;
  local_102 = 2;
  local_110 = 0;
  local_114 = 0;
  local_118 = 4;
  local_11c = 0;
  local_120 = 0;
  local_124 = 4;
  local_128 = 0;
  local_12c = 0;
  local_108 = 0;
  local_130 = 2;
  local_98 = 0;
  uStack_94 = 0x1d;
  uStack_90 = 0;
  uStack_8c = 0;
  puStack_88 = &DAT_01d2d23c;
  pcStack_84 = "application/grpc";
  uStack_80 = 0x10;
  uStack_7c = 0;
  uStack_78 = 0;
  FUN_00714c58(&local_100,&local_148);
  if (local_f0 != '\x02') {
    (**(code **)(local_100 + 0x10))(auStack_f4,local_fc,uStack_f8);
  }
  FUN_01a73978(&local_100,param_2,&local_148);
  if (local_100 != 3 || local_fc != 0) {
    FUN_01bed4e2(&puStack_88,&local_100,0x68);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&puStack_88,&DAT_01d2d22c,&DAT_01d2d554);
  }
  FUN_01bed4e2(&puStack_88,param_2,0x68);
  FUN_01a7f950(&local_100,&local_108,&puStack_88);
  if (local_100 != 3 || local_fc != 0) {
    FUN_01a70c28(&local_100);
  }
  FUN_01bed4e2(param_1,&local_148,0x48);
  return;
}

