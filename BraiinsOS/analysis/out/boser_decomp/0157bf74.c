// FUN_0157bf74 @ 0157bf74 size=2316 calls_out=15 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0157bf74(uint *param_1,uint param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int *piVar6;
  byte *pbVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 *unaff_r6;
  uint uVar10;
  int *piVar11;
  undefined1 **unaff_r7;
  int *piVar12;
  int *unaff_r10;
  undefined1 *puVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined4 local_154;
  undefined4 local_150;
  undefined *local_13c;
  undefined1 *local_130;
  uint local_12c;
  ushort *local_128;
  int local_124;
  uint local_120;
  undefined1 *local_11c;
  undefined1 local_118 [8];
  int local_110;
  int local_10c;
  undefined1 *local_108;
  uint uStack_104;
  ushort *puStack_100;
  undefined1 *local_f8;
  undefined2 *local_f4;
  undefined1 **local_f0;
  code *local_ec;
  int *local_e8;
  undefined2 *local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int *local_c4;
  int local_c0;
  uint local_bc;
  uint local_b8;
  uint local_ac;
  int local_a0;
  undefined1 *local_9c;
  int *local_98;
  undefined1 *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_130 = (undefined1 *)0x80000000;
  puVar13 = &DAT_00000001;
  local_13c = &DAT_01cfc008;
  local_12c = param_2;
  local_128 = param_3;
  while( true ) {
    local_44 = 0;
    local_40 = 0xfa;
    local_48 = 1;
    local_4c = 1;
    local_58 = 1;
    local_50 = 0;
    local_3c = 0;
    local_9c = (undefined1 *)0x0;
    local_a0 = 0;
    local_54 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 4;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 4;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 4;
    local_8c = 0;
    local_90 = 0;
    local_94 = (undefined1 *)0x0;
    local_98 = (int *)&SUB_00000004;
    FUN_016dd884(&local_e0,&local_a0,local_12c,local_128);
    iVar1 = local_c0;
    piVar12 = local_c4;
    if (local_e0 != 0xb) break;
    if (local_ac < local_b8) goto LAB_0157c8e4;
    if (local_b8 != 0) {
      if (local_b8 < local_bc) {
        if (-0x41 < *(char *)(local_c0 + local_b8)) goto LAB_0157c270;
      }
      else if (local_b8 == local_bc) goto LAB_0157c270;
      goto LAB_0157c8e4;
    }
LAB_0157c270:
    if (local_ac != 0) {
      if (local_ac < local_bc) {
        if (*(char *)(local_c0 + local_ac) < -0x40) {
LAB_0157c8e4:
          local_13c = &DAT_01cfbfe8;
          uVar10 = local_b8;
          local_b8 = local_ac;
          goto LAB_0157c8f8;
        }
      }
      else if (local_ac != local_bc) goto LAB_0157c8e4;
    }
    puVar3 = (undefined1 *)(local_ac - local_b8);
    bVar14 = puVar3 == (undefined1 *)0x2;
    if (bVar14) {
      unaff_r7 = (undefined1 **)(local_c0 + local_b8);
      unaff_r6 = (undefined1 *)0x635c;
      puVar3 = (undefined1 *)(uint)*(ushort *)unaff_r7;
    }
    if (!bVar14 || puVar3 != unaff_r6) {
LAB_0157c2b4:
      *param_1 = 0x80000001;
      goto LAB_0157c2c8;
    }
    if (local_ac < local_bc) {
      if (*(char *)(local_c0 + local_ac) < -0x40) goto LAB_0157c90c;
    }
    else if (local_ac != local_bc) {
LAB_0157c90c:
      local_13c = &DAT_01cfbff8;
      uVar10 = local_ac;
      local_b8 = local_bc;
      goto LAB_0157c8f8;
    }
    if (local_ac == local_bc) goto LAB_0157c2b4;
    pbVar7 = (byte *)(local_c0 + local_ac);
    puVar3 = (undefined1 *)(uint)*pbVar7;
    if (0x7fffffff < (uint)(int)(char)*pbVar7) {
      if (puVar3 < (undefined1 *)0xe0) {
        puVar3 = (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6);
      }
      else {
        uVar10 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
        if (puVar3 < (undefined1 *)0xf0) {
          puVar3 = (undefined1 *)(uVar10 | ((uint)puVar3 & 0x1f) << 0xc);
        }
        else {
          puVar3 = (undefined1 *)(pbVar7[3] & 0x3f | uVar10 << 6 | ((uint)puVar3 & 7) << 0x12);
          if (puVar3 == &DAT_00110000) goto LAB_0157c2b4;
        }
      }
    }
    if (0x19 < ((uint)puVar3 & 0xffffffdf) - 0x41) goto LAB_0157c2b4;
    unaff_r6 = (undefined1 *)((uint)puVar3 & 0x1f);
    uVar10 = local_ac + 1;
    local_11c = unaff_r6;
    if (local_130 == (undefined1 *)0x80000000) {
      if (local_b8 != 0) {
        if (local_b8 < local_bc) {
          if ((char)*(ushort *)unaff_r7 < -0x40) goto LAB_0157c920;
        }
        else if (local_b8 != local_bc) {
LAB_0157c920:
          uVar10 = 0;
          goto LAB_0157c8f8;
        }
      }
      if (uVar10 != 0) {
        if (uVar10 < local_bc) {
          if (*(char *)(local_c0 + uVar10) < -0x40) goto LAB_0157c928;
        }
        else if (local_bc != uVar10) {
LAB_0157c928:
          local_13c = &DAT_01cfc018;
          local_b8 = local_bc;
LAB_0157c8f8:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_c0,local_bc,uVar10,local_b8,local_13c);
        }
      }
      local_10c = local_bc - uVar10;
      local_110 = local_c0 + uVar10;
      local_e8 = &local_110;
      local_e4 = &DAT_0132b6a0;
      local_f4 = &DAT_0132b6a0;
      local_f8 = local_118;
      local_ec = FUN_012fbb84;
      local_f0 = &local_11c;
      FUN_00664898(&local_108,&DAT_005a902e,&local_f8);
      local_f8 = local_108;
      local_f4 = (undefined2 *)uStack_104;
      local_f0 = (undefined1 **)puStack_100;
      if (local_130 != (undefined1 *)0x80000000) {
        FUN_019bb7e0(local_130,local_12c);
      }
      local_130 = local_f8;
      local_12c = (uint)local_f4;
      local_128 = (ushort *)local_f0;
      unaff_r7 = local_f0;
    }
    else {
      local_f8 = unaff_r6;
      FUN_01ad0484(&local_130,local_b8,uVar10,&local_f8,1,&DAT_01cfc028);
    }
    FUN_019bb7e0(piVar12,iVar1);
    FUN_0157ca2c(&local_a0);
    unaff_r10 = piVar12;
  }
  if (local_e0 != 0x22) {
    if ((local_e0 & 0x3e) == 0x20) {
      *param_1 = (uint)local_130;
      param_1[1] = local_12c;
      param_1[2] = (uint)local_128;
      FUN_019bb7e0(local_c4,local_c0);
      bVar5 = 0;
    }
    else {
      *param_1 = 0x80000001;
LAB_0157c2c8:
      FUN_019bb7e0(local_c4,local_c0);
      bVar5 = 1;
    }
    FUN_0157ca2c(&local_a0);
    if ((bool)(bVar5 & local_130 != (undefined1 *)0x80000000)) {
LAB_0157c2ec:
      FUN_019bb7e0(local_130,local_12c);
    }
    return;
  }
  local_120 = local_d8;
  local_124 = local_dc;
  FUN_0157ca2c(&local_a0);
LAB_0157c348:
  local_f8 = local_130;
  local_f4 = (undefined2 *)local_12c;
  local_f0 = (undefined1 **)local_128;
  local_e8 = (int *)((uint)local_e8 & 0xffffff00);
  local_ec = (code *)0x0;
  local_d0 = 4;
  local_d4 = 0;
  local_dc = 4;
  local_e0 = 0;
  local_cc = 0;
  local_d8 = 0;
  piVar12 = &local_124;
LAB_0157c378:
  uVar10 = local_d8;
  if (4 < *piVar12 - 7U) goto LAB_0157c5f8;
  piVar6 = (int *)piVar12[1];
  switch(*piVar12) {
  case 7:
    piVar11 = piVar6 + 1;
    if (*piVar6 != 0x110008) {
      piVar11 = piVar6;
    }
    uVar15 = CONCAT44(puVar13,(uint)(*piVar6 == 0x110008));
    while( true ) {
      puVar13 = (undefined1 *)(uVar15 >> 0x20);
      uVar8 = (undefined4)uVar15;
      if (((uVar15 & 1) == 0) && (*piVar11 == 0x110005)) {
        FUN_01582628(&local_f8,piVar11 + 1);
      }
      FUN_016f1f2c(&local_38,uVar8,piVar11);
      if (local_38 == 4) break;
      uVar15 = FUN_016f1ec8(&local_38);
      iVar1 = local_cc;
      if (local_cc == local_d4) {
        FUN_015f5b18(&local_d4);
      }
      local_cc = iVar1 + 1;
      puVar4 = (undefined4 *)(local_d0 + iVar1 * 0x18);
      *puVar4 = uVar8;
      puVar4[1] = piVar11;
      puVar4[2] = local_38;
      puVar4[3] = uStack_34;
      puVar4[4] = uStack_30;
      puVar4[5] = uStack_2c;
      piVar11 = (int *)(uVar15 >> 0x20);
    }
    unaff_r10 = (int *)0x0;
    if (local_cc != 0) {
      iVar1 = local_d0 + local_cc * 0x18;
      if (*(int *)(iVar1 + -0x18) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0157c460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0157c464 + *(int *)(&DAT_0157c464 + *(int *)(iVar1 + -0x10) * 4)))();
        return;
      }
      local_cc = local_cc + -1;
    }
    goto LAB_0157c5f8;
  case 8:
    iVar1 = 0x24;
    uVar8 = 0;
    break;
  case 9:
    iVar1 = 0x2c;
    uVar8 = 1;
    break;
  case 10:
    iVar1 = piVar6[2];
    uVar8 = 3;
    goto LAB_0157c588;
  case 0xb:
    goto switchD_0157c394_caseD_b;
  }
  piVar11 = *(int **)((int)piVar6 + iVar1);
LAB_0157c5b0:
  if (local_d8 == local_e0) {
    FUN_0161d664(&local_e0);
  }
  puVar4 = (undefined4 *)(local_dc + uVar10 * 0x14);
  *puVar4 = piVar12;
  puVar4[1] = uVar8;
  puVar4[2] = piVar6;
  puVar4[3] = unaff_r10;
  puVar4[4] = puVar13;
  uVar10 = uVar10 + 1;
  goto LAB_0157c5e4;
switchD_0157c394_caseD_b:
  iVar1 = piVar6[2];
  uVar8 = 2;
LAB_0157c588:
  if (iVar1 != 0) {
    piVar6 = (int *)piVar6[1];
    puVar13 = (undefined1 *)(iVar1 + -1);
    unaff_r10 = piVar6 + 2;
    piVar11 = piVar6;
    goto LAB_0157c5b0;
  }
LAB_0157c5f8:
  FUN_015824cc(&local_a0,&local_f8,*piVar12,piVar12[1]);
  if (local_a0 == 0x22) {
    if (local_d8 != 0) {
      uVar10 = local_d8;
      piVar12 = (int *)(local_dc + local_d8 * 0x14);
      do {
        piVar6 = piVar12 + -5;
        uVar2 = piVar12[-4];
        if (uVar2 == 4) {
          local_d8 = uVar10 - 1;
          break;
        }
        puVar4 = (undefined4 *)*piVar6;
        uVar9 = uVar10 - 1;
        if (1 < uVar2) {
          piVar11 = (int *)piVar12[-2];
          if (piVar12[-1] != 0) goto LAB_0157c688;
        }
        FUN_015824cc(&local_a0,&local_f8,*puVar4,puVar4[1]);
        if (local_a0 != 0x22) {
          bVar5 = (byte)local_90;
          local_d8 = uVar9;
          goto LAB_0157c6c8;
        }
        uVar10 = uVar9;
        piVar12 = piVar6;
        if (uVar9 == 0) {
          local_d8 = 0;
          break;
        }
      } while( true );
    }
    bVar14 = true;
    unaff_r10 = *(int **)((uint)&local_f8 | 4);
    puVar13 = (undefined1 *)((undefined4 *)((uint)&local_f8 | 4))[1];
    puVar3 = local_f8;
    bVar5 = (byte)local_e8;
  }
  else {
    bVar5 = (byte)local_90;
LAB_0157c6c8:
    local_154 = local_80;
    local_150 = local_84;
    puVar13 = local_94;
    unaff_r10 = local_98;
    puVar3 = local_9c;
    bVar14 = false;
    if (local_f8 != (undefined1 *)0x80000000) {
      FUN_019bb7e0(local_f8,local_f4);
    }
  }
  FUN_0134aee0(local_e0,local_dc,4,0x14);
  FUN_0134aee0(local_d4,local_d0,4,0x18);
  if (!bVar14) {
    FUN_019bb7e0(local_150,local_154);
LAB_0157c884:
    *param_1 = 0x80000001;
LAB_0157c8a4:
    FUN_0157cac0(&local_124);
    return;
  }
  if (puVar3 == (undefined1 *)0x80000001) goto LAB_0157c884;
  *(undefined4 *)((uint)&local_130 | 4) = unaff_r10;
  ((undefined4 *)((uint)&local_130 | 4))[1] = puVar13;
  local_130 = puVar3;
  if ((bVar5 & 1) == 0) {
    *param_1 = (uint)puVar3;
    param_1[1] = local_12c;
    param_1[2] = (uint)local_128;
    goto LAB_0157c8a4;
  }
  local_40 = 0xfa;
  local_44 = 0;
  local_48 = 1;
  local_4c = 1;
  local_50 = 0;
  local_3c = 0;
  local_9c = (undefined1 *)0x0;
  local_a0 = 0;
  local_54 = 0;
  local_58 = 1;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 4;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 4;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 4;
  local_8c = 0;
  local_90 = 0;
  local_94 = (undefined1 *)0x0;
  local_98 = (int *)&SUB_00000004;
  FUN_016dd884(&local_e0,&local_a0,unaff_r10,puVar13);
  uVar10 = local_d8;
  iVar1 = local_dc;
  if (local_e0 != 0x22) {
    *param_1 = 0x80000001;
    FUN_0157cc1c(&local_e0);
    FUN_0157ca2c(&local_a0);
    FUN_0157cac0(&local_124);
    if (local_130 == (undefined1 *)0x80000000) {
      return;
    }
    goto LAB_0157c2ec;
  }
  FUN_0157cac0(&local_124);
  local_120 = uVar10;
  local_124 = iVar1;
  FUN_0157ca2c(&local_a0);
  goto LAB_0157c348;
LAB_0157c688:
  *piVar6 = (int)puVar4;
  piVar12[-4] = uVar2;
  piVar12[-3] = (int)piVar11;
  piVar12[-2] = (int)(piVar11 + 2);
  piVar12[-1] = piVar12[-1] + -1;
LAB_0157c5e4:
  local_d8 = uVar10;
  piVar12 = piVar11;
  goto LAB_0157c378;
}

