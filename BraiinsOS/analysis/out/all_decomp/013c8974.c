// FUN_013c8974 @ 013c8974 size=328 calls_out=4 calls_in=5
// strings: 

void FUN_013c8974(uint *param_1,int *param_2,undefined4 param_3,undefined4 **param_4,
                 undefined4 **param_5,undefined4 **param_6)

{
  undefined4 **ppuVar1;
  undefined4 **unaff_r5;
  bool bVar2;
  bool bVar3;
  undefined4 **local_38;
  undefined4 **local_34;
  uint local_30;
  undefined4 **local_28;
  undefined1 ***local_24;
  undefined4 **local_20;
  undefined1 ***local_1c;
  undefined4 **local_18;
  undefined2 local_14;
  
  bVar3 = param_4 <= param_6;
  bVar2 = param_6 == param_4;
  local_34 = param_6;
  if (!bVar3 || bVar2) {
    unaff_r5 = (undefined4 **)((int)param_6 + 1);
  }
  local_38 = param_5;
  if (!bVar3 || bVar2) {
    bVar3 = unaff_r5 <= param_5;
    bVar2 = param_5 == unaff_r5;
  }
  if (!bVar3 || bVar2) {
    local_14 = 0;
    local_20 = param_6;
    local_24 = (undefined1 ***)param_5;
    local_1c = (undefined1 ***)param_3;
    local_18 = param_4;
    if (*(byte *)((int)param_2 + 9) < 2) {
      (**(code **)(param_2[1] + 0x48))
                (&local_38,*param_2 + (*(int *)(param_2[1] + 8) - 1U & 0xfffffff8) + 8,&local_24);
      if (local_38 != (undefined4 **)&SUB_00000002) {
        bVar2 = ((uint)local_38 & 1) != 0;
        if (bVar2) {
          param_1[1] = (uint)local_34;
          param_1[2] = local_30;
        }
        *param_1 = (uint)bVar2;
        return;
      }
      ppuVar1 = local_34;
    }
    else {
      ppuVar1 = (undefined4 **)thunk_FUN_016d4a50(2);
      if (ppuVar1 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,2);
      }
      *(undefined1 *)ppuVar1 = 1;
    }
    local_24 = (undefined1 ***)ppuVar1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_003ceae8,0x2d,&local_24,&DAT_018946e8,&DAT_01894438);
  }
  local_20 = (undefined4 **)FUN_005ffff4;
  local_24 = (undefined1 ***)&local_38;
  local_1c = (undefined1 ***)&local_28;
  local_18 = (undefined4 **)&LAB_00fac484;
  local_28 = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0057a181,&local_24,&DAT_018945c8);
}

