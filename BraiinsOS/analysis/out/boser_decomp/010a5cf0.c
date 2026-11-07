// FUN_010a5cf0 @ 010a5cf0 size=388 calls_out=6 calls_in=67
// strings: application/grpc

void FUN_010a5cf0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined2 local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined4 local_108;
  int local_100;
  int local_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [4];
  char local_f0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **ppuStack_88;
  char *pcStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  local_10c = 200;
  local_14c = 0;
  local_150 = 0;
  local_108 = 0;
  local_10a = 2;
  local_110 = 0;
  local_118 = 0;
  local_11c = 0;
  local_120 = 4;
  local_124 = 0;
  local_128 = 0;
  local_12c = 4;
  local_130 = 0;
  local_134 = 0;
  local_138 = 2;
  local_98 = 0;
  uStack_94 = 0x1d;
  uStack_90 = 0;
  uStack_8c = 0;
  ppuStack_88 = &PTR_FUN_01c1d8bc;
  pcStack_84 = "application/grpc";
  uStack_80 = 0x10;
  uStack_7c = 0;
  uStack_78 = 0;
  FUN_00714c58(&local_100,&local_150);
  if (local_f0 != '\x02') {
    (**(code **)(local_100 + 0x10))(auStack_f4,local_fc,uStack_f8);
  }
  FUN_01a73978(&local_100,param_2,&local_150);
  if (local_100 != 3 || local_fc != 0) {
    FUN_01bed4e2(&ppuStack_88,&local_100,0x68);
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&ppuStack_88,&DAT_01c1dd9c,&DAT_01d2d554);
  }
  FUN_01bed4e2(&ppuStack_88,param_2,0x68);
  FUN_01a7f950(&local_100,&local_110,&ppuStack_88);
  if (local_100 != 3 || local_fc != 0) {
    FUN_01071bb4(&local_100);
  }
  FUN_01bed4e2(param_1,&local_150,0x50);
  return;
}

