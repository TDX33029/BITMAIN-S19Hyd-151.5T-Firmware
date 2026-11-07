// FUN_01b3787c @ 01b3787c size=256 calls_out=2 calls_in=1
// strings: 

uint FUN_01b3787c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  
  iVar10 = param_1[1];
  uVar9 = 0;
  uVar8 = 0;
  for (iVar7 = 0; iVar7 < iVar10; iVar7 = iVar7 + 1) {
    uVar1 = FUN_01b0c688(*(undefined4 *)(*param_1 + iVar7 * 4));
    uVar11 = uVar1 | uVar9;
    uVar9 = uVar9 | ~uVar1;
    uVar1 = FUN_01b0c688(extraout_r2 << 0x10,extraout_r2 >> 0x10);
    uVar2 = FUN_01b0c6a4();
    uVar2 = FUN_01b0c688(uVar2 << 0x18,uVar2 >> 8);
    uVar3 = FUN_01b0c6a4();
    uVar3 = FUN_01b0c688(uVar3 << 0x1c,uVar3 >> 4);
    uVar12 = FUN_01b0c6a4();
    uVar4 = FUN_01b0c688((int)uVar12 << 0x1e,(int)((ulonglong)uVar12 >> 0x20),(int)uVar12);
    iVar5 = FUN_01b0c6a4(uVar4,extraout_r2_00 >> 2);
    uVar6 = FUN_01b0c688(iVar5 << 0x1f);
    uVar8 = uVar8 | (uVar6 & 1) + (uVar1 & 0x10 | uVar2 & 8) + (uVar3 & 4 | uVar4 & 2) +
                    iVar7 * 0x20 & ~uVar11;
  }
  return uVar8;
}

