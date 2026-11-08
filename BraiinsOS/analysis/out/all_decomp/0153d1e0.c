// FUN_0153d1e0 @ 0153d1e0 size=544 calls_out=9 calls_in=1
// strings: 

void FUN_0153d1e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_140;
  undefined1 *local_13c;
  int local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 auStack_124 [108];
  undefined2 local_b8;
  undefined1 *local_b0;
  int local_ac;
  undefined1 *puStack_a8;
  int iStack_a4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar3 = 1;
  local_138 = 0;
  local_13c = &DAT_00000001;
  local_140 = 0;
  uVar2 = 0;
  if (param_2 == 0) {
    if (param_5 != 0) {
      iVar3 = thunk_FUN_016d4a50(param_5);
      if (iVar3 == 0) goto LAB_0153d3cc;
      uVar2 = param_5;
    }
    FUN_016dd1aa(iVar3,param_4,param_5);
    FUN_0154e5f8(&local_140,0,2,1,1);
    *(ushort *)(local_13c + local_138) =
         (ushort)((param_5 & 0xff) << 8) | (ushort)(param_5 >> 8) & 0xff;
    local_138 = local_138 + 2;
    if ((uint)(local_140 - local_138) < param_5) {
      FUN_0154e5f8(&local_140,local_138,param_5,1,1);
    }
  }
  else {
    if (param_5 != 0) {
      iVar3 = thunk_FUN_016d4a50(param_5);
      if (iVar3 == 0) {
LAB_0153d3cc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_5);
      }
      uVar2 = param_5;
    }
    FUN_016dd1aa(iVar3,param_4,param_5);
    FUN_006029c0(&local_140);
    local_138 = 1;
    *local_13c = (char)param_5;
    if (local_140 - 1U < param_5) {
      FUN_0154e5f8(&local_140,1,param_5,1,1);
    }
  }
  iVar1 = local_138;
  FUN_016dd1aa(local_13c + local_138,iVar3,param_5);
  local_138 = iVar1 + param_5;
  if (uVar2 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  local_ac = local_140;
  puStack_a8 = local_13c;
  iStack_a4 = local_138;
  local_b0 = &DAT_8000000d;
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  FUN_0150e524(&local_b0,&local_30,0x80000000);
  local_130 = local_30;
  uStack_12c = local_2c;
  uStack_128 = local_28;
  FUN_016dd1aa(auStack_124,&local_b0,0x6c);
  local_b8 = 4;
  FUN_0151eddc(param_1,&local_130);
  FUN_016dd1aa(&local_b0,&local_130,0x7c);
  FUN_01525ed4(param_3,&local_b0,0);
  return;
}

