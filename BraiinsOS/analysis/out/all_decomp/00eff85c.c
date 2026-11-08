// FUN_00eff85c @ 00eff85c size=312 calls_out=2 calls_in=0
// strings: 

void FUN_00eff85c(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_3f [39];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar1 = FUN_00fab440(*param_1,param_1[1],param_1[2],param_1[3],auStack_3f);
      iVar4 = 0x27 - iVar1;
      puVar2 = auStack_3f + iVar1;
      pcVar6 = (char *)0x1;
      uVar8 = 0;
      goto LAB_00eff97c;
    }
    uVar5 = *param_1;
    uVar7 = param_1[1];
    uVar9 = param_1[3];
    uVar10 = param_1[2];
    iVar1 = 0x1f;
    do {
      iVar11 = iVar1;
      uVar12 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4 | uVar7 << 0x1c;
      auStack_3f[iVar11] = (&DAT_005642f0)[uVar12];
      uVar3 = uVar10 >> 4 | uVar9 << 0x1c;
      uVar7 = uVar7 >> 4 | uVar10 << 0x1c;
      uVar12 = uVar9 >> 4;
      uVar9 = uVar9 >> 4;
      uVar10 = uVar3;
      iVar1 = iVar11 + -1;
    } while ((uVar5 != 0 || uVar3 != 0) || (uVar7 != 0 || uVar12 != 0));
  }
  else {
    uVar5 = *param_1;
    uVar7 = param_1[1];
    uVar9 = param_1[3];
    uVar10 = param_1[2];
    iVar1 = 0x1f;
    do {
      iVar11 = iVar1;
      uVar12 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4 | uVar7 << 0x1c;
      auStack_3f[iVar11] = (&DAT_00563e90)[uVar12];
      uVar3 = uVar10 >> 4 | uVar9 << 0x1c;
      uVar7 = uVar7 >> 4 | uVar10 << 0x1c;
      uVar12 = uVar9 >> 4;
      uVar9 = uVar9 >> 4;
      uVar10 = uVar3;
      iVar1 = iVar11 + -1;
    } while ((uVar5 != 0 || uVar3 != 0) || (uVar7 != 0 || uVar12 != 0));
  }
  iVar4 = 0x21 - (iVar11 + 1);
  puVar2 = auStack_3f + iVar11;
  pcVar6 = "0x";
  uVar8 = 2;
LAB_00eff97c:
  FUN_00fa9698(param_2,1,pcVar6,uVar8,puVar2,iVar4);
  return;
}

