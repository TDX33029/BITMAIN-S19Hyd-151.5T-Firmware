// FUN_00f25bd8 @ 00f25bd8 size=360 calls_out=5 calls_in=1
// strings: 

void FUN_00f25bd8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c8 [2];
  int local_1c0;
  int local_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1a8;
  undefined4 local_19c;
  undefined4 local_16c;
  int local_158 [28];
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [116];
  
  if ((*(int *)(param_2 + 0x10) != -0x80000000) && (*param_5 != -0x80000000)) {
    iStack_1b8 = param_5[2];
    if (iStack_1b8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iStack_1b8);
    }
    iVar2 = param_5[1];
    if (iStack_1b8 == 0) {
      iVar3 = 0;
      iVar1 = 1;
    }
    else {
      iVar1 = thunk_FUN_016d4a50(iStack_1b8);
      iVar3 = iStack_1b8;
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iStack_1b8);
      }
    }
    FUN_016dd1aa(iVar1,iVar2,iStack_1b8);
    local_16c = 2;
    uStack_1b4 = 0x80000003;
    local_1c8[0] = 1;
    local_19c = 0x80000003;
    local_1a8 = 0x80000003;
    local_1c0 = iVar3;
    local_1bc = iVar1;
    iVar2 = thunk_FUN_016d4a50(param_4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
    FUN_016dd1aa(iVar2,param_3,param_4);
    local_ac = 0x80000003;
    local_b8 = 0x80000003;
    local_c4 = 0x80000003;
    local_d0 = 0x80000003;
    local_dc = 0x80000003;
    local_e8 = param_4;
    local_e4 = iVar2;
    local_e0 = param_4;
    FUN_00ea0d40(auStack_a0,param_2,&local_e8,local_1c8);
    FUN_016dd1aa(local_158,auStack_98,0x70);
    if (local_158[0] != 4) {
      FUN_00f17590(local_158);
    }
  }
  *param_1 = 0x80000005;
  return;
}

