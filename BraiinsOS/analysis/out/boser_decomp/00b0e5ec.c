// FUN_00b0e5ec @ 00b0e5ec size=212 calls_out=0 calls_in=0
// strings: 

void FUN_00b0e5ec(uint *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_2 + 0x50);
  bVar1 = *(byte *)(param_2 + 0x58);
  uVar6 = *(uint *)(param_2 + 0x54);
  bVar2 = bVar1;
  if (2 < bVar1) {
    bVar2 = 3;
  }
  uVar5 = (uint)(iVar7 == 2);
  if (bVar1 < 3) {
    if (bVar1 != 0 && iVar7 != 2) {
      uVar5 = *param_3;
      uVar3 = param_3[1];
      *(byte *)(param_1 + 2) = bVar2;
      uVar6 = 0;
      if (uVar5 != 2) {
        uVar6 = uVar5;
      }
      *param_1 = uVar6;
      param_1[1] = uVar3;
      return;
    }
    *(byte *)(param_1 + 2) = bVar2;
  }
  else {
    uVar3 = *param_3;
    if (iVar7 == 2) {
      cVar4 = (char)param_3[2];
      if (uVar3 == 2) {
        cVar4 = '\x03';
      }
      param_1[1] = uVar6;
      if (cVar4 == '\x03') {
        cVar4 = '\x01';
      }
      *(char *)(param_1 + 2) = cVar4;
      *param_1 = (uint)(cVar4 != '\0');
      return;
    }
    if (uVar3 != 2) {
      bVar1 = (byte)param_3[2];
    }
    if (uVar3 == 2 || bVar1 == 3) {
      *param_1 = 3;
      return;
    }
    uVar6 = param_3[1];
    uVar5 = 0;
    if (iVar7 != 1) {
      uVar5 = uVar3;
    }
    *(byte *)(param_1 + 2) = bVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  return;
}

