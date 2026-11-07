// FUN_01000318 @ 01000318 size=360 calls_out=5 calls_in=8
// strings: 

void FUN_01000318(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
                 int param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint local_28;
  uint local_24;
  
  uVar5 = 1;
  lVar1 = (ulonglong)param_4 * (ulonglong)((param_5 + param_6) - 1 & -param_5);
  uVar4 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000 - param_5 < uVar4)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    if (uVar4 != 0) {
      bVar7 = 7 < param_5;
      bVar6 = param_5 == 8;
      if (param_5 < 9) {
        bVar7 = uVar4 <= param_5;
        bVar6 = param_5 == uVar4;
      }
      if (!bVar7 || bVar6) {
        local_24 = thunk_FUN_016d4a50(uVar4);
      }
      else {
        local_24 = 0;
        uVar3 = param_5;
        if (param_5 < 5) {
          uVar3 = 4;
        }
        iVar2 = FUN_016d51b0(&local_24,uVar3,uVar4);
        if (iVar2 != 0) goto LAB_01000468;
      }
      goto joined_r0x01000424;
    }
    local_24 = param_5;
LAB_0100045c:
    param_1[1] = local_24;
    uVar5 = 0;
  }
  else {
    bVar7 = 7 < param_5;
    bVar6 = param_5 == 8;
    if (param_5 < 9) {
      bVar7 = uVar4 <= param_5;
      bVar6 = param_5 == uVar4;
    }
    if (!bVar7 || bVar6) {
      local_24 = thunk_FUN_016d4ea4(param_3,uVar4);
joined_r0x01000424:
      if (local_24 != 0) goto LAB_0100045c;
    }
    else {
      local_28 = 0;
      uVar3 = param_5;
      if (param_5 < 5) {
        uVar3 = 4;
      }
      iVar2 = FUN_016d51b0(&local_28,uVar3,uVar4);
      local_24 = local_28;
      if ((iVar2 == 0) && (local_28 != 0)) {
        FUN_016dd1aa(local_28,param_3,param_6 * param_2);
        thunk_FUN_016d3fb4(param_3);
        goto LAB_0100045c;
      }
    }
LAB_01000468:
    param_1[1] = param_5;
  }
  param_1[2] = uVar4;
  *param_1 = uVar5;
  return;
}

