// FUN_006d2104 @ 006d2104 size=864 calls_out=7 calls_in=2
// strings: 

void FUN_006d2104(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_006e5ac4(param_5);
  if (iVar1 == 0) {
    FUN_006e63d8(param_5,param_2);
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar2 = FUN_006c4c10(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                           *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),param_2);
      uVar15 = uVar2 >> 0x19;
      iVar1 = *(int *)(param_1 + 0x20);
      uVar13 = *(uint *)(param_1 + 0x24);
      local_34 = 0;
      while( true ) {
        uVar2 = uVar13 & uVar2;
        uVar9 = *(uint *)(iVar1 + uVar2);
        uVar3 = uVar9 ^ uVar15 * 0x1010101;
        uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
        while (uVar3 != 0) {
          uVar6 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar13
          ;
          iVar4 = FUN_006bcafc(param_2,iVar1 + -0x30 + uVar6 * -0x30);
          uVar3 = uVar3 - 1 & uVar3;
          if (iVar4 != 0) {
            iVar1 = iVar1 + uVar6 * -0x30;
            puVar14 = *(uint **)(iVar1 + -0x20);
            iVar1 = *(int *)(iVar1 + -0x14);
            puVar17 = puVar14 + 1;
            uVar15 = ~*puVar14 & 0x80808080;
            while (iVar1 != 0) {
              puVar16 = puVar17;
              if (uVar15 == 0) {
                do {
                  puVar17 = puVar16 + 1;
                  uVar15 = *puVar16;
                  puVar14 = puVar14 + -0x10;
                  puVar16 = puVar17;
                } while ((uVar15 & 0x80808080) == 0x80808080);
                uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
              }
              uVar2 = LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                              (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) & 0x38;
              uVar15 = uVar15 - 1 & uVar15;
              uVar10 = *(undefined4 *)((int)puVar14 + uVar2 * -2 + -0x10);
              uVar7 = *(undefined4 *)((int)puVar14 + uVar2 * -2 + -0xc);
              iVar4 = FUN_006e58b4(param_3,uVar10);
              iVar1 = iVar1 + -1;
              if (iVar4 == 0) {
                uVar8 = *(undefined4 *)((int)puVar14 + uVar2 * -2 + -4);
                uVar12 = *(undefined4 *)((int)puVar14 + uVar2 * -2 + -8);
                iVar4 = param_4[2];
                if (iVar4 == *param_4) {
                  FUN_01aa1b90(param_4);
                }
                param_4[2] = iVar4 + 1;
                puVar5 = (undefined4 *)(param_4[1] + iVar4 * 0x10);
                *puVar5 = uVar10;
                puVar5[3] = uVar8;
                puVar5[1] = uVar7;
                puVar5[2] = uVar12;
              }
            }
            goto LAB_006d2318;
          }
        }
        if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
        local_34 = local_34 + 4;
        uVar2 = uVar2 + local_34;
      }
    }
LAB_006d2318:
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar2 = FUN_006c4c10(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                           *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),param_2);
      uVar15 = uVar2 >> 0x19;
      iVar1 = *(int *)(param_1 + 0x40);
      uVar13 = *(uint *)(param_1 + 0x44);
      local_34 = 0;
      while( true ) {
        uVar2 = uVar13 & uVar2;
        uVar9 = *(uint *)(iVar1 + uVar2);
        uVar3 = uVar9 ^ uVar15 * 0x1010101;
        uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
        while (uVar3 != 0) {
          uVar6 = uVar2 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                         (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar13
          ;
          iVar4 = FUN_006bcafc(param_2,iVar1 + -0x18 + uVar6 * -0x18,param_1);
          uVar3 = uVar3 - 1 & uVar3;
          if (iVar4 != 0) {
            iVar1 = iVar1 + uVar6 * -0x18;
            iVar4 = *(int *)(iVar1 + -4);
            if (iVar4 == 0) {
              return;
            }
            puVar5 = *(undefined4 **)(iVar1 + -8);
            puVar11 = puVar5 + iVar4 * 2;
            do {
              local_2c = *puVar5;
              local_28 = puVar5[1];
              local_30 = 1;
              FUN_006d2104(param_1,&local_30,param_3,param_4,param_5);
              puVar5 = puVar5 + 2;
            } while (puVar5 != puVar11);
            return;
          }
        }
        if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) break;
        local_34 = local_34 + 4;
        uVar2 = uVar2 + local_34;
      }
    }
  }
  return;
}

