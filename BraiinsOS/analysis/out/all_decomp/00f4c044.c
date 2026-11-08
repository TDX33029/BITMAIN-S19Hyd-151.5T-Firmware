// FUN_00f4c044 @ 00f4c044 size=768 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f4c044(undefined4 param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  uint *extraout_r3;
  uint *puVar5;
  int iVar6;
  undefined8 uVar7;
  uint local_b4;
  undefined4 *local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70 [6];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar7 = thunk_FUN_016de0ee(param_1,0x2c0,param_3,param_1);
  puVar5 = (uint *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((char)puVar5[4] == '\0') {
    FUN_015f62e4(&local_58);
    puVar5[3] = local_4c;
    *puVar5 = local_58;
    puVar5[1] = local_54;
    puVar5[2] = local_50;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  local_a0 = *puVar5;
  uStack_9c = puVar5[1];
  uStack_98 = puVar5[2];
  local_94 = puVar5[3];
  *puVar5 = local_a0 + 1;
  puVar5[1] = uStack_9c + (0xfffffffe < local_a0);
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_b0 = &DAT_005674cc;
  puVar5 = (uint *)((uint)local_70 | 4);
  for (iVar6 = extraout_r2 << 5; iVar6 != 0; iVar6 = iVar6 + -0x20) {
    if (*param_2 == -0x7fffffeb) goto LAB_00f4c108;
    FUN_00f3cfcc(&local_58,param_2);
    uVar3 = local_4c;
    uVar2 = local_50;
    uVar1 = local_54;
    if (local_58 != 2) {
      local_b4 = local_50;
      local_90 = local_3c;
      uStack_8c = uStack_38;
      uStack_88 = uStack_34;
      uStack_84 = uStack_30;
      uStack_80 = uStack_2c;
LAB_00f4c2d8:
      extraout_r3[7] = local_90;
      extraout_r3[8] = uStack_8c;
      extraout_r3[9] = uStack_88;
      extraout_r3[10] = uStack_84;
      extraout_r3[0xb] = uStack_80;
      *extraout_r3 = local_58;
      extraout_r3[1] = local_54;
      extraout_r3[2] = local_b4;
      extraout_r3[3] = local_4c;
      extraout_r3[4] = local_48;
      extraout_r3[5] = local_44;
      extraout_r3[6] = local_40;
      FUN_00f39064(&local_b0);
      return;
    }
    if (local_54 == 0x80000000) break;
    FUN_00f48560(&local_58,param_2 + 4);
    if (local_58 != 2) {
      local_b4 = local_50;
      local_90 = local_3c;
      uStack_8c = uStack_38;
      uStack_88 = uStack_34;
      uStack_84 = uStack_30;
      uStack_80 = uStack_2c;
      if (uVar1 != 0) {
        thunk_FUN_016d3fb4(uVar2);
      }
      goto LAB_00f4c2d8;
    }
    if (local_50 == 9) break;
    local_70[0] = local_50;
    local_74 = uVar3;
    local_78 = uVar2;
    local_7c = uVar1;
    *puVar5 = local_4c;
    puVar5[1] = local_48;
    puVar5[2] = local_44;
    puVar5[3] = local_40;
    puVar5[4] = local_3c;
    FUN_00f47aec(&local_58,&local_b0,&local_7c,local_70);
    if (local_58 != 9) {
      iVar4 = 4;
      if (1 < local_58) {
        iVar4 = local_58 - 2;
      }
      if (3 < iVar4 - 1U) {
        if (iVar4 != 0) {
          if (iVar4 != 5) {
            FUN_00f47964((uint)&local_58 | 4);
            goto LAB_00f4c108;
          }
          FUN_00f3c818((uint)&local_58 | 4);
        }
        if (local_54 != 0) {
          thunk_FUN_016d3fb4(local_50);
        }
      }
    }
LAB_00f4c108:
    param_2 = param_2 + 8;
  }
  extraout_r3[2] = (uint)local_b0;
  extraout_r3[3] = local_ac;
  extraout_r3[4] = local_a8;
  extraout_r3[5] = local_a4;
  extraout_r3[6] = local_a0;
  extraout_r3[7] = uStack_9c;
  extraout_r3[8] = uStack_98;
  extraout_r3[9] = local_94;
  *extraout_r3 = 2;
  return;
}

