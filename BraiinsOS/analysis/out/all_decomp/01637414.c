// FUN_01637414 @ 01637414 size=2540 calls_out=7 calls_in=1
// strings: 

longlong FUN_01637414(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                     uint *param_6,uint param_7)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *extraout_r1;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  uint *puVar15;
  ushort *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_34;
  uint local_2c;
  
  puVar7 = (uint *)*param_1;
  if (puVar7 != (uint *)0x0) {
    local_34 = param_1[1];
    do {
      uVar4 = (uint)*(ushort *)((int)puVar7 + 0x10e);
      uVar20 = 0xffffffff;
      iVar12 = uVar4 << 4;
      puVar6 = puVar7;
      do {
        if (iVar12 == 0) goto LAB_016374d8;
        uVar5 = *puVar6;
        uVar9 = puVar6[1];
        uVar24 = puVar6[2];
        iVar12 = iVar12 + -0x10;
        uVar20 = uVar20 + 1;
        puVar23 = (uint *)puVar6[3];
        puVar6 = puVar6 + 4;
        uVar5 = (uint)(puVar23 <= param_6 &&
                      (uint)(param_5 < uVar24 ||
                            uVar24 - param_5 <
                            (uint)(param_4 < uVar9 || uVar9 - param_4 < (uint)(param_3 <= uVar5)))
                      <= (uint)((int)puVar23 - (int)param_6)) -
                (uint)(param_6 <= puVar23 &&
                      (uint)(uVar24 < param_5 ||
                            param_5 - uVar24 <
                            (uint)(uVar9 < param_4 || param_4 - uVar9 < (uint)(uVar5 <= param_3)))
                      <= (uint)((int)param_6 - (int)puVar23));
      } while (uVar5 == 1);
      uVar4 = uVar20;
      if ((uVar5 & 0xff) == 0) {
        lVar2 = *(longlong *)(puVar7 + uVar20 * 2 + 0x2c);
        puVar7[uVar20 * 2 + 0x2c] = param_7;
        puVar7[uVar20 * 2 + 0x2d] = (uint)&DAT_018ac3f0;
        return lVar2;
      }
LAB_016374d8:
      if (local_34 == 0) goto LAB_01637594;
      local_34 = local_34 - 1;
      puVar7 = (uint *)puVar7[uVar4 + 0x44];
    } while( true );
  }
  puVar7 = (uint *)thunk_FUN_016d4a50(0x110);
  if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x110);
  }
  *(undefined2 *)((int)puVar7 + 0x10e) = 1;
  puVar7[0x42] = 0;
  *param_1 = (uint)puVar7;
  param_1[1] = 0;
  *puVar7 = param_3;
  puVar7[1] = param_4;
  puVar7[2] = param_5;
  puVar7[0x2c] = param_7;
  puVar7[0x2d] = (uint)&DAT_018ac3f0;
  puVar7[3] = (uint)param_6;
  goto LAB_0163757c;
LAB_01637594:
  puVar13 = (ushort *)((int)puVar7 + 0x10e);
  uVar1 = *puVar13;
  uVar20 = (uint)uVar1;
  if (uVar20 < 0xb) {
    uVar5 = uVar4 + 1;
    puVar6 = puVar7 + uVar4 * 4;
    if (uVar20 < uVar5) {
      *puVar6 = param_3;
      puVar6[1] = param_4;
      puVar6[2] = param_5;
      puVar6[3] = (uint)param_6;
    }
    else {
      FUN_016dd52c(puVar7 + uVar5 * 4,puVar6,(uVar20 - uVar4) * 0x10);
      *puVar6 = param_3;
      puVar6[1] = param_4;
      puVar6[2] = param_5;
      puVar6[3] = (uint)param_6;
      FUN_016dd52c(puVar7 + uVar5 * 2 + 0x2c,puVar7 + uVar4 * 2 + 0x2c,(uVar20 - uVar4) * 8);
    }
    puVar7[uVar4 * 2 + 0x2c] = param_7;
    puVar7[uVar4 * 2 + 0x2d] = (uint)&DAT_018ac3f0;
    *puVar13 = uVar1 + 1;
    param_6 = puVar7;
  }
  else {
    uVar20 = 4;
    if (uVar4 < 5) {
      bVar3 = false;
    }
    else if (uVar4 == 5) {
      bVar3 = false;
      uVar20 = 5;
    }
    else {
      if (uVar4 == 6) {
        uVar20 = 5;
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 - 7;
        uVar20 = 6;
      }
      bVar3 = true;
    }
    puVar6 = (uint *)thunk_FUN_016d4a50(0x110);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x110);
    }
    *(undefined2 *)((int)puVar6 + 0x10e) = 0;
    puVar6[0x42] = 0;
    puVar23 = puVar7 + uVar20 * 4;
    uVar5 = *puVar23;
    uVar17 = (uint)*puVar13 + ~uVar20;
    uVar22 = puVar7[uVar20 * 2 + 0x2c];
    *(undefined2 *)((int)puVar6 + 0x10e) = (short)uVar17;
    uVar24 = (puVar7 + uVar20 * 2 + 0x2c)[1];
    uVar10 = puVar23[1];
    uVar9 = puVar23[3];
    if (0xb < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar17,0xb,&DAT_018ac47c);
    }
    uVar8 = puVar23[2];
    FUN_016dd1aa(puVar6,puVar7 + (uVar20 + 1) * 4,uVar17 * 0x10);
    FUN_016dd1aa(puVar6 + 0x2c,puVar7 + (uVar20 + 1) * 2 + 0x2c,uVar17 * 8);
    *puVar13 = (ushort)uVar20;
    puVar23 = puVar6;
    if (!bVar3) {
      puVar23 = puVar7;
    }
    puVar15 = puVar23 + uVar4 * 4;
    uVar1 = *(ushort *)((int)puVar23 + 0x10e);
    if (uVar4 < uVar1) {
      iVar12 = uVar1 - uVar4;
      FUN_016dd52c(puVar23 + (uVar4 + 1) * 4,puVar15,iVar12 * 0x10);
      *puVar15 = param_3;
      puVar15[1] = param_4;
      puVar15[2] = param_5;
      puVar15[3] = (uint)param_6;
      FUN_016dd52c(puVar23 + (uVar4 + 1) * 2 + 0x2c,puVar23 + uVar4 * 2 + 0x2c,iVar12 * 8);
    }
    else {
      *puVar15 = param_3;
      puVar15[1] = param_4;
      puVar15[2] = param_5;
      puVar15[3] = (uint)param_6;
    }
    puVar23[uVar4 * 2 + 0x2c] = param_7;
    puVar23[uVar4 * 2 + 0x2d] = (uint)&DAT_018ac3f0;
    *(ushort *)((int)puVar23 + 0x10e) = uVar1 + 1;
    if ((uint *)puVar7[0x42] == (uint *)0x0) {
      local_2c = 0;
    }
    else {
      local_2c = 0;
      puVar23 = (uint *)puVar7[0x42];
      param_6 = puVar7;
      uVar4 = uVar9;
      puVar7 = puVar6;
      uVar20 = uVar22;
      uVar17 = uVar24;
      local_58 = uVar5;
      local_54 = uVar10;
      local_50 = uVar8;
      do {
        puVar15 = puVar23;
        puVar13 = (ushort *)((int)puVar15 + 0x10e);
        uVar11 = (uint)*puVar13;
        uVar14 = (uint)(ushort)param_6[0x43];
        if (uVar11 < 0xb) {
          puVar6 = puVar15 + uVar14 * 4;
          uVar5 = uVar14 + 1;
          if (uVar14 < uVar11) {
            iVar12 = uVar11 - uVar14;
            FUN_016dd52c(puVar15 + uVar5 * 4,puVar6,iVar12 * 0x10);
            *puVar6 = local_58;
            puVar6[1] = local_54;
            puVar6[2] = local_50;
            puVar6[3] = uVar4;
            FUN_016dd52c(puVar15 + uVar5 * 2 + 0x2c,puVar15 + uVar14 * 2 + 0x2c,iVar12 * 8);
            puVar15[uVar14 * 2 + 0x2c] = uVar20;
            (puVar15 + uVar14 * 2 + 0x2c)[1] = uVar17;
            FUN_016dd52c(puVar15 + uVar14 + 0x46,puVar15 + uVar14 + 0x45,iVar12 * 4);
            param_6 = extraout_r1;
          }
          else {
            *puVar6 = local_58;
            puVar6[1] = local_54;
            puVar6[2] = local_50;
            puVar6[3] = uVar4;
            puVar15[uVar14 * 2 + 0x2c] = uVar20;
            puVar15[uVar14 * 2 + 0x2d] = uVar17;
          }
          *puVar13 = (ushort)(uVar11 + 1);
          puVar15[uVar14 + 0x45] = (uint)puVar7;
          if (uVar5 < uVar11 + 2) {
            param_6 = (uint *)&DAT_0000010c;
            do {
              uVar4 = puVar15[uVar14 + 0x45];
              uVar14 = uVar14 + 1;
              *(short *)(uVar4 + 0x10c) = (short)uVar14;
              *(uint **)(uVar4 + 0x108) = puVar15;
            } while (uVar11 + 1 != uVar14);
          }
          goto LAB_0163757c;
        }
        if (uVar14 < 5) {
          uVar21 = 4;
          bVar3 = false;
        }
        else if (uVar14 == 5) {
          bVar3 = false;
          uVar21 = 5;
        }
        else if (uVar14 == 6) {
          uVar14 = 0;
          uVar21 = 5;
          bVar3 = true;
        }
        else {
          uVar14 = uVar14 - 7;
          bVar3 = true;
          uVar21 = 6;
        }
        puVar6 = (uint *)thunk_FUN_016d4a50(0x140);
        if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x140);
        }
        puVar16 = (ushort *)((int)puVar6 + 0x10e);
        *puVar16 = 0;
        puVar6[0x42] = 0;
        puVar23 = puVar15 + uVar21 * 4;
        uVar5 = *puVar23;
        uVar22 = puVar15[uVar21 * 2 + 0x2c];
        uVar18 = (uint)*puVar13 + ~uVar21;
        uVar10 = puVar23[1];
        uVar24 = (puVar15 + uVar21 * 2 + 0x2c)[1];
        uVar8 = puVar23[2];
        uVar9 = puVar23[3];
        *puVar16 = (ushort)uVar18;
        if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar18,0xb,&DAT_018ac47c);
        }
        FUN_016dd1aa(puVar6,puVar15 + (uVar21 + 1) * 4,uVar18 * 0x10);
        FUN_016dd1aa(puVar6 + 0x2c,puVar15 + (uVar21 + 1) * 2 + 0x2c,uVar18 * 8);
        *puVar13 = (ushort)uVar21;
        uVar18 = (uint)*puVar16;
        iVar12 = uVar18 + 1;
        if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,iVar12,0xc,&DAT_018ac48c);
        }
        if (uVar11 - uVar21 != iVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_004194bf,0x28,&DAT_018af448);
        }
        local_2c = local_2c + 1;
        FUN_016dd1aa(puVar6 + 0x44,puVar15 + uVar21 + 0x45,iVar12 * 4);
        uVar11 = 0;
        do {
          uVar21 = (puVar6 + 0x44)[uVar11];
          *(short *)(uVar21 + 0x10c) = (short)uVar11;
          *(uint **)(uVar21 + 0x108) = puVar6;
          if (uVar18 <= uVar11) break;
          uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar18);
        uVar11 = uVar14 + 1;
        puVar23 = puVar6;
        if (!bVar3) {
          puVar23 = puVar15;
        }
        puVar19 = puVar23 + uVar14 * 4;
        uVar21 = (uint)*(ushort *)((int)puVar23 + 0x10e);
        if (uVar14 < uVar21) {
          iVar12 = uVar21 - uVar14;
          FUN_016dd52c(puVar23 + uVar11 * 4,puVar19,iVar12 * 0x10);
          *puVar19 = local_58;
          puVar19[1] = local_54;
          puVar19[2] = local_50;
          puVar19[3] = uVar4;
          FUN_016dd52c(puVar23 + uVar11 * 2 + 0x2c,puVar23 + uVar14 * 2 + 0x2c,iVar12 * 8);
          (puVar23 + uVar14 * 2 + 0x2c)[1] = uVar17;
          puVar23[uVar14 * 2 + 0x2c] = uVar20;
          FUN_016dd52c(puVar23 + uVar14 + 0x46,puVar23 + uVar14 + 0x45,iVar12 * 4);
        }
        else {
          *puVar19 = local_58;
          puVar19[1] = local_54;
          puVar19[2] = local_50;
          puVar19[3] = uVar4;
          puVar23[uVar14 * 2 + 0x2c] = uVar20;
          puVar23[uVar14 * 2 + 0x2d] = uVar17;
        }
        *(ushort *)((int)puVar23 + 0x10e) = (ushort)(uVar21 + 1);
        puVar23[uVar14 + 0x45] = (uint)puVar7;
        if (uVar11 < uVar21 + 2) {
          do {
            uVar20 = uVar14 + 1;
            uVar4 = puVar23[uVar14 + 0x45];
            *(short *)(uVar4 + 0x10c) = (short)uVar20;
            *(uint **)(uVar4 + 0x108) = puVar23;
            uVar14 = uVar20;
          } while (uVar21 + 1 != uVar20);
        }
        puVar23 = (uint *)puVar15[0x42];
        param_6 = puVar15;
        uVar4 = uVar9;
        puVar7 = puVar6;
        uVar20 = uVar22;
        uVar17 = uVar24;
        local_58 = uVar5;
        local_54 = uVar10;
        local_50 = uVar8;
      } while ((uint *)puVar15[0x42] != (uint *)0x0);
    }
    uVar4 = *param_1;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac44c);
    }
    uVar20 = param_1[1];
    puVar7 = (uint *)thunk_FUN_016d4a50(0x140);
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x140);
    }
    *(undefined2 *)((int)puVar7 + 0x10e) = 0;
    puVar7[0x44] = uVar4;
    puVar7[0x42] = 0;
    if (0xfffffffe < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018af438);
    }
    *param_1 = (uint)puVar7;
    *(undefined2 *)(uVar4 + 0x10c) = 0;
    *(uint **)(uVar4 + 0x108) = puVar7;
    param_1[1] = uVar20 + 1;
    if (local_2c != uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00413115,0x30,&DAT_018ac46c);
    }
    param_6 = (uint *)&DAT_00000001;
    puVar7[0x2c] = uVar22;
    *(undefined2 *)((int)puVar7 + 0x10e) = 1;
    *(undefined2 *)(puVar6 + 0x43) = 1;
    puVar7[0x45] = (uint)puVar6;
    puVar7[0x2d] = uVar24;
    puVar6[0x42] = (uint)puVar7;
    *puVar7 = uVar5;
    puVar7[1] = uVar10;
    puVar7[2] = uVar8;
    puVar7[3] = uVar9;
  }
LAB_0163757c:
  param_1[2] = param_1[2] + 1;
  return ZEXT48(param_6) << 0x20;
}

