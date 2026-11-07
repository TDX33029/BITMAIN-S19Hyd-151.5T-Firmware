// FUN_012bcee8 @ 012bcee8 size=420 calls_out=2 calls_in=2
// strings: 

int FUN_012bcee8(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = FUN_012bcee8(param_1,param_1 + param_4 * 0xa0,param_4 * 0x118 + param_1,param_4);
    param_2 = FUN_012bcee8(param_2,param_2 + param_4 * 0xa0,param_4 * 0x118 + param_2,param_4);
    param_3 = FUN_012bcee8(param_3,param_3 + param_4 * 0xa0,param_4 * 0x118 + param_3,param_4);
  }
  cVar1 = *(char *)(param_1 + 0xc);
  uVar8 = 0;
  cVar2 = *(char *)(param_2 + 0xc);
  uVar4 = 1;
  uVar9 = 0;
  if (cVar1 == '\x01') {
    uVar4 = *(undefined4 *)(param_1 + 4);
  }
  uVar6 = 1;
  if (cVar1 == '\x01') {
    uVar8 = *(uint *)(param_1 + 8);
  }
  if (cVar2 == '\x01') {
    uVar9 = *(uint *)(param_2 + 8);
    uVar6 = *(undefined4 *)(param_2 + 4);
  }
  uVar10 = uVar9;
  if (uVar8 < uVar9) {
    uVar10 = uVar8;
  }
  iVar5 = FUN_016dd50a(uVar4,uVar6,uVar10);
  if (iVar5 == 0) {
    iVar5 = uVar8 - uVar9;
  }
  uVar9 = 0;
  cVar3 = *(char *)(param_3 + 0xc);
  uVar4 = 1;
  uVar8 = 0;
  if (cVar1 != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 4);
  }
  uVar6 = 1;
  if (cVar1 != '\0') {
    uVar9 = *(uint *)(param_1 + 8);
  }
  if (cVar3 == '\x01') {
    uVar8 = *(uint *)(param_3 + 8);
  }
  uVar10 = (uint)(0 < iVar5) - (uint)(iVar5 < 0);
  if (cVar3 == '\x01') {
    uVar6 = *(undefined4 *)(param_3 + 4);
  }
  uVar7 = uVar8;
  if (uVar9 < uVar8) {
    uVar7 = uVar9;
  }
  iVar5 = FUN_016dd50a(uVar4,uVar6,uVar7);
  if (iVar5 == 0) {
    iVar5 = uVar9 - uVar8;
  }
  uVar9 = 0;
  if (-1 < (int)((uint)(0 < iVar5) - (uint)(iVar5 < 0) ^ uVar10)) {
    uVar4 = 1;
    uVar6 = 1;
    if (cVar2 != '\0') {
      uVar4 = *(undefined4 *)(param_2 + 4);
      uVar9 = *(uint *)(param_2 + 8);
    }
    uVar8 = 0;
    if (cVar3 != '\0') {
      uVar6 = *(undefined4 *)(param_3 + 4);
      uVar8 = *(uint *)(param_3 + 8);
    }
    uVar7 = uVar8;
    if (uVar9 < uVar8) {
      uVar7 = uVar9;
    }
    iVar5 = FUN_016dd50a(uVar4,uVar6,uVar7);
    if (iVar5 == 0) {
      iVar5 = uVar9 - uVar8;
    }
    param_1 = param_2;
    if ((int)((uint)(0 < iVar5) - (uint)(iVar5 < 0) ^ uVar10) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}

