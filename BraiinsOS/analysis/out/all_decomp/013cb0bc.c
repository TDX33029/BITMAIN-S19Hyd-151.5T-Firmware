// FUN_013cb0bc @ 013cb0bc size=1824 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013cb0bc(int *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint local_b8 [31];
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar3 = param_3 + param_4 * 0x10;
  iVar4 = param_2 + 0x1a4;
  iVar23 = 0;
  do {
    uVar14 = *(uint *)(param_3 + 8);
    pbVar18 = *(byte **)(param_3 + 4);
    if (0x7ffffffe < uVar14) {
      *param_1 = 2;
      param_1[1] = iVar23;
      param_1[2] = uVar14;
      return;
    }
    local_b8[0x1d] = *(int *)(param_2 + 0x1dc);
    uVar10 = *(uint *)(param_2 + 0x2ec);
    if (uVar14 < *(uint *)(param_2 + 0x2ec)) {
      uVar10 = uVar14;
    }
    uVar11 = *(uint *)(param_2 + 0x2f0);
    if (*(uint *)(param_2 + 0x2f0) < uVar14) {
      uVar11 = uVar14;
    }
    *(uint *)(param_2 + 0x2ec) = uVar10;
    *(uint *)(param_2 + 0x2f0) = uVar11;
    local_b8[0x1c] = iVar23;
    if (iVar23 != local_b8[0x1d]) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb3aac(0,local_b8 + 0x1c,local_b8 + 0x1d,&DAT_003ceb15,0x5f,&DAT_018945a8);
    }
    if (iVar23 == *(int *)(param_2 + 0x1d4)) {
      FUN_013c1038(param_2 + 0x1d4);
    }
    iVar5 = *(int *)(param_2 + 0x1a0);
    *(uint *)(*(int *)(param_2 + 0x1d8) + iVar23 * 4) = uVar14;
    cVar1 = *(char *)(iVar5 + 5);
    *(int *)(param_2 + 0x1dc) = iVar23 + 1;
    if (cVar1 != '\0') {
      FUN_005f7324(param_2 + 0x20,pbVar18,uVar14);
    }
    uVar10 = *(uint *)(param_2 + 0x2fc);
    if (uVar14 != 0) {
      bVar7 = false;
      uVar15 = 0;
      uVar11 = uVar10;
      pbVar6 = pbVar18;
      do {
        pbVar19 = pbVar6 + 1;
        bVar2 = *pbVar6;
        uVar22 = (uint)bVar2;
        if (bVar7) {
          iVar5 = *(int *)(param_2 + 0x1a0);
          cVar1 = *(char *)(iVar5 + 4);
joined_r0x013cb28c:
          bVar7 = true;
          if (cVar1 == '\x01') goto LAB_013cb6dc;
        }
        else {
          if (*(uint *)(param_2 + 0x1ac) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar11,*(uint *)(param_2 + 0x1ac),&DAT_018945b8);
          }
          iVar5 = *(int *)(param_2 + 0x1a0);
          bVar7 = false;
          if (*(int *)(*(int *)(param_2 + 0x1a8) + uVar11 * 0x14 + 8) != 0) {
            cVar1 = *(char *)(iVar5 + 4);
            goto joined_r0x013cb28c;
          }
        }
        if (uVar22 != 0) {
          uVar8 = uVar22 - 1;
          local_b8[0x1b] = 0;
          local_b8[0x1a] = 0;
          local_b8[0x19] = 0;
          local_b8[0x18] = 1;
          local_b8[0x17] = 0;
          uVar9 = uVar8 & 0x1f;
          local_b8[0x16] = 0;
          uVar10 = uVar9 ^ 0x1f;
          local_b8[0x15] = 0;
          local_b8[0x14] = 0;
          puVar20 = (uint *)(param_2 + ((uVar8 & 0x80) >> 3));
          iVar24 = -(uVar8 >> 3 & 0xc);
          uVar8 = *(uint *)((int)local_b8 + iVar24 + 0x60);
          uVar13 = *(uint *)((int)local_b8 + iVar24 + 100);
          uVar16 = *(uint *)((int)local_b8 + iVar24 + 0x68);
          iVar24 = *(int *)((int)local_b8 + iVar24 + 0x6c);
          *puVar20 = *puVar20 | uVar8 << uVar9;
          puVar20[1] = puVar20[1] | uVar13 << uVar9 | (uVar8 >> 1) >> uVar10;
          puVar20[2] = puVar20[2] | uVar16 << uVar9 | (uVar13 >> 1) >> uVar10;
          puVar20[3] = puVar20[3] | iVar24 << uVar9 | (uVar16 >> 1) >> uVar10;
        }
        local_b8[0x13] = 0;
        local_b8[0x12] = 0;
        local_b8[0x11] = 0;
        local_b8[0x10] = 1;
        local_b8[0xf] = 0;
        uVar9 = uVar22 & 0x1f;
        local_b8[0xe] = 0;
        uVar8 = uVar9 ^ 0x1f;
        local_b8[0xd] = 0;
        local_b8[0xc] = 0;
        puVar20 = (uint *)(param_2 + (bVar2 >> 3 & 0xfffffff0));
        iVar24 = -(bVar2 >> 3 & 0xc);
        uVar10 = *(uint *)((int)local_b8 + iVar24 + 0x40);
        uVar16 = *(uint *)((int)local_b8 + iVar24 + 0x44);
        uVar13 = *(uint *)((int)local_b8 + iVar24 + 0x48);
        iVar24 = *(int *)((int)local_b8 + iVar24 + 0x4c);
        *puVar20 = *puVar20 | uVar10 << uVar9;
        puVar20[1] = puVar20[1] | uVar16 << uVar9 | (uVar10 >> 1) >> uVar8;
        cVar1 = *(char *)(iVar5 + 6);
        puVar20[2] = puVar20[2] | uVar13 << uVar9 | (uVar16 >> 1) >> uVar8;
        puVar20[3] = puVar20[3] | iVar24 << uVar9 | (uVar13 >> 1) >> uVar8;
        if (cVar1 != '\0') {
          if ((uVar22 - 0x41 & 0xff) < 0x1a) {
            uVar10 = uVar22 | 0x20;
LAB_013cb428:
            local_b8[0xb] = 0;
            uVar8 = uVar10 - 1;
            local_b8[8] = 1;
            local_b8[10] = 0;
            local_b8[9] = 0;
            local_b8[7] = 0;
            uVar9 = uVar8 & 0x1f;
            local_b8[6] = 0;
            local_b8[5] = 0;
            local_b8[4] = 0;
            puVar20 = (uint *)(param_2 + ((uVar8 & 0x80) >> 3));
            iVar5 = -(uVar8 >> 3 & 0xc);
            uVar8 = *(uint *)((int)local_b8 + iVar5 + 0x20);
            uVar16 = *(uint *)((int)local_b8 + iVar5 + 0x24);
            uVar13 = *(uint *)((int)local_b8 + iVar5 + 0x28);
            iVar5 = *(int *)((int)local_b8 + iVar5 + 0x2c);
            uVar21 = uVar9 ^ 0x1f;
            *puVar20 = *puVar20 | uVar8 << uVar9;
            puVar20[1] = uVar16 << uVar9 | (uVar8 >> 1) >> uVar21 | puVar20[1];
            puVar20[2] = uVar13 << uVar9 | (uVar16 >> 1) >> uVar21 | puVar20[2];
            puVar20[3] = iVar5 << uVar9 | (uVar13 >> 1) >> uVar21 | puVar20[3];
          }
          else {
            uVar10 = uVar22;
            if ((uVar22 - 0x61 & 0xff) < 0x1a) {
              uVar10 = uVar22 & 0x5f;
            }
            if (uVar10 != 0) goto LAB_013cb428;
            uVar10 = 0;
          }
          local_b8[0] = 1;
          local_b8[3] = 0;
          local_b8[2] = 0;
          local_b8[1] = 0;
          uVar8 = uVar10 & 0x1f;
          uVar9 = uVar8 ^ 0x1f;
          puVar20 = (uint *)(param_2 + (uVar10 >> 3 & 0xfffffff0));
          iVar5 = -(uVar10 >> 3 & 0xc);
          uVar10 = *(uint *)((int)local_b8 + iVar5);
          uVar16 = *(uint *)((int)local_b8 + iVar5 + 4);
          uVar13 = *(uint *)((int)local_b8 + iVar5 + 8);
          iVar5 = *(int *)((int)local_b8 + iVar5 + 0xc);
          *puVar20 = *puVar20 | uVar10 << uVar8;
          puVar20[1] = uVar16 << uVar8 | (uVar10 >> 1) >> uVar9 | puVar20[1];
          puVar20[2] = uVar13 << uVar8 | (uVar16 >> 1) >> uVar9 | puVar20[2];
          puVar20[3] = iVar5 << uVar8 | (uVar13 >> 1) >> uVar9 | puVar20[3];
        }
        uVar8 = *(uint *)(param_2 + 0x1ac);
        if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,uVar8,&DAT_01894578);
        }
        iVar24 = *(int *)(param_2 + 0x1a8);
        iVar5 = *(int *)(iVar24 + uVar11 * 0x14 + 4);
        if (iVar5 == 0) {
          uVar10 = *(uint *)(iVar24 + uVar11 * 0x14);
          if (uVar10 != 0) {
            do {
              if (*(uint *)(param_2 + 0x1b8) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar10,*(uint *)(param_2 + 0x1b8),&DAT_01894598);
              }
              pbVar6 = (byte *)(*(int *)(param_2 + 0x1b4) + uVar10 * 9);
              if (uVar22 <= *pbVar6) {
                if ((uVar22 == *pbVar6) && (uVar10 = *(uint *)(pbVar6 + 1), uVar10 != 1))
                goto LAB_013cb210;
                break;
              }
              uVar10 = *(uint *)(pbVar6 + 5);
            } while (uVar10 != 0);
          }
LAB_013cb614:
          if (0x7ffffffe < uVar15) {
            local_3c = 0;
            local_b8[0x1e] = uVar15;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_0033d4bf,0x34,local_b8 + 0x1e,&DAT_01856cd8,&DAT_01856998);
          }
          uVar17 = *(undefined4 *)(param_2 + 0x2fc);
          if (uVar8 == *(uint *)(param_2 + 0x1a4)) {
            FUN_005fd4a0(iVar4);
            iVar24 = *(int *)(param_2 + 0x1a8);
          }
          *(uint *)(param_2 + 0x1ac) = uVar8 + 1;
          puVar12 = (undefined4 *)(iVar24 + uVar8 * 0x14);
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          puVar12[3] = uVar17;
          puVar12[4] = uVar15;
          FUN_005ec410(local_b8 + 0x1e,iVar4,uVar11,uVar22,uVar8);
          if (local_b8[0x1e] != 3) goto LAB_013cb704;
          if (*(char *)(*(int *)(param_2 + 0x1a0) + 6) == '\x01') {
            if ((uVar22 - 0x41 & 0xff) < 0x1a) {
              uVar22 = uVar22 | 0x20;
            }
            else if ((uVar22 - 0x61 & 0xff) < 0x1a) {
              uVar22 = uVar22 & 0x5f;
            }
            FUN_005ec410(local_b8 + 0x1e,iVar4,uVar11,uVar22,uVar8);
            if (local_b8[0x1e] != 3) goto LAB_013cb704;
          }
          uVar10 = uVar8;
        }
        else {
          uVar10 = iVar5 + (uint)*(byte *)(param_2 + 0x1ec + uVar22);
          if (*(uint *)(param_2 + 0x1c4) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar10,*(uint *)(param_2 + 0x1c4),&DAT_01894588);
          }
          uVar10 = *(uint *)(*(int *)(param_2 + 0x1c0) + uVar10 * 4);
          if (uVar10 == 1) goto LAB_013cb614;
        }
LAB_013cb210:
        uVar15 = uVar15 + 1;
        uVar11 = uVar10;
        pbVar6 = pbVar19;
      } while (pbVar19 != pbVar18 + uVar14);
    }
    FUN_005ec678(local_b8 + 0x1e,iVar4,uVar10,iVar23);
    if (local_b8[0x1e] != 3) {
LAB_013cb704:
      *param_1 = local_b8[0x1e];
      param_1[1] = local_3c;
      param_1[2] = iStack_38;
      param_1[3] = iStack_34;
      param_1[4] = iStack_30;
      param_1[5] = iStack_2c;
      return;
    }
LAB_013cb6dc:
    param_3 = param_3 + 0x10;
    iVar23 = iVar23 + 1;
    if (param_3 == iVar3) {
      *param_1 = 3;
      return;
    }
  } while( true );
}

