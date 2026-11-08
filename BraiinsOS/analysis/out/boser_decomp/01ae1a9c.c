// FUN_01ae1a9c @ 01ae1a9c size=264 calls_out=3 calls_in=5
// strings: 

void FUN_01ae1a9c(uint *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  piVar1 = (int *)FUN_01664fc4();
  uVar3 = piVar1[0x52];
  puVar4 = (uint *)(piVar1 + 2);
  if (uVar3 < 0x3f) {
    iVar2 = uVar3 + 2;
    piVar1[0x52] = iVar2;
    uVar5 = puVar4[uVar3];
    uVar6 = (puVar4 + uVar3)[1];
    if (0x3c < uVar3) {
      if (iVar2 == 0x3f) {
        uVar3 = piVar1[0x41];
        FUN_007a4e44(piVar1 + 0x42,puVar4);
        iVar2 = 1;
        uVar7 = piVar1[2];
      }
      else {
        FUN_007a4e44(piVar1 + 0x42,puVar4);
        uVar3 = piVar1[2];
        uVar7 = piVar1[3];
        iVar2 = 2;
      }
      piVar1[0x52] = iVar2;
      goto LAB_01ae1b5c;
    }
  }
  else if (uVar3 == 0x3f) {
    uVar5 = piVar1[0x41];
    FUN_007a4e44(piVar1 + 0x42,puVar4);
    uVar6 = *puVar4;
    iVar2 = 1;
  }
  else {
    FUN_007a4e44(piVar1 + 0x42,puVar4);
    uVar5 = piVar1[2];
    uVar6 = piVar1[3];
    iVar2 = 2;
  }
  piVar1[0x52] = iVar2 + 2;
  uVar3 = puVar4[iVar2];
  uVar7 = (puVar4 + iVar2)[1];
LAB_01ae1b5c:
  iVar2 = *piVar1;
  *piVar1 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_01663bac(piVar1);
  }
  param_1[3] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
  param_1[1] = uVar3 << 0x18 | ((uVar3 & 0xf00 | 0x4000) >> 8) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
               | uVar3 >> 0x18;
  *param_1 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
             uVar7 >> 0x18;
  param_1[2] = uVar6 << 0x18 | ((uVar6 & 0xff00) >> 8) << 0x10 | ((uVar6 & 0xff0000) >> 0x10) << 8 |
               (uVar6 & 0x3fffffff | 0x80000000) >> 0x18;
  return;
}

