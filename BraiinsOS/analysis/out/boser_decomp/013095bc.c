// FUN_013095bc @ 013095bc size=328 calls_out=4 calls_in=14
// strings: 

void FUN_013095bc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_4c;
  uint local_48;
  undefined1 auStack_44 [16];
  undefined4 *local_34;
  code *local_30;
  uint local_2c;
  code *local_28;
  uint local_24;
  code *local_20;
  uint local_1c;
  code *local_18;
  undefined1 uStack_11;
  
  local_4c = *param_1;
  if ((*(byte *)((int)param_2 + 0xb) & 0x18) == 0) {
    local_34 = &local_4c;
    local_1c = (uint)local_34 | 3;
    local_24 = (uint)local_34 | 2;
    local_2c = (uint)local_34 | 1;
    local_18 = FUN_012fcc70;
    local_20 = FUN_012fcc70;
    local_28 = FUN_012fcc70;
    local_30 = FUN_012fcc70;
    FUN_012fa178(*param_2,param_2[1],&DAT_005b42cd,&local_34);
    return;
  }
  local_48 = 0;
  local_34 = &local_4c;
  local_1c = (uint)local_34 | 3;
  local_24 = (uint)local_34 | 2;
  local_2c = (uint)local_34 | 1;
  local_18 = FUN_012fcc70;
  local_20 = FUN_012fcc70;
  local_28 = FUN_012fcc70;
  local_30 = FUN_012fcc70;
  iVar1 = FUN_012fa178(&local_48,&DAT_01ce4b00,&DAT_005b42cd,&local_34);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_11,&DAT_01ce4a30,&DAT_01ce4b18);
  }
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_48,0xf,&DAT_01ce4b28);
  }
  FUN_012fb940(param_2,auStack_44);
  return;
}

