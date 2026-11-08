// FUN_015211f4 @ 015211f4 size=1476 calls_out=18 calls_in=1
// strings: prefixItems | itemsInlineTable | itemsInlineTable | itemsInlineTable | itemsInlineTable | number

void FUN_015211f4(undefined4 *param_1,uint param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined **ppuVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 uVar20;
  uint local_184;
  uint local_180;
  undefined **local_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint local_16c;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e0;
  undefined **local_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint auStack_c8 [34];
  undefined1 local_40;
  uint local_38;
  undefined **local_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  cVar1 = *param_4;
  if (cVar1 == '\x05') {
LAB_0152122c:
    pcVar4 = (char *)FUN_0196b3a8(*param_3,param_3[1],"prefixItems",0xb);
    if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\x04')) {
      if (cVar1 == '\x05') {
        pcVar4 = *(char **)(param_4 + 0xc);
      }
      if (((cVar1 == '\x05' && pcVar4 == &DAT_00000001) &&
          (pcVar4 = (char *)FUN_0196b3a8(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8),
                                         &DAT_0056df8c,4), pcVar4 != (char *)0x0)) &&
         (*pcVar4 == '\x03')) {
        uVar18 = *(undefined4 *)(pcVar4 + 8);
        iVar17 = *(int *)(pcVar4 + 0xc);
        uVar20 = FUN_015345a4(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                              "itemsInlineTable",5);
        uVar14 = (undefined4)((ulonglong)uVar20 >> 0x20);
        piVar6 = (int *)uVar20;
        uVar20 = FUN_015345a4(piVar6,uVar14,&DAT_0056df8c,4);
        uVar12 = (undefined4)((ulonglong)uVar20 >> 0x20);
        piVar7 = (int *)uVar20;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar6,uVar14);
        }
        if (iVar17 == 7) {
          iVar17 = thunk_FUN_01bed842(uVar18,"integer",7);
          if (iVar17 == 0) {
            if (*(char *)(param_2 + 0x88) == '\0') {
              FUN_01528970(param_1 + 1,piVar7,uVar12);
            }
            else {
              FUN_015288ec(param_1 + 1,piVar7,uVar12);
            }
            uVar14 = 1;
            goto LAB_0152167c;
          }
          iVar17 = thunk_FUN_01bed842(uVar18,"boolean",7);
          if (iVar17 == 0) {
            FUN_01528868(param_1 + 1,piVar7,uVar12);
            goto LAB_01521678;
          }
        }
        else if (iVar17 == 6) {
          iVar17 = thunk_FUN_01bed842(uVar18,"number",6);
          if (iVar17 == 0) {
            puVar9 = (undefined8 *)thunk_FUN_01be5118(8);
            if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,8);
            }
            puVar13 = &DAT_01cfaf30;
          }
          else {
            iVar17 = thunk_FUN_01bed842(uVar18,"string",6);
            if (iVar17 != 0) goto LAB_015216c0;
            puVar9 = (undefined8 *)thunk_FUN_01be5118(8);
            if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,8);
            }
            puVar13 = &DAT_01cfaf50;
          }
          *puVar9 = uVar20;
          param_1[1] = puVar9;
          param_1[2] = puVar13;
          goto LAB_01521678;
        }
LAB_015216c0:
        DataMemoryBarrier(0xb);
        do {
          iVar17 = *piVar7;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar17 + -1;
        if (iVar17 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(piVar7,uVar12);
        }
      }
      FUN_01526248(auStack_c8,param_2,"itemsInlineTable",5);
      uVar3 = FUN_016731b0(local_40,param_4);
      FUN_0156aca8(&local_38,auStack_c8,param_4,uVar3);
      if (local_38 == 0) {
        puVar5 = (uint *)0x0;
        ppuVar16 = local_34;
      }
      else {
        local_178 = local_30;
        uStack_174 = uStack_2c;
        uStack_170 = uStack_28;
        local_180 = local_38;
        local_17c = local_34;
        puVar5 = (uint *)thunk_FUN_01be5118(0x14);
        if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *puVar5 = local_180;
        puVar5[1] = (uint)local_17c;
        puVar5[2] = local_178;
        puVar5[3] = uStack_174;
        puVar5[4] = uStack_170;
        ppuVar16 = (undefined **)&DAT_01cfaf10;
      }
      puVar10 = auStack_c8;
      goto LAB_0152166c;
    }
    uVar11 = *(uint *)(pcVar4 + 0xc);
    FUN_01526248(auStack_c8,param_2,"itemsInlineTable",5);
    uVar3 = FUN_016731b0(local_40,param_4);
    FUN_0156aca8(&local_38,auStack_c8,param_4,uVar3);
    if (local_38 == 0) {
      puVar5 = (uint *)0x0;
      ppuVar16 = local_34;
    }
    else {
      local_178 = local_30;
      uStack_174 = uStack_2c;
      uStack_170 = uStack_28;
      local_180 = local_38;
      local_17c = local_34;
      local_16c = uVar11;
      puVar5 = (uint *)thunk_FUN_01be5118(0x18);
      if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      *puVar5 = local_180;
      puVar5[1] = (uint)local_17c;
      puVar5[2] = local_178;
      puVar5[3] = uStack_174;
      puVar5[4] = uStack_170;
      puVar5[5] = local_16c;
      ppuVar16 = (undefined **)&DAT_01cfafb0;
    }
    FUN_014ff9e0(auStack_c8);
    param_1[1] = puVar5;
    param_1[2] = ppuVar16;
  }
  else {
    if (cVar1 != '\x04') {
      uVar14 = 0;
      uVar11 = param_2;
      if (cVar1 == '\x01') {
        uVar11 = (uint)(byte)param_4[1];
      }
      if (cVar1 != '\x01' || uVar11 != 0) goto LAB_0152167c;
      goto LAB_0152122c;
    }
    iVar17 = *(int *)(param_4 + 8);
    uVar11 = *(uint *)(param_4 + 0xc);
    FUN_01526248(&local_180,param_2,"itemsInlineTable",5);
    if (0x6666666 < uVar11) {
      uVar14 = 0;
      iVar8 = 4;
LAB_01521328:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar14,iVar8);
    }
    iVar8 = uVar11 * 0x14;
    if (iVar8 == 0) {
      local_184 = 4;
      local_f0 = 0;
    }
    else {
      uVar14 = 4;
      local_184 = FUN_01298504(iVar8,4);
      if (local_184 == 0) goto LAB_01521328;
      local_f0 = uVar11;
    }
    local_e8 = 0;
    local_ec = local_184;
    if (uVar11 != 0) {
      iVar19 = 0;
      uVar15 = 0;
      iVar8 = uVar11 * 0x18;
      do {
        FUN_015276e8(auStack_c8,&local_180,uVar15);
        uVar3 = FUN_016731b0(local_40,iVar17);
        FUN_0156aca8(&local_e0,auStack_c8,iVar17,uVar3);
        if (local_e0 == 0) {
          FUN_014ff9e0(auStack_c8);
          FUN_0152785c(&local_f0);
          puVar5 = (uint *)0x0;
          ppuVar16 = local_dc;
          goto LAB_01521668;
        }
        local_30 = local_d8;
        uStack_2c = uStack_d4;
        uStack_28 = uStack_d0;
        local_38 = local_e0;
        local_34 = local_dc;
        if (uVar15 == local_f0) {
          FUN_0155dc90(&local_f0);
          local_184 = local_ec;
        }
        uVar15 = uVar15 + 1;
        puVar5 = (uint *)(local_184 + iVar19);
        *puVar5 = local_38;
        puVar5[1] = (uint)local_34;
        puVar5[2] = local_30;
        puVar5[3] = uStack_2c;
        puVar5[4] = uStack_28;
        local_e8 = uVar15;
        FUN_014ff9e0(auStack_c8);
        iVar17 = iVar17 + 0x18;
        iVar19 = iVar19 + 0x14;
        iVar8 = iVar8 + -0x18;
      } while (iVar8 != 0);
    }
    puVar5 = (uint *)thunk_FUN_01be5118(0xc);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar5 = local_f0;
    puVar5[1] = local_ec;
    puVar5[2] = local_e8;
    ppuVar16 = &PTR_LAB_01cfaef0;
LAB_01521668:
    puVar10 = &local_180;
LAB_0152166c:
    FUN_014ff9e0(puVar10);
    param_1[1] = puVar5;
    param_1[2] = ppuVar16;
  }
LAB_01521678:
  uVar14 = 1;
LAB_0152167c:
  *param_1 = uVar14;
  return;
}

