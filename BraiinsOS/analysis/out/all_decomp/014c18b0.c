// FUN_014c18b0 @ 014c18b0 size=784 calls_out=9 calls_in=7
// strings: 

undefined4 FUN_014c18b0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  undefined2 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  uint *puVar13;
  undefined2 *puVar14;
  int iVar15;
  short sVar16;
  uint uVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  uint local_38;
  undefined4 *local_34;
  uint local_30;
  uint uStack_2c;
  
  uVar11 = param_1[7];
  iVar10 = param_1[10];
  if (*param_1 == 1 && param_1[1] == 0) {
    fVar18 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
    fVar19 = (float)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
    if (fVar19 / fVar18 < 0.2) {
      uVar20 = thunk_FUN_016de0ee(0,0x2c0);
      puVar13 = (uint *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20));
      if ((char)puVar13[4] == '\0') {
        FUN_015f62e4(&local_38);
        *puVar13 = local_38;
        puVar13[1] = (uint)local_34;
        puVar13[2] = local_30;
        puVar13[3] = uStack_2c;
        *(undefined1 *)(puVar13 + 4) = 1;
      }
      uVar5 = *puVar13;
      uVar7 = puVar13[1];
      uVar9 = puVar13[2];
      uVar17 = puVar13[3];
      puVar14 = (undefined2 *)param_1[6];
      param_1[2] = uVar5;
      param_1[3] = uVar7;
      param_1[4] = uVar9;
      param_1[5] = uVar17;
      *puVar13 = uVar5 + 1;
      puVar13[1] = uVar7 + (0xfffffffe < uVar5);
      *param_1 = 2;
      param_1[1] = 0;
      if (uVar11 != 0) {
        puVar8 = puVar14;
        do {
          puVar8[1] = 0;
          *puVar8 = 0xffff;
          puVar8 = puVar8 + 2;
        } while (puVar8 != puVar14 + uVar11 * 2);
      }
      if (iVar10 == 0) {
        return 0;
      }
      iVar15 = param_1[9];
      iVar10 = iVar10 * 0x34 + iVar15;
      uVar1 = *(ushort *)(param_1 + 0xe);
      sVar16 = 0;
      do {
        uVar4 = FUN_014c1c00(param_1,iVar15 + 0x20);
        *(ushort *)(iVar15 + 0x30) = uVar4;
        iVar15 = iVar15 + 0x34;
        uVar7 = 0;
        uVar5 = (uint)(uVar4 & uVar1);
        while( true ) {
          do {
            uVar9 = uVar5;
            uVar5 = 0;
          } while (uVar11 <= uVar9);
          psVar6 = puVar14 + uVar9 * 2;
          if (*psVar6 == -1) {
            *psVar6 = sVar16;
            goto LAB_014c1998;
          }
          if ((uVar9 - (psVar6[1] & uVar1) & (uint)uVar1) < uVar7) break;
          uVar7 = uVar7 + 1;
          uVar5 = uVar9 + 1;
        }
        uVar5 = uVar9;
        sVar12 = sVar16;
        while( true ) {
          do {
            uVar9 = uVar5;
            uVar5 = 0;
          } while (uVar11 <= uVar9);
          psVar6 = puVar14 + uVar9 * 2;
          sVar2 = *psVar6;
          if (sVar2 == -1) break;
          uVar3 = psVar6[1];
          *psVar6 = sVar12;
          psVar6[1] = uVar4;
          uVar5 = uVar9 + 1;
          sVar12 = sVar2;
          uVar4 = uVar3;
        }
        *psVar6 = sVar12;
LAB_014c1998:
        puVar14[uVar9 * 2 + 1] = uVar4;
        sVar16 = sVar16 + 1;
        if (iVar15 == iVar10) {
          return 0;
        }
      } while( true );
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (iVar10 != uVar11 - (uVar11 >> 2)) {
      return 0;
    }
    if (iVar10 == 0) {
      *(undefined2 *)(param_1 + 0xe) = 7;
      local_34 = (undefined4 *)thunk_FUN_016d4a50(0x20);
      if (local_34 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(2,0x20);
      }
      local_34[7] = 0xffff;
      local_34[6] = 0xffff;
      local_34[5] = 0xffff;
      local_34[4] = 0xffff;
      local_34[3] = 0xffff;
      local_34[2] = 0xffff;
      local_34[1] = 0xffff;
      *local_34 = 0xffff;
      local_30 = 8;
      local_38 = 8;
      uVar20 = FUN_00a5ee50(&local_38);
      if (uVar11 != 0) {
        thunk_FUN_016d3fb4(param_1[6]);
      }
      *(undefined8 *)(param_1 + 6) = uVar20;
      iVar10 = thunk_FUN_016d4a50(0x138);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x138);
      }
      iVar15 = param_1[9];
      FUN_0149814c(iVar15,0);
      if (param_1[8] != 0) {
        thunk_FUN_016d3fb4(iVar15);
      }
      param_1[8] = 6;
      param_1[9] = iVar10;
      param_1[10] = 0;
      return 0;
    }
  }
  iVar10 = FUN_014c1fe0(param_1,uVar11 << 1);
  if (iVar10 == 0) {
    return 0;
  }
  return 1;
}

