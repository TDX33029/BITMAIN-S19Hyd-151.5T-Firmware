// FUN_01999c88 @ 01999c88 size=908 calls_out=4 calls_in=1
// strings: 

void FUN_01999c88(undefined1 *param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined2 uVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar24;
  byte *pbVar23;
  ushort local_5c;
  uint local_58;
  uint local_30;
  int local_2c;
  uint local_28;
  
  pbVar18 = (byte *)*param_2;
  if (param_2[1] == 0) {
    *(byte **)(param_1 + 4) = pbVar18;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar6 = 0x13;
    *(byte **)(param_1 + 8) = pbVar18;
LAB_01999f28:
    *param_1 = uVar6;
  }
  else {
    pbVar19 = pbVar18 + 1;
    uVar12 = (uint)*pbVar18;
    iVar14 = param_2[1] + -1;
    *param_2 = pbVar19;
    param_2[1] = iVar14;
    if (uVar12 == 0) {
      local_28 = 0;
      local_2c = 2;
      local_30 = 0;
    }
    else {
      iVar3 = FUN_01298504(uVar12 << 2,2);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(2,uVar12 << 2);
      }
      local_28 = 0;
      iVar10 = 0;
      pbVar18 = (byte *)0x1999cd4;
      local_30 = uVar12;
      local_2c = iVar3;
      do {
        uVar1 = local_28;
        if (iVar14 == 0) {
          bVar7 = 0;
LAB_01999f90:
          local_58 = 0;
          uVar6 = 0x13;
          pbVar18 = pbVar19;
LAB_01999f9c:
          param_1[1] = bVar7;
          *param_1 = uVar6;
          *(byte **)(param_1 + 4) = pbVar18;
          *(byte **)(param_1 + 8) = pbVar18;
          *(uint *)(param_1 + 0xc) = local_58;
          goto LAB_01999fb0;
        }
        pbVar16 = (byte *)0x0;
        uVar22 = 0;
        uVar17 = 0;
        uVar4 = local_28 + 1;
        iVar15 = iVar14;
        pbVar24 = pbVar19;
        while( true ) {
          pbVar23 = pbVar24 + 1;
          bVar7 = *pbVar24;
          iVar11 = iVar15 + -1;
          if ((uVar17 == 0x3f) && (1 < bVar7)) {
            bVar7 = 0;
            *param_2 = pbVar23;
            param_2[1] = iVar11;
            uVar6 = 6;
            goto LAB_01999f9c;
          }
          uVar13 = uVar17 & 0x3f;
          uVar5 = bVar7 & 0x7f;
          uVar21 = uVar13 - 0x20;
          uVar9 = uVar5 << uVar13;
          if (-1 < (int)uVar21) {
            uVar9 = 0;
          }
          pbVar16 = (byte *)(uVar9 | (uint)pbVar16);
          uVar9 = uVar5 >> (0x20 - uVar13 & 0xff);
          if (-1 < (int)uVar21) {
            uVar9 = uVar5 << (uVar21 & 0xff);
          }
          uVar22 = uVar9 | uVar22;
          if ((uint)(int)(char)bVar7 < 0x80000000) break;
          uVar17 = uVar17 + 7;
          iVar15 = iVar11;
          pbVar24 = pbVar23;
          if (iVar11 == 0) {
            pbVar19 = pbVar19 + iVar14;
            *param_2 = pbVar19;
            param_2[1] = 0;
            goto LAB_01999f90;
          }
        }
        pbVar18 = (byte *)0xffff;
        if (pbVar16 < (byte *)0xffff) {
          pbVar18 = pbVar16;
        }
        uVar20 = SUB42(pbVar18,0);
        if (uVar22 != 0) {
          uVar20 = 0xffff;
        }
        *param_2 = pbVar23;
        param_2[1] = iVar11;
        if (iVar11 == 0) {
LAB_01999fd8:
          uVar6 = 0x13;
LAB_01999fdc:
          *(undefined4 *)(param_1 + 0xc) = 0;
          *(byte **)(param_1 + 4) = pbVar23;
          *(byte **)(param_1 + 8) = pbVar23;
          *(ushort *)(param_1 + 2) = local_5c;
          *param_1 = uVar6;
          goto LAB_01999fb0;
        }
        pbVar23 = pbVar24 + 2;
        bVar7 = pbVar24[1];
        iVar14 = iVar15 + -2;
        *param_2 = pbVar23;
        param_2[1] = iVar14;
        uVar2 = bVar7 & 0x7f;
        if ((char)bVar7 < '\0') {
          if (iVar14 == 0) goto LAB_01999fd8;
          bVar7 = pbVar24[2];
          pbVar23 = pbVar24 + 3;
          iVar14 = iVar15 + -3;
          *param_2 = pbVar23;
          param_2[1] = iVar14;
          uVar2 = uVar2 | (bVar7 & 0x7f) << 7;
          if (-1 < (char)bVar7) {
            pbVar19 = pbVar23;
            goto LAB_01999e78;
          }
          if (iVar14 == 0) goto LAB_01999fd8;
          bVar7 = pbVar24[3];
          iVar14 = iVar15 + -4;
          pbVar19 = pbVar24 + 4;
          param_2[1] = iVar14;
          *param_2 = pbVar19;
          if (bVar7 < 4) {
            uVar2 = uVar2 | (ushort)bVar7 << 0xe;
            goto LAB_01999e78;
          }
          uVar6 = 6;
          goto LAB_01999fdc;
        }
        pbVar19 = pbVar23;
LAB_01999e78:
        if (local_28 == local_30) {
          FUN_0199b0f8(&local_30);
          iVar3 = local_2c;
        }
        iVar10 = iVar10 + (uint)((uVar22 == 0 && ((byte *)0xffff < pbVar16) <= uVar22) &&
                                ((uint)pbVar16 & 0xffff) == 1);
        puVar8 = (undefined2 *)(iVar3 + uVar1 * 4);
        *puVar8 = uVar20;
        puVar8[1] = uVar2;
        pbVar18 = pbVar16;
        local_58 = uVar22;
        local_28 = uVar4;
        local_5c = uVar2;
      } while (uVar4 != uVar12);
      if (iVar10 == 1) {
        *(int *)(param_1 + 8) = local_2c;
        uVar6 = 0x52;
        *(uint *)(param_1 + 4) = local_30;
        *(uint *)(param_1 + 0xc) = uVar4;
        goto LAB_01999f28;
      }
    }
    *param_1 = 0x47;
LAB_01999fb0:
    if (local_30 != 0) {
      thunk_FUN_01be4678(local_2c);
      return;
    }
  }
  return;
}

