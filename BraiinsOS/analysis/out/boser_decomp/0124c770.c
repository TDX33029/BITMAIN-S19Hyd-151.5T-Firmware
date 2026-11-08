// FUN_0124c770 @ 0124c770 size=1828 calls_out=19 calls_in=2
// strings: power | high_energy_hashrate | power | power | high_energy_hashrate | high_energy_hashrate

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0124c770(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 ******ppppppuVar7;
  undefined4 *******pppppppuVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  undefined4 ******ppppppuVar13;
  undefined4 ******ppppppuVar14;
  uint uVar15;
  undefined4 ******ppppppuVar16;
  undefined4 ******ppppppuVar17;
  undefined4 ******ppppppuVar18;
  undefined8 unaff_d8;
  undefined4 ******local_108;
  undefined4 ******local_ec;
  undefined4 ******local_e8;
  undefined4 *******local_e4;
  undefined4 *******local_c0;
  undefined4 ******ppppppuStack_bc;
  undefined4 ******ppppppuStack_b8;
  undefined4 *******local_b0;
  undefined4 ******ppppppuStack_ac;
  undefined4 ******ppppppuStack_a8;
  undefined4 ******local_a0 [4];
  undefined4 *******local_90;
  undefined4 ******local_8c;
  undefined4 ******ppppppuStack_88;
  int local_80;
  undefined1 local_7c;
  undefined4 ******local_78 [4];
  undefined4 *******local_68;
  undefined4 ******ppppppuStack_64;
  undefined4 ******ppppppuStack_60;
  undefined4 ******local_58 [4];
  undefined4 local_48;
  undefined4 ******local_44;
  undefined4 ******local_40;
  undefined4 *******pppppppuStack_3c;
  undefined4 ******ppppppuStack_38;
  undefined4 ******ppppppuStack_34;
  
  uVar10 = *(uint *)(param_2 + 0x14);
  if (uVar10 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar15 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar10);
      if ((0x17 < uVar15 - 9) || ((1 << (uVar15 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar15 == 0x5b) {
          cVar2 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar2;
          if (cVar2 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar10 + 1;
            local_7c = 1;
            local_80 = param_2;
            FUN_01225168(&local_48,&local_80);
            if (local_48 == (undefined4 *******)0x2 && local_44 == (undefined4 ******)0x0) {
              local_108 = local_40;
LAB_0124cbb0:
              ppppppuVar18 = (undefined4 ******)0x0;
              pppppppuVar12 = (undefined4 *******)&DAT_00000005;
            }
            else {
              if (((uint)local_48 & 1) == 0) {
                local_108 = (undefined4 ******)FUN_014b5c7c(0,&DAT_01c249ac,&DAT_01d064b8);
                goto LAB_0124cbb0;
              }
              unaff_d8 = CONCAT44(pppppppuStack_3c,local_40);
              FUN_01225304(&local_48,&local_80);
              local_108 = local_40;
              ppppppuVar18 = local_44;
              pppppppuVar12 = local_48;
              if (local_48 == (undefined4 *******)&DAT_00000006 &&
                  local_44 == (undefined4 ******)0x0) goto LAB_0124cbb0;
              local_90 = pppppppuStack_3c;
              local_8c = ppppppuStack_38;
              ppppppuStack_88 = ppppppuStack_34;
              if (local_48 == (undefined4 *******)&DAT_00000005 &&
                  local_44 == (undefined4 ******)0x0) {
                uVar4 = 1;
LAB_0124cdb8:
                local_108 = (undefined4 ******)FUN_014b5c7c(uVar4,&DAT_01c249ac,&DAT_01d064b8);
                goto LAB_0124cbb0;
              }
              FUN_01965170(&local_48,&local_80);
              if ((char)local_48 == '\x01') {
                local_108 = local_44;
                goto LAB_0124cbb0;
              }
              if (local_48._1_1_ == '\0') {
                uVar4 = 2;
                goto LAB_0124cdb8;
              }
              FUN_0123c4bc(&local_48,local_80);
              if (local_48 == (undefined4 *******)&DAT_00000006 &&
                  local_44 == (undefined4 ******)0x0) {
                local_108 = local_40;
                goto LAB_0124cbb0;
              }
              local_e8 = local_44;
              local_e4 = local_48;
              local_ec = local_40;
              local_68 = pppppppuStack_3c;
              ppppppuStack_64 = ppppppuStack_38;
              ppppppuStack_60 = ppppppuStack_34;
              local_48 = pppppppuStack_3c;
              local_44 = ppppppuStack_38;
              local_40 = ppppppuStack_34;
              local_c0 = pppppppuStack_3c;
              ppppppuStack_bc = ppppppuStack_38;
              ppppppuStack_b8 = ppppppuStack_34;
              local_b0 = local_90;
              ppppppuStack_ac = local_8c;
              ppppppuStack_a8 = ppppppuStack_88;
            }
            *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
            ppppppuVar7 = (undefined4 ******)FUN_01964fb0(param_2);
            if (pppppppuVar12 == (undefined4 *******)&DAT_00000005 &&
                ppppppuVar18 == (undefined4 ******)0x0) goto LAB_0124cca0;
            if (ppppppuVar7 != (undefined4 ******)0x0) goto LAB_0124ccac;
            pppppppuVar8 = &local_c0;
            pppppppuVar11 = &local_b0;
            goto LAB_0124cc3c;
          }
        }
        else {
          if (uVar15 != 0x7b) {
            ppppppuVar7 = (undefined4 ******)FUN_019659c8(param_2,&local_48,&DAT_01c24acc);
            goto LAB_0124ccac;
          }
          cVar2 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar2;
          if (cVar2 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar10 + 1;
            local_7c = 1;
            local_e4 = (undefined4 *******)&DAT_00000006;
            pppppppuVar12 = (undefined4 *******)&DAT_00000005;
            bVar3 = false;
            ppppppuVar18 = (undefined4 ******)0x0;
            local_e8 = (undefined4 ******)0x0;
            bVar1 = false;
            local_80 = param_2;
            goto LAB_0124c86c;
          }
        }
        local_48 = (undefined4 *******)0x18;
        uVar4 = FUN_01964674(param_2,&local_48);
        goto LAB_0124ccb4;
      }
      uVar10 = uVar10 + 1;
      *(uint *)(param_2 + 0x14) = uVar10;
    } while (*(uint *)(param_2 + 0x10) != uVar10);
  }
  local_48 = (undefined4 *******)0x5;
  uVar4 = FUN_01964674(param_2,&local_48);
  *param_1 = 5;
  goto LAB_0124ccc0;
LAB_0124c86c:
  FUN_01965d20(&local_48,&local_80);
  if ((char)local_48 == '\x01') {
LAB_0124cb10:
    ppppppuVar7 = local_44;
  }
  else {
    if (local_48._1_1_ == '\x01') {
      *(undefined4 *)(local_80 + 8) = 0;
      *(int *)(local_80 + 0x14) = *(int *)(local_80 + 0x14) + 1;
      FUN_019686b4(&local_48,local_80 + 0xc);
      if (local_48 == (undefined4 *******)0x2) {
        local_108 = local_44;
        goto LAB_0124cb70;
      }
      if (local_40 == (undefined4 ******)0x14) {
        iVar6 = thunk_FUN_01bed842(local_44,"high_energy_hashrate",0x14);
        iVar5 = local_80;
        if (iVar6 == 0) {
          if (local_e4 != (undefined4 *******)&DAT_00000006 || local_e8 != (undefined4 ******)0x0) {
            local_8c = (undefined4 ******)0x14;
            puVar9 = &DAT_005ab34f;
            local_90 = (undefined4 *******)0x403806;
            goto LAB_0124cd84;
          }
          ppppppuVar7 = (undefined4 ******)FUN_01965c98(local_80);
          if (ppppppuVar7 == (undefined4 ******)0x0) {
            FUN_0123c4bc(&local_48,iVar5);
            ppppppuVar7 = local_40;
            if (local_48 != (undefined4 *******)&DAT_00000006 || local_44 != (undefined4 ******)0x0)
            {
              local_e4 = local_48;
              pppppppuVar8 = &local_68;
              local_e8 = local_44;
              local_ec = local_40;
              goto LAB_0124c9f0;
            }
            goto LAB_0124cb1c;
          }
          local_40 = ppppppuVar7;
          goto LAB_0124cd9c;
        }
      }
      else if (local_40 == (undefined4 ******)0x8) {
        iVar5 = thunk_FUN_01bed842(local_44,&DAT_00571160,8);
        if (iVar5 == 0) {
          if (pppppppuVar12 != (undefined4 *******)&DAT_00000005 ||
              ppppppuVar18 != (undefined4 ******)0x0) {
            puVar9 = &DAT_005ab34f;
            goto LAB_0124cd74;
          }
          FUN_01224ac0(&local_48,local_80);
          local_108 = local_40;
          if (local_48 == (undefined4 *******)&DAT_00000005 && local_44 == (undefined4 ******)0x0) {
            ppppppuVar7 = local_40;
            goto LAB_0124cb1c;
          }
          pppppppuVar8 = local_78;
          pppppppuVar12 = local_48;
          ppppppuVar18 = local_44;
LAB_0124c9f0:
          *pppppppuVar8 = pppppppuStack_3c;
          pppppppuVar8[1] = ppppppuStack_38;
          pppppppuVar8[2] = ppppppuStack_34;
          goto LAB_0124c86c;
        }
      }
      else if ((local_40 == (undefined4 ******)0x5) &&
              (iVar5 = thunk_FUN_01bed842(local_44,"power",5), iVar5 == 0)) {
        if (bVar1) {
          puVar9 = &DAT_005ab34f;
          goto LAB_0124cd30;
        }
        FUN_01224b2c(&local_48,local_80);
        if (local_48 != (undefined4 *******)0x0) goto LAB_0124cb10;
        unaff_d8 = CONCAT44(pppppppuStack_3c,local_40);
        bVar3 = true;
        bVar1 = true;
        goto LAB_0124c86c;
      }
      iVar5 = local_80;
      ppppppuVar7 = (undefined4 ******)FUN_01965c98(local_80);
      if ((ppppppuVar7 != (undefined4 ******)0x0) ||
         (ppppppuVar7 = (undefined4 ******)FUN_01965eac(iVar5),
         ppppppuVar7 != (undefined4 ******)0x0)) goto LAB_0124cb00;
      goto LAB_0124c86c;
    }
    if (bVar3) {
      if (!(pppppppuVar12 != (undefined4 *******)&DAT_00000005 ||
           ppppppuVar18 != (undefined4 ******)0x0)) {
        puVar9 = &DAT_0057cd64;
LAB_0124cd74:
        local_8c = (undefined4 ******)0x8;
        local_90 = (undefined4 *******)&DAT_00571160;
LAB_0124cd84:
        local_44 = (undefined4 ******)&DAT_0132b6a0;
        local_48 = &local_90;
        ppppppuVar7 = (undefined4 ******)FUN_019676ac(puVar9,&local_48);
LAB_0124cd9c:
        goto LAB_0124cb1c;
      }
      if (local_e4 == (undefined4 *******)&DAT_00000006 && local_e8 == (undefined4 ******)0x0) {
        local_e8 = (undefined4 ******)0x0;
        local_e4 = (undefined4 *******)&DAT_00000005;
      }
      goto LAB_0124cc0c;
    }
    puVar9 = &DAT_0057cd64;
LAB_0124cd30:
    local_44 = (undefined4 ******)&DAT_0132b6a0;
    local_8c = (undefined4 ******)0x5;
    local_48 = &local_90;
    local_90 = (undefined4 *******)0x403801;
    ppppppuVar7 = (undefined4 ******)FUN_019676ac(puVar9,&local_48);
  }
LAB_0124cb1c:
  pppppppuVar12 = (undefined4 *******)&DAT_00000005;
  ppppppuVar18 = (undefined4 ******)0x0;
  local_108 = ppppppuVar7;
  goto LAB_0124cc0c;
LAB_0124cb00:
  local_108 = ppppppuVar7;
LAB_0124cb70:
  pppppppuVar12 = (undefined4 *******)&DAT_00000005;
  ppppppuVar18 = (undefined4 ******)0x0;
LAB_0124cc0c:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  ppppppuVar7 = (undefined4 ******)FUN_019650c4(param_2);
  if (pppppppuVar12 == (undefined4 *******)&DAT_00000005 && ppppppuVar18 == (undefined4 ******)0x0)
  {
LAB_0124cca0:
    if (ppppppuVar7 != (undefined4 ******)0x0) {
      FUN_01225578();
    }
    ppppppuVar7 = local_108;
  }
  else if (ppppppuVar7 == (undefined4 ******)0x0) {
    pppppppuVar8 = local_58;
    pppppppuVar11 = local_a0;
LAB_0124cc3c:
    ppppppuVar13 = pppppppuVar11[1];
    ppppppuVar16 = pppppppuVar11[2];
    ppppppuVar7 = *pppppppuVar8;
    ppppppuVar14 = pppppppuVar8[1];
    ppppppuVar17 = pppppppuVar8[2];
    param_1[3] = *pppppppuVar11;
    param_1[4] = ppppppuVar13;
    param_1[5] = ppppppuVar16;
    param_1[6] = local_e4;
    param_1[7] = local_e8;
    param_1[8] = local_ec;
    param_1[9] = ppppppuVar7;
    param_1[10] = ppppppuVar14;
    param_1[0xb] = ppppppuVar17;
    *param_1 = pppppppuVar12;
    param_1[1] = ppppppuVar18;
    param_1[2] = local_108;
    *(undefined8 *)(param_1 + 0xc) = unaff_d8;
    return;
  }
LAB_0124ccac:
  uVar4 = FUN_01966f00(ppppppuVar7,param_2);
LAB_0124ccb4:
  *param_1 = 5;
LAB_0124ccc0:
  param_1[1] = 0;
  param_1[2] = uVar4;
  return;
}

