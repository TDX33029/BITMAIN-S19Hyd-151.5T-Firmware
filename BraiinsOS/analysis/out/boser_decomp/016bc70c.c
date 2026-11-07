// FUN_016bc70c @ 016bc70c size=244 calls_out=3 calls_in=5
// strings: aho-corasick DFA should never fail

void FUN_016bc70c(uint *param_1,int param_2,undefined4 param_3,uint param_4,uint *param_5,
                 uint param_6)

{
  uint *unaff_r5;
  bool bVar1;
  bool bVar2;
  undefined4 **local_38;
  code *local_34;
  uint *local_30;
  code *local_2c;
  undefined4 uStack_28;
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_14;
  
  bVar2 = param_4 <= param_6;
  bVar1 = param_6 == param_4;
  local_20 = param_6;
  if (!bVar2 || bVar1) {
    unaff_r5 = (uint *)(param_6 + 1);
  }
  local_24 = param_5;
  if (!bVar2 || bVar1) {
    bVar2 = unaff_r5 <= param_5;
    bVar1 = param_5 == unaff_r5;
  }
  if (!bVar2 || bVar1) {
    uStack_28 = 1;
    local_38 = (undefined4 **)param_5;
    local_34 = (code *)param_6;
    local_30 = (uint *)param_3;
    local_2c = (code *)param_4;
    FUN_0065cd18(&local_24,param_2 + 0x30,&local_38);
    if (local_24 == (uint *)0x2) {
      local_14 = local_20;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("aho-corasick DFA should never fail",0x22,&local_14,&DAT_01d09108,&DAT_01d08e08);
    }
    bVar1 = ((uint)local_24 & 1) != 0;
    if (bVar1) {
      param_1[1] = local_20;
      param_1[2] = local_1c;
    }
    *param_1 = (uint)bVar1;
    return;
  }
  local_34 = FUN_0065fd28;
  local_38 = &local_24;
  local_30 = &local_14;
  local_2c = FUN_012fd02c;
  local_14 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_005a4e9e,&local_38,&DAT_01d08f98);
}

