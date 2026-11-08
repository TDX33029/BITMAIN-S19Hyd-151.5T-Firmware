// FUN_006457ec @ 006457ec size=788 calls_out=9 calls_in=0
// strings: tracing::span::active

void FUN_006457ec(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [56];
  uint local_108;
  int local_104;
  int local_100;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int *local_90;
  undefined2 *local_8c;
  
  piVar6 = param_2 + 0x18;
  if (param_2[0x1a] != 2) {
    if ((param_2[0x1a] & 1U) == 0) {
      iVar3 = param_2[0x1b];
      iVar4 = param_2[0x1c];
    }
    else {
      iVar4 = param_2[0x1c];
      iVar3 = param_2[0x1b] + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iVar4 + 0x30))(iVar3,piVar6);
  }
  if ((DAT_01d51ae9 == '\0') && (iVar3 = param_2[0x1e], iVar3 != 0)) {
    local_f4 = *(int *)(iVar3 + 0x10);
    local_f8 = *(int *)(iVar3 + 0xc);
    local_90 = &local_f8;
    local_8c = &DAT_0132b6a0;
    FUN_006404a8(piVar6,"tracing::span::active",0x15,&DAT_00594cdd,&local_90);
  }
  if (*param_2 == 3 && param_2[1] == 0) {
    param_2 = param_2 + 2;
  }
  (**(code **)(param_2[0x15] + 0xc))(&local_f8,param_2[0x14],param_3);
  if (local_f8 != 3 || local_f4 != 0) {
    local_198 = local_e8;
    uStack_194 = uStack_e4;
    uStack_190 = uStack_e0;
    uStack_18c = uStack_dc;
    local_188 = local_d8;
    uStack_184 = uStack_d4;
    uStack_180 = uStack_d0;
    uStack_17c = uStack_cc;
    uStack_178 = uStack_c8;
    local_174 = local_c4;
    uStack_170 = uStack_c0;
    uStack_16c = uStack_bc;
    uStack_168 = uStack_b8;
    uStack_164 = uStack_b4;
    local_160 = 1;
    local_19c = local_ec;
    local_1a0 = local_f0;
    local_158 = local_ac;
    local_15c = local_b0;
    iVar3 = local_f4;
    iVar4 = local_f8;
LAB_00645974:
    uVar2 = local_19c;
    uVar1 = local_1a0;
    FUN_01bed4e2(auStack_140,&local_198,0x48);
    puVar5 = (undefined4 *)0x0;
    local_150 = iVar4;
    local_14c = iVar3;
    local_148 = uVar1;
    local_144 = uVar2;
    if ((local_108 & 1) != 0) {
      if ((local_104 == 0) || (iVar3 = (**(code **)(local_100 + 0x10))(local_104), iVar3 != 0)) {
        FUN_005f6438(local_104,local_100);
      }
      else {
        puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        *puVar5 = 1;
        puVar5[1] = local_104;
        puVar5[2] = local_100;
      }
    }
    FUN_01bed4e2(param_1,&local_150,0x48);
    param_1[0x12] = puVar5;
    param_1[0x13] = &DAT_01c15700;
    goto LAB_00645a88;
  }
  if ((*param_2 == 2 && param_2[1] == 0) || (iVar3 = FUN_019e84a0(param_2,*param_3), iVar3 != 0)) {
LAB_00645910:
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    FUN_01a7481c(&local_f8,1,&DAT_01d2cc40);
    if (local_f8 == 3 && local_f4 == 0) {
      local_19c = local_ec;
      local_1a0 = local_f0;
    }
    else {
      FUN_01bed4e2(&local_90,&local_f8,0x68);
      FUN_01a753d4(&local_1a8,&local_90);
      local_160 = 0;
      if (local_1a8 == 4 && local_1a4 == 0) goto LAB_00645910;
      iVar3 = local_1a4;
      iVar4 = local_1a8;
      if (local_1a8 != 3 || local_1a4 != 0) goto LAB_00645974;
    }
    param_1[3] = local_19c;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_1a0;
  }
LAB_00645a88:
  FUN_0134c39c(piVar6);
  return;
}

