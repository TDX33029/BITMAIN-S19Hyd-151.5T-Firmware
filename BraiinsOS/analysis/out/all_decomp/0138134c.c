// FUN_0138134c @ 0138134c size=372 calls_out=2 calls_in=2
// strings: 

int FUN_0138134c(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  
  if (7 < param_4) {
    uVar12 = param_4 >> 3;
    iVar9 = uVar12 * 8 - (param_4 >> 3);
    param_1 = FUN_0138134c(param_1,param_1 + uVar12 * 0x40,param_1 + iVar9 * 0x10,uVar12);
    param_2 = FUN_0138134c(param_2,param_2 + uVar12 * 0x40,param_2 + iVar9 * 0x10,uVar12);
    param_3 = FUN_0138134c(param_3,param_3 + uVar12 * 0x40,param_3 + iVar9 * 0x10,uVar12);
  }
  uVar13 = *(uint *)(param_2 + 8);
  uVar11 = *(undefined4 *)(param_1 + 4);
  uVar10 = *(uint *)(param_1 + 8);
  uVar6 = *(undefined4 *)(param_2 + 4);
  uVar12 = uVar13;
  if (uVar10 < uVar13) {
    uVar12 = uVar10;
  }
  iVar9 = FUN_016dd50a(uVar11,uVar6,uVar12);
  bVar1 = *(byte *)(param_2 + 0xc);
  bVar2 = *(byte *)(param_1 + 0xc);
  if (iVar9 == 0) {
    iVar9 = uVar10 - uVar13;
  }
  uVar12 = *(uint *)(param_3 + 8);
  bVar4 = -1 < iVar9;
  if (iVar9 == 0) {
    bVar4 = bVar1 <= bVar2;
  }
  uVar7 = *(undefined4 *)(param_3 + 4);
  uVar8 = uVar12;
  if (uVar10 < uVar12) {
    uVar8 = uVar10;
  }
  iVar9 = FUN_016dd50a(uVar11,uVar7,uVar8);
  if (iVar9 == 0) {
    iVar9 = uVar10 - uVar12;
  }
  bVar3 = *(byte *)(param_3 + 0xc);
  bVar5 = -1 < iVar9;
  if (iVar9 == 0) {
    bVar5 = bVar3 <= bVar2;
  }
  if (!bVar4 == !bVar5) {
    uVar10 = uVar12;
    if (uVar13 < uVar12) {
      uVar10 = uVar13;
    }
    iVar9 = FUN_016dd50a(uVar6,uVar7,uVar10);
    if (iVar9 == 0) {
      iVar9 = uVar13 - uVar12;
    }
    bVar5 = -1 < iVar9;
    if (iVar9 == 0) {
      bVar5 = bVar3 <= bVar1;
    }
    param_1 = param_2;
    if (!bVar4 != !bVar5) {
      param_1 = param_3;
    }
  }
  return param_1;
}

