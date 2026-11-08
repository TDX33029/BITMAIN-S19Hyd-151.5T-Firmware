// FUN_0140fed4 @ 0140fed4 size=1164 calls_out=8 calls_in=0
// strings: wasn't expecting a frame to reclaim

undefined4 FUN_0140fed4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *local_230;
  undefined4 uStack_22c;
  uint local_228;
  int local_224;
  int local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  uint local_204;
  uint uStack_200;
  int iStack_1fc;
  uint local_1f0;
  int local_1ec;
  char local_1e8;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined1 local_1da;
  int local_1d8;
  int local_1d4;
  undefined4 local_1d0;
  uint local_1cc;
  uint local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  int local_1b4;
  uint local_1b0;
  int local_1ac;
  uint local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  uint uStack_194;
  uint local_190;
  int iStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  int *local_f0;
  code *local_ec;
  uint local_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  uint local_2c;
  int local_28;
  
  local_d8 = DAT_018d8a60;
  local_e8 = 2;
  if (DAT_018dd947 == '\0') {
    local_1a0 = DAT_018d8a60 + 0x1c;
    local_1a4 = 0;
    local_1a8 = 4;
    FUN_01694880(&local_f0,&local_1a8);
  }
  local_230 = local_f0;
  uStack_22c = local_ec;
  local_228 = local_e8;
  local_224 = iStack_e4;
  local_220 = local_e0;
  uStack_21c = uStack_dc;
  iStack_218 = local_d8;
  uStack_214 = uStack_d4;
  if (local_e8 != 2) {
    if ((local_e8 & 1) != 0) {
      iStack_e4 = iStack_e4 + (*(int *)(local_e0 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_e0 + 0x30))(iStack_e4,&local_230);
  }
  iVar1 = *(int *)(param_4 + 0x108);
  *(undefined4 *)(param_4 + 0x108) = 3;
  if (iVar1 != 3) {
    uVar6 = *(undefined4 *)(param_4 + 0x110);
    uVar7 = *(undefined4 *)(param_4 + 0x114);
    uVar8 = *(undefined4 *)(param_4 + 0x118);
    puVar4 = (undefined4 *)((uint)&local_210 | 4);
    *puVar4 = *(undefined4 *)(param_4 + 0x10c);
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    uVar6 = *(undefined4 *)(param_4 + 0x120);
    uVar7 = *(undefined4 *)(param_4 + 0x124);
    uVar8 = *(undefined4 *)(param_4 + 0x128);
    puVar4[4] = *(undefined4 *)(param_4 + 0x11c);
    puVar4[5] = uVar6;
    puVar4[6] = uVar7;
    puVar4[7] = uVar8;
    uVar6 = *(undefined4 *)(param_4 + 0x130);
    uVar7 = *(undefined4 *)(param_4 + 0x134);
    uVar8 = *(undefined4 *)(param_4 + 0x138);
    uVar9 = *(undefined4 *)(param_4 + 0x13c);
    puVar4[8] = *(undefined4 *)(param_4 + 300);
    puVar4[9] = uVar6;
    puVar4[10] = uVar7;
    puVar4[0xb] = uVar8;
    puVar4[0xc] = uVar9;
    iVar3 = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    local_210 = iVar1;
    if (iVar3 == 1) {
      local_1d4 = local_20c;
      local_1d0 = local_208;
      local_1cc = local_204;
      local_1c8 = uStack_200;
      local_1c4 = iStack_1fc;
      local_1c0 = local_1e0;
      local_1bc = CONCAT22(CONCAT11(local_1bc._3_1_,local_1da),local_1dc);
      uVar5 = local_204;
      local_1d8 = iVar1;
      if (iVar1 == 0) {
joined_r0x014100dc:
        if (uVar5 != 0) {
          if (local_1e8 != '\0') {
            local_1bc = CONCAT13(local_1bc._3_1_,CONCAT12(local_1da,local_1dc)) | 0x10000;
          }
          local_1ac = local_1ec;
          local_1b0 = local_1f0;
          iStack_19c = local_20c;
          uStack_198 = local_208;
          uStack_194 = local_204;
          local_190 = uStack_200;
          iStack_18c = iStack_1fc;
          uStack_188 = local_1e0;
          uStack_184 = local_1bc;
          local_1a8 = local_1a8 & 0xffffff00;
          local_28 = local_1ec;
          local_2c = local_1f0;
          local_1b4 = param_3;
          local_1a0 = iVar1;
          if (((*(uint *)(param_3 + 0x38) <= local_1f0) ||
              (piVar10 = (int *)(*(int *)(param_3 + 0x34) + local_1f0 * 0xf8),
              *piVar10 == 3 && piVar10[1] == 0)) || (piVar10[0x35] != local_1ec)) {
            local_ec = FUN_0101a4ac;
            local_f0 = &local_28;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00599806,&local_f0,&DAT_01882560);
          }
          FUN_016dd1aa(&local_e8,&local_1a8,0xb8);
          local_f0 = (int *)0x0;
          uVar5 = *(uint *)(param_2 + 0x10);
          FUN_01419a18(param_2,uVar5,&local_f0);
          if (piVar10[0x1b] == 1) {
            if ((*(uint *)(param_2 + 8) <= uVar5) ||
               (piVar2 = (int *)(*(int *)(param_2 + 4) + uVar5 * 0xc0), *piVar2 == 2)) {
                    /* WARNING: Subroutine does not return */
              FUN_015be724(&DAT_00412edc,0xb,&DAT_018a58ac);
            }
            iVar1 = piVar10[0x1c];
            *piVar2 = 1;
            piVar2[1] = iVar1;
            piVar10[0x1c] = uVar5;
          }
          else {
            piVar10[0x1c] = uVar5;
            piVar10[0x1b] = 1;
            piVar10[0x1d] = uVar5;
          }
          local_28 = local_1ec;
          local_2c = local_1f0;
          if (((*(uint *)(param_3 + 0x38) <= local_1f0) ||
              (piVar10 = (int *)(*(int *)(param_3 + 0x34) + local_1f0 * 0xf8),
              *piVar10 == 3 && piVar10[1] == 0)) || (piVar10[0x35] != local_1ec)) {
            local_ec = FUN_0101a4ac;
            local_f0 = &local_28;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00599806,&local_f0,&DAT_01882550);
          }
          if (0 < piVar10[0xf]) {
            FUN_014298a0(param_1,&local_1b4);
          }
          uVar6 = 1;
          goto joined_r0x01410214;
        }
        if (iVar1 == 1) goto LAB_014101f8;
        if (iVar1 == 0) {
          (**(code **)(local_20c + 0x10))(&local_1c8,local_208);
        }
      }
      else if (iVar1 == 1) {
        if (iStack_1fc == 0) {
          uVar5 = local_204 - uStack_200;
          if (local_204 < uStack_200) {
            uVar5 = 0;
          }
          goto joined_r0x014100dc;
        }
LAB_014101f8:
        if (local_204 != 0) {
          thunk_FUN_016d3fb4(local_208);
        }
      }
    }
    else {
      if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("wasn\'t expecting a frame to reclaim",0x47,&DAT_018a48e4);
      }
      uVar6 = 0;
      if (iVar1 == 0) {
        (**(code **)(local_20c + 0x10))(&uStack_200,local_208,local_204);
      }
      else if ((iVar1 == 1) && (local_204 != 0)) {
        thunk_FUN_016d3fb4(local_208,DAT_018dd947);
        goto joined_r0x01410214;
      }
    }
  }
  uVar6 = 0;
joined_r0x01410214:
  if (local_228 != 2) {
    iVar1 = local_224;
    if ((local_228 & 1) != 0) {
      iVar1 = local_224 + (*(int *)(local_220 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(local_220 + 0x34))(iVar1,&local_230);
  }
  FUN_005c3320(&local_230);
  return uVar6;
}

