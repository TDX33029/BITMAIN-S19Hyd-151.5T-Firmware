// FUN_01b8d5ac @ 01b8d5ac size=196 calls_out=0 calls_in=3
// strings: 

uint FUN_01b8d5ac(ushort *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = (uint)*param_1;
  if (uVar3 != 0) {
    iVar1 = 4 << (uVar3 - 1 & 0xff);
  }
  else {
    iVar1 = 8;
  }
  if (uVar3 != 0) {
    iVar1 = iVar1 + 4;
  }
  if (param_1[1] < param_3) {
    return 0xffffffff;
  }
  uVar7 = 0;
  uVar6 = 0;
  do {
    iVar4 = *(int *)(param_2 + uVar7 * 4);
    if (iVar4 != 0) {
      uVar2 = *(uint *)((int)param_1 + uVar7 * 8 + iVar1 + 4);
      iVar5 = (uVar2 >> 0x10) + 1;
      uVar2 = iVar5 * 0x100 -
              ((iVar5 * 0x10000 - ((1 << (uVar3 & 0xff)) + uVar2)) * 0x100 >> (uVar3 & 0xff));
      if ((uVar3 + 1) * 0x100 <= uVar2) {
        return 0xffffffff;
      }
      uVar6 = uVar2 * iVar4 + uVar6;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 <= param_3);
  return uVar6 >> 8;
}

