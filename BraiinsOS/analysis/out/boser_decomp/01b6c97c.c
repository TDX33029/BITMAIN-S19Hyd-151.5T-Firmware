// FUN_01b6c97c @ 01b6c97c size=1480 calls_out=9 calls_in=1
// strings: 

undefined8 FUN_01b6c97c(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint local_38;
  int local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b6c23c();
  if ((DAT_01d532f0 & 1) == 0) {
    if (*(int *)(iVar1 + 0x48) != 0) {
      FUN_01b6c374(iVar1,iVar1 + 0x38);
    }
    uVar4 = *(int *)(iVar1 + 0x28) + (*(uint *)(iVar1 + 0x24) >> 0x1a);
    uVar6 = uVar4 & 0x3ffffff;
    uVar4 = *(int *)(iVar1 + 0x2c) + (uVar4 >> 0x1a);
    uVar8 = uVar4 & 0x3ffffff;
    uVar4 = *(int *)(iVar1 + 0x30) + (uVar4 >> 0x1a);
    uVar3 = uVar4 & 0x3ffffff;
    uVar14 = *(int *)(iVar1 + 0x34) + (uVar4 >> 0x1a);
    uVar9 = (uVar14 >> 0x1a) * 5 + (*(uint *)(iVar1 + 0x24) & 0x3ffffff);
    uVar2 = uVar9 + 5;
    uVar10 = uVar6 + (uVar2 >> 0x1a);
    uVar5 = uVar8 + (uVar10 >> 0x1a);
    uVar13 = uVar3 + (uVar5 >> 0x1a);
    uVar12 = (uVar14 | 0xfc000000) + (uVar13 >> 0x1a);
    uVar4 = (int)uVar12 >> 0x1f;
    uVar11 = 0xffffffff - uVar4;
    uVar10 = uVar10 & uVar11 & 0x3ffffff | uVar6 & uVar4;
    uVar2 = uVar2 & uVar11 & 0x3ffffff | uVar9 & uVar4;
    uVar5 = uVar5 & uVar11 & 0x3ffffff | uVar8 & uVar4;
    uVar9 = uVar13 & uVar11 & 0x3ffffff | uVar3 & uVar4;
    uVar3 = uVar14 & 0x3ffffff & uVar4 | uVar12 & uVar11;
    uVar8 = uVar2 | uVar10 << 0x1a;
    *(uint *)(iVar1 + 0x24) = uVar2;
    *(uint *)(iVar1 + 0x28) = uVar10;
    *(uint *)(iVar1 + 0x2c) = uVar5;
    *(uint *)(iVar1 + 0x30) = uVar9;
    *(uint *)(iVar1 + 0x34) = uVar3;
    uVar14 = FUN_01b6c2dc(iVar1 + 0x4c);
    uVar10 = uVar5 << 0x14 | uVar10 >> 6;
    uVar4 = (uint)CARRY4(uVar8,uVar14);
    uVar12 = FUN_01b6c2dc(iVar1 + 0x50);
    uVar6 = uVar10 + uVar12;
    uVar13 = FUN_01b6c2dc(iVar1 + 0x54);
    uVar2 = uVar9 << 0xe | uVar5 >> 0xc;
    uVar5 = uVar2 + uVar13;
    iVar1 = FUN_01b6c2dc(iVar1 + 0x58);
    local_30 = uVar8 + uVar14;
    FUN_01b6c2a0(param_2,&local_30,4);
    local_30 = uVar4 + uVar6;
    uVar4 = (uint)CARRY4(uVar10,uVar12) + (uint)CARRY4(uVar4,uVar6);
    FUN_01b6c2a0(param_2 + 4,&local_30);
    local_30 = uVar4 + uVar5;
    FUN_01b6c2a0(param_2 + 8,&local_30,4);
    local_30 = (uint)CARRY4(uVar2,uVar13) + (uint)CARRY4(uVar4,uVar5) +
               (uVar3 << 8 | uVar9 >> 0x12) + iVar1;
    FUN_01b6c2a0(param_2 + 0xc,&local_30,4);
    if (local_2c == DAT_01d53560) {
      return 0;
    }
LAB_01b6c9fc:
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  if (local_2c != DAT_01d53560) goto LAB_01b6c9fc;
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b6cc24();
  iVar7 = iVar1 + 0x60;
  FUN_01b717d8(iVar1 + 0x30,iVar1 + 0x30,iVar1 + 0x90,&DAT_00561850);
  if (*(uint *)(iVar1 + 400) < 0x11) {
    if (*(uint *)(iVar1 + 400) == 0) goto LAB_01b6d2b4;
    FUN_01b6cd5c(iVar7,iVar1 + 0x170);
    *(undefined4 *)(iVar1 + 4) = 1;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    iVar15 = iVar1;
  }
  else {
    FUN_01b6cd5c(iVar7,iVar1 + 0x170);
    *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0xb4) = *(undefined4 *)(iVar1 + 0x24);
    iVar15 = iVar1 + 0x90;
  }
  FUN_01b717d8(iVar1 + 0x30,iVar1 + 0x30,iVar15,iVar7);
LAB_01b6d2b4:
  iVar15 = 3;
  uVar4 = *(int *)(iVar1 + 0x30) + *(int *)(iVar1 + 0x34);
  uVar14 = *(int *)(iVar1 + 0x38) + *(int *)(iVar1 + 0x3c);
  local_38 = *(int *)(iVar1 + 0x40) + *(int *)(iVar1 + 0x44);
  uVar12 = *(int *)(iVar1 + 0x48) + *(int *)(iVar1 + 0x4c);
  uVar13 = *(int *)(iVar1 + 0x50) + *(int *)(iVar1 + 0x54);
  do {
    uVar8 = uVar14 + (uVar4 >> 0x1a);
    uVar14 = uVar8 & 0x3ffffff;
    iVar15 = iVar15 + -1;
    uVar2 = local_38 + (uVar8 >> 0x1a);
    local_38 = uVar2 & 0x3ffffff;
    uVar3 = uVar12 + (uVar2 >> 0x1a);
    uVar12 = uVar3 & 0x3ffffff;
    uVar5 = uVar13 + (uVar3 >> 0x1a);
    uVar13 = uVar5 & 0x3ffffff;
    uVar4 = (uVar5 >> 0x1a) * 5 + (uVar4 & 0x3ffffff);
  } while (iVar15 != 0);
  uVar9 = uVar14 + (uVar4 + 5 >> 0x1a);
  uVar16 = (uVar2 & 0x3ffffff) + (uVar9 >> 0x1a);
  uVar11 = uVar12 + (uVar16 >> 0x1a);
  uVar17 = uVar13 + (uVar11 >> 0x1a);
  uVar10 = uVar17 >> 0x1a;
  uVar6 = uVar17;
  if (uVar10 == 0) {
    uVar6 = uVar4;
  }
  uVar14 = ((uVar8 ^ uVar9) & 0x3ffffff) * uVar10 ^ uVar14;
  local_38 = local_38 ^ ((uVar2 ^ uVar16) & 0x3ffffff) * uVar10;
  uVar13 = uVar13 ^ ((uVar5 ^ uVar17) & 0x3ffffff) * uVar10;
  if (uVar10 != 0) {
    uVar6 = uVar4 + 5 & 0x3ffffff;
  }
  uVar12 = uVar12 ^ ((uVar3 ^ uVar11) & 0x3ffffff) * uVar10;
  *(uint *)(iVar1 + 0x38) = uVar14;
  *(uint *)(iVar1 + 0x40) = local_38;
  *(uint *)(iVar1 + 0x48) = uVar12;
  *(uint *)(iVar1 + 0x30) = uVar6;
  *(uint *)(iVar1 + 0x50) = uVar13;
  FUN_01b6cd5c(iVar7,iVar1 + 0x194,0x10);
  uVar6 = uVar6 + *(int *)(iVar1 + 0x60);
  iVar7 = uVar14 + *(int *)(iVar1 + 0x68);
  *(int *)(iVar1 + 0x38) = iVar7;
  uVar2 = iVar7 + (uVar6 >> 0x1a);
  iVar7 = local_38 + *(int *)(iVar1 + 0x70);
  *(int *)(iVar1 + 0x40) = iVar7;
  uVar14 = iVar7 + (uVar2 >> 0x1a);
  iVar7 = uVar12 + *(int *)(iVar1 + 0x78);
  uVar4 = *(uint *)(iVar1 + 0x80) ^ 0x1000000;
  *(int *)(iVar1 + 0x48) = iVar7;
  uVar12 = iVar7 + (uVar14 >> 0x1a);
  *(uint *)(iVar1 + 0x80) = uVar4;
  iVar7 = uVar4 + uVar13;
  *(uint *)(iVar1 + 0x30) = uVar6;
  *(int *)(iVar1 + 0x50) = iVar7;
  local_30 = (uVar6 & 0x3ffffff) + uVar2 * 0x4000000;
  FUN_01b6cc88(param_2,&local_30,4);
  local_30 = uVar14 * 0x100000 + ((uVar2 & 0x3ffffff) >> 6);
  FUN_01b6cc88(param_2 + 4,&local_30);
  local_30 = uVar12 * 0x4000 + ((uVar14 & 0x3ffffff) >> 0xc);
  FUN_01b6cc88(param_2 + 8,&local_30,4);
  local_30 = (iVar7 + (uVar12 >> 0x1a)) * 0x100 + ((uVar12 & 0x3ffffff) >> 0x12);
  FUN_01b6cc88(param_2 + 0xc,&local_30,4);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

