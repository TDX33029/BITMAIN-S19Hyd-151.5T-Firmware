// FUN_008c61ec @ 008c61ec size=220 calls_out=7 calls_in=0
// strings: 

void FUN_008c61ec(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 *local_40;
  uint local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 *local_2c;
  undefined1 auStack_24 [12];
  
  local_58 = param_2;
  uStack_54 = param_3;
  puVar2 = (undefined1 *)thunk_FUN_016d4a50(param_3);
  if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(puVar2,param_2,param_3);
  local_44 = param_3;
  local_40 = puVar2;
  local_3c = param_3;
  FUN_016b0744(&local_50,&local_44);
  puVar1 = local_4c;
  if (local_50 == &DAT_00000001) {
    local_34 = local_48;
    local_2c = &DAT_0157d360;
    local_38 = local_4c;
    local_30 = (undefined1 *)&local_58;
    FUN_00600d2c(auStack_24,&DAT_005829cd,&local_30);
    uVar3 = FUN_008d5510(&local_38,auStack_24);
    *param_1 = 1;
    param_1[1] = uVar3;
    thunk_FUN_016d3fb4(puVar2);
    return;
  }
  local_34 = local_48;
  local_38 = local_4c;
  thunk_FUN_016d3fb4(puVar2);
  FUN_016b0354(&local_44,&local_38);
  bVar4 = local_44 != 1;
  if (bVar4) {
    param_1[1] = (uint)local_40;
    param_1[2] = local_3c;
  }
  else {
    local_2c = (undefined4 *)local_3c;
    local_4c = &DAT_0157d360;
    local_30 = local_40;
    local_50 = (undefined1 *)&local_58;
    FUN_00600d2c(auStack_24,&DAT_0057cdeb,&local_50);
    uVar3 = FUN_008d3760(&local_30,auStack_24);
    param_1[1] = uVar3;
  }
  *param_1 = (uint)!bVar4;
  FUN_016dffb2(puVar1);
  return;
}

