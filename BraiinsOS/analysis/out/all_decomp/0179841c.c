// FUN_0179841c @ 0179841c size=552 calls_out=0 calls_in=2
// strings: 

uint FUN_0179841c(uint *param_1,uint param_2,int *param_3,undefined4 param_4,uint param_5,
                 uint param_6,uint param_7)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  
  if (param_3[10] == 0) {
    cVar8 = 0xff < param_7;
    if (param_7 != 0) {
      cVar8 = cVar8 + '\x01';
    }
    if (0xffff < param_7) {
      cVar8 = cVar8 + '\x01';
    }
  }
  else {
    cVar8 = '\0';
  }
  uVar7 = param_3[1];
  if (param_3[8] == 0) {
    cVar3 = '\0';
    bVar1 = false;
    cVar6 = '\0';
    cVar9 = '\0';
  }
  else {
    cVar9 = '\0';
    bVar1 = -param_6 < (uint)(param_5 <= (uint)(1 << (uVar7 & 0xff)));
    if (bVar1) {
      cVar9 = ' ';
    }
    cVar3 = (param_6 != 0 || param_6 < (0xff < param_5)) +
            (param_6 != 0 || param_6 < (0x100ff < param_5)) +
            (param_6 != 0 || param_6 < (0xfffffffe < param_5));
    cVar6 = cVar3 * '@';
  }
  if (param_2 < 0x12) {
    uVar2 = 0xffffffba;
  }
  else {
    iVar4 = param_3[9];
    bVar11 = *param_3 != 0;
    if (bVar11) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0xb528;
    }
    puVar5 = param_1;
    if (!bVar11) {
      uVar2 = uVar2 | 0xfd2f0000;
      puVar5 = param_1 + 1;
      *param_1 = uVar2;
    }
    if (bVar11) {
      uVar10 = 2;
    }
    else {
      uVar2 = 5;
      uVar10 = 6;
    }
    *(char *)puVar5 = cVar6 + cVar9 + cVar8 + (0 < iVar4) * '\x04';
    if (!bVar1) {
      *(char *)((int)param_1 + uVar2) = ((char)uVar7 + -10) * '\b';
      uVar2 = uVar10;
    }
    if (cVar8 == '\x02') {
      *(short *)((int)param_1 + uVar2) = (short)param_7;
      uVar2 = uVar2 + 2;
    }
    else if (cVar8 == '\x03') {
      *(uint *)((int)param_1 + uVar2) = param_7;
      uVar2 = uVar2 + 4;
    }
    else if (cVar8 == '\x01') {
      *(char *)((int)param_1 + uVar2) = (char)param_7;
      uVar2 = uVar2 + 1;
    }
    if (cVar3 == '\x02') {
      *(uint *)((int)param_1 + uVar2) = param_5;
      return uVar2 + 4;
    }
    if (cVar3 == '\x03') {
      *(uint *)((int)param_1 + uVar2) = param_5;
      *(uint *)((int)param_1 + uVar2 + 4) = param_6;
      return uVar2 + 8;
    }
    if (cVar3 == '\x01') {
      *(short *)((int)param_1 + uVar2) = (short)param_5 + -0x100;
      return uVar2 + 2;
    }
    if (bVar1) {
      *(char *)((int)param_1 + uVar2) = (char)param_5;
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

