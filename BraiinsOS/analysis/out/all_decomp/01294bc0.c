// FUN_01294bc0 @ 01294bc0 size=476 calls_out=2 calls_in=1
// strings: 

void FUN_01294bc0(undefined4 *param_1,byte *param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbStack_4c;
  uint uStack_48;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  byte *local_34;
  undefined4 local_30;
  byte **local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  if (param_3 == 0) {
    local_41 = 0;
  }
  else {
    if (param_3 == 1) {
      bVar6 = *param_2;
      local_41 = 1;
      if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) goto LAB_01294cc8;
    }
    else {
      bVar6 = *param_2;
    }
    uVar5 = param_3;
    pbVar4 = param_2;
    if (bVar6 == 0x2b) {
      pbVar4 = param_2 + 1;
      uVar5 = param_3 - 1;
    }
    if (uVar5 < 0x11) {
      if (uVar5 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        do {
          bVar6 = *pbVar4;
          if (9 < bVar6 - 0x30) goto LAB_01294cc4;
          pbVar4 = pbVar4 + 1;
          uVar5 = uVar5 - 1;
          uVar1 = (uVar1 & 0xffffffff) * 10 + CONCAT44((int)(uVar1 >> 0x20) * 10,bVar6 - 0x30);
        } while (uVar5 != 0);
      }
LAB_01294d70:
      param_1[2] = (int)uVar1;
      *param_1 = 0x80000005;
      param_1[3] = (int)(uVar1 >> 0x20);
      return;
    }
    uVar2 = 0;
    uVar7 = 0;
    do {
      uVar1 = CONCAT44(uVar7,uVar2);
      if (uVar5 == 0) goto LAB_01294d70;
      uVar3 = (uint)((ulonglong)uVar2 * 10);
      uVar9 = (uint)((ulonglong)uVar2 * 10 >> 0x20);
      uVar2 = (uint)((ulonglong)uVar7 * 10);
      uVar8 = uVar9 + uVar2;
      if ((int)((ulonglong)uVar7 * 10 >> 0x20) != 0 || CARRY4(uVar9,uVar2)) {
        local_41 = 1;
        if (*pbVar4 - 0x30 < 10) {
          local_41 = 2;
        }
        goto LAB_01294cc8;
      }
      uVar9 = *pbVar4 - 0x30;
      if (9 < uVar9) goto LAB_01294cc4;
      uVar2 = uVar3 + uVar9;
      uVar5 = uVar5 - 1;
      uVar7 = uVar8 + CARRY4(uVar3,uVar9);
      pbVar4 = pbVar4 + 1;
    } while (!CARRY4(uVar8,(uint)CARRY4(uVar3,uVar9)));
    local_41 = 2;
  }
  goto LAB_01294cc8;
LAB_01294cc4:
  local_41 = 1;
LAB_01294cc8:
  local_28 = &pbStack_4c;
  local_24 = (undefined4 *)&LAB_0157a210;
  pbStack_4c = param_2;
  uStack_48 = param_3;
  FUN_00600d2c(&local_34,&DAT_0057fcea,&local_28);
  local_24 = &DAT_006043a8;
  local_1c = &LAB_00fb9ea0;
  local_20 = &local_41;
  local_28 = &local_34;
  FUN_00600d2c(&local_40,&DAT_005742df,&local_28);
  if (local_34 != (byte *)0x0) {
    thunk_FUN_016d3fb4(local_30);
  }
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = &DAT_003b6e41;
  param_1[4] = 0x9c;
  param_1[5] = 0x30b;
  return;
}

