// FUN_017a2d7c @ 017a2d7c size=204 calls_out=0 calls_in=3
// strings: 

uint FUN_017a2d7c(ushort *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = (uint)*param_1;
  if (uVar4 != 0) {
    iVar3 = 4 << (uVar4 - 1 & 0xff);
  }
  else {
    iVar3 = 8;
  }
  if (uVar4 != 0) {
    iVar3 = iVar3 + 4;
  }
  if (param_1[1] < param_3) {
    return 0xffffffff;
  }
  uVar7 = 0;
  piVar2 = (int *)(param_2 + -4);
  uVar1 = 0;
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 != 0) {
      uVar5 = *(uint *)((int)param_1 + uVar7 * 8 + iVar3 + 4);
      iVar6 = (uVar5 >> 0x10) + 1;
      uVar5 = iVar6 * 0x100 -
              ((iVar6 * 0x10000 - (uVar5 + (1 << (uVar4 & 0xff)))) * 0x100 >> (uVar4 & 0xff));
      if ((uVar4 + 1) * 0x100 <= uVar5) {
        return 0xffffffff;
      }
      uVar1 = uVar5 * *piVar2 + uVar1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 <= param_3);
  return uVar1 >> 8;
}

