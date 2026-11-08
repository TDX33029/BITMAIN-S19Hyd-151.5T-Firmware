// FUN_0149fe70 @ 0149fe70 size=1080 calls_out=15 calls_in=0
// strings: Falling edge or no interrupt not supported

undefined8 FUN_0149fe70(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 **ppuVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 *local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 *local_130;
  code *local_12c;
  undefined **local_128;
  undefined2 *local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 *local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 *local_40;
  uint local_3c;
  undefined1 *local_38;
  undefined4 **local_30;
  code *local_2c;
  
  puVar11 = *(undefined4 **)(param_1 + 4);
  local_5c = *(undefined4 **)(param_1 + 0xc);
  if (puVar11 == local_5c) {
    local_130 = (undefined4 *)0x0;
    goto LAB_014a025c;
  }
  piVar5 = *(int **)(param_1 + 0x10);
  local_13c = &local_150;
  uVar6 = *puVar11;
  uVar7 = puVar11[1];
  uVar8 = puVar11[2];
  uStack_144 = puVar11[3];
  *(undefined4 **)(param_1 + 4) = puVar11 + 4;
  local_44 = 4;
  local_128 = &local_48;
  local_48 = &DAT_0056e444;
  local_130 = &local_138;
  local_148._1_1_ = (undefined1)(uVar8 >> 8);
  uVar2 = local_148._1_1_;
  uVar13 = uVar8 & 0xff;
  local_124 = &DAT_0132b6a0;
  local_12c = FUN_012fd074;
  local_150 = uVar6;
  local_14c = uVar7;
  local_148 = uVar8;
  local_138 = uVar6;
  local_134 = uVar7;
  FUN_00664898(&local_40,&DAT_005ac2bb,&local_130);
  iVar12 = *(int *)(&DAT_01d32790 + uVar13 * 4);
  uVar9 = *(uint *)(&DAT_00569c78 + uVar13 * 4);
  local_12c = (code *)0x1b6;
  uVar8 = (uint)local_124 >> 8;
  local_130 = (undefined4 *)0x0;
  local_128 = (undefined **)&LAB_01000100;
  local_124 = (undefined2 *)CONCAT31((uint3)uVar8 & 0xffff00,1);
  FUN_019a581c(&local_30,&local_130,local_3c,local_38);
  if (((char)local_30 == '\x04') || (uVar8 = (uint)local_30 & 0xff, uVar8 == 4)) {
    ppuVar10 = (undefined4 **)&DAT_01d2e7c8;
    do {
      uVar8 = FUN_01bf053e(local_2c,iVar12,uVar9);
      if (uVar8 == 0xffffffff) {
        puVar3 = (uint *)FUN_01be3244();
        local_130 = (undefined4 *)((uint)local_130 & 0xffffff00);
        local_12c = (code *)*puVar3;
        if (*puVar3 != 4) {
          ppuVar10 = &local_130;
          goto LAB_014a0040;
        }
        FUN_0069263c(0);
      }
      else {
        local_12c = (code *)uVar8;
        local_130 = (undefined4 *)CONCAT31(local_130._1_3_,4);
        if (uVar8 == 0) {
LAB_014a0040:
          puVar11 = *ppuVar10;
          uVar8 = (uint)puVar11 & 0xff;
          if (uVar8 != 4) {
            puVar4 = ppuVar10[1];
            FUN_01bf01d6(local_2c);
            uVar9 = (uint)puVar11 >> 8 | (int)puVar4 << 0x18;
            local_2c = (code *)puVar4;
            goto LAB_014a009c;
          }
          break;
        }
        if (uVar9 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar8,uVar9,uVar9,&DAT_01d2e7d0);
        }
        iVar12 = iVar12 + uVar8;
        uVar9 = uVar9 - uVar8;
      }
    } while (uVar9 != 0);
    FUN_01bf01d6(local_2c);
    FUN_019bb7e0(local_40,local_3c);
    bVar1 = true;
    local_5c = (undefined4 *)&SUB_00000004;
  }
  else {
    uVar9 = (uint)local_30 >> 8 | (int)local_2c << 0x18;
LAB_014a009c:
    FUN_019bb7e0(local_40,local_3c);
    bVar1 = false;
    local_54 = (uint)local_2c & 0xffffff00 | uVar9 >> 0x18;
    local_58 = uVar8 | uVar9 << 8;
    local_5c = (undefined4 *)0x0;
  }
  local_2c = FUN_014a3708;
  local_30 = &local_13c;
  ppuVar10 = &local_130;
  FUN_00664898(ppuVar10,&DAT_005b46be,&local_30);
  local_40 = local_130;
  local_3c = (uint)local_12c;
  local_38 = (undefined1 *)local_128;
  if (bVar1) {
    FUN_019bb7e0(local_130,local_12c);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar13) {
    default:
      puVar11 = (undefined4 *)FUN_00667978("Falling edge or no interrupt not supported",0x2a);
      goto LAB_014a0228;
    case 1:
      local_78 = 0;
      local_e0 = 0;
      local_df = uVar2;
      local_110 = uVar6;
      local_10c = uVar7;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc0);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0xc0);
      }
      FUN_01bed4e2(puVar4,&local_130,0xc0);
      puVar11 = (undefined4 *)&UNK_01cf934c;
      break;
    case 3:
      FUN_019bbe10(&local_5c,(&switchD_014a0118::switchdataD_014a011c)[uVar13],uVar6,uVar7);
      local_70 = local_58;
      uStack_6c = local_54;
      uStack_68 = uStack_50;
      uStack_64 = uStack_4c;
      if (local_5c == (undefined4 *)0x2) {
        puVar11 = (undefined4 *)FUN_014b50e0(&local_70);
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (uint *)((uint)&local_130 | 4);
        *puVar3 = local_58;
        puVar3[1] = local_54;
        puVar3[2] = uStack_50;
        puVar3[3] = uStack_4c;
        local_108 = CONCAT31(local_108._1_3_,uVar2);
        local_10c = CONCAT22(local_10c._2_2_,0x300);
        local_130 = local_5c;
        local_11c = 5;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(0x2c);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x2c);
        }
        puVar11 = (undefined4 *)&DAT_01cf93b0;
        *puVar4 = local_130;
        puVar4[1] = local_12c;
        puVar4[2] = local_128;
        puVar4[3] = local_124;
        puVar4[4] = uStack_120;
        puVar4[5] = local_11c;
        puVar4[6] = uStack_118;
        puVar4[7] = uStack_114;
        puVar4[8] = local_110;
        puVar4[9] = local_10c;
        puVar4[10] = local_108;
      }
    }
    if (puVar4 == (undefined4 *)0x0) goto LAB_014a0228;
    ppuVar10 = &local_5c;
    local_130 = puVar4;
  }
  else {
    puVar11 = (undefined4 *)FUN_014a2e4c(&local_5c,&local_40);
LAB_014a0228:
    puVar4 = (undefined4 *)*piVar5;
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)();
    }
    *piVar5 = (int)puVar11;
    puVar11 = (undefined4 *)0x0;
  }
  *ppuVar10 = puVar11;
LAB_014a025c:
  return CONCAT44(local_5c,local_130);
}

