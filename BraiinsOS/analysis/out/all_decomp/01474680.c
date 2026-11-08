// FUN_01474680 @ 01474680 size=452 calls_out=7 calls_in=2
// strings: 

void FUN_01474680(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iStack_5c;
  int iStack_58;
  uint local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  undefined4 local_24;
  uint *puStack_20;
  code *pcStack_1c;
  
  piVar3 = (int *)*param_2;
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    uVar1 = piVar3[3];
  }
  else {
    bVar4 = iVar2 == 1;
    uVar1 = 0;
    if (bVar4) {
      iVar2 = piVar3[5];
    }
    if ((bVar4 && iVar2 == 0) && (uVar1 = piVar3[3] - piVar3[4], (uint)piVar3[3] < (uint)piVar3[4]))
    {
      uVar1 = 0;
    }
  }
  if ((uint)piVar3[6] < uVar1) {
    uVar1 = piVar3[6];
  }
  if (uVar1 < param_3) {
    local_24 = FUN_01474df0(piVar3);
    local_28 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_28);
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  iStack_5c = 1;
  local_54 = 0;
  if ((param_3 != 0) &&
     (iStack_5c = thunk_FUN_016d4a50(param_3), local_54 = param_3, iStack_5c == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  iStack_58 = 0;
  uVar1 = 0x20 - LZCOUNT(local_54 >> 10);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  local_50 = uVar1 << 2 | 1;
  FUN_014749b0(&iStack_5c,piVar3);
  uVar1 = local_50;
  if ((local_50 & 1) == 0) {
    param_1[1] = iStack_5c;
    param_1[2] = iStack_58;
    param_1[3] = local_50;
    *param_1 = &DAT_018ad580;
    return;
  }
  local_44 = iStack_58 + (local_50 >> 5);
  local_48 = iStack_5c - (local_50 >> 5);
  local_4c = local_54 + (local_50 >> 5);
  FUN_00f5ef18(&local_40,&local_4c);
  local_30 = uVar1 >> 5;
  if (local_38 < uVar1 >> 5) {
    puStack_20 = &uStack_2c;
    uStack_2c = local_38;
    pcStack_1c = FUN_007883b8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00584155,&local_28,&DAT_018a6700);
  }
  *param_1 = local_40;
  param_1[1] = local_3c + local_30;
  param_1[2] = local_38 - local_30;
  param_1[3] = local_34;
  return;
}

