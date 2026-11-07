// FUN_01276e78 @ 01276e78 size=752 calls_out=10 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01276e78(uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  uint local_d0;
  undefined4 *local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88 [12];
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
  
  uVar9 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar6 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
  if ((char)puVar6[4] == '\0') {
    FUN_019ae6ac(&local_58);
    *puVar6 = local_58;
    puVar6[1] = local_54;
    puVar6[2] = local_50;
    puVar6[3] = local_4c;
    *(undefined1 *)(puVar6 + 4) = 1;
  }
  local_b8 = *puVar6;
  uStack_b4 = puVar6[1];
  uStack_b0 = puVar6[2];
  uStack_ac = puVar6[3];
  local_c8 = &DAT_0056d238;
  puVar4 = (uint *)((uint)local_88 | 4);
  *puVar6 = local_b8 + 1;
  puVar6[1] = uStack_b4 + (0xfffffffe < local_b8);
  local_bc = 0;
  local_c0 = 0;
  local_c4 = 0;
  piVar8 = param_2;
LAB_01276f14:
  do {
    piVar7 = piVar8;
    if (piVar7 == param_2 + param_3 * 8) {
LAB_0127705c:
      param_1[2] = (uint)local_c8;
      param_1[3] = local_c4;
      param_1[4] = local_c0;
      param_1[5] = local_bc;
      param_1[6] = local_b8;
      param_1[7] = uStack_b4;
      param_1[8] = uStack_b0;
      param_1[9] = uStack_ac;
      *param_1 = 2;
      return;
    }
    piVar8 = piVar7 + 8;
  } while (*piVar7 == -0x7fffffeb);
  FUN_01243ebc(&local_58,piVar7);
  uVar3 = local_4c;
  uVar2 = local_50;
  uVar1 = local_54;
  if (local_58 == 2) {
    if (local_54 == 0x80000000) goto LAB_0127705c;
    FUN_012779f0(&local_58,piVar7 + 4);
    if (local_58 == 2) {
      if (local_50 == 9) goto LAB_0127705c;
      local_90 = uVar2;
      local_94 = uVar1;
      local_88[0] = local_50;
      local_8c = uVar3;
      *puVar4 = local_4c;
      puVar4[1] = local_48;
      puVar4[2] = local_44;
      puVar4[3] = local_40;
      puVar4[4] = local_3c;
      FUN_01274dcc(&local_58,&local_c8,&local_94,local_88);
      uVar1 = local_50;
      if (local_58 != 9) {
        iVar5 = 4;
        if (1 < local_58) {
          iVar5 = local_58 - 2;
        }
        if (3 < iVar5 - 1U) {
          if (iVar5 == 0) {
            FUN_019bb7e0(local_54,local_50);
          }
          else if (iVar5 == 5) {
            FUN_01a4137c(local_50,local_4c);
            FUN_0134aee0(local_54,uVar1,8,0x18);
          }
          else {
            FUN_01a41e70((uint)&local_58 | 4);
          }
        }
      }
      goto LAB_01276f14;
    }
    local_d0 = local_4c;
    local_a8 = local_3c;
    uStack_a4 = uStack_38;
    uStack_a0 = uStack_34;
    uStack_9c = uStack_30;
    uStack_98 = uStack_2c;
    FUN_019bb7e0(uVar1,uVar2);
  }
  else {
    local_d0 = local_4c;
    local_a8 = local_3c;
    uStack_a4 = uStack_38;
    uStack_a0 = uStack_34;
    uStack_9c = uStack_30;
    uStack_98 = uStack_2c;
  }
  param_1[1] = local_54;
  param_1[2] = local_50;
  param_1[3] = local_d0;
  param_1[5] = local_44;
  param_1[4] = local_48;
  param_1[7] = local_a8;
  param_1[8] = uStack_a4;
  param_1[9] = uStack_a0;
  param_1[10] = uStack_9c;
  param_1[0xb] = uStack_98;
  param_1[6] = local_40;
  *param_1 = local_58;
  FUN_0126f310(&local_c8);
  return;
}

