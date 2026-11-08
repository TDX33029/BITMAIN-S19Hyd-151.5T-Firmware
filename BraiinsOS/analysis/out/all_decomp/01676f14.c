// FUN_01676f14 @ 01676f14 size=220 calls_out=4 calls_in=0
// strings: 

void FUN_01676f14(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_2c;
  
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  uVar2 = *(undefined4 *)(param_3 + 4);
  if (iVar1 == 0) {
    local_68 = 0;
    local_64 = 1;
  }
  else {
    local_64 = thunk_FUN_016d4a50(iVar1);
    local_68 = iVar1;
    if (local_64 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar1);
    }
  }
  FUN_016dd1aa(local_64,uVar2,iVar1);
  local_2c = 0x80000003;
  local_38 = 0x80000003;
  local_44 = 0x80000003;
  local_50 = 0x80000003;
  local_5c = 0x80000003;
  local_60 = iVar1;
  FUN_01681fc0(&local_b8,param_2,&local_68);
  if (local_b8 == -0x80000000) {
    *param_1 = 0x80000000;
    param_1[1] = uStack_b4;
    param_1[2] = uStack_b0;
    param_1[3] = uStack_ac;
    return;
  }
  FUN_016dd1aa(param_1,&local_b8,0x50);
  return;
}

