// FUN_013435fc @ 013435fc size=992 calls_out=6 calls_in=1
// strings: 

uint FUN_013435fc(int *param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *local_50;
  uint **local_4c;
  uint *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  
  local_4c = &local_50;
  uVar8 = param_1[3] + 1;
  local_50 = param_2;
  if (0xfffffffe < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar5 = param_1[1];
  if (7 < uVar5) {
    uVar5 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
  }
  if (uVar5 >> 1 < uVar8) {
    if (uVar8 < uVar5 + 1) {
      uVar8 = uVar5 + 1;
    }
    FUN_013403c0(&local_48,0x38,uVar8);
    uVar8 = local_44;
    puVar4 = local_48;
    if (local_48 != (uint *)0x0) {
      iVar13 = param_1[3];
      if (iVar13 == 0) {
        iVar13 = 0;
      }
      else {
        puVar12 = (uint *)*param_1;
        iVar16 = 0;
        uVar5 = ~*puVar12 & 0x80808080;
        do {
          if (uVar5 == 0) {
            do {
              puVar12 = puVar12 + 1;
              iVar16 = iVar16 + 4;
            } while ((*puVar12 & 0x80808080) == 0x80808080);
            uVar5 = *puVar12 & 0x80808080 ^ 0x80808080;
          }
          local_30 = *local_50;
          local_38 = local_50[2];
          uStack_34 = local_50[3];
          local_48 = (uint *)local_50[4];
          local_2c = local_50[1];
          uVar9 = iVar16 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
          local_44 = local_50[5];
          iVar14 = *param_1 + uVar9 * -0x38;
          local_3c = local_50[7];
          FUN_01352290(&local_48,*(undefined4 *)(iVar14 + -0x34),*(undefined4 *)(iVar14 + -0x30));
          FUN_01352290(&local_48,*(undefined4 *)(iVar14 + -0x28),*(undefined4 *)(iVar14 + -0x24));
          uVar6 = local_38 ^ *(byte *)(iVar14 + -4);
          uVar15 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                   (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar2 = (ulonglong)uVar15 * 0xb36a80d2;
          uVar11 = (uint)lVar2;
          uVar7 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                  uVar11 >> 0x18) ^
                  uStack_34 * 0x2df45158 +
                  uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20);
          uVar10 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
                   uVar7 >> 0x18;
          lVar3 = (ulonglong)~local_30 * (ulonglong)uVar10;
          uVar17 = (uint)lVar3;
          uVar11 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8
                   | local_38 >> 0x18) * -0x4c957f2e +
                   uVar15 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
          uVar15 = (uVar11 * 0x1000000 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8
                   | uVar11 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
          uVar6 = (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                  uVar15 >> 0x18) * ~local_30 + uVar10 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20)
          ;
          uVar11 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                   (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18;
          lVar2 = (ulonglong)uVar11 * (ulonglong)uVar15;
          uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
                  uVar6 >> 0x18) ^ (uint)lVar2;
          uVar7 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
                  uVar17 >> 0x18) ^
                  uVar7 * uVar11 +
                  uVar15 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                            (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
                  (int)((ulonglong)lVar2 >> 0x20);
          uVar11 = uVar7;
          if ((uVar15 & 0x20) != 0) {
            uVar11 = uVar6;
            uVar6 = uVar7;
          }
          uVar6 = uVar6 << (uVar15 & 0x1f) | (uVar11 >> 1) >> (~uVar15 & 0x1f);
          uVar11 = uVar8 & uVar6;
          uVar15 = *(uint *)((int)puVar4 + uVar11) & 0x80808080;
          if (uVar15 == 0) {
            iVar14 = 4;
            do {
              uVar11 = uVar11 + iVar14;
              iVar14 = iVar14 + 4;
              uVar11 = uVar11 & uVar8;
              uVar15 = *(uint *)((int)puVar4 + uVar11) & 0x80808080;
            } while (uVar15 == 0);
          }
          uVar11 = uVar11 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) &
                   uVar8;
          if (-1 < *(char *)((int)puVar4 + uVar11)) {
            uVar11 = *puVar4 & 0x80808080;
            uVar11 = (uint)LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                   (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
          }
          uVar5 = uVar5 - 1 & uVar5;
          bVar1 = (byte)(uVar6 >> 0x19);
          *(byte *)((int)puVar4 + uVar11) = bVar1;
          iVar13 = iVar13 + -1;
          *(byte *)((int)puVar4 + (uVar11 - 4 & uVar8) + 4) = bVar1;
          FUN_016dd1aa(puVar4 + ~uVar11 * 0xe,*param_1 + ~uVar9 * 0x38,0x38);
        } while (iVar13 != 0);
        iVar13 = param_1[3];
      }
      iVar16 = *param_1;
      iVar14 = param_1[1];
      *param_1 = (int)puVar4;
      param_1[1] = uVar8;
      uVar8 = 0x80000001;
      param_1[2] = local_40 - iVar13;
      param_1[3] = iVar13;
      if ((iVar14 != 0) && (iVar13 = iVar14 * 0x38 + 0x38, iVar14 + iVar13 != -5)) {
        thunk_FUN_016d3fb4(iVar16 - iVar13);
        return 0x80000001;
      }
    }
  }
  else {
    FUN_01340508(param_1,&local_4c,FUN_013439ec,0x38,FUN_01343b40);
    uVar8 = 0x80000001;
  }
  return uVar8;
}

