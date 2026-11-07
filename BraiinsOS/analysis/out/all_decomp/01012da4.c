// FUN_01012da4 @ 01012da4 size=504 calls_out=5 calls_in=2
// strings: 

void FUN_01012da4(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint local_6c;
  uint local_68;
  int local_64;
  int *local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_3c;
  uint uStack_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar3 = *param_2;
  FUN_00f5f8dc(&local_6c,param_2[2],param_3 + uVar3);
  *param_2 = 0;
  param_2[1] = 0;
  local_5c = uVar3;
  if (local_68 < uVar3) {
    local_2c = &local_50;
    local_50 = local_68;
    local_28 = FUN_007883b8;
    local_30 = FUN_007883b8;
    local_34 = &local_5c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00584155,&local_34,&DAT_018ad5a4);
  }
  piVar2 = local_60;
  if (uVar3 != 0) {
    if (((uint)local_60 & 1) != 0) {
      uVar1 = uVar3 + ((uint)local_60 >> 5);
      if (uVar1 < 0x8000000) {
        piVar2 = (int *)((uint)local_60 & 0x1f | uVar1 * 0x20);
      }
      else {
        uVar1 = (uint)local_60 >> 5;
        iVar4 = local_6c - uVar1;
        iVar5 = local_64 + uVar1;
        piVar2 = (int *)thunk_FUN_016d4a50(0x14);
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x14);
        }
        piVar2[4] = 1;
        piVar2[3] = ((uint)local_60 & 0x1f) >> 2;
        piVar2[2] = local_68 + uVar1;
        piVar2[1] = iVar4;
        *piVar2 = iVar5;
      }
    }
    bVar6 = local_68 < uVar3;
    local_68 = local_68 - uVar3;
    if (bVar6) {
      local_68 = 0;
    }
    local_6c = local_6c + uVar3;
    local_64 = local_64 - uVar3;
  }
  if (((uint)piVar2 & 1) == 0) {
    param_1[1] = local_6c;
    param_1[2] = local_68;
    *param_1 = (uint)&DAT_018ad580;
    param_1[3] = (uint)piVar2;
    return;
  }
  local_54 = local_68 + ((uint)piVar2 >> 5);
  local_58 = local_6c - ((uint)piVar2 >> 5);
  local_5c = local_64 + ((uint)piVar2 >> 5);
  FUN_00f5ef18(&local_50,&local_5c);
  local_3c = (uint)piVar2 >> 5;
  if (local_48 < (uint)piVar2 >> 5) {
    uStack_38 = local_48;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00584155,&local_34,&DAT_018a6700);
  }
  *param_1 = local_50;
  param_1[1] = local_4c + local_3c;
  param_1[2] = local_48 - local_3c;
  param_1[3] = local_44;
  return;
}

