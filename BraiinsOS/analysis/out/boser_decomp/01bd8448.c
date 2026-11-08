// FUN_01bd8448 @ 01bd8448 size=864 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_01bd8448(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_30;
  int local_2c;
  
  iVar7 = param_1 + (-param_1 & 0xfU);
  local_2c = DAT_01d53560;
  iVar8 = iVar7 + 0x60;
  FUN_01bd8bf8(iVar7 + 0x30,iVar7 + 0x30,iVar7 + 0x90,&DAT_00564ab0);
  if (*(uint *)(param_1 + 400) < 0x11) {
    if (*(uint *)(param_1 + 400) == 0) goto LAB_01bd8500;
    FUN_01bd7f98(iVar8,param_1 + 0x170);
    *(undefined4 *)(iVar7 + 4) = 1;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(undefined4 *)(iVar7 + 0x14) = 0;
    *(undefined4 *)(iVar7 + 0x1c) = 0;
    *(undefined4 *)(iVar7 + 0x24) = 0;
    iVar14 = iVar7;
  }
  else {
    FUN_01bd7f98(iVar8,param_1 + 0x170);
    *(undefined4 *)(iVar7 + 0x94) = *(undefined4 *)(iVar7 + 4);
    *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar7 + 0xc);
    *(undefined4 *)(iVar7 + 0xa4) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(iVar7 + 0xac) = *(undefined4 *)(iVar7 + 0x1c);
    *(undefined4 *)(iVar7 + 0xb4) = *(undefined4 *)(iVar7 + 0x24);
    iVar14 = iVar7 + 0x90;
  }
  FUN_01bd8bf8(iVar7 + 0x30,iVar7 + 0x30,iVar14,iVar8);
LAB_01bd8500:
  iVar14 = 3;
  uVar2 = *(int *)(iVar7 + 0x30) + *(int *)(iVar7 + 0x34);
  uVar11 = *(int *)(iVar7 + 0x38) + *(int *)(iVar7 + 0x3c);
  local_3c = *(int *)(iVar7 + 0x40) + *(int *)(iVar7 + 0x44);
  local_40 = *(int *)(iVar7 + 0x48) + *(int *)(iVar7 + 0x4c);
  local_38 = *(int *)(iVar7 + 0x50) + *(int *)(iVar7 + 0x54);
  do {
    uVar3 = uVar11 + (uVar2 >> 0x1a);
    uVar11 = uVar3 & 0x3ffffff;
    iVar14 = iVar14 + -1;
    uVar5 = local_3c + (uVar3 >> 0x1a);
    local_3c = uVar5 & 0x3ffffff;
    uVar6 = local_40 + (uVar5 >> 0x1a);
    local_40 = uVar6 & 0x3ffffff;
    uVar13 = local_38 + (uVar6 >> 0x1a);
    uVar2 = (uVar13 >> 0x1a) * 5 + (uVar2 & 0x3ffffff);
    local_38 = uVar13 & 0x3ffffff;
  } while (iVar14 != 0);
  uVar12 = uVar11 + (uVar2 + 5 >> 0x1a);
  uVar15 = (uVar5 & 0x3ffffff) + (uVar12 >> 0x1a);
  uVar10 = (uVar6 & 0x3ffffff) + (uVar15 >> 0x1a);
  uVar9 = (uVar13 & 0x3ffffff) + (uVar10 >> 0x1a);
  uVar1 = uVar9 >> 0x1a;
  uVar4 = uVar15;
  if (uVar1 == 0) {
    uVar4 = uVar2;
  }
  if (uVar1 != 0) {
    uVar4 = uVar2 + 5 & 0x3ffffff;
  }
  *(uint *)(iVar7 + 0x30) = uVar4;
  local_3c = ((uVar5 ^ uVar15) & 0x3ffffff) * uVar1 ^ local_3c;
  uVar11 = uVar11 ^ ((uVar3 ^ uVar12) & 0x3ffffff) * uVar1;
  local_40 = ((uVar6 ^ uVar10) & 0x3ffffff) * uVar1 ^ local_40;
  *(uint *)(iVar7 + 0x38) = uVar11;
  local_38 = local_38 ^ ((uVar13 ^ uVar9) & 0x3ffffff) * uVar1;
  *(uint *)(iVar7 + 0x40) = local_3c;
  *(uint *)(iVar7 + 0x48) = local_40;
  *(uint *)(iVar7 + 0x50) = local_38;
  FUN_01bd7f98(iVar8,param_1 + 0x194,0x10);
  uVar4 = uVar4 + *(int *)(iVar7 + 0x60);
  iVar8 = uVar11 + *(int *)(iVar7 + 0x68);
  *(int *)(iVar7 + 0x38) = iVar8;
  uVar5 = iVar8 + (uVar4 >> 0x1a);
  iVar8 = local_3c + *(int *)(iVar7 + 0x70);
  *(int *)(iVar7 + 0x40) = iVar8;
  uVar3 = iVar8 + (uVar5 >> 0x1a);
  iVar8 = local_40 + *(int *)(iVar7 + 0x78);
  uVar2 = *(uint *)(iVar7 + 0x80) ^ 0x1000000;
  *(uint *)(iVar7 + 0x30) = uVar4;
  *(int *)(iVar7 + 0x48) = iVar8;
  uVar11 = iVar8 + (uVar3 >> 0x1a);
  iVar8 = uVar2 + local_38;
  *(uint *)(iVar7 + 0x80) = uVar2;
  *(int *)(iVar7 + 0x50) = iVar8;
  local_30 = (uVar4 & 0x3ffffff) + uVar5 * 0x4000000;
  FUN_01bd7ec4(param_2,&local_30,4);
  local_30 = uVar3 * 0x100000 + ((uVar5 & 0x3ffffff) >> 6);
  FUN_01bd7ec4(param_2 + 4,&local_30);
  local_30 = uVar11 * 0x4000 + ((uVar3 & 0x3ffffff) >> 0xc);
  FUN_01bd7ec4(param_2 + 8,&local_30,4);
  local_30 = (iVar8 + (uVar11 >> 0x1a)) * 0x100 + ((uVar11 & 0x3ffffff) >> 0x12);
  FUN_01bd7ec4(param_2 + 0xc,&local_30,4);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

