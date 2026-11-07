// FUN_01b896e8 @ 01b896e8 size=412 calls_out=5 calls_in=1
// strings: 

int FUN_01b896e8(uint *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                uint param_7,uint param_8,uint param_9,uint param_10)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_1;
  uVar6 = 1 << (uVar8 - 0x20 & 0xff) | 1U >> (0x20 - uVar8 & 0xff);
  uVar8 = 1 << (uVar8 & 0xff);
  uVar9 = param_8;
  uVar7 = param_7;
  if (uVar6 < param_8 || param_8 - uVar6 < (uint)(uVar8 <= param_7)) {
    uVar9 = uVar6;
    uVar7 = uVar8;
  }
  if (uVar7 == 0 && uVar9 == 0) {
    param_7 = 1;
  }
  else {
    uVar7 = uVar6 - param_8;
    bVar1 = uVar6 <= param_8;
    uVar6 = uVar6 - (param_8 + (param_7 > uVar8));
    if (bVar1 && (param_7 <= uVar8) <= uVar7) {
      param_7 = uVar8;
    }
  }
  if (param_10 == 0) {
    param_10 = 0x20000;
  }
  if (param_10 <= param_7) {
    param_7 = param_10;
  }
  uVar8 = param_9 & 1;
  if (param_1[4] == 3) {
    uVar8 = 1;
  }
  iVar2 = FUN_01bf1250(param_7,4 - uVar8,uVar6);
  iVar3 = FUN_01b872f0(param_1,param_4,0,1);
  iVar4 = FUN_01bbf568(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
  iVar5 = FUN_01bbf5c4(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_7);
  if (*param_2 == 1) {
    uVar8 = iVar5 * 0xc + 0x3fU & 0xffffffc0;
  }
  else {
    uVar8 = 0;
  }
  if (param_3 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0xed0;
  }
  uVar7 = 0;
  if (param_9 != 0) {
    uVar10 = FUN_01b896bc(param_7);
    uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar7 = (int)uVar10 * 0x10 + 0x3fU & 0xffffffc0;
  }
  return param_6 + 0x46e0 + param_5 + iVar3 + iVar4 + param_7 + iVar2 * 3 +
         (iVar2 * 8 + 0x3fU & 0xffffffc0) + uVar8 + iVar5 + uVar7;
}

