// FUN_01662110 @ 01662110 size=212 calls_out=0 calls_in=2
// strings: 

void FUN_01662110(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  if ((byte *)*param_2 == (byte *)0x0) {
    uVar3 = 0;
    uVar7 = 0;
LAB_0166218c:
    if ((byte *)param_2[2] != (byte *)0x0) {
      iVar2 = *param_3;
      uVar4 = uVar3;
      do {
        uVar3 = (*(byte *)param_2[2] & 0x7f) << 1 | uVar4 << 8;
        uVar7 = uVar7 << 8 | uVar4 >> 0x18;
        iVar2 = iVar2 + -1;
        uVar4 = uVar3;
      } while (iVar2 != 0);
      uVar8 = 1;
      *param_3 = 0;
    }
  }
  else {
    iVar2 = *param_3;
    uVar7 = 0;
    pbVar6 = (byte *)param_2[1];
    uVar3 = 0;
    pbVar5 = (byte *)*param_2;
    do {
      iVar2 = iVar2 + -1;
      if (pbVar5 == pbVar6) {
        *param_2 = 0;
        goto LAB_0166218c;
      }
      bVar1 = *pbVar5;
      uVar7 = uVar7 << 8 | uVar3 >> 0x18;
      *param_3 = iVar2;
      *param_2 = pbVar5 + 1;
      uVar3 = (bVar1 & 0x7f) << 1 | uVar3 << 8;
      pbVar5 = pbVar5 + 1;
    } while (iVar2 != 0);
    uVar8 = 1;
  }
  *param_1 = uVar8;
  param_1[1] = 0;
  param_1[2] = uVar3;
  param_1[3] = uVar7;
  return;
}

