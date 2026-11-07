// FUN_0160e168 @ 0160e168 size=1396 calls_out=14 calls_in=2
// strings: MissingSlashMissingEqualMissingQuote | MissingSlashMissingEqualMissingQuote

/* WARNING: Type propagation algorithm not settling */

void FUN_0160e168(undefined1 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 uVar3;
  uint ***pppuVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  ulonglong uVar15;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 ***local_d8;
  undefined2 *local_d4;
  uint ***local_d0;
  undefined2 *local_cc;
  undefined4 *local_c8;
  undefined2 *local_c4;
  uint **local_c0;
  uint *local_bc;
  uint **ppuStack_b8;
  uint uStack_b4;
  uint *local_b0;
  uint **local_ac;
  int local_a8;
  uint local_a4;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [20];
  int local_44;
  int local_40;
  int local_3c;
  uint **local_38;
  uint *local_34;
  uint **local_30;
  uint uStack_2c;
  uint **local_28;
  
  pbVar10 = (byte *)param_2[1];
  iVar8 = param_2[10];
  local_ec = param_3;
  local_e8 = param_4;
  if ((pbVar10 == (byte *)0x0) && ((char)iVar8 != '\0')) {
    if (param_5 == 0) {
      iVar8 = -0x80000000;
    }
    else {
      uVar11 = 0;
      if (param_6 < 0) {
LAB_0160e1b4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar11,param_6);
      }
      if (param_6 == 0) {
        param_2 = (int *)&DAT_00000001;
        iVar8 = 0;
      }
      else {
        uVar11 = 1;
        param_2 = (int *)FUN_01298504(param_6,1);
        iVar8 = param_6;
        if (param_2 == (int *)0x0) goto LAB_0160e1b4;
      }
      FUN_01bed4e2(param_2,param_5,param_6);
    }
    *(int *)(param_1 + 4) = iVar8;
    *(int **)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0xc) = param_6;
    *param_1 = 1;
    return;
  }
  if (pbVar10 == (byte *)0x0) {
    *param_1 = 0xe;
    param_1[4] = 2;
    return;
  }
  local_c8 = &local_ec;
  local_d0 = (uint ***)&DAT_01d05ee8;
  local_c4 = &DAT_0132b6a0;
  local_cc = &DAT_0132b6a0;
  local_d4 = &DAT_0132b6a0;
  local_d8 = (undefined4 ***)&DAT_01d05ee0;
  FUN_00664898(&local_e4,&DAT_005a902e,&local_d8);
  iVar13 = *param_2;
  uVar15 = FUN_0160dde0(iVar13,pbVar10,local_e0);
  if ((uVar15 & 1) == 0) {
    if ((char)iVar8 == '\0') {
      pbVar14 = pbVar10 + -(local_dc + -1);
      if (pbVar10 < (byte *)(local_dc + -1)) {
        pbVar14 = (byte *)0x0;
      }
      pbVar12 = pbVar14 + iVar13;
      if ((uint)((int)pbVar10 - (int)pbVar14) < 0x40) {
        if (pbVar10 != pbVar14) {
          pbVar6 = pbVar10 + iVar13 + -1;
          uVar9 = (uint)*pbVar6;
          while( true ) {
            if ((uVar9 == 0xd) &&
               (iVar8 = FUN_015fc218(pbVar6,"\rMissingSlashMissingEqualMissingQuote",1), iVar8 != 0)
               ) goto LAB_0160e4e4;
            if (pbVar6 <= pbVar12) break;
            bVar1 = *pbVar6;
            pbVar6 = pbVar6 + -1;
            uVar9 = (uint)*pbVar6 + (uVar9 - bVar1) * 2;
          }
        }
LAB_0160e560:
        FUN_0160e784(&local_d8,param_2);
        puVar7 = auStack_58;
LAB_0160e574:
        pppuVar4 = (uint ***)&local_d8;
      }
      else {
        pbVar6 = pbVar10 + iVar13;
        if ((~(0x1010100 - (*(uint *)(pbVar6 + -4) ^ 0xd0d0d0d) | *(uint *)(pbVar6 + -4)) &
            0x80808080) == 0) {
          iVar8 = ((int)pbVar10 - (int)pbVar14) - ((uint)pbVar6 & 3);
          pbVar2 = pbVar10 + (iVar13 - ((uint)pbVar6 & 3));
          do {
            pbVar6 = pbVar2;
            if ((iVar8 < 8) ||
               ((~(0x1010100 - (*(uint *)(pbVar6 + -8) ^ 0xd0d0d0d) | *(uint *)(pbVar6 + -8)) &
                0x80808080) != 0)) break;
            iVar8 = iVar8 + -8;
            pbVar2 = pbVar6 + -8;
          } while ((~(0x1010100 - (*(uint *)(pbVar6 + -4) ^ 0xd0d0d0d) | *(uint *)(pbVar6 + -4)) &
                   0x80808080) == 0);
          do {
            if (pbVar6 <= pbVar12) goto LAB_0160e560;
            pbVar6 = pbVar6 + -1;
          } while (*pbVar6 != 0xd);
        }
        else {
          do {
            if (pbVar6 <= pbVar12) goto LAB_0160e560;
            pbVar6 = pbVar6 + -1;
          } while (*pbVar6 != 0xd);
        }
LAB_0160e4e4:
        pbVar6 = pbVar6 + ((int)pbVar14 - (int)pbVar12);
        if (pbVar10 < pbVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pbVar6,pbVar10,pbVar10,&DAT_01d05ef0);
        }
        uVar9 = FUN_0160dde0(local_e0,local_dc,pbVar6 + iVar13,(int)pbVar10 - (int)pbVar6);
        if ((uVar9 & 1) == 0) {
          FUN_0160e784(&local_d8,param_2);
          puVar7 = auStack_70;
          goto LAB_0160e574;
        }
        FUN_01283fd8(&local_d8,param_2,pbVar6);
        FUN_0160e89c(&local_38,&local_d8);
        if (local_30 == (uint **)0x0) {
          *param_1 = 0xe;
          pcVar5 = (code *)local_38[4];
          param_1[4] = 2;
          (*pcVar5)(&uStack_2c,local_34,0);
          goto LAB_0160e5a4;
        }
        puVar7 = auStack_88;
        pppuVar4 = &local_38;
      }
      FUN_01bed4e2((uint)puVar7 | 3,pppuVar4,0x10);
      uVar3 = 0;
      goto LAB_0160e588;
    }
    if (param_5 == 0) {
      iVar8 = -0x80000000;
    }
    else {
      if (param_6 < 0) {
        uVar11 = 0;
LAB_0160e2b0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar11,param_6);
      }
      if (param_6 == 0) {
        iVar8 = 0;
        param_2 = (int *)&DAT_00000001;
      }
      else {
        uVar11 = 1;
        param_2 = (int *)FUN_01298504(param_6,1);
        if (param_2 == (int *)0x0) goto LAB_0160e2b0;
        iVar8 = param_6;
      }
      FUN_01bed4e2(param_2,param_5,param_6);
    }
    uVar3 = 1;
    *(int *)(param_1 + 4) = iVar8;
    *(int **)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0xc) = param_6;
  }
  else {
    FUN_01283fd8(&local_b0,param_2,(int)(uVar15 >> 0x20));
    if ((local_a4 & 1) == 0) {
      local_bc = local_b0;
      ppuStack_b8 = local_ac;
      uStack_b4 = local_a4;
      local_c0 = (uint **)&DAT_01d2e520;
    }
    else {
      local_40 = (int)local_b0 - (local_a4 >> 5);
      local_3c = (int)local_ac + (local_a4 >> 5);
      local_44 = local_a8 + (local_a4 >> 5);
      FUN_01283524(&local_38,&local_44);
      local_28 = (uint **)(local_a4 >> 5);
      if (local_30 < local_28) {
        local_d0 = &local_c0;
        local_c0 = local_30;
        local_cc = (undefined2 *)&LAB_01a6a304;
        local_d4 = (undefined2 *)&LAB_01a6a304;
        local_d8 = &local_28;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_d8,&DAT_01d2e534);
      }
      ppuStack_b8 = (uint **)((int)local_30 - (int)local_28);
      local_bc = (uint *)((int)local_34 + (int)local_28);
      local_c0 = local_38;
      uStack_b4 = uStack_2c;
      local_34 = local_bc;
      local_30 = ppuStack_b8;
    }
    local_38 = (uint **)param_2[1];
    local_b0 = (uint *)0x2;
    if (local_38 < (uint **)0x2) {
      local_d0 = &local_38;
      local_cc = (undefined2 *)&LAB_01a6a304;
      local_d4 = (undefined2 *)&LAB_01a6a304;
      local_d8 = (undefined4 ***)&local_b0;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_d8,&DAT_01d2bbe0);
    }
    FUN_01283ef4(param_2,2);
    puVar7 = auStack_a0;
    FUN_01bed4e2((uint)puVar7 | 3,&local_c0,0x10);
    uVar3 = 1;
LAB_0160e588:
    param_1[4] = uVar3;
    FUN_01bed4e2(param_1 + 5,puVar7,0x13);
    uVar3 = 0xe;
  }
  *param_1 = uVar3;
LAB_0160e5a4:
  FUN_019bb7e0(local_e4,local_e0);
  return;
}

