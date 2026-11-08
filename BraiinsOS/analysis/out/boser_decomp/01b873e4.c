// FUN_01b873e4 @ 01b873e4 size=520 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b873e4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint *puVar3;
  uint *puVar2;
  int extraout_r3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = *(int *)(param_1 + 4);
  if (0xa0000000 < (uint)(param_5 - iVar11)) {
    uVar5 = *(uint *)(param_3 + 8);
    uVar8 = param_4 - iVar11;
    if (5 < *(uint *)(param_3 + 0x1c)) {
      uVar5 = uVar5 - 1;
    }
    uVar9 = 1 << (*(uint *)(param_3 + 4) & 0xff);
    uVar5 = 1 << (uVar5 & 0xff);
    uVar6 = uVar5 - 1 & uVar8;
    if (uVar6 < 2) {
      uVar4 = uVar5;
      if (uVar5 < 2) {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 0;
    }
    if (uVar9 < uVar5) {
      uVar9 = uVar5;
    }
    iVar7 = uVar6 + uVar9 + uVar4;
    uVar5 = uVar8 - iVar7;
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar5;
    uVar9 = uVar5 + 2;
    *(uint *)(param_1 + 4) = iVar11 + uVar5;
    if (*(uint *)(param_1 + 0x10) < uVar9) {
      iVar11 = 2;
    }
    else {
      iVar11 = (*(uint *)(param_1 + 0x10) - uVar8) + iVar7;
    }
    *(int *)(param_1 + 0x10) = iVar11;
    if (*(uint *)(param_1 + 0xc) < uVar9) {
      iVar11 = 2;
    }
    else {
      iVar11 = (*(uint *)(param_1 + 0xc) - uVar8) + iVar7;
    }
    *(int *)(param_1 + 0xc) = iVar11;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar6 = *(uint *)(param_2 + 8);
    *(uint *)(param_2 + 0x10) = uVar6;
    FUN_01b85270(*(undefined4 *)(param_1 + 0x5c),1 << (*(uint *)(param_3 + 0xc) & 0xff),uVar5);
    iVar11 = FUN_01b85214(*(undefined4 *)(param_3 + 0x1c),*(undefined4 *)(param_3 + 0x84),
                          *(undefined4 *)(param_1 + 0x6c));
    if (iVar11 != 0) {
      iVar11 = 1 << (*(uint *)(param_3 + 8) & 0xff);
      if (extraout_r3 == 6) {
        if (iVar11 < 0) {
          iVar11 = iVar11 + 0xf;
        }
        puVar1 = *(uint **)(param_1 + 100);
        for (iVar10 = 0; iVar10 < iVar11 >> 4; iVar10 = iVar10 + 1) {
          puVar2 = puVar1;
          do {
            puVar3 = puVar2 + 1;
            uVar4 = *puVar2;
            if (uVar4 != 1) {
              if (uVar4 < uVar9) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (iVar7 - uVar8);
              }
            }
            *puVar2 = uVar4;
            puVar2 = puVar3;
          } while (puVar3 != puVar1 + 0x10);
          puVar1 = puVar1 + 0x10;
        }
      }
      else {
        FUN_01b85270(*(uint **)(param_1 + 100),iVar11,uVar5);
      }
    }
    if (*(uint *)(param_1 + 0x20) != 0) {
      FUN_01b85270(*(undefined4 *)(param_1 + 0x60),1 << (*(uint *)(param_1 + 0x20) & 0xff),uVar5);
    }
    if (uVar6 < *(uint *)(param_2 + 0xc)) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0xc);
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    if (*(uint *)(param_1 + 0x1c) < uVar5) {
      iVar7 = 0;
    }
    else {
      iVar7 = (*(uint *)(param_1 + 0x1c) - uVar8) + iVar7;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = iVar7;
  }
  return 0;
}

