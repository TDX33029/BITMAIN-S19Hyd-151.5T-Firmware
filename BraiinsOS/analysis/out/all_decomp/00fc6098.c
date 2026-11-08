// FUN_00fc6098 @ 00fc6098 size=648 calls_out=6 calls_in=1
// strings: 

void FUN_00fc6098(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int local_268;
  int local_260;
  int local_25c;
  int *local_258;
  int local_254;
  int local_250;
  int iStack_24c;
  int iStack_248;
  int iStack_244;
  int local_50;
  int local_4c;
  int local_48;
  int *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  undefined1 local_2c;
  undefined3 local_2b;
  uint local_28;
  
  FUN_00fbc02c(&local_260);
  if (local_260 != 0x10) {
    FUN_016dd1aa(param_1 + 4,&local_250,0x200);
    *param_1 = local_260;
    param_1[1] = local_25c;
    param_1[2] = (int)local_258;
    param_1[3] = local_254;
    return;
  }
  iVar8 = 0;
  local_4c = 1;
  piVar6 = local_258 + local_254 * 8;
  local_48 = 0;
  local_50 = 0;
  local_38 = local_25c;
  local_3c = local_258;
  local_40 = local_258;
  local_34 = piVar6;
  if (local_254 != 0) {
    uVar7 = local_254 * 0x20;
    local_268 = 1;
    piVar1 = local_258;
    do {
      uVar7 = uVar7 - 0x20;
      piVar5 = piVar1 + 8;
      if (*piVar1 == -0x7fffffef) goto LAB_00fc62bc;
      local_250 = piVar1[4];
      iStack_24c = piVar1[5];
      iStack_248 = piVar1[6];
      iStack_244 = piVar1[7];
      local_260 = *piVar1;
      FUN_0159df7c(&local_30,&local_260);
      uVar3 = local_28;
      iVar2 = local_30;
      if (local_30 == -0x80000000) {
        *(undefined1 *)(param_1 + 1) = local_2c;
        *param_1 = 5;
        local_3c = piVar5;
        FUN_00fbd084(&local_260);
        iVar8 = (uVar7 >> 5) + 1;
        while (iVar8 = iVar8 + -1, iVar8 != 0) {
          FUN_00fbd084(piVar5);
          piVar5 = piVar5 + 8;
        }
        if (local_25c != 0) {
          thunk_FUN_016d3fb4(local_258);
        }
        if (local_50 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_4c);
        return;
      }
      uVar4 = CONCAT31(local_2b,local_2c);
      if ((uint)(local_50 - iVar8) < local_28) {
        FUN_00fc4a98(&local_50,iVar8,local_28,1,1);
        local_268 = local_4c;
        iVar8 = local_48;
      }
      FUN_016dd1aa(local_268 + iVar8,uVar4,uVar3);
      iVar8 = iVar8 + uVar3;
      local_48 = iVar8;
      if (iVar2 != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      FUN_00fbd084(&local_260);
      piVar1 = piVar5;
    } while (uVar7 != 0);
    piVar5 = piVar6;
LAB_00fc62bc:
    local_3c = piVar5;
  }
  iVar8 = ((uint)((int)piVar6 - (int)local_3c) >> 5) + 1;
  piVar6 = local_3c;
  while (iVar8 = iVar8 + -1, iVar8 != 0) {
    FUN_00fbd084(piVar6);
    piVar6 = piVar6 + 8;
  }
  if (local_25c != 0) {
    thunk_FUN_016d3fb4(local_258);
  }
  *param_1 = 0x10;
  param_1[1] = local_50;
  param_1[2] = local_4c;
  param_1[3] = local_48;
  return;
}

