// FUN_0118c630 @ 0118c630 size=260 calls_out=4 calls_in=2
// strings: 

void FUN_0118c630(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 auStack_e0 [72];
  undefined4 local_98;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  undefined1 auStack_80 [20];
  undefined1 local_6c;
  undefined1 auStack_68 [72];
  
  FUN_018611a4(&local_120,param_3,param_4);
  if (local_120 == 2) {
    local_120 = 3;
    local_118 = local_11c;
  }
  else {
    local_118 = FUN_01bed4e2(auStack_68,&local_120,0x48);
    local_120 = 0;
  }
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x118c730);
    (*pcVar1)();
  }
  local_11c = 0;
  local_f0 = 4;
  local_fc = 4;
  local_e8 = 0;
  local_ec = 0;
  local_f4 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_104 = 0;
  local_108 = 2;
  FUN_01bed4e2(auStack_e0,auStack_68,0x48);
  local_84 = 1;
  local_83 = 0;
  local_98 = 0;
  local_81 = 0;
  FUN_01bed93e(auStack_80,0,0x14);
  local_6c = 2;
  FUN_0183061c(param_1,param_2,&local_120);
  return;
}

