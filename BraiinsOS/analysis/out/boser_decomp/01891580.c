// FUN_01891580 @ 01891580 size=1032 calls_out=12 calls_in=1
// strings: 

void FUN_01891580(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 auStack_348 [72];
  int local_300;
  undefined1 *local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined1 auStack_2f0 [72];
  undefined1 local_2a8 [48];
  undefined1 auStack_278 [48];
  int local_248 [36];
  int local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 auStack_128 [48];
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  iVar6 = *(int *)(param_2 + 0x44);
  FUN_0188fef8(auStack_348,*(undefined4 *)(iVar6 + 0xc),param_5,param_6);
  local_300 = param_2;
  local_2fc = auStack_348;
  local_2f8 = param_3;
  local_2f4 = param_4;
  FUN_01bed4e2(auStack_2f0,auStack_348,0x44);
  puVar1 = *(undefined4 **)(iVar6 + 4);
  puVar3 = *(undefined4 **)(iVar6 + 8);
  puVar9 = (undefined4 *)*puVar1;
  iVar8 = 100;
  puVar11 = (undefined4 *)*puVar9;
  do {
    iVar10 = **(int **)(iVar6 + 8);
    FUN_01bed93e(&local_98,0,0x30);
    uVar4 = *(int *)(iVar10 + 0xc) << 2;
    if (0x30 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar4,0x30,&DAT_01d2188c);
    }
    iVar2 = FUN_01896960(iVar10,&local_300,FUN_018919a0,&local_98,uVar4);
    if ((iVar2 != 0) || (FUN_01896374(local_248,iVar10,&local_98,uVar4), local_248[0] != 0)) break;
    FUN_01896c94(auStack_278,puVar1,local_2a8);
    (*(code *)puVar3[2])(local_248,local_2a8);
    FUN_01896590(&local_98,*puVar3,puVar3[1],local_248);
    if (local_98 == 1) break;
    FUN_01bed4e2(&local_188,&uStack_94,0x60);
    local_f8 = local_188;
    uStack_f4 = uStack_184;
    uStack_f0 = uStack_180;
    uStack_ec = uStack_17c;
    uStack_e8 = uStack_178;
    uStack_e4 = uStack_174;
    local_e0 = local_170;
    uStack_dc = uStack_16c;
    uStack_d8 = uStack_168;
    uStack_d4 = uStack_164;
    uStack_d0 = uStack_160;
    uStack_cc = uStack_15c;
    pcVar7 = (code *)*puVar11;
    FUN_01bed93e(&local_188,0,0x30);
    (*pcVar7)(&local_188,&local_f8,&DAT_0051d604);
    local_98 = local_188;
    uStack_94 = uStack_184;
    uStack_90 = uStack_180;
    uStack_8c = uStack_17c;
    uStack_88 = uStack_178;
    uStack_84 = uStack_174;
    local_80 = local_170;
    uStack_7c = uStack_16c;
    uStack_78 = uStack_168;
    uStack_74 = uStack_164;
    uStack_70 = uStack_160;
    uStack_6c = uStack_15c;
    if (0xc < (uint)puVar11[3]) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,puVar11[3],0xc,&DAT_01d2192c);
    }
    FUN_01bd50d4(&local_98,puVar11 + 0x1c);
    local_1b8 = local_98;
    uStack_1b4 = uStack_94;
    uStack_1b0 = uStack_90;
    uStack_1ac = uStack_8c;
    uStack_1a8 = uStack_88;
    uStack_1a4 = uStack_84;
    local_1a0 = local_80;
    uStack_19c = uStack_7c;
    uStack_198 = uStack_78;
    uStack_194 = uStack_74;
    uStack_190 = uStack_70;
    uStack_18c = uStack_6c;
    uVar4 = puVar11[3];
    if (0xc < uVar4) {
LAB_01891938:
      puVar5 = &DAT_01d2196c;
LAB_0189197c:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar4,0xc,puVar5);
    }
    iVar10 = FUN_01bd4ea8(&local_1b8);
    if (iVar10 != -1) {
      FUN_01890754(auStack_128,*puVar9,auStack_2f0);
      pcVar7 = (code *)puVar9[1];
      FUN_01bed93e(&local_98,0,0x30);
      (*pcVar7)(&local_98,param_2 + 0x48,&local_1b8);
      local_c8 = local_98;
      uStack_c4 = uStack_94;
      uStack_c0 = uStack_90;
      uStack_bc = uStack_8c;
      uStack_b8 = uStack_88;
      uStack_b4 = uStack_84;
      local_b0 = local_80;
      uStack_ac = uStack_7c;
      uStack_a8 = uStack_78;
      uStack_a4 = uStack_74;
      uStack_a0 = uStack_70;
      uStack_9c = uStack_6c;
      uVar4 = puVar11[3];
      if (0xc < uVar4) {
        puVar5 = &DAT_01d218dc;
        goto LAB_0189197c;
      }
      FUN_01bd5160(&local_c8,&local_c8,auStack_128,puVar11 + 0x1c,uVar4);
      local_188 = local_c8;
      uStack_184 = uStack_c4;
      uStack_180 = uStack_c0;
      uStack_17c = uStack_bc;
      uStack_178 = uStack_b8;
      uStack_174 = uStack_b4;
      local_170 = local_b0;
      uStack_16c = uStack_ac;
      uStack_168 = uStack_a8;
      uStack_164 = uStack_a4;
      uStack_160 = uStack_a0;
      uStack_15c = uStack_9c;
      pcVar7 = (code *)puVar9[1];
      FUN_01bed93e(&local_98,0,0x30);
      (*pcVar7)(&local_98,auStack_278,&local_188);
      local_f8 = local_98;
      uStack_f4 = uStack_94;
      uStack_f0 = uStack_90;
      uStack_ec = uStack_8c;
      uStack_e8 = uStack_88;
      uStack_e4 = uStack_84;
      local_e0 = local_80;
      uStack_dc = uStack_7c;
      uStack_d8 = uStack_78;
      uStack_d4 = uStack_74;
      uStack_d0 = uStack_70;
      uStack_cc = uStack_6c;
      uVar4 = puVar11[3];
      if (0xc < uVar4) goto LAB_01891938;
      iVar10 = FUN_01bd4ea8();
      if (iVar10 != -1) {
        FUN_01bed93e(&local_98,0,0x6d);
        local_98 = (**(code **)(iVar6 + 0x14))(puVar9,&local_1b8,&local_f8,(uint)&local_98 | 4,0x69)
        ;
        FUN_01bed4e2(param_1 + 1,&local_98,0x70);
        *param_1 = 0;
        return;
      }
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *param_1 = 1;
  return;
}

