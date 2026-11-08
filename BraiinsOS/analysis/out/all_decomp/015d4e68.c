// FUN_015d4e68 @ 015d4e68 size=1832 calls_out=14 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015d4e68(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 extraout_r1;
  byte *pbVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *unaff_r10;
  byte *pbVar21;
  uint uVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  byte *local_c0;
  byte *local_a4;
  byte *local_a0;
  byte *local_9c;
  byte *local_98;
  byte *local_94;
  uint local_90;
  byte local_88;
  byte local_87;
  ushort local_86;
  byte *local_84;
  byte *local_80;
  byte *pbStack_7c;
  int *local_78;
  byte *local_74;
  int *local_70;
  byte *local_6c;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *pbStack_5c;
  byte *pbStack_58;
  byte *pbStack_54;
  uint uStack_50;
  undefined4 local_4c;
  byte *local_48;
  undefined4 local_44;
  undefined1 local_40;
  byte *local_38;
  byte *local_34;
  byte *local_30;
  byte *pbStack_2c;
  
  pbVar11 = (byte *)param_2[2];
  iVar15 = 4;
  iVar19 = 1;
  pbVar24 = &DAT_0000003b;
  local_a4 = *(byte **)(pbVar11 + 4);
  pbVar21 = local_a4 + 0xb8;
  bVar1 = local_a4[0xd9];
  pbVar18 = *(byte **)(*(int *)*param_2 + 0x20);
  pbVar3 = *(byte **)(local_a4 + 0xd4);
  if (bVar1 == 8) {
    iVar15 = 0xc;
  }
  pbVar9 = (byte *)(iVar15 + *(int *)(local_a4 + 0xdc));
  pbVar17 = pbVar9 + -(int)pbVar3;
  bVar27 = pbVar17 <= pbVar18;
  bVar26 = pbVar18 == pbVar17;
  if (bVar27) {
    pbVar17 = pbVar18 + -(int)pbVar17;
    bVar26 = pbVar3 == pbVar17;
  }
  if ((bVar27 && pbVar17 <= pbVar3) && !bVar26) {
    pbVar20 = (byte *)0x0;
    uVar12 = *(undefined4 *)pbVar11;
    uVar8 = *(undefined4 *)param_2[3];
    uVar2 = *(undefined1 *)param_2[1];
    local_90 = 0;
    local_c0 = *(byte **)(local_a4 + 0x100);
    local_94 = local_c0 + 8;
    iVar19 = *(int *)(local_a4 + 0xd0);
    local_9c = pbVar3 + -(int)pbVar17;
    pbVar11 = (byte *)0x0;
    local_a0 = pbVar17 + iVar19;
    pbVar4 = pbVar3 + iVar19;
    pbVar3 = pbVar3 + iVar19 + (-*(int *)(local_a4 + 0xdc) - iVar15);
    pbVar17 = (byte *)0x0;
    do {
      pbVar7 = pbVar18 + (int)pbVar3;
      uVar16 = (uint)*pbVar7;
      local_98 = pbVar21;
      if ((pbVar17 == &DAT_0000003f) && (1 < uVar16)) {
        pbVar24 = &DAT_00000006;
        pbVar20 = (byte *)0x0;
        goto LAB_015d539c;
      }
      uVar14 = (uint)pbVar17 & 0x3f;
      uVar22 = uVar16 & 0x7f;
      unaff_r10 = (byte *)(uVar14 - 0x20);
      uVar25 = uVar22 << uVar14;
      if (-1 < (int)unaff_r10) {
        uVar25 = 0;
      }
      pbVar11 = (byte *)(uVar25 | (uint)pbVar11);
      uVar25 = uVar22 >> (0x20 - uVar14 & 0xff);
      if (-1 < (int)unaff_r10) {
        uVar25 = uVar22 << ((uint)unaff_r10 & 0xff);
      }
      pbVar20 = (byte *)(uVar25 | (uint)pbVar20);
      if (-1 < (char)*pbVar7) {
        local_a0 = pbVar7 + 1;
        local_9c = pbVar9 + ~(uint)pbVar18;
        pbVar7 = (byte *)((uint)pbVar11 | (uint)pbVar20);
        if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018ab6e0);
        }
        if ((pbVar20 == (byte *)0x0) &&
           (pbVar7 = pbVar11 + -1, pbVar7 < *(byte **)(local_c0 + 0x10))) {
          piVar5 = (int *)((int)pbVar7 * 0x68 + *(int *)(local_c0 + 0xc));
          goto LAB_015d50d8;
        }
        puVar23 = *(undefined4 **)(local_c0 + 0x14);
        if (puVar23 == (undefined4 *)0x0) goto LAB_015d5398;
        iVar15 = *(int *)(local_c0 + 0x18);
        goto LAB_015d5040;
      }
      pbVar9 = pbVar9 + -1;
      pbVar3 = pbVar3 + 1;
      pbVar17 = pbVar17 + 7;
    } while (pbVar18 != pbVar9);
    pbVar24 = &DAT_00000013;
    pbStack_7c = (byte *)0x0;
    local_84 = pbVar4;
    local_80 = pbVar4;
LAB_015d4fd0:
    iVar19 = 1;
    pbVar4 = local_84;
    pbVar11 = local_80;
    pbVar20 = pbStack_7c;
  }
  else {
    uVar16 = 0;
    pbVar7 = (byte *)0x0;
    pbVar4 = pbVar21;
    pbVar20 = (byte *)0x0;
  }
  goto LAB_015d53a8;
code_r0x015d50bc:
  iVar15 = iVar15 + -1;
  puVar23 = (undefined4 *)puVar23[(int)(pbVar17 + 0x136)];
LAB_015d5040:
  pbVar17 = (byte *)0xffffffff;
  local_c0 = (byte *)(uint)*(ushort *)((int)puVar23 + 0x4d6);
  pbVar7 = (byte *)((int)local_c0 << 3);
  puVar10 = puVar23;
  do {
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = (byte *)0x0;
      pbVar17 = local_c0;
      goto LAB_015d50b0;
    }
    pbVar3 = (byte *)*puVar10;
    pbVar21 = (byte *)puVar10[1];
    pbVar7 = pbVar7 + -8;
    pbVar17 = pbVar17 + 1;
    puVar10 = puVar10 + 2;
    uVar25 = (uint)(pbVar21 <= pbVar20 &&
                   (uint)(pbVar11 <= pbVar3) <= (uint)((int)pbVar21 - (int)pbVar20)) -
             (uint)(pbVar20 <= pbVar21 &&
                   (uint)(pbVar3 <= pbVar11) <= (uint)((int)pbVar20 - (int)pbVar21));
  } while (uVar25 == 1);
  if ((uVar25 & 0xff) == 0) {
    piVar5 = puVar23 + (int)pbVar17 * 0x1a + 0x16;
LAB_015d50d8:
    local_90 = (uint)(*(char *)((int)piVar5 + 0x62) == '\x01');
    if (*piVar5 != 1) {
      uVar16 = piVar5[1];
      if (5 < uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar16,5,&DAT_018822e4);
      }
      piVar13 = piVar5 + 2;
      if (uVar16 != 0) goto LAB_015d5104;
LAB_015d52c0:
      unaff_r10 = (byte *)0x0;
      pbVar3 = pbVar20;
LAB_015d52c4:
      local_60 = local_a0;
      pbStack_5c = local_9c;
      pbStack_58 = local_98;
      pbStack_54 = local_94;
      uStack_50 = local_90;
      local_68 = &DAT_00000008;
      local_74 = &DAT_00000008;
      local_64 = (byte *)0x0;
      local_6c = (byte *)0x0;
      local_70 = (int *)0x0;
      local_78 = (int *)0x0;
      local_4c = uVar12;
      local_48 = local_a4;
      local_44 = uVar8;
      local_40 = uVar2;
      FUN_015d6fa8(&local_38,&local_78,0,0);
      pbVar20 = pbStack_2c;
      pbVar11 = local_30;
      pbVar4 = local_34;
      pbVar17 = local_38;
      iVar19 = 1;
      if ((char)local_38 == 'R') {
        if (&DAT_00000001 < local_64) {
          if (&DAT_00000014 < local_64) {
            FUN_015d9334(local_68);
          }
          else {
            FUN_015d9434();
          }
        }
        piVar5 = local_70;
        if (local_70 < local_78) {
          if (local_70 == (int *)0x0) {
            thunk_FUN_016d3fb4(local_74);
            local_a4 = &DAT_00000008;
          }
          else {
            iVar15 = (int)local_70 * 0x28;
            local_a4 = (byte *)FUN_0063f4cc(local_74,(int)local_78 * 0x28,8,iVar15);
            if (local_a4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(8,iVar15);
            }
          }
        }
        else {
          local_a4 = local_74;
        }
        pbVar11 = local_64;
        if (local_64 < local_6c) {
          if (local_64 == (byte *)0x0) {
            thunk_FUN_016d3fb4(local_68);
            pbVar4 = &DAT_00000008;
          }
          else {
            iVar15 = (int)local_64 * 0x18;
            pbVar4 = (byte *)FUN_0063f4cc(local_68,(int)local_6c * 0x18,8);
            if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(8,iVar15);
            }
          }
        }
        else {
          pbVar4 = local_68;
        }
        pbVar7 = (byte *)((uint)piVar5 >> 0x10);
        uVar16 = ((uint)piVar5 & 0xffff) >> 8;
        pbVar24 = (byte *)((uint)piVar5 & 0xff);
        iVar19 = 0;
        pbVar17 = pbVar3;
        pbVar20 = pbVar18;
      }
      else {
        uVar16 = ((uint)local_38 & 0xffff) >> 8;
        if (local_78 != (int *)0x0) {
          thunk_FUN_016d3fb4(local_74);
          unaff_r10 = pbVar4;
        }
        pbVar24 = (byte *)((uint)pbVar17 & 0xff);
        pbVar7 = (byte *)((uint)pbVar17 >> 0x10);
        if (local_6c != (byte *)0x0) {
          thunk_FUN_016d3fb4(local_68);
          pbVar17 = pbVar24;
          unaff_r10 = pbVar4;
          local_a4 = pbVar7;
        }
      }
      goto LAB_015d53a8;
    }
    piVar13 = (int *)piVar5[2];
    uVar16 = piVar5[3];
    if (uVar16 == 0) goto LAB_015d52c0;
LAB_015d5104:
    pbVar17 = (byte *)(uVar16 << 4);
    unaff_r10 = (byte *)0x0;
    uVar6 = *(undefined4 *)(local_a4 + 0x104);
    while( true ) {
      local_38 = (byte *)*piVar13;
      local_34 = (byte *)piVar13[1];
      local_30 = (byte *)piVar13[2];
      pbStack_2c = (byte *)piVar13[3];
      FUN_015d5608(&local_78,&local_a0,*(undefined4 *)(local_98 + 0x20),&local_38);
      if (local_78 == (int *)0x2e && local_74 == (byte *)0x0) break;
      uVar16 = (uint)local_68 & 0xffff;
      if (uVar16 < 0x47) {
        if (uVar16 == 3) {
          if (unaff_r10 == (byte *)0x0) {
            FUN_015d855c(&local_38,&local_78);
            FUN_015d2860(&local_88,uVar12,bVar1,uVar6,&local_38);
            unaff_r10 = local_84;
            pbVar20 = local_80;
            if (local_88 != 0x52) {
              unaff_r10 = (byte *)0x0;
              pbVar20 = local_c0;
            }
            local_c0 = pbVar20;
          }
        }
        else if (uVar16 == 0x31) goto LAB_015d5138;
      }
      else if (uVar16 == 0x47) {
LAB_015d5138:
        if (unaff_r10 == (byte *)0x0) {
          FUN_015d855c(&local_38,&local_78);
          FUN_015d9074(&local_88,extraout_r1,local_38,local_34,local_30,uVar2,uVar12,local_a4,uVar8,
                       0x10);
          pbVar24 = (byte *)(uint)local_88;
          if (pbVar24 != &DAT_00000052) {
            pbVar7 = (byte *)(uint)local_86;
            uVar16 = (uint)local_87;
            goto LAB_015d4fd0;
          }
          pbVar20 = local_80;
          unaff_r10 = local_84;
        }
      }
      else if (uVar16 == 0x2007 || uVar16 == 0x6e) {
        FUN_015d855c(&local_38,&local_78);
        FUN_015d2860(&local_88,uVar12,bVar1,uVar6,&local_38);
        if (local_88 == 0x52) {
          pbVar20 = local_80;
          unaff_r10 = local_84;
        }
      }
      piVar13 = piVar13 + 4;
      pbVar17 = pbVar17 + -0x10;
      pbVar3 = pbVar20;
      if (pbVar17 == (byte *)0x0) goto LAB_015d52c4;
    }
    pbVar7 = (byte *)((uint)local_70 >> 0x10);
    uVar16 = ((uint)local_70 & 0xffff) >> 8;
    pbVar24 = (byte *)((uint)local_70 & 0xff);
    local_84 = local_6c;
    local_80 = local_68;
    pbStack_7c = local_64;
    goto LAB_015d4fd0;
  }
LAB_015d50b0:
  unaff_r10 = (byte *)0x0;
  if (iVar15 != 0) goto code_r0x015d50bc;
LAB_015d5398:
  pbVar24 = &DAT_00000012;
LAB_015d539c:
  iVar19 = 1;
LAB_015d53a8:
  local_68 = (byte *)(uVar16 << 8 | (int)pbVar7 << 0x10 | (uint)pbVar24);
  if (*param_1 != 2) {
    local_6c = local_a4;
    local_78 = param_1;
    local_70 = (int *)iVar19;
    local_64 = pbVar4;
    local_60 = pbVar11;
    pbStack_5c = pbVar20;
    pbStack_58 = unaff_r10;
    pbStack_54 = pbVar17;
    FUN_015d9580(&local_78);
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00410ac0,0x1d,&DAT_018ab248);
  }
  param_1[1] = (int)local_a4;
  param_1[2] = (int)local_68;
  param_1[3] = (int)pbVar4;
  param_1[4] = (int)pbVar11;
  param_1[5] = (int)pbVar20;
  param_1[6] = (int)unaff_r10;
  *param_1 = iVar19;
  param_1[7] = (int)pbVar17;
  return;
}

