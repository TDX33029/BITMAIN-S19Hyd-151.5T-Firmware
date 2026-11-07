// FUN_01650cd4 @ 01650cd4 size=240 calls_out=2 calls_in=1
// strings: 

void FUN_01650cd4(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_24 [20];
  
  uVar1 = *(uint *)*param_1;
  uVar4 = ((uint *)*param_1)[1];
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar2 = FUN_00fabdb8(uVar1,uVar4,auStack_24,0x14);
      iVar5 = 0x14 - iVar2;
      puVar3 = auStack_24 + iVar2;
      pcVar6 = (char *)0x1;
      uVar7 = 0;
      goto LAB_01650dac;
    }
    iVar2 = 0xf;
    do {
      iVar9 = iVar2;
      uVar8 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4 | uVar4 << 0x1c;
      auStack_24[iVar9] = (&DAT_005642f0)[uVar8];
      uVar8 = uVar4 >> 4;
      uVar4 = uVar4 >> 4;
      iVar2 = iVar9 + -1;
    } while (uVar1 != 0 || uVar8 != 0);
  }
  else {
    iVar2 = 0xf;
    do {
      iVar9 = iVar2;
      uVar8 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4 | uVar4 << 0x1c;
      auStack_24[iVar9] = (&DAT_00563e90)[uVar8];
      uVar8 = uVar4 >> 4;
      uVar4 = uVar4 >> 4;
      iVar2 = iVar9 + -1;
    } while (uVar1 != 0 || uVar8 != 0);
  }
  iVar5 = 0x11 - (iVar9 + 1);
  puVar3 = auStack_24 + iVar9;
  pcVar6 = "0x";
  uVar7 = 2;
LAB_01650dac:
  FUN_00fa9698(param_2,1,pcVar6,uVar7,puVar3,iVar5);
  return;
}

