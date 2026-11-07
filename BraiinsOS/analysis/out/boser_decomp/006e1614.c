// FUN_006e1614 @ 006e1614 size=784 calls_out=7 calls_in=2
// strings: 

void FUN_006e1614(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int local_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = FUN_006e5ac4(param_5);
  if (iVar2 == 0) {
    FUN_006e63d8(param_5,param_2);
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar3 = FUN_006c4c10(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                           *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),param_2);
      uVar1 = uVar3 >> 0x19;
      iVar2 = *(int *)(param_1 + 0x20);
      uVar12 = *(uint *)(param_1 + 0x24);
      local_44 = 0;
      while( true ) {
        uVar3 = uVar12 & uVar3;
        uVar4 = *(uint *)(iVar2 + uVar3);
        uVar5 = uVar4 ^ uVar1 * 0x1010101;
        uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
        while (uVar5 != 0) {
          uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar12
          ;
          iVar7 = FUN_006bcafc(param_2,iVar2 + -0x18 + uVar6 * -0x18);
          uVar5 = uVar5 - 1 & uVar5;
          if (iVar7 != 0) {
            iVar2 = iVar2 + uVar6 * -0x18;
            iVar7 = *(int *)(iVar2 + -4);
            if (iVar7 != 0) {
              puVar11 = *(undefined4 **)(iVar2 + -8);
              puVar10 = puVar11 + iVar7 * 2;
              do {
                uVar8 = *puVar11;
                uVar9 = puVar11[1];
                iVar2 = FUN_006e58b4(param_3,uVar8,uVar9);
                if (iVar2 != 0) {
                  FUN_006e6200(param_4,uVar8,uVar9);
                }
                puVar11 = puVar11 + 2;
              } while (puVar11 != puVar10);
            }
            goto LAB_006e17bc;
          }
        }
        if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
        local_44 = local_44 + 4;
        uVar3 = uVar3 + local_44;
      }
    }
LAB_006e17bc:
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar3 = FUN_006c4c10(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                           *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),param_2);
      uVar1 = uVar3 >> 0x19;
      iVar2 = *(int *)(param_1 + 0x40);
      uVar12 = *(uint *)(param_1 + 0x44);
      local_44 = 0;
      while( true ) {
        uVar3 = uVar12 & uVar3;
        uVar4 = *(uint *)(iVar2 + uVar3);
        uVar5 = uVar4 ^ uVar1 * 0x1010101;
        uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
        while (uVar5 != 0) {
          uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar12
          ;
          iVar7 = FUN_006bcafc(param_2,iVar2 + -0x18 + uVar6 * -0x18);
          uVar5 = uVar5 - 1 & uVar5;
          if (iVar7 != 0) {
            iVar2 = iVar2 + uVar6 * -0x18;
            iVar7 = *(int *)(iVar2 + -4);
            if (iVar7 == 0) {
              return;
            }
            puVar11 = *(undefined4 **)(iVar2 + -8);
            puVar10 = puVar11 + iVar7 * 2;
            do {
              local_2c = *puVar11;
              local_28 = puVar11[1];
              local_30 = 1;
              FUN_006e1614(param_1,&local_30,param_3,param_4,param_5);
              puVar11 = puVar11 + 2;
            } while (puVar11 != puVar10);
            return;
          }
        }
        if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
        local_44 = local_44 + 4;
        uVar3 = uVar3 + local_44;
      }
    }
  }
  return;
}

