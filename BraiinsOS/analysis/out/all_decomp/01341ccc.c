// FUN_01341ccc @ 01341ccc size=868 calls_out=6 calls_in=2
// strings: 

uint FUN_01341ccc(int *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *local_50;
  uint **local_4c;
  uint *local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  
  local_4c = &local_50;
  uVar6 = param_1[3] + param_2;
  local_50 = param_3;
  if (CARRY4(param_1[3],param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
  }
  uVar5 = param_1[1];
  if (7 < uVar5) {
    uVar5 = (uVar5 + 1 & 0xfffffff8) - (uVar5 + 1 >> 3);
  }
  if (uVar5 >> 1 < uVar6) {
    if (uVar6 < uVar5 + 1) {
      uVar6 = uVar5 + 1;
    }
    FUN_013403c0(&local_48,0x20,uVar6);
    uVar6 = local_44;
    puVar4 = local_48;
    if (local_48 != (uint *)0x0) {
      iVar10 = param_1[3];
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        puVar9 = (uint *)*param_1;
        iVar13 = 0;
        uVar5 = ~*puVar9 & 0x80808080;
        do {
          if (uVar5 == 0) {
            do {
              puVar9 = puVar9 + 1;
              iVar13 = iVar13 + 4;
            } while ((*puVar9 & 0x80808080) == 0x80808080);
            uVar5 = *puVar9 & 0x80808080 ^ 0x80808080;
          }
          local_30 = *local_50;
          local_38 = local_50[2];
          uStack_34 = local_50[3];
          local_48 = (uint *)local_50[4];
          uStack_2c = local_50[1];
          uVar7 = iVar13 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3);
          local_44 = local_50[5];
          iVar14 = *param_1 + uVar7 * -0x20;
          local_3c = local_50[7];
          FUN_01352290(&local_48,*(undefined4 *)(*(int *)(iVar14 + -0x20) + 0xc),
                       *(undefined4 *)(*(int *)(iVar14 + -0x20) + 0x10));
          FUN_01352290(&local_48,*(undefined4 *)(iVar14 + -0x1c),*(undefined4 *)(iVar14 + -0x18));
          uVar12 = uStack_2c << 0x18 | (uStack_2c >> 8 & 0xff) << 0x10 |
                   (uStack_2c >> 0x10 & 0xff) << 8 | uStack_2c >> 0x18;
          lVar2 = (ulonglong)local_38 * (ulonglong)uVar12;
          uVar8 = uStack_34 << 0x18 | (uStack_34 >> 8 & 0xff) << 0x10 |
                  (uStack_34 >> 0x10 & 0xff) << 8 | uStack_34 >> 0x18;
          lVar3 = (ulonglong)~local_30 * (ulonglong)uVar8;
          uVar11 = (uint)lVar3;
          uVar8 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 |
                   (local_38 >> 0x10 & 0xff) << 8 | local_38 >> 0x18) * ~local_30 +
                  uVar8 * ~uStack_2c + (int)((ulonglong)lVar3 >> 0x20);
          uVar12 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                    (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) * local_38 +
                   uVar12 * uStack_34 + (int)((ulonglong)lVar2 >> 0x20) ^
                   (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
                   uVar11 >> 0x18);
          uVar8 = (uint)lVar2 ^
                  (uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
                  uVar8 >> 0x18);
          uVar11 = uVar12;
          if ((local_38 & 0x20) != 0) {
            uVar11 = uVar8;
            uVar8 = uVar12;
          }
          uVar8 = uVar8 << (local_38 & 0x1f) | (uVar11 >> 1) >> (~local_38 & 0x1f);
          uVar11 = uVar6 & uVar8;
          uVar12 = *(uint *)((int)puVar4 + uVar11) & 0x80808080;
          if (uVar12 == 0) {
            iVar14 = 4;
            do {
              uVar11 = uVar11 + iVar14;
              iVar14 = iVar14 + 4;
              uVar11 = uVar11 & uVar6;
              uVar12 = *(uint *)((int)puVar4 + uVar11) & 0x80808080;
            } while (uVar12 == 0);
          }
          uVar11 = uVar11 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar6;
          if (-1 < *(char *)((int)puVar4 + uVar11)) {
            uVar11 = *puVar4 & 0x80808080;
            uVar11 = (uint)LZCOUNT((*puVar4 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                   (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
          }
          uVar5 = uVar5 - 1 & uVar5;
          bVar1 = (byte)(uVar8 >> 0x19);
          *(byte *)((int)puVar4 + uVar11) = bVar1;
          iVar10 = iVar10 + -1;
          *(byte *)((int)puVar4 + (uVar11 - 4 & uVar6) + 4) = bVar1;
          FUN_016dd1aa(puVar4 + ~uVar11 * 8,*param_1 + ~uVar7 * 0x20,0x20);
        } while (iVar10 != 0);
        iVar10 = param_1[3];
      }
      iVar13 = *param_1;
      iVar14 = param_1[1];
      *param_1 = (int)puVar4;
      param_1[1] = uVar6;
      uVar6 = 0x80000001;
      param_1[2] = local_40 - iVar10;
      param_1[3] = iVar10;
      if ((iVar14 != 0) && (iVar10 = iVar14 * 0x20 + 0x20, iVar14 + iVar10 != -5)) {
        thunk_FUN_016d3fb4(iVar13 - iVar10);
        return 0x80000001;
      }
    }
  }
  else {
    FUN_01340508(param_1,&local_4c,FUN_01342040,0x20,&LAB_01342140);
    uVar6 = 0x80000001;
  }
  return uVar6;
}

