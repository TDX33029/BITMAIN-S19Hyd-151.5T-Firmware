// FUN_0093e13c @ 0093e13c size=1968 calls_out=18 calls_in=1
// strings: power | high_energy_hashrate | power | power | high_energy_hashrate | high_energy_hashrate

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0093e13c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 ***pppuVar11;
  undefined4 ***pppuVar12;
  undefined4 ***pppuVar13;
  undefined4 ***pppuVar14;
  uint uVar15;
  undefined4 ****ppppuVar16;
  undefined4 ****ppppuVar17;
  undefined4 ***pppuVar18;
  undefined8 unaff_d8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 ****local_a8;
  int local_80;
  undefined1 local_7c;
  undefined4 ****local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 ****local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 ****ppppuStack_4c;
  undefined4 *local_48;
  undefined4 *puStack_44;
  undefined4 ****local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  
  uVar10 = *(uint *)(param_2 + 0x14);
  if (uVar10 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar15 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar10);
      if ((0x17 < uVar15 - 9) || ((1 << (uVar15 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar15 == 0x5b) {
          cVar3 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar3;
          if (cVar3 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar10 + 1;
            local_7c = 1;
            local_80 = param_2;
            FUN_005e5d80(&local_58,&local_80);
            if ((char)local_58 == '\x01') goto LAB_0093e4c0;
            if (local_58._1_1_ == '\x01') {
              FUN_008fab2c(&local_58,local_80);
              if (local_58 == (undefined4 ****)&DAT_00000001) {
LAB_0093e4c0:
                puVar6 = local_54;
                goto LAB_0093e4c8;
              }
              unaff_d8 = CONCAT44(ppppuStack_4c,local_50);
              FUN_005e5d80(&local_58,&local_80);
              if ((char)local_58 == '\x01') goto LAB_0093e4c0;
              if (local_58._1_1_ != '\x01') {
                uVar4 = 1;
LAB_0093e814:
                puVar6 = (undefined4 *)FUN_00f2c2f0(uVar4,&DAT_018673e8,&DAT_018ab990);
                goto LAB_0093e4c8;
              }
              FUN_00947348(&local_58,local_80);
              puVar6 = local_50;
              local_b8 = local_54;
              ppppuVar16 = local_58;
              if (local_58 == (undefined4 ****)&DAT_00000005 && local_54 == (undefined4 *)0x0)
              goto LAB_0093e4c8;
              local_40 = ppppuStack_4c;
              local_3c = local_48;
              local_38 = puStack_44;
              FUN_005e5d80(&local_58,&local_80);
              if ((char)local_58 == '\x01') goto LAB_0093e4c0;
              if (local_58._1_1_ != '\x01') {
                uVar4 = 2;
                goto LAB_0093e814;
              }
              FUN_00944800(&local_58,local_80);
              local_b0 = local_50;
              if (local_58 == (undefined4 ****)&DAT_00000006 && local_54 == (undefined4 *)0x0) {
                local_b8 = (undefined4 *)0x0;
                ppppuVar16 = (undefined4 ****)&DAT_00000005;
                puVar6 = local_50;
              }
              else {
                local_ac = local_54;
                local_a8 = local_58;
                local_70 = puStack_44;
                local_74 = local_48;
                local_78 = ppppuStack_4c;
                local_68 = local_40;
                local_64 = local_3c;
                local_60 = local_38;
              }
            }
            else {
              puVar6 = (undefined4 *)FUN_00f2c2f0(0,&DAT_018673e8,&DAT_018ab990);
LAB_0093e4c8:
              local_b8 = (undefined4 *)0x0;
              ppppuVar16 = (undefined4 ****)&DAT_00000005;
            }
            *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
            puVar7 = (undefined4 *)FUN_008fad50(param_2);
            if (ppppuVar16 == (undefined4 ****)&DAT_00000005 && local_b8 == (undefined4 *)0x0) {
              if (puVar7 == (undefined4 *)0x0) goto LAB_0093e6ec;
              FUN_005c3974();
              goto LAB_0093e6e4;
            }
            if (puVar7 != (undefined4 *)0x0) goto LAB_0093e6f0;
            ppppuVar17 = &local_78;
            ppppuVar8 = &local_68;
            goto LAB_0093e540;
          }
          local_58 = (undefined4 ****)0x18;
          uVar4 = FUN_008f9984(param_2,&local_58);
        }
        else {
          if (uVar15 != 0x7b) {
            puVar7 = (undefined4 *)FUN_005b8238(param_2,&local_58,&DAT_01867528);
            goto LAB_0093e6f0;
          }
          cVar3 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar3;
          if (cVar3 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar10 + 1;
            ppppuVar17 = (undefined4 ****)&local_58;
            local_7c = 1;
            local_a8 = (undefined4 ****)&DAT_00000006;
            local_ac = (undefined4 *)0x0;
            ppppuVar16 = (undefined4 ****)&DAT_00000005;
            local_b8 = (undefined4 *)0x0;
            bVar1 = false;
            local_b0 = (undefined4 *)0x1;
            local_80 = param_2;
            goto LAB_0093e238;
          }
          local_58 = (undefined4 ****)0x18;
          uVar4 = FUN_008f9984(param_2,&local_58);
        }
        *param_1 = 5;
        goto LAB_0093e1b4;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar10;
    } while (*(uint *)(param_2 + 0x10) != uVar10);
  }
  local_58 = (undefined4 ****)0x5;
  uVar4 = FUN_008f9984(param_2,&local_58);
  *param_1 = 5;
LAB_0093e1b4:
  param_1[1] = 0;
  param_1[2] = uVar4;
  return;
LAB_0093e238:
LAB_0093e23c:
  FUN_008fa450(ppppuVar17,&local_80);
  iVar2 = local_80;
  if ((char)local_58 == '\x01') {
    puVar6 = local_54;
    goto LAB_0093e50c;
  }
  if (local_58._1_1_ != '\x01') {
    if (!bVar1) {
      puVar9 = &DAT_0057a25d;
LAB_0093e78c:
      local_54 = &DAT_0157d360;
      ppppuVar16 = (undefined4 ****)&DAT_00000005;
      local_3c = (undefined4 *)0x5;
      local_58 = &local_40;
      local_40 = (undefined4 ****)0x359cf9;
      puVar6 = (undefined4 *)FUN_00f56780(puVar9,&local_58);
      local_b8 = (undefined4 *)0x0;
      goto LAB_0093e514;
    }
    if (ppppuVar16 == (undefined4 ****)&DAT_00000005 && local_b8 == (undefined4 *)0x0) {
      puVar9 = &DAT_0057a25d;
LAB_0093e7d0:
      local_3c = (undefined4 *)0x8;
      local_40 = (undefined4 ****)&DAT_0056aaa8;
      goto LAB_0093e7e0;
    }
    local_40 = local_78;
    local_3c = local_74;
    local_38 = local_70;
    puVar6 = local_c0;
    if (local_a8 == (undefined4 ****)&DAT_00000006 && local_ac == (undefined4 *)0x0) {
      local_ac = (undefined4 *)0x0;
      local_a8 = (undefined4 ****)&DAT_00000005;
    }
    else {
      local_58 = local_68;
      local_54 = local_64;
      local_50 = local_60;
    }
    goto LAB_0093e514;
  }
  *(undefined4 *)(local_80 + 8) = 0;
  *(int *)(local_80 + 0x14) = *(int *)(local_80 + 0x14) + 1;
  FUN_0157e384(ppppuVar17,local_80 + 0xc,local_80);
  puVar6 = local_54;
  if (local_58 == (undefined4 ****)&SUB_00000002) goto LAB_0093e50c;
  if (local_50 != (undefined4 *)0x14) {
    if (local_50 == (undefined4 *)0x8) {
      iVar5 = thunk_FUN_016dd50a(local_54,&DAT_0056aaa8,8);
      if (iVar5 != 0) goto LAB_0093e3b4;
      if (ppppuVar16 != (undefined4 ****)&DAT_00000005 || local_b8 != (undefined4 *)0x0) {
        puVar9 = &DAT_00582dbd;
        goto LAB_0093e7d0;
      }
      puVar6 = (undefined4 *)FUN_01114eb4(iVar2);
      if (puVar6 != (undefined4 *)0x0) goto LAB_0093e820;
      FUN_00947348(ppppuVar17,iVar2);
      local_b8 = local_54;
      puVar6 = local_50;
      if (local_58 == (undefined4 ****)&DAT_00000005 && local_54 == (undefined4 *)0x0)
      goto LAB_0093e50c;
      local_c0 = local_50;
      local_78 = ppppuStack_4c;
      local_74 = local_48;
      local_70 = puStack_44;
      ppppuVar16 = local_58;
    }
    else {
      if ((local_50 != (undefined4 *)0x5) ||
         (iVar5 = thunk_FUN_016dd50a(local_54,"power",5), iVar5 != 0)) goto LAB_0093e3b4;
      if (bVar1) {
        puVar9 = &DAT_00582dbd;
        goto LAB_0093e78c;
      }
      puVar6 = (undefined4 *)FUN_01114eb4(iVar2);
      if (puVar6 != (undefined4 *)0x0) goto LAB_0093e500;
      FUN_008fab2c(ppppuVar17,iVar2);
      if (local_58 == (undefined4 ****)&DAT_00000001) {
        puVar6 = local_54;
        local_b8 = (undefined4 *)0x0;
        ppppuVar16 = (undefined4 ****)&DAT_00000005;
        goto LAB_0093e514;
      }
      unaff_d8 = CONCAT44(ppppuStack_4c,local_50);
      bVar1 = true;
    }
    goto LAB_0093e23c;
  }
  iVar5 = thunk_FUN_016dd50a(local_54,"high_energy_hashrate",0x14);
  if (iVar5 != 0) {
LAB_0093e3b4:
    puVar6 = (undefined4 *)FUN_01114eb4(iVar2);
    if ((puVar6 != (undefined4 *)0x0) ||
       (puVar6 = (undefined4 *)FUN_008f9ac0(iVar2), puVar6 != (undefined4 *)0x0)) {
LAB_0093e500:
      ppppuVar16 = (undefined4 ****)&DAT_00000005;
      local_b8 = (undefined4 *)0x0;
      goto LAB_0093e514;
    }
    goto LAB_0093e23c;
  }
  if (local_a8 != (undefined4 ****)&DAT_00000006 || local_ac != (undefined4 *)0x0) {
    local_3c = (undefined4 *)0x14;
    puVar9 = &DAT_00582dbd;
    local_40 = (undefined4 ****)0x348c17;
LAB_0093e7e0:
    local_54 = &DAT_0157d360;
    local_58 = &local_40;
    puVar6 = (undefined4 *)FUN_00f56780(puVar9,&local_58);
LAB_0093e50c:
    local_b8 = (undefined4 *)0x0;
    ppppuVar16 = (undefined4 ****)&DAT_00000005;
LAB_0093e514:
    *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
    puVar7 = (undefined4 *)FUN_008fb5ec(param_2);
    if (ppppuVar16 == (undefined4 ****)&DAT_00000005 && local_b8 == (undefined4 *)0x0) {
      if (puVar7 != (undefined4 *)0x0) {
        FUN_005c3974();
LAB_0093e6e4:
        thunk_FUN_016d3fb4(puVar7);
      }
LAB_0093e6ec:
      puVar7 = puVar6;
    }
    else if (puVar7 == (undefined4 *)0x0) {
      ppppuVar8 = &local_40;
LAB_0093e540:
      pppuVar11 = *ppppuVar17;
      pppuVar12 = ppppuVar17[1];
      pppuVar13 = ppppuVar17[2];
      pppuVar14 = *ppppuVar8;
      pppuVar18 = ppppuVar8[1];
      param_1[5] = ppppuVar8[2];
      param_1[6] = local_a8;
      *(undefined8 *)(param_1 + 0xc) = unaff_d8;
      param_1[8] = local_b0;
      param_1[9] = pppuVar11;
      param_1[10] = pppuVar12;
      param_1[0xb] = pppuVar13;
      *param_1 = ppppuVar16;
      param_1[1] = local_b8;
      param_1[2] = puVar6;
      param_1[3] = pppuVar14;
      param_1[4] = pppuVar18;
      param_1[7] = local_ac;
      return;
    }
LAB_0093e6f0:
    uVar4 = FUN_00e959bc(puVar7,param_2);
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = uVar4;
    return;
  }
  puVar6 = (undefined4 *)FUN_01114eb4(iVar2);
  if (puVar6 != (undefined4 *)0x0) {
LAB_0093e820:
    goto LAB_0093e50c;
  }
  FUN_00944800(ppppuVar17,iVar2);
  puVar6 = local_50;
  if (local_58 == (undefined4 ****)&DAT_00000006 && local_54 == (undefined4 *)0x0)
  goto LAB_0093e50c;
  local_ac = local_54;
  local_a8 = local_58;
  local_68 = ppppuStack_4c;
  local_64 = local_48;
  local_60 = puStack_44;
  local_b0 = local_50;
  goto LAB_0093e238;
}

