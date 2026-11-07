// FUN_016a5a58 @ 016a5a58 size=256 calls_out=2 calls_in=2
// strings: 

void FUN_016a5a58(int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_24 [20];
  
  puVar1 = (uint *)*param_1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar2 = FUN_00fabdb8(*puVar1,puVar1[1],auStack_24,0x14);
      iVar4 = 0x14 - iVar2;
      puVar3 = auStack_24 + iVar2;
      pcVar6 = (char *)0x1;
      uVar8 = 0;
      goto LAB_016a5b40;
    }
    uVar7 = *puVar1;
    uVar5 = puVar1[1];
    iVar2 = 0xf;
    do {
      iVar10 = iVar2;
      uVar9 = uVar7 & 0xf;
      uVar7 = uVar7 >> 4 | uVar5 << 0x1c;
      auStack_24[iVar10] = (&DAT_005642f0)[uVar9];
      uVar9 = uVar5 >> 4;
      uVar5 = uVar5 >> 4;
      iVar2 = iVar10 + -1;
    } while (uVar7 != 0 || uVar9 != 0);
  }
  else {
    uVar7 = *puVar1;
    uVar5 = puVar1[1];
    iVar2 = 0xf;
    do {
      iVar10 = iVar2;
      uVar9 = uVar7 & 0xf;
      uVar7 = uVar7 >> 4 | uVar5 << 0x1c;
      auStack_24[iVar10] = (&DAT_00563e90)[uVar9];
      uVar9 = uVar5 >> 4;
      uVar5 = uVar5 >> 4;
      iVar2 = iVar10 + -1;
    } while (uVar7 != 0 || uVar9 != 0);
  }
  iVar4 = 0x11 - (iVar10 + 1);
  puVar3 = auStack_24 + iVar10;
  pcVar6 = "0x";
  uVar8 = 2;
LAB_016a5b40:
  FUN_00fa9698(param_2,1,pcVar6,uVar8,puVar3,iVar4);
  return;
}

