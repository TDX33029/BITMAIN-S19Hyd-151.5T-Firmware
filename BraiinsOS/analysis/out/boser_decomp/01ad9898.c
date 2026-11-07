// FUN_01ad9898 @ 01ad9898 size=296 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_01ad9898(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint extraout_r2;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  uint local_70 [3];
  int local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c [3];
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_50 = param_1[2];
  uVar7 = 0;
  if (local_50 == param_2[2]) {
    local_4c[2] = *param_2;
    local_70[2] = *param_1;
    local_64 = param_1[1];
    local_40 = param_2[1];
    local_2c = 0;
    if (local_4c[2] != 0) {
      local_2c = local_50;
    }
    local_4c[0] = (uint)(local_4c[2] != 0);
    if (local_70[2] == 0) {
      local_50 = 0;
    }
    local_70[0] = (uint)(local_70[2] != 0);
    local_24 = 0;
    local_28 = 0;
    local_38 = 0;
    local_4c[1] = 0;
    local_5c = 0;
    local_70[1] = 0;
    local_60 = local_70[0];
    local_58 = local_70[2];
    local_54 = local_64;
    local_3c = local_4c[0];
    local_34 = local_4c[2];
    local_30 = local_40;
    uVar9 = FUN_01a41998(local_70);
    pbVar4 = (byte *)((ulonglong)uVar9 >> 0x20);
    iVar1 = (int)uVar9;
    uVar7 = 1;
    if (iVar1 != 0) {
      uVar9 = FUN_01a41998(local_4c);
      pbVar5 = (byte *)((ulonglong)uVar9 >> 0x20);
      iVar2 = (int)uVar9;
      if ((iVar2 != 0) && (uVar7 = 0, *(int *)(iVar1 + 8) == *(int *)(iVar2 + 8))) {
        uVar3 = thunk_FUN_01bed842(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar2 + 4));
        bVar8 = uVar3 == 0;
        uVar6 = extraout_r2;
        if (bVar8) {
          uVar6 = (uint)*pbVar4;
          uVar3 = (uint)*pbVar5;
        }
        if (bVar8 && uVar6 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x01ad99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)(&DAT_01ad99b4 + *(int *)(&DAT_01ad99b4 + uVar6 * 4)))
                            (pbVar4 + 8,pbVar5 + 8);
          return uVar7;
        }
      }
    }
  }
  return uVar7;
}

