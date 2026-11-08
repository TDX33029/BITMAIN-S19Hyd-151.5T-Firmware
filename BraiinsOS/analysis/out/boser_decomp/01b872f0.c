// FUN_01b872f0 @ 01b872f0 size=240 calls_out=1 calls_in=2
// strings: 

int FUN_01b872f0(uint *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r3;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar6 = param_1[6];
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (param_4 ^ 1) & 1;
  }
  iVar1 = FUN_01b85214(uVar6,param_2,uVar4);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = param_1[1];
  }
  uVar7 = 1 << (param_1[2] & 0xff);
  if (iVar1 != 0) {
    uVar4 = 1 << (uVar4 & 0xff);
  }
  if ((extraout_r3 == 0) || (param_1[4] != 3)) {
    iVar1 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar8 = uVar2;
    if (0x10 < uVar2) {
      uVar8 = 0x11;
    }
    iVar1 = 0;
    if (uVar2 != 0) {
      iVar1 = 1 << (uVar8 & 0xff);
    }
  }
  iVar5 = uVar4 + uVar7;
  bVar9 = uVar6 - 3 == 2;
  if (uVar6 - 3 < 3) {
    bVar9 = param_2 == 1;
  }
  if (bVar9) {
    uVar7 = uVar7 + 0x3f;
  }
  if (bVar9) {
    uVar7 = uVar7 & 0xffffffc0;
    iVar3 = 0;
  }
  else {
    uVar7 = 0;
    if (uVar6 < 7) {
      uVar6 = 0;
    }
    else {
      uVar6 = extraout_r3 & 1;
    }
    if (uVar6 == 0) {
      iVar3 = 0;
      uVar7 = 0;
    }
    else {
      iVar3 = 0x24700;
    }
  }
  return (iVar5 + iVar1) * 4 + 0x80 + iVar3 + uVar7;
}

