// FUN_01577c50 @ 01577c50 size=1656 calls_out=8 calls_in=0
// strings: 

byte FUN_01577c50(int *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  int local_78;
  uint local_70;
  int local_6c;
  uint *local_64;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar14 = *param_1;
  puVar12 = (uint *)(param_3 + 4);
  bVar1 = *param_2;
  pbVar15 = (byte *)(iVar14 + 8);
  if ((bVar1 & 6) == 4) {
    iVar5 = *param_3;
    pbVar7 = param_2;
    if (iVar5 != 0) {
      pbVar7 = (byte *)param_3[3];
    }
    if (iVar5 != 0 && pbVar7 != (byte *)0x0) {
      uVar18 = param_3[7];
      uVar16 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
               uVar18 >> 0x18;
      uVar9 = param_3[5];
      lVar2 = (ulonglong)uVar16 * 0xb36a80d2;
      uVar20 = (uint)lVar2;
      uVar11 = param_3[6] ^ (uint)pbVar15;
      uVar19 = *puVar12;
      uVar16 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) * -0x4c957f2e +
               uVar16 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar16 = (uint)((ulonglong)uVar11 * 0x2df45158) ^ (uint)param_2 ^
               (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18);
      uVar10 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18;
      uVar18 = uVar18 * 0x2df45158 +
               uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20) ^
               (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18);
      uVar11 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
               uVar18 >> 0x18;
      lVar2 = (ulonglong)uVar11 * 0xb36a80d2;
      uVar20 = (uint)lVar2;
      uVar11 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) * -0x4c957f2e +
               uVar11 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
      uVar20 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18) ^
               uVar18 * 0x2df45158 +
               uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20);
      uVar18 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) ^ (uint)((ulonglong)uVar16 * 0x2df45158);
      lVar2 = (ulonglong)uVar10 * (ulonglong)uVar18;
      uVar16 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
               uVar20 >> 0x18;
      lVar3 = (ulonglong)~uVar19 * (ulonglong)uVar16;
      uVar11 = (uint)lVar3;
      uVar16 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
               uVar18 >> 0x18) * ~uVar19 + uVar16 * ~uVar9 + (int)((ulonglong)lVar3 >> 0x20);
      uVar20 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18) ^
               uVar20 * uVar10 +
               uVar18 * (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 |
                         (uVar19 >> 0x10 & 0xff) << 8 | uVar19 >> 0x18) +
               (int)((ulonglong)lVar2 >> 0x20);
      uVar16 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
               uVar16 >> 0x18) ^ (uint)lVar2;
      uVar11 = uVar20;
      if ((uVar18 & 0x20) != 0) {
        uVar11 = uVar16;
        uVar16 = uVar20;
      }
      uVar11 = uVar16 << (uVar18 & 0x1f) | (uVar11 >> 1) >> (~uVar18 & 0x1f);
      uVar16 = uVar11 >> 0x19;
      local_78 = 0;
      while( true ) {
        uVar11 = param_3[1] & uVar11;
        uVar20 = *(uint *)(iVar5 + uVar11);
        uVar18 = uVar20 ^ uVar16 * 0x1010101;
        uVar18 = ~uVar18 & 0x80808080 & uVar18 + 0xfefefeff;
        while (uVar18 != 0) {
          uVar9 = uVar11 + ((uint)LZCOUNT(uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 |
                                          (uVar18 >> 0x10 & 0xff) << 8 | uVar18 >> 0x18) >> 3) &
                  param_3[1];
          pbVar7 = (byte *)(uVar18 - 1);
          uVar18 = (uint)pbVar7 & uVar18;
          puVar8 = (undefined4 *)(iVar5 + -0xc + uVar9 * -0xc);
          bVar21 = (byte *)*puVar8 == pbVar15;
          if (bVar21) {
            pbVar7 = (byte *)puVar8[1];
          }
          if (bVar21 && pbVar7 == param_2) {
            bVar4 = *(byte *)(iVar5 + uVar9 * -0xc + -4);
            goto LAB_01578200;
          }
        }
        local_70 = 4;
        if ((uVar20 & 0x80808080 & uVar20 << 1) != 0) break;
        local_78 = local_78 + 4;
        uVar11 = uVar11 + local_78;
      }
    }
  }
  iVar17 = param_3[0x1a];
  iVar5 = param_3[0x19];
  if (iVar17 != 0) {
    puVar8 = (undefined4 *)(iVar5 + 4);
    iVar6 = iVar17 << 3;
    do {
      pbVar7 = (byte *)puVar8[-1];
      bVar21 = pbVar7 == pbVar15;
      if (bVar21) {
        pbVar7 = (byte *)*puVar8;
      }
      if (bVar21 && pbVar7 == param_2) {
        bVar4 = 1;
        goto LAB_01578200;
      }
      puVar8 = puVar8 + 2;
      iVar6 = iVar6 + -8;
    } while (iVar6 != 0);
  }
  if (iVar17 == param_3[0x18]) {
    FUN_015f5ab8();
    iVar5 = param_3[0x19];
  }
  puVar8 = (undefined4 *)(iVar5 + iVar17 * 8);
  *puVar8 = pbVar15;
  puVar8[1] = param_2;
  param_3[0x1a] = iVar17 + 1;
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar14 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_004a67d5,0x2b,&DAT_01cfbf10);
  }
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar14 + 0x20) != 0) {
    FUN_01551bbc(iVar14 + 0x20,iVar14 + 0xc);
  }
  bVar4 = FUN_01577618(iVar14 + 0x24,param_2,param_3);
  if (param_3[0x1a] != 0) {
    param_3[0x1a] = param_3[0x1a] + -1;
  }
  if ((bVar1 & 6) == 4) {
    local_64 = (uint *)*param_3;
    if (local_64 == (uint *)0x0) {
      puVar8 = (undefined4 *)FUN_01671160();
      uVar13 = *puVar8;
      iVar14 = puVar8[1];
      puVar8 = (undefined4 *)FUN_01671044();
      uVar13 = (**(code **)(iVar14 + 0xc))(uVar13);
      FUN_00653054(&iStack_48,puVar8[2],*puVar8,puVar8[1],puVar8[2],puVar8[3],puVar8 + 8,uVar13);
      *param_3 = (int)&DAT_0056d238;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = iStack_48;
      param_3[5] = iStack_44;
      param_3[6] = local_40;
      param_3[7] = iStack_3c;
      param_3[8] = iStack_38;
      param_3[9] = iStack_34;
      param_3[10] = iStack_30;
      param_3[0xb] = iStack_2c;
      local_64 = (uint *)*param_3;
    }
    uVar9 = param_3[5];
    uVar18 = param_3[7];
    uVar16 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18;
    lVar2 = (ulonglong)uVar16 * 0xb36a80d2;
    uVar20 = (uint)lVar2;
    uVar11 = param_3[6] ^ (uint)pbVar15;
    uVar16 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
             uVar11 >> 0x18) * -0x4c957f2e + uVar16 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar19 = *puVar12;
    uVar16 = (uint)((ulonglong)uVar11 * 0x2df45158) ^ (uint)param_2 ^
             (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
             uVar16 >> 0x18);
    uVar10 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
             uVar9 >> 0x18;
    uVar18 = uVar18 * 0x2df45158 +
             uVar11 * 0x2d7f954c + (int)((ulonglong)uVar11 * 0x2df45158 >> 0x20) ^
             (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18);
    uVar11 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18;
    lVar2 = (ulonglong)uVar11 * 0xb36a80d2;
    uVar20 = (uint)lVar2;
    uVar11 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
             uVar16 >> 0x18) * -0x4c957f2e + uVar11 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
    uVar20 = (uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18) ^
             uVar18 * 0x2df45158 +
             uVar16 * 0x2d7f954c + (int)((ulonglong)uVar16 * 0x2df45158 >> 0x20);
    uVar18 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
             uVar11 >> 0x18) ^ (uint)((ulonglong)uVar16 * 0x2df45158);
    lVar2 = (ulonglong)uVar10 * (ulonglong)uVar18;
    uVar16 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
             uVar20 >> 0x18;
    lVar3 = (ulonglong)~uVar19 * (ulonglong)uVar16;
    uVar11 = (uint)lVar3;
    uVar16 = (uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
             uVar18 >> 0x18) * ~uVar19 + uVar16 * ~uVar9 + (int)((ulonglong)lVar3 >> 0x20);
    uVar20 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
             uVar11 >> 0x18) ^
             uVar20 * uVar10 +
             uVar18 * (uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8
                      | uVar19 >> 0x18) + (int)((ulonglong)lVar2 >> 0x20);
    uVar16 = (uVar16 * 0x1000000 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
             uVar16 >> 0x18) ^ (uint)lVar2;
    uVar11 = uVar20;
    if ((uVar18 & 0x20) != 0) {
      uVar11 = uVar16;
      uVar16 = uVar20;
    }
    uVar16 = uVar16 << (uVar18 & 0x1f) | (uVar11 >> 1) >> (~uVar18 & 0x1f);
    if (param_3[2] == 0) {
      FUN_0152c7c4(param_3,puVar12);
      local_64 = (uint *)*param_3;
    }
    uVar18 = param_3[1];
    bVar21 = false;
    local_6c = 0;
    uVar11 = uVar16;
    do {
      uVar11 = uVar18 & uVar11;
      uVar9 = *(uint *)((int)local_64 + uVar11);
      uVar20 = uVar9 ^ (uVar16 >> 0x19) * 0x1010101;
      uVar20 = ~uVar20 & 0x80808080 & uVar20 + 0xfefefeff;
      while (uVar20 != 0) {
        uVar10 = uVar11 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                         (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                 uVar18;
        uVar20 = uVar20 - 1 & uVar20;
        pbVar7 = pbVar15;
        if ((byte *)local_64[uVar10 * -3 + -3] == pbVar15) {
          pbVar7 = (byte *)local_64[uVar10 * -3 + -2];
        }
        if ((byte *)local_64[uVar10 * -3 + -3] == pbVar15 && pbVar7 == param_2) {
          *(byte *)(local_64 + uVar10 * -3 + -1) = bVar4;
          goto LAB_01578200;
        }
      }
      uVar20 = uVar9 & 0x80808080;
      if (bVar21) {
LAB_01577fb0:
        if ((uVar20 & uVar9 << 1) != 0) goto LAB_0157820c;
        bVar21 = true;
      }
      else {
        if (uVar20 != 0) {
          local_70 = uVar11 + ((uint)LZCOUNT(uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                                             (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18) >> 3) &
                     uVar18;
          goto LAB_01577fb0;
        }
        bVar21 = false;
      }
      local_6c = local_6c + 4;
      uVar11 = local_6c + uVar11;
    } while( true );
  }
LAB_01578200:
  return bVar4 & 1;
LAB_0157820c:
  uVar11 = (uint)*(char *)((int)local_64 + local_70);
  if (-1 < (int)uVar11) {
    uVar11 = *local_64 & 0x80808080;
    uVar20 = LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                     uVar11 >> 0x18);
    uVar11 = (uint)*(byte *)((int)local_64 + (uVar20 >> 3));
    local_70 = uVar20 >> 3;
  }
  iVar14 = param_3[3];
  param_3[2] = param_3[2] - (uVar11 & 1);
  bVar1 = (byte)(uVar16 >> 0x19);
  *(byte *)((int)local_64 + local_70) = bVar1;
  param_3[3] = iVar14 + 1;
  *(byte *)((int)local_64 + (uVar18 & local_70 - 4) + 4) = bVar1;
  local_64[local_70 * -3 + -3] = (uint)pbVar15;
  *(byte *)(local_64 + local_70 * -3 + -1) = bVar4;
  local_64[local_70 * -3 + -2] = (uint)param_2;
  goto LAB_01578200;
}

