// FUN_013c85b8 @ 013c85b8 size=248 calls_out=3 calls_in=5
// strings: 

void FUN_013c85b8(uint *param_1,int param_2,undefined4 param_3,uint param_4,uint *param_5,
                 uint param_6)

{
  uint *unaff_r5;
  bool bVar1;
  bool bVar2;
  undefined4 **local_38;
  code *local_34;
  uint *local_30;
  undefined1 *local_2c;
  undefined2 local_28;
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
    local_38 = (undefined4 **)param_5;
    local_28 = 1;
    local_34 = (code *)param_6;
    local_30 = (uint *)param_3;
    local_2c = (undefined1 *)param_4;
    FUN_005f1024(&local_24,param_2 + 0x30,&local_38);
    if (local_24 == (uint *)0x2) {
      local_14 = local_20;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_003ceac6,0x22,&local_14,&DAT_018946e8,&DAT_01894408);
    }
    bVar1 = ((uint)local_24 & 1) != 0;
    if (bVar1) {
      param_1[1] = local_20;
      param_1[2] = local_1c;
    }
    *param_1 = (uint)bVar1;
    return;
  }
  local_34 = FUN_005ffff4;
  local_38 = &local_24;
  local_30 = &local_14;
  local_2c = &LAB_00fac484;
  local_14 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0057a181,&local_38,&DAT_018945c8);
}

