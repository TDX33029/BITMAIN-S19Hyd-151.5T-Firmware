// FUN_01694198 @ 01694198 size=420 calls_out=2 calls_in=2
// strings: 

int FUN_01694198(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_01694198(param_1,param_1 + param_4 * 0x40,param_1 + param_4 * 0x70,param_4);
    param_2 = FUN_01694198(param_2,param_2 + param_4 * 0x40,param_2 + param_4 * 0x70,param_4);
    param_3 = FUN_01694198(param_3,param_3 + param_4 * 0x40,param_3 + param_4 * 0x70,param_4);
  }
  uVar7 = *(uint *)(param_2 + 8);
  uVar8 = *(undefined4 *)(param_1 + 4);
  uVar10 = *(uint *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar9 = uVar7;
  if (uVar10 < uVar7) {
    uVar9 = uVar10;
  }
  iVar3 = FUN_01bed842(uVar8,uVar4,uVar9);
  if (iVar3 == 0) {
    iVar3 = uVar10 - uVar7;
  }
  cVar11 = iVar3 < 0;
  cVar1 = 0 < iVar3;
  if (iVar3 == 0) {
    cVar11 = *(char *)(param_2 + 0xc);
  }
  uVar6 = *(undefined4 *)(param_3 + 4);
  uVar9 = *(uint *)(param_3 + 8);
  if (iVar3 == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  uVar5 = uVar9;
  if (uVar10 < uVar9) {
    uVar5 = uVar10;
  }
  iVar3 = FUN_01bed842(uVar8,uVar6,uVar5);
  if (iVar3 == 0) {
    iVar3 = uVar10 - uVar9;
  }
  if (iVar3 == 0) {
    bVar2 = *(char *)(param_1 + 0xc) - *(char *)(param_3 + 0xc);
  }
  else {
    bVar2 = (0 < iVar3) - (iVar3 < 0);
  }
  if (-1 < (char)(bVar2 ^ cVar1 - cVar11)) {
    uVar10 = uVar9;
    if (uVar7 < uVar9) {
      uVar10 = uVar7;
    }
    iVar3 = FUN_01bed842(uVar4,uVar6,uVar10);
    if (iVar3 == 0) {
      iVar3 = uVar7 - uVar9;
    }
    if (iVar3 == 0) {
      bVar2 = *(char *)(param_2 + 0xc) - *(char *)(param_3 + 0xc);
    }
    else {
      bVar2 = (0 < iVar3) - (iVar3 < 0);
    }
    param_1 = param_2;
    if ((char)(bVar2 ^ cVar1 - cVar11) < '\0') {
      param_1 = param_3;
    }
  }
  return param_1;
}

