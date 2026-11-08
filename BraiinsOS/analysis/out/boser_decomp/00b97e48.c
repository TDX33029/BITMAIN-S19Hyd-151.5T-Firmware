// FUN_00b97e48 @ 00b97e48 size=1412 calls_out=12 calls_in=1
// strings: 

void FUN_00b97e48(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint ****extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint ****extraout_r2;
  uint ****extraout_r3;
  uint ****ppppuVar2;
  uint ****ppppuVar3;
  int iVar4;
  uint ****unaff_r7;
  int *piVar5;
  uint ****local_12c;
  uint ****local_128;
  uint ****local_124;
  uint ****local_120;
  uint ****local_11c;
  uint ****local_110;
  uint ****local_10c;
  uint ****local_108;
  uint ****local_104;
  uint ****local_100;
  uint ****local_fc;
  uint ****ppppuStack_f8;
  uint ****local_f4;
  uint ****local_f0;
  uint ****local_ec;
  uint ****local_e8;
  uint ****local_e4;
  uint ****ppppuStack_e0;
  uint ****ppppuStack_dc;
  uint ****local_d8;
  uint ****ppppuStack_d4;
  uint ****local_d0;
  uint ****local_cc;
  uint ****local_c8;
  uint ****ppppuStack_c4;
  uint ****ppppuStack_c0;
  uint ****ppppuStack_bc;
  uint ****local_b8;
  uint ****local_b4;
  uint ****local_b0;
  uint ****local_ac;
  uint ****local_a8;
  uint ****ppppuStack_a4;
  uint ****ppppuStack_a0;
  uint ****ppppuStack_9c;
  uint ****local_98;
  uint ****local_94;
  uint ****local_90;
  uint ****local_8c;
  uint ****local_88;
  uint ****local_84;
  uint ****local_80;
  uint ****local_7c;
  uint ****local_78;
  uint ****local_74;
  uint ****local_70;
  uint ****local_6c;
  uint ****local_68;
  uint ****local_64;
  uint ****local_60;
  uint ****ppppuStack_5c;
  uint ****local_58;
  uint ****ppppuStack_54;
  uint ****ppppuStack_50;
  uint ****ppppuStack_4c;
  uint ****ppppuStack_48;
  uint ****ppppuStack_44;
  uint ****local_30;
  uint ****local_2c;
  uint ****local_28;
  
  piVar5 = (int *)*param_2;
  if ((char)piVar5[0x1a] != '\0') {
    if ((char)piVar5[0x1a] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13f20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13f20);
  }
  if (piVar5[4] == -0x7fffffff) {
    FUN_011d58bc(&local_98,*(undefined4 *)(piVar5[0x18] + 4),*(undefined4 *)(piVar5[0x18] + 8));
    ppppuVar2 = local_8c;
    if (local_90 == (uint ****)&DAT_80000001) {
      local_b8 = local_8c;
      local_b4 = local_88;
      local_b0 = local_84;
      local_ac = local_80;
      local_a8 = local_7c;
      ppppuStack_a4 = local_78;
      ppppuStack_a0 = local_74;
      ppppuStack_9c = local_70;
      local_98 = local_8c;
      local_94 = local_88;
      local_90 = local_84;
      local_8c = local_80;
      local_88 = local_7c;
      local_84 = local_78;
      local_80 = local_74;
      local_7c = local_70;
      local_28 = (uint ****)0x0;
      puVar1 = (undefined1 *)((int)ppppuVar2 + -1);
      local_2c = (uint ****)0x1;
      local_30 = (uint ****)0x0;
      if (ppppuVar2 == (uint ****)0x0) {
        puVar1 = (undefined1 *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00b97ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&DAT_00b97ef8 + (&DAT_00b97ef8)[(int)puVar1]))();
      return;
    }
    ppppuStack_a4 = local_78;
    ppppuStack_a0 = local_74;
    ppppuStack_9c = local_70;
    local_e4 = local_6c;
    ppppuStack_e0 = local_68;
    ppppuStack_dc = local_64;
    local_d8 = local_60;
    ppppuStack_d4 = ppppuStack_5c;
    local_d0 = local_58;
    local_cc = ppppuStack_54;
    local_c8 = ppppuStack_50;
    ppppuStack_c4 = ppppuStack_4c;
    ppppuStack_c0 = ppppuStack_48;
    ppppuStack_bc = ppppuStack_44;
    local_104 = local_8c;
    local_100 = local_88;
    local_fc = local_84;
    ppppuStack_f8 = local_80;
    local_b0 = (uint ****)&local_f4;
    local_f4 = local_7c;
    local_f0 = local_78;
    local_ec = local_74;
    local_e8 = local_70;
    local_10c = local_94;
    local_110 = local_98;
    local_108 = local_90;
    local_a8 = local_78;
  }
  else {
    FUN_01bed4e2(&local_110,piVar5 + 2,0x58);
    local_b0 = extraout_r1;
    local_a8 = extraout_r3;
    ppppuStack_44 = unaff_r7;
  }
  if (local_108 == (uint ****)&DAT_80000000) {
    local_b0 = local_100 + 1;
    ppppuStack_44 = (uint ****)((undefined1 *)((int)local_100 + (int)local_fc) + 1);
    local_b4 = (uint ****)(~(uint)*local_100 & 0x80808080);
    local_b8 = local_100;
    local_a8 = local_f4;
  }
  else {
    local_b8 = (uint ****)0x0;
    local_b4 = (uint ****)&local_110;
  }
  ppppuVar3 = (uint ****)piVar5[0x19];
  ppppuVar2 = (uint ****)&local_110;
  local_ac = ppppuStack_44;
  do {
    FUN_006fc150(&local_b8);
    if (extraout_r1_00 == 0) {
      if (*piVar5 != 1) {
        local_12c = local_108;
        goto LAB_00b98188;
      }
      if (local_108 == (uint ****)&DAT_80000000) {
        ppppuVar2 = (uint ****)(~(uint)*local_100 & 0x80808080);
        ppppuVar3 = (uint ****)((undefined1 *)((int)local_100 + (int)local_fc) + 1);
        local_b8 = local_100;
        local_b0 = local_100 + 1;
        local_a8 = local_f4;
      }
      else {
        local_b8 = (uint ****)0x0;
        local_b0 = local_108;
        local_a8 = extraout_r2;
      }
      iVar4 = piVar5[1];
      local_b4 = ppppuVar2;
      local_ac = ppppuVar3;
      goto LAB_00b980dc;
    }
    FUN_006c0b14(&local_98,ppppuVar2,extraout_r1_00 + 0x20,0,ppppuVar3);
  } while (local_98 == (uint ****)0x2);
  goto LAB_00b98110;
  while (FUN_006c0854(&local_98,&local_110,extraout_r1_01 + 0x20,iVar4), local_98 == (uint ****)0x2)
  {
LAB_00b980dc:
    FUN_006fc150(&local_b8);
    if (extraout_r1_01 == 0) {
      local_12c = local_108;
LAB_00b98188:
      local_b8 = local_110;
      local_b4 = local_10c;
      local_30 = local_100;
      local_2c = local_fc;
      local_28 = ppppuStack_f8;
      local_11c = local_ec;
      local_120 = local_e8;
      local_128 = local_cc;
      local_124 = local_d8;
      local_98 = local_c8;
      local_94 = ppppuStack_c4;
      local_90 = ppppuStack_c0;
      local_8c = ppppuStack_bc;
      local_78 = local_e4;
      local_74 = ppppuStack_e0;
      local_68 = ppppuStack_d4;
      local_64 = local_d0;
      local_70 = ppppuStack_dc;
      local_88 = local_f4;
      local_84 = local_f0;
      goto LAB_00b98568;
    }
  }
LAB_00b98110:
  ppppuVar2 = local_98;
  local_30 = local_94;
  local_2c = local_90;
  local_28 = local_8c;
  local_128 = local_60;
  local_11c = local_80;
  local_120 = local_7c;
  local_124 = local_6c;
  FUN_00b96444(&local_110);
  local_12c = (uint ****)&DAT_80000001;
  local_104 = ppppuVar2;
LAB_00b98568:
  *param_1 = local_b8;
  param_1[1] = local_b4;
  param_1[2] = local_12c;
  param_1[3] = local_104;
  param_1[4] = local_30;
  param_1[5] = local_2c;
  param_1[6] = local_28;
  param_1[0x11] = local_128;
  param_1[9] = local_11c;
  param_1[0xf] = local_68;
  param_1[10] = local_120;
  param_1[0xb] = local_78;
  param_1[0xc] = local_74;
  param_1[0xd] = local_70;
  param_1[0xe] = local_124;
  param_1[0x10] = local_64;
  param_1[7] = local_88;
  param_1[8] = local_84;
  param_1[0x12] = local_98;
  param_1[0x13] = local_94;
  param_1[0x14] = local_90;
  param_1[0x15] = local_8c;
  *(undefined1 *)(piVar5 + 0x1a) = 1;
  return;
}

