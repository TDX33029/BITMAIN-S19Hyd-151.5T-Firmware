// FUN_01b85468 @ 01b85468 size=424 calls_out=0 calls_in=2
// strings: 

int FUN_01b85468(undefined4 *param_1,uint param_2,int *param_3,undefined4 param_4,uint param_5,
                uint param_6,uint param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_3[10] == 0) {
    cVar5 = 0xff < param_7;
    if (param_7 != 0) {
      cVar5 = cVar5 + '\x01';
    }
    if (0xffff < param_7) {
      cVar5 = cVar5 + '\x01';
    }
  }
  else {
    cVar5 = '\0';
  }
  if (param_3[8] == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (param_6 != 0 || param_6 < (0xff < param_5)) +
            (param_6 != 0 || param_6 < (0x100ff < param_5)) +
            (param_6 != 0 || param_6 < (0xfffffffe < param_5));
  }
  if (param_2 < 0x12) {
    iVar6 = -0x46;
  }
  else {
    uVar7 = param_3[1];
    uVar3 = 0;
    bVar1 = -param_6 < (uint)(param_5 <= (uint)(1 << (uVar7 & 0xff)));
    bVar9 = param_3[8] != 0;
    iVar6 = param_3[9];
    bVar10 = *param_3 == 0;
    if (bVar10) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0;
    }
    if (bVar10) {
      uVar3 = 0xfd2fb528;
    }
    if (bVar10) {
      *param_1 = uVar3;
    }
    iVar4 = iVar2 + 1;
    *(char *)((int)param_1 + iVar2) =
         (bVar9 && bVar1) * ' ' + (0 < iVar6) * '\x04' + cVar5 + cVar8 * '@';
    if (!bVar9 || !bVar1) {
      *(char *)((int)param_1 + iVar4) = ((char)uVar7 + -10) * '\b';
      iVar4 = iVar2 + 2;
    }
    if (cVar5 == '\x02') {
      *(short *)((int)param_1 + iVar4) = (short)param_7;
      iVar4 = iVar4 + 2;
    }
    else if (cVar5 == '\x03') {
      *(uint *)((int)param_1 + iVar4) = param_7;
      iVar4 = iVar4 + 4;
    }
    else if (cVar5 == '\x01') {
      *(char *)((int)param_1 + iVar4) = (char)param_7;
      iVar4 = iVar4 + 1;
    }
    if (cVar8 == '\x02') {
      *(uint *)((int)param_1 + iVar4) = param_5;
      iVar6 = iVar4 + 4;
    }
    else if (cVar8 == '\x03') {
      *(uint *)((int)param_1 + iVar4) = param_5;
      iVar6 = iVar4 + 8;
      *(uint *)((int)param_1 + iVar4 + 4) = param_6;
    }
    else if (cVar8 == '\x01') {
      *(short *)((int)param_1 + iVar4) = (short)param_5 + -0x100;
      iVar6 = iVar4 + 2;
    }
    else {
      iVar6 = iVar4;
      if (bVar9 && bVar1) {
        *(char *)((int)param_1 + iVar4) = (char)param_5;
        iVar6 = iVar4 + 1;
      }
    }
  }
  return iVar6;
}

