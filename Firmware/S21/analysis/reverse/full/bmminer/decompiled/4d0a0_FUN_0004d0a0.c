// FUN_0004d0a0 @ 0004d0a0  size=196  callers=9
// program: bmminer


uint FUN_0004d0a0(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    uVar3 = 1;
    uVar10 = 0x1c;
  }
  else {
    iVar9 = 0;
    iVar4 = 0;
    uVar10 = 0x80;
    uVar2 = 1;
    uVar5 = 1;
    uVar6 = 1;
    uVar7 = 1;
    uVar8 = 1;
    while( true ) {
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + 1;
      uVar1 = *param_1 & uVar10;
      uVar10 = uVar10 >> 1;
      uVar3 = uVar2;
      if (uVar1 != 0) {
        uVar3 = uVar2 ^ 1;
      }
      if (iVar9 == 8) {
        param_1 = param_1 + 1;
        iVar9 = 0;
        uVar10 = 0x80;
      }
      uVar1 = uVar3 ^ uVar5;
      if (param_2 == iVar4) break;
      uVar2 = uVar6;
      uVar5 = uVar7;
      uVar6 = uVar8;
      uVar7 = uVar3;
      uVar8 = uVar1;
    }
    if (uVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x10;
    }
    if (uVar8 != 0) {
      uVar10 = uVar10 | 8;
    }
    if (uVar3 != uVar5) {
      uVar10 = uVar10 | 4;
    }
    if (uVar7 == 0) goto LAB_0004d148;
  }
  uVar10 = uVar10 | 2;
LAB_0004d148:
  if (uVar3 != 0) {
    uVar10 = uVar10 | 1;
  }
  return uVar10;
}

