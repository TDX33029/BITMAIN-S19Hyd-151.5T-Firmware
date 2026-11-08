// FUN_0005983c @ 0005983c  size=216  callers=4
// program: bmminer


uint FUN_0005983c(byte *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  cVar1 = '\0';
  uVar9 = 0;
  uVar4 = 0x80;
  uVar5 = 1;
  uVar2 = 1;
  uVar7 = 1;
  uVar8 = 1;
  uVar3 = 1;
  while( true ) {
    uVar6 = uVar2;
    cVar1 = cVar1 + '\x01';
    uVar9 = uVar9 + 1 & 0xff;
    uVar2 = *param_1 & uVar4;
    uVar4 = uVar4 >> 1;
    if (uVar2 != 0) {
      uVar3 = uVar3 ^ 1;
    }
    if (cVar1 == '\b') {
      param_1 = param_1 + 1;
      cVar1 = '\0';
      uVar4 = 0x80;
    }
    uVar10 = uVar3 ^ uVar5;
    if (param_2 <= uVar9) break;
    uVar5 = uVar7;
    uVar2 = uVar8;
    uVar7 = uVar3;
    uVar8 = uVar10;
    uVar3 = uVar6;
  }
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x10;
  }
  if (uVar8 != 0) {
    uVar4 = uVar4 | 8;
  }
  if (uVar3 != uVar5) {
    uVar4 = uVar4 | 4;
  }
  if (uVar7 != 0) {
    uVar4 = uVar4 | 2;
  }
  if (uVar3 != 0) {
    uVar4 = uVar4 | 1;
  }
  return uVar4;
}

