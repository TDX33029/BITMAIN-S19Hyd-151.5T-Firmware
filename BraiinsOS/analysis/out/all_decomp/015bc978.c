// FUN_015bc978 @ 015bc978 size=688 calls_out=8 calls_in=0
// strings: 

void FUN_015bc978(undefined2 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8,int param_9,uint param_10)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_5c = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
  local_60 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  local_64 = 0;
  if (param_8 <= param_10) {
    FUN_016dd1aa(param_9,param_7,param_8);
    if (0xf < param_8) {
      iVar1 = param_8 - 0x10;
      puVar2 = (undefined4 *)(param_9 + iVar1);
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      local_4c = puVar2[3];
      pcVar4 = *(code **)(*(int *)(param_2 + 0x210) + 8);
      DataMemoryBarrier(0xb);
      if (DAT_018dd942 != '\x02') {
        FUN_01110ec4();
      }
      (*pcVar4)(&local_35,param_2,&local_64,param_5,param_6,param_9,iVar1,0);
      if (local_35 != '\x01') {
        local_48 = local_34;
        uStack_44 = local_30;
        uStack_40 = local_2c;
        uStack_3c = local_28;
        iVar3 = FUN_01837f38(&local_48,&local_58,0x10);
        if (iVar3 == 0) {
          *(int *)(param_1 + 2) = iVar1;
          *(undefined1 *)param_1 = 0;
          return;
        }
        if (iVar1 != 0) {
          FUN_016dd606(param_9,0,iVar1);
        }
      }
    }
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0x601;
    return;
  }
  iVar1 = thunk_FUN_016d4a50(param_8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_8);
  }
  FUN_016dd1aa(iVar1,param_7,param_8);
  if (0xf < param_8) {
    param_8 = param_8 - 0x10;
    puVar2 = (undefined4 *)(iVar1 + param_8);
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    local_4c = puVar2[3];
    pcVar4 = *(code **)(*(int *)(param_2 + 0x210) + 8);
    DataMemoryBarrier(0xb);
    if (DAT_018dd942 != '\x02') {
      FUN_01110ec4();
    }
    (*pcVar4)(&local_35,param_2,&local_64,param_5,param_6,iVar1,param_8,0);
    if (local_35 != '\x01') {
      local_48 = local_34;
      uStack_44 = local_30;
      uStack_40 = local_2c;
      uStack_3c = local_28;
      iVar3 = FUN_01837f38(&local_48,&local_58,0x10);
      if (iVar3 == 0) {
        if (param_10 < param_8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,param_8,param_10,&DAT_018aa83c);
        }
        FUN_016dd1aa(param_9,iVar1,param_8);
        *(uint *)(param_1 + 2) = param_8;
        *(undefined1 *)param_1 = 0;
        thunk_FUN_016d3fb4(iVar1);
        return;
      }
      if (param_8 != 0) {
        FUN_016dd606(iVar1,0,param_8);
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x601;
  thunk_FUN_016d3fb4(iVar1);
  return;
}

