// FUN_00f25680 @ 00f25680 size=276 calls_out=5 calls_in=1
// strings: 

void FUN_00f25680(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double in_d0;
  undefined4 local_1c0 [2];
  undefined4 local_1b8;
  undefined4 local_1ac;
  double local_1a0;
  undefined4 local_198;
  undefined4 local_164;
  int local_150 [28];
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [112];
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar1 = uVar2;
  if (uVar2 != 0x80000000) {
    uVar1 = param_5;
  }
  if (uVar2 == 0x80000000 || (uVar1 & 1) == 0) {
    *param_1 = 0x80000005;
    return;
  }
  local_164 = 4;
  local_1c0[0] = 1;
  local_198 = 0x80000003;
  local_1ac = 0x80000003;
  local_1b8 = 0x80000003;
  local_1a0 = in_d0;
  if (NAN(in_d0)) {
    local_1a0 = ABS(in_d0);
  }
  iVar3 = thunk_FUN_016d4a50(param_4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_4);
  }
  FUN_016dd1aa(iVar3,param_3,param_4);
  local_a4 = 0x80000003;
  local_b0 = 0x80000003;
  local_bc = 0x80000003;
  local_c8 = 0x80000003;
  local_d4 = 0x80000003;
  local_e0 = param_4;
  local_dc = iVar3;
  local_d8 = param_4;
  FUN_00ea0d40(auStack_98,param_2,&local_e0,local_1c0);
  FUN_016dd1aa(local_150,auStack_90,0x70);
  if (local_150[0] != 4) {
    FUN_00f17590(local_150);
  }
  *param_1 = 0x80000005;
  return;
}

