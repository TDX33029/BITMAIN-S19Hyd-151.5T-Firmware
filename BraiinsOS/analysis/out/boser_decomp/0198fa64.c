// FUN_0198fa64 @ 0198fa64 size=1784 calls_out=14 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0198fa64(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 uVar13;
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
  byte *pbVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  undefined8 uVar27;
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
  byte *local_2c;
  
  pbVar12 = (byte *)param_2[2];
  iVar15 = 4;
  iVar19 = 1;
  pbVar23 = (byte *)0x3b;
  local_a4 = *(byte **)(pbVar12 + 4);
  pbVar21 = local_a4 + 0xb8;
  bVar1 = local_a4[0xd9];
  pbVar18 = *(byte **)(*(int *)*param_2 + 0x20);
  pbVar4 = *(byte **)(local_a4 + 0xd4);
  if (bVar1 == 8) {
    iVar15 = 0xc;
  }
  pbVar10 = (byte *)(iVar15 + *(int *)(local_a4 + 0xdc));
  pbVar17 = pbVar10 + -(int)pbVar4;
  bVar26 = pbVar17 <= pbVar18;
  bVar25 = pbVar18 == pbVar17;
  if (bVar26) {
    pbVar17 = pbVar18 + -(int)pbVar17;
    bVar25 = pbVar4 == pbVar17;
  }
  if ((bVar26 && pbVar17 <= pbVar4) && !bVar25) {
    pbVar20 = (byte *)0x0;
    uVar13 = *(undefined4 *)pbVar12;
    uVar9 = *(undefined4 *)param_2[3];
    uVar2 = *(undefined1 *)param_2[1];
    local_90 = 0;
    local_c0 = *(byte **)(local_a4 + 0x100);
    local_94 = local_c0 + 8;
    iVar19 = *(int *)(local_a4 + 0xd0);
    local_9c = pbVar4 + -(int)pbVar17;
    pbVar12 = (byte *)0x0;
    local_a0 = pbVar17 + iVar19;
    pbVar5 = pbVar4 + iVar19;
    pbVar4 = pbVar4 + iVar19 + (-*(int *)(local_a4 + 0xdc) - iVar15);
    pbVar17 = (byte *)0x0;
    do {
      pbVar8 = pbVar18 + (int)pbVar4;
      uVar16 = (uint)*pbVar8;
      local_98 = pbVar21;
      if ((pbVar17 == &DAT_0000003f) && (1 < uVar16)) {
        pbVar23 = &DAT_00000006;
        pbVar20 = (byte *)0x0;
        goto LAB_0198fea4;
      }
      uVar14 = (uint)pbVar17 & 0x3f;
      uVar22 = uVar16 & 0x7f;
      unaff_r10 = (byte *)(uVar14 - 0x20);
      uVar24 = uVar22 << uVar14;
      if (-1 < (int)unaff_r10) {
        uVar24 = 0;
      }
      pbVar12 = (byte *)(uVar24 | (uint)pbVar12);
      uVar24 = uVar22 >> (0x20 - uVar14 & 0xff);
      if (-1 < (int)unaff_r10) {
        uVar24 = uVar22 << ((uint)unaff_r10 & 0xff);
      }
      pbVar20 = (byte *)(uVar24 | (uint)pbVar20);
      if (-1 < (char)*pbVar8) {
        local_a0 = pbVar8 + 1;
        local_9c = pbVar10 + ~(uint)pbVar18;
        pbVar8 = (byte *)((uint)pbVar12 | (uint)pbVar20);
        if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d282b4);
        }
        if ((pbVar20 == (byte *)0x0) &&
           (pbVar8 = pbVar12 + -1, pbVar8 < *(byte **)(local_c0 + 0x10))) {
          puVar6 = (undefined4 *)((int)pbVar8 * 0x68 + *(int *)(local_c0 + 0xc));
          goto LAB_0198fcd4;
        }
        puVar6 = *(undefined4 **)(local_c0 + 0x14);
        if (puVar6 == (undefined4 *)0x0) goto LAB_0198fea0;
        iVar15 = *(int *)(local_c0 + 0x18);
        goto LAB_0198fc3c;
      }
      pbVar10 = pbVar10 + -1;
      pbVar4 = pbVar4 + 1;
      pbVar17 = pbVar17 + 7;
    } while (pbVar18 != pbVar10);
    pbVar23 = &DAT_00000013;
    pbStack_7c = (byte *)0x0;
    local_84 = pbVar5;
    local_80 = pbVar5;
LAB_0198fbcc:
    iVar19 = 1;
    pbVar5 = local_84;
    pbVar12 = local_80;
    pbVar20 = pbStack_7c;
  }
  else {
    uVar16 = 0;
    pbVar8 = (byte *)0x0;
    pbVar5 = pbVar21;
    pbVar20 = (byte *)0x0;
  }
  goto LAB_0198feb0;
code_r0x0198fcb8:
  iVar15 = iVar15 + -1;
  puVar6 = (undefined4 *)puVar6[(int)(pbVar17 + 0x136)];
LAB_0198fc3c:
  pbVar17 = &DAT_ffffffff;
  local_c0 = (byte *)(uint)*(ushort *)((int)puVar6 + 0x4d6);
  pbVar8 = (byte *)((int)local_c0 << 3);
  puVar11 = puVar6;
  do {
    if (pbVar8 == (byte *)0x0) {
      pbVar8 = (byte *)0x0;
      pbVar17 = local_c0;
      goto LAB_0198fcac;
    }
    pbVar4 = (byte *)*puVar11;
    pbVar21 = (byte *)puVar11[1];
    pbVar8 = pbVar8 + -8;
    pbVar17 = pbVar17 + 1;
    puVar11 = puVar11 + 2;
    uVar24 = (uint)(pbVar21 <= pbVar20 &&
                   (uint)(pbVar12 <= pbVar4) <= (uint)((int)pbVar21 - (int)pbVar20)) -
             (uint)(pbVar20 <= pbVar21 &&
                   (uint)(pbVar4 <= pbVar12) <= (uint)((int)pbVar20 - (int)pbVar21));
  } while (uVar24 == 1);
  if ((uVar24 & 0xff) == 0) {
    puVar6 = puVar6 + (int)pbVar17 * 0x1a + 0x16;
LAB_0198fcd4:
    local_90 = (uint)(*(char *)((int)puVar6 + 0x62) == '\x01');
    uVar27 = FUN_0134bd24();
    iVar15 = (int)((ulonglong)uVar27 >> 0x20);
    pbVar17 = (byte *)uVar27;
    if (iVar15 == 0) {
      unaff_r10 = (byte *)0x0;
      pbVar4 = pbVar20;
LAB_0198ff30:
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
      local_4c = uVar13;
      local_48 = local_a4;
      local_44 = uVar9;
      local_40 = uVar2;
      FUN_01991b2c(&local_38,&local_78,0,0);
      pbVar20 = local_2c;
      pbVar12 = local_30;
      pbVar5 = local_34;
      pbVar17 = local_38;
      iVar19 = 1;
      if ((char)local_38 == 'R') {
        if (&DAT_00000001 < local_64) {
          if (&DAT_00000014 < local_64) {
            FUN_01993d34(local_68);
          }
          else {
            FUN_01993e38();
          }
        }
        piVar3 = local_70;
        if (local_70 < local_78) {
          if (local_70 == (int *)0x0) {
            thunk_FUN_01be4678(local_74);
            local_a4 = &DAT_00000008;
          }
          else {
            iVar15 = (int)local_70 * 0x28;
            local_a4 = (byte *)FUN_01298554(local_74,(int)local_78 * 0x28,8,iVar15);
            if (local_a4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(8,iVar15);
            }
          }
        }
        else {
          local_a4 = local_74;
        }
        pbVar12 = local_64;
        if (local_64 < local_6c) {
          if (local_64 == (byte *)0x0) {
            thunk_FUN_01be4678(local_68);
            pbVar5 = &DAT_00000008;
          }
          else {
            iVar15 = (int)local_64 * 0x18;
            pbVar5 = (byte *)FUN_01298554(local_68,(int)local_6c * 0x18,8);
            if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(8,iVar15);
            }
          }
        }
        else {
          pbVar5 = local_68;
        }
        pbVar8 = (byte *)((uint)piVar3 >> 0x10);
        uVar16 = ((uint)piVar3 & 0xffff) >> 8;
        pbVar23 = (byte *)((uint)piVar3 & 0xff);
        iVar19 = 0;
        pbVar17 = pbVar4;
        pbVar20 = pbVar18;
      }
      else {
        uVar16 = ((uint)local_38 & 0xffff) >> 8;
        if (local_78 != (int *)0x0) {
          thunk_FUN_01be4678(local_74);
          unaff_r10 = pbVar5;
        }
        pbVar23 = (byte *)((uint)pbVar17 & 0xff);
        pbVar8 = (byte *)((uint)pbVar17 >> 0x10);
        if (local_6c != (byte *)0x0) {
          thunk_FUN_01be4678(local_68);
          pbVar17 = pbVar23;
          unaff_r10 = pbVar5;
          local_a4 = pbVar8;
        }
      }
      goto LAB_0198feb0;
    }
    iVar15 = iVar15 << 4;
    unaff_r10 = (byte *)0x0;
    uVar7 = *(undefined4 *)(local_a4 + 0x104);
    while( true ) {
      local_38 = *(byte **)pbVar17;
      local_34 = *(byte **)(pbVar17 + 4);
      local_30 = *(byte **)(pbVar17 + 8);
      local_2c = *(byte **)(pbVar17 + 0xc);
      FUN_019901d0(&local_78,&local_a0,*(undefined4 *)(local_98 + 0x20),&local_38);
      if (local_78 == (int *)0x2e && local_74 == (byte *)0x0) break;
      uVar16 = (uint)local_68 & 0xffff;
      if (uVar16 < 0x47) {
        if (uVar16 == 3) {
          if (unaff_r10 == (byte *)0x0) {
            FUN_01993028(&local_38,&local_78);
            FUN_0198d46c(&local_88,uVar13,bVar1,uVar7,&local_38);
            unaff_r10 = local_84;
            pbVar20 = local_80;
            if (local_88 != 0x52) {
              unaff_r10 = (byte *)0x0;
              pbVar20 = local_c0;
            }
            local_c0 = pbVar20;
          }
        }
        else if (uVar16 == 0x31) goto LAB_0198fd28;
      }
      else if (uVar16 == 0x47) {
LAB_0198fd28:
        if (unaff_r10 == (byte *)0x0) {
          FUN_01993028(&local_38,&local_78);
          FUN_01993a74(&local_88,extraout_r1,local_38,local_34,local_30,uVar2,uVar13,local_a4,uVar9,
                       0x10);
          pbVar23 = (byte *)(uint)local_88;
          if (pbVar23 != &DAT_00000052) {
            pbVar8 = (byte *)(uint)local_86;
            uVar16 = (uint)local_87;
            goto LAB_0198fbcc;
          }
          pbVar20 = local_80;
          unaff_r10 = local_84;
        }
      }
      else if (uVar16 == 0x2007 || uVar16 == 0x6e) {
        FUN_01993028(&local_38,&local_78);
        FUN_0198d46c(&local_88,uVar13,bVar1,uVar7,&local_38);
        if (local_88 == 0x52) {
          pbVar20 = local_80;
          unaff_r10 = local_84;
        }
      }
      pbVar17 = pbVar17 + 0x10;
      iVar15 = iVar15 + -0x10;
      pbVar4 = pbVar20;
      if (iVar15 == 0) goto LAB_0198ff30;
    }
    pbVar8 = (byte *)((uint)local_70 >> 0x10);
    uVar16 = ((uint)local_70 & 0xffff) >> 8;
    pbVar23 = (byte *)((uint)local_70 & 0xff);
    local_84 = local_6c;
    local_80 = local_68;
    pbStack_7c = local_64;
    goto LAB_0198fbcc;
  }
LAB_0198fcac:
  unaff_r10 = (byte *)0x0;
  if (iVar15 != 0) goto code_r0x0198fcb8;
LAB_0198fea0:
  pbVar23 = &DAT_00000012;
LAB_0198fea4:
  iVar19 = 1;
LAB_0198feb0:
  local_68 = (byte *)(uVar16 << 8 | (int)pbVar8 << 0x10 | (uint)pbVar23);
  if (*param_1 != 2) {
    local_6c = local_a4;
    local_78 = param_1;
    local_70 = (int *)iVar19;
    local_64 = pbVar5;
    local_60 = pbVar12;
    pbStack_5c = pbVar20;
    pbStack_58 = unaff_r10;
    pbStack_54 = pbVar17;
    FUN_01993f84(&local_78);
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00526af1,0x1d,&DAT_01d27e44);
  }
  param_1[1] = (int)local_a4;
  param_1[2] = (int)local_68;
  param_1[3] = (int)pbVar5;
  param_1[4] = (int)pbVar12;
  param_1[5] = (int)pbVar20;
  param_1[6] = (int)unaff_r10;
  *param_1 = iVar19;
  param_1[7] = (int)pbVar17;
  return;
}

