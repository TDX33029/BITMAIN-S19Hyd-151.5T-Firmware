// FUN_00787b88 @ 00787b88 size=252 calls_out=2 calls_in=0
// strings: 

void FUN_00787b88(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_24 [20];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar1 = FUN_00fabdb8(*param_1,param_1[1],auStack_24,0x14);
      iVar3 = 0x14 - iVar1;
      puVar2 = auStack_24 + iVar1;
      pcVar5 = (char *)0x1;
      uVar7 = 0;
      goto LAB_00787c6c;
    }
    uVar6 = *param_1;
    uVar4 = param_1[1];
    iVar1 = 0xf;
    do {
      iVar9 = iVar1;
      uVar8 = uVar6 & 0xf;
      uVar6 = uVar6 >> 4 | uVar4 << 0x1c;
      auStack_24[iVar9] = (&DAT_005642f0)[uVar8];
      uVar8 = uVar4 >> 4;
      uVar4 = uVar4 >> 4;
      iVar1 = iVar9 + -1;
    } while (uVar6 != 0 || uVar8 != 0);
  }
  else {
    uVar6 = *param_1;
    uVar4 = param_1[1];
    iVar1 = 0xf;
    do {
      iVar9 = iVar1;
      uVar8 = uVar6 & 0xf;
      uVar6 = uVar6 >> 4 | uVar4 << 0x1c;
      auStack_24[iVar9] = (&DAT_00563e90)[uVar8];
      uVar8 = uVar4 >> 4;
      uVar4 = uVar4 >> 4;
      iVar1 = iVar9 + -1;
    } while (uVar6 != 0 || uVar8 != 0);
  }
  iVar3 = 0x11 - (iVar9 + 1);
  puVar2 = auStack_24 + iVar9;
  pcVar5 = "0x";
  uVar7 = 2;
LAB_00787c6c:
  FUN_00fa9698(param_2,1,pcVar5,uVar7,puVar2,iVar3);
  return;
}

