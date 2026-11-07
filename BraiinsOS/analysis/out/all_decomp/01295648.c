// FUN_01295648 @ 01295648 size=580 calls_out=3 calls_in=1
// strings: 

void FUN_01295648(undefined4 *param_1,byte *param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *local_54;
  uint local_50;
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  byte *local_3c;
  undefined4 local_38;
  byte **local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  if (param_3 == 9) {
    iVar2 = thunk_FUN_016dd50a(param_2,&DAT_003b6f14,9);
    if (iVar2 == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = 0x80000005;
      return;
    }
    local_50 = 9;
LAB_012956c0:
    bVar5 = *param_2;
  }
  else {
    local_50 = param_3;
    if (param_3 == 0) {
      local_49 = 0;
      goto LAB_012957a8;
    }
    if (param_3 != 1) goto LAB_012956c0;
    bVar5 = *param_2;
    local_49 = 1;
    if (bVar5 == 0x2b || bVar5 == 0x2d) goto LAB_012957a8;
  }
  pbVar9 = param_2;
  if (bVar5 == 0x2b) {
    pbVar9 = param_2 + 1;
    param_3 = param_3 - 1;
  }
  if (param_3 < 0x11) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      do {
        bVar5 = *pbVar9;
        if (9 < bVar5 - 0x30) goto LAB_01295780;
        pbVar9 = pbVar9 + 1;
        param_3 = param_3 - 1;
        uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,bVar5 - 0x30);
      } while (param_3 != 0);
    }
LAB_01295850:
    param_1[2] = 1;
    *param_1 = 0x80000005;
    param_1[3] = 0;
    *(ulonglong *)(param_1 + 4) = uVar1;
    return;
  }
  uVar6 = 0;
  uVar3 = 0;
  do {
    uVar1 = CONCAT44(uVar3,uVar6);
    if (param_3 == 0) goto LAB_01295850;
    uVar7 = (uint)((ulonglong)uVar6 * 10);
    uVar8 = (uint)((ulonglong)uVar6 * 10 >> 0x20);
    uVar6 = (uint)((ulonglong)uVar3 * 10);
    uVar4 = uVar8 + uVar6;
    if ((int)((ulonglong)uVar3 * 10 >> 0x20) != 0 || CARRY4(uVar8,uVar6)) {
      local_49 = 1;
      if (*pbVar9 - 0x30 < 10) {
        local_49 = 2;
      }
      goto LAB_012957a8;
    }
    uVar8 = *pbVar9 - 0x30;
    if (9 < uVar8) goto LAB_01295780;
    uVar6 = uVar7 + uVar8;
    param_3 = param_3 - 1;
    uVar3 = uVar4 + CARRY4(uVar7,uVar8);
    pbVar9 = pbVar9 + 1;
  } while (!CARRY4(uVar4,(uint)CARRY4(uVar7,uVar8)));
  local_49 = 2;
LAB_012957a8:
  local_30 = &local_54;
  local_2c = (undefined4 *)&LAB_0157a210;
  local_54 = param_2;
  FUN_00600d2c(&local_3c,&DAT_0057fcea,&local_30);
  local_2c = &DAT_006043a8;
  local_24 = &LAB_00fb9ea0;
  local_28 = &local_49;
  local_30 = &local_3c;
  FUN_00600d2c(&local_48,&DAT_005742df,&local_30);
  if (local_3c != (byte *)0x0) {
    thunk_FUN_016d3fb4(local_38);
  }
  *param_1 = local_48;
  param_1[1] = uStack_44;
  param_1[2] = uStack_40;
  param_1[3] = &DAT_003b6f1d;
  param_1[4] = 0xa6;
  param_1[5] = 0xc2;
  return;
LAB_01295780:
  local_49 = 1;
  goto LAB_012957a8;
}

