// FUN_0077c024 @ 0077c024 size=456 calls_out=4 calls_in=2
// strings: 

void FUN_0077c024(int param_1,int param_2,undefined4 param_3,short *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined2 param_9,
                 undefined2 param_10,undefined1 param_11)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short local_10c [2];
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_100;
  undefined2 local_fe;
  int local_fc;
  short *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e4;
  
  if ((param_2 == 0) && (param_1 != 0)) {
    iVar2 = thunk_FUN_01be5118(0x4c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x4c);
    }
    FUN_01bed4e2(iVar2,param_3,0x4c);
    sVar1 = *param_4;
    psVar3 = (short *)0x0;
    if (sVar1 != 2) {
      local_10c[0] = sVar1;
      FUN_01bed4e2((uint)local_10c | 2,param_4 + 1,0xe6);
      psVar3 = (short *)thunk_FUN_01be5118(0xe8);
      if (psVar3 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xe8);
      }
      *psVar3 = sVar1;
      FUN_01bed4e2(psVar3 + 1,param_4 + 1,0xe6);
    }
    local_e4 = param_11;
    local_108 = 0;
    local_fc = iVar2;
    local_f8 = psVar3;
  }
  else {
    iVar2 = thunk_FUN_01be5118(0x4c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x4c);
    }
    FUN_01bed4e2(iVar2,param_3,0x4c);
    sVar1 = *param_4;
    psVar3 = (short *)0x0;
    if (sVar1 != 2) {
      local_10c[0] = sVar1;
      FUN_01bed4e2((uint)local_10c | 2,param_4 + 1,0xe6);
      psVar3 = (short *)thunk_FUN_01be5118(0xe8);
      if (psVar3 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xe8);
      }
      *psVar3 = sVar1;
      FUN_01bed4e2(psVar3 + 1,param_4 + 1,0xe6);
    }
    local_e4 = 1;
    local_104 = param_8;
    local_108 = param_7;
    local_fc = iVar2;
    local_f8 = psVar3;
  }
  local_f0 = param_6;
  local_f4 = param_5;
  local_ec = 0;
  local_10c[0] = 0x15;
  local_100 = param_9;
  local_fe = param_10;
  FUN_013e649c(local_10c);
  return;
}

