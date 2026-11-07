// FUN_010d46d8 @ 010d46d8 size=1836 calls_out=7 calls_in=2
// strings: 

void FUN_010d46d8(int *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  byte *pbVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  uint local_4b4;
  uint *local_4b0;
  int local_4a0;
  int local_49c;
  int local_498;
  undefined4 local_490;
  uint local_48c;
  uint *local_488;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  uint *local_8c;
  uint local_30;
  uint local_2c;
  char local_27;
  
  uVar12 = 0;
  local_498 = 0;
  local_49c = 1;
  local_4a0 = 0;
  local_490 = 0;
  local_98 = 0;
  local_94 = 0;
  local_30 = 0;
  if (param_4 == 0) {
LAB_010d4ccc:
    bVar20 = false;
LAB_010d4cd0:
    bVar4 = false;
joined_r0x010d4db4:
    if (8 < local_30) {
      thunk_FUN_016d3fb4(local_8c);
    }
    if (0xfd < local_98) {
      thunk_FUN_016d3fb4(local_488);
    }
    if (bVar20) {
      if (bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_01885748);
      }
      *param_1 = local_4a0;
      param_1[1] = local_49c;
      param_1[2] = local_498;
      uVar5 = 1;
    }
    else {
      if (!bVar4) {
        *(undefined1 *)(param_1 + 3) = 0;
        *param_1 = -0x80000000;
        param_1[1] = (int)param_3;
        param_1[2] = param_4;
        if (local_4a0 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_49c);
        return;
      }
      *param_1 = local_4a0;
      param_1[1] = local_49c;
      param_1[2] = local_498;
      uVar5 = 0;
    }
    *(undefined1 *)(param_1 + 3) = uVar5;
    return;
  }
  local_4b0 = &local_48c;
  pbVar14 = param_3;
LAB_010d4750:
  uVar15 = (uint)param_3[uVar12];
  if (uVar15 - 0x61 < 0x1a) goto LAB_010d4744;
  if (uVar15 == 0x2e) {
    pbVar14 = param_3 + uVar12 + 1;
    goto LAB_010d4744;
  }
  bVar20 = false;
  FUN_010d4eac(&local_2c,param_2,param_4,uVar12,0,0,0x7fffffe,0,0,0,&local_490,&local_94,pbVar14,
               param_3 + (param_4 - (int)pbVar14));
  local_4b4 = local_2c;
  if (local_2c != param_4) {
    uVar12 = local_98;
    puVar6 = local_4b0;
    if (0xfd < local_98) {
      uVar12 = local_48c;
      puVar6 = local_488;
    }
    if (((uVar12 == 0) || (uVar15 = uVar12 - 1, puVar6[uVar12 - 1] != 0x2e)) &&
       (puVar6 = local_4b0, uVar15 = local_98, 0xfd < local_98)) {
      puVar6 = local_488;
      uVar15 = local_48c;
    }
    iVar10 = 0;
    iVar9 = uVar15 * -4;
    do {
      bVar20 = iVar9 != 0;
      if (bVar20) {
        iVar10 = *(int *)((int)puVar6 + (-4 - iVar9));
        iVar9 = iVar9 + 4;
      }
    } while (bVar20 && iVar10 != 0x2e);
    iVar10 = 0;
    iVar9 = 1;
    bVar20 = false;
    puVar6 = &local_90;
    uVar12 = local_30;
    if (8 < local_30) {
      puVar6 = local_8c;
      uVar12 = local_90;
    }
    uVar15 = local_98;
    if (0xfd < local_98) {
      local_4b0 = local_488;
      uVar15 = local_48c;
    }
    puVar7 = puVar6 + uVar12 * 3;
    bVar4 = false;
    do {
      puVar18 = local_4b0;
      uVar19 = 0;
      bVar3 = true;
      uVar12 = 0;
      if (uVar15 != 0) {
        iVar11 = uVar15 << 2;
        do {
          if (local_4b0[uVar19] == 0x2e) {
            uVar12 = uVar15 - (uVar19 + 1);
            local_4b0 = local_4b0 + uVar19 + 1;
            bVar3 = false;
            goto LAB_010d491c;
          }
          uVar19 = uVar19 + 1;
          iVar11 = iVar11 + -4;
        } while (iVar11 != 0);
        bVar3 = true;
        uVar12 = uVar15;
        uVar19 = uVar15;
      }
LAB_010d491c:
      if (puVar6 == puVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018857a8);
      }
      uVar15 = *puVar6;
      pbVar14 = (byte *)puVar6[1];
      uVar17 = puVar6[2];
      if (bVar4) {
        if (bVar20) {
          iVar9 = iVar10;
          if (local_4a0 == iVar10) {
            FUN_010e02bc(&local_4a0,iVar10,1);
            iVar9 = local_498;
          }
          iVar10 = iVar10 + 1;
          *(undefined1 *)(local_49c + iVar9) = 0x2e;
          iVar9 = local_49c;
          local_498 = iVar10;
          if (uVar15 != 0) goto LAB_010d49ec;
LAB_010d4afc:
          if (uVar17 != 0) {
            uVar19 = 0;
            uVar15 = uVar17;
LAB_010d4b10:
            if (0x19 < pbVar14[uVar19] - 0x41) goto code_r0x010d4b20;
            if (bVar20) {
              pbVar8 = pbVar14;
              uVar17 = uVar19;
            }
            else {
              local_4b4 = uVar19 + local_4b4;
              if (param_4 < local_4b4) {
                puVar13 = &DAT_01885768;
                goto LAB_010d4dd8;
              }
              pbVar8 = param_3;
              uVar17 = local_4b4;
            }
            if ((uint)(local_4a0 - iVar10) < uVar17) {
              FUN_010e02bc(&local_4a0,iVar10,uVar17);
              iVar10 = local_498;
            }
            iVar9 = local_49c;
            FUN_016dd1aa(local_49c + iVar10,pbVar8,uVar17);
            pbVar14 = pbVar14 + uVar19;
            local_498 = iVar10 + uVar17;
            do {
              iVar10 = local_498;
              bVar1 = *pbVar14;
              uVar19 = 2;
              bVar16 = bVar1;
              if (bVar1 - 0x41 < 0x1a) {
                bVar16 = bVar1 | 0x20;
              }
              if ((uint)(int)(char)bVar1 < 0x80000000) {
                uVar19 = 1;
              }
              if ((uint)(local_4a0 - local_498) < uVar19) {
                FUN_010e02bc(&local_4a0,local_498,uVar19);
                pbVar8 = (byte *)(local_49c + local_498);
                iVar9 = local_49c;
              }
              else {
                pbVar8 = (byte *)(iVar9 + local_498);
              }
              if (0x7fffffff < (uint)(int)(char)bVar1) {
                pbVar8[1] = bVar16 & 0xbf;
                bVar16 = bVar1 >> 6 | 0xc0;
              }
              iVar10 = uVar19 + iVar10;
              uVar15 = uVar15 - 1;
              *pbVar8 = bVar16;
              pbVar14 = pbVar14 + 1;
              local_498 = iVar10;
            } while (uVar15 != 0);
            goto LAB_010d489c;
          }
LAB_010d4b30:
          if (bVar20) {
            if ((uint)(local_4a0 - iVar10) < uVar17) {
              FUN_010e02bc(&local_4a0,iVar10,uVar17);
              iVar10 = local_498;
            }
            iVar9 = local_49c;
            FUN_016dd1aa(local_49c + iVar10,pbVar14,uVar17);
            iVar10 = iVar10 + uVar17;
            local_498 = iVar10;
            goto LAB_010d489c;
          }
          bVar20 = false;
          local_4b4 = local_4b4 + uVar17;
          if (local_4b4 != param_4) goto LAB_010d48a4;
          goto LAB_010d4cd0;
        }
        local_4b4 = local_4b4 + 1;
        if (local_4b4 != param_4) {
          if (uVar15 != 0) goto LAB_010d49b0;
          goto LAB_010d4afc;
        }
        goto LAB_010d4ccc;
      }
      if (uVar15 == 0) goto LAB_010d4afc;
      if (!bVar20) {
LAB_010d49b0:
        if (param_4 < local_4b4) {
          puVar13 = &DAT_01885798;
LAB_010d4dd8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,local_4b4,param_4,puVar13);
        }
        if ((uint)(local_4a0 - iVar10) < local_4b4) {
          FUN_010e02bc(&local_4a0,iVar10,local_4b4);
          iVar10 = local_498;
          iVar9 = local_49c;
        }
        FUN_016dd1aa(iVar9 + iVar10,param_3,local_4b4);
        iVar10 = iVar10 + local_4b4;
        local_498 = iVar10;
      }
LAB_010d49ec:
      if (uVar19 == 0) {
LAB_010d489c:
        bVar20 = true;
      }
      else {
        iVar9 = uVar19 << 2;
        do {
          uVar19 = *puVar18;
          uVar15 = 1;
          if (0x7f < uVar19) {
            uVar15 = 2;
          }
          if ((0x7ff < uVar19) && (uVar15 = 4, uVar19 < 0x10000)) {
            uVar15 = 3;
          }
          if ((uint)(local_4a0 - iVar10) < uVar15) {
            FUN_010e02bc(&local_4a0,iVar10,uVar15);
            pbVar14 = (byte *)(local_49c + local_498);
            if (uVar19 < 0x80) goto LAB_010d4a00;
LAB_010d4a50:
            bVar1 = (byte)uVar19 & 0x3f | 0x80;
            bVar16 = (byte)(uVar19 >> 6);
            if (uVar19 < 0x800) {
              pbVar14[1] = bVar1;
              *pbVar14 = bVar16 | 0xc0;
            }
            else {
              bVar16 = bVar16 & 0x3f | 0x80;
              bVar2 = (byte)(uVar19 >> 0xc);
              if (uVar19 >> 0x10 == 0) {
                pbVar14[1] = bVar16;
                pbVar14[2] = bVar1;
                *pbVar14 = bVar2 | 0xe0;
              }
              else {
                pbVar14[3] = bVar1;
                pbVar14[2] = bVar16;
                pbVar14[1] = bVar2 & 0x3f | 0x80;
                *pbVar14 = (byte)(uVar19 >> 0x12) | 0xf0;
              }
            }
          }
          else {
            pbVar14 = (byte *)(local_49c + iVar10);
            if (0x7f < uVar19) goto LAB_010d4a50;
LAB_010d4a00:
            *pbVar14 = (byte)uVar19;
          }
          iVar10 = uVar15 + iVar10;
          iVar9 = iVar9 + -4;
          puVar18 = puVar18 + 1;
          local_498 = iVar10;
        } while (iVar9 != 0);
        bVar20 = true;
        iVar9 = local_49c;
      }
LAB_010d48a4:
      puVar6 = puVar6 + 3;
      bVar4 = true;
      uVar15 = uVar12;
    } while (!bVar3);
    bVar20 = true;
    if (local_27 == '\0') {
      bVar4 = true;
      bVar20 = false;
      goto joined_r0x010d4db4;
    }
  }
  goto LAB_010d4cd0;
LAB_010d4744:
  uVar12 = uVar12 + 1;
  if (param_4 == uVar12) goto LAB_010d4ccc;
  goto LAB_010d4750;
code_r0x010d4b20:
  uVar19 = uVar19 + 1;
  uVar15 = uVar15 - 1;
  if (uVar17 == uVar19) goto LAB_010d4b30;
  goto LAB_010d4b10;
}

