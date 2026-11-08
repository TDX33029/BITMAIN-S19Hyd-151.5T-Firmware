// FUN_01a4cc20 @ 01a4cc20 size=436 calls_out=2 calls_in=1
// strings: 

void FUN_01a4cc20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar8 = *(uint *)(param_1 + 0x78);
  uVar6 = *(uint *)(param_1 + 0x138);
  uVar2 = uVar8;
  if (uVar6 < uVar8) {
    uVar2 = uVar6;
  }
  uVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x134),*(undefined4 *)(param_1 + 0x74),uVar2);
  if (uVar2 == 0) {
    uVar2 = uVar6 - uVar8;
  }
  uVar8 = *(uint *)(param_1 + 0x1f8);
  uVar12 = *(uint *)(param_1 + 0x2b8);
  uVar6 = uVar8;
  if (uVar12 < uVar8) {
    uVar6 = uVar12;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 500),uVar6);
  if (iVar3 == 0) {
    iVar3 = uVar12 - uVar8;
  }
  iVar9 = 0x240;
  iVar11 = param_1 + ((int)uVar2 >> 0x1f) * -0xc0;
  iVar5 = 0x180;
  if (iVar3 < 0) {
    iVar5 = 0x240;
  }
  iVar5 = param_1 + iVar5;
  if (iVar3 < 0) {
    iVar9 = 0x180;
  }
  uVar6 = *(uint *)(iVar11 + 0x78);
  iVar3 = param_1 + ((int)~uVar2 >> 0x1f) * -0xc0;
  uVar8 = *(uint *)(iVar5 + 0x78);
  uVar2 = uVar6;
  if (uVar8 < uVar6) {
    uVar2 = uVar8;
  }
  iVar4 = FUN_01bed842(*(undefined4 *)(iVar5 + 0x74),*(undefined4 *)(iVar11 + 0x74),uVar2);
  param_1 = param_1 + iVar9;
  uVar13 = *(uint *)(iVar3 + 0x78);
  uVar12 = *(uint *)(param_1 + 0x78);
  uVar2 = uVar13;
  if (uVar12 < uVar13) {
    uVar2 = uVar12;
  }
  iVar9 = FUN_01bed842(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(iVar3 + 0x74),uVar2);
  if (iVar9 == 0) {
    iVar9 = uVar12 - uVar13;
  }
  iVar10 = iVar3;
  if (iVar9 < 0) {
    iVar10 = iVar5;
  }
  if (iVar4 == 0) {
    iVar4 = uVar8 - uVar6;
  }
  iVar7 = iVar5;
  iVar1 = iVar11;
  if (iVar4 < 0) {
    iVar7 = iVar3;
    iVar1 = iVar5;
    iVar10 = iVar11;
  }
  if (iVar9 < 0) {
    iVar7 = param_1;
  }
  uVar2 = *(uint *)(iVar10 + 0x78);
  if (iVar9 < 0) {
    param_1 = iVar3;
  }
  uVar8 = *(uint *)(iVar7 + 0x78);
  uVar6 = uVar2;
  if (uVar8 < uVar2) {
    uVar6 = uVar8;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(iVar7 + 0x74),*(undefined4 *)(iVar10 + 0x74),uVar6);
  FUN_01bed4e2(param_2,iVar1,0xc0);
  if (iVar3 == 0) {
    iVar3 = uVar8 - uVar2;
  }
  if (iVar3 < 0) {
    iVar3 = iVar10;
  }
  else {
    iVar3 = iVar7;
    iVar7 = iVar10;
  }
  FUN_01bed4e2(param_2 + 0xc0,iVar7,0xc0);
  FUN_01bed4e2(param_2 + 0x180,iVar3,0xc0);
  FUN_01bed4e2(param_2 + 0x240,param_1,0xc0);
  return;
}

