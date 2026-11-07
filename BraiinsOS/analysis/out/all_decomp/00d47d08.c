// FUN_00d47d08 @ 00d47d08 size=220 calls_out=2 calls_in=24
// strings: 

void FUN_00d47d08(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_1a [10];
  
  puVar1 = (uint *)*param_1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar2 = FUN_00fabc64(*puVar1,auStack_1a);
      iVar4 = 10 - iVar2;
      puVar3 = auStack_1a + iVar2;
      pcVar6 = (char *)0x1;
      uVar7 = 0;
      goto LAB_00d47dcc;
    }
    uVar5 = *puVar1;
    iVar2 = 7;
    do {
      iVar8 = iVar2;
      uVar9 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      auStack_1a[iVar8] = (&DAT_005642f0)[uVar9];
      iVar2 = iVar8 + -1;
    } while (uVar5 != 0);
  }
  else {
    uVar5 = *puVar1;
    iVar2 = 7;
    do {
      iVar8 = iVar2;
      uVar9 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      auStack_1a[iVar8] = (&DAT_00563e90)[uVar9];
      iVar2 = iVar8 + -1;
    } while (uVar5 != 0);
  }
  iVar4 = 9 - (iVar8 + 1);
  puVar3 = auStack_1a + iVar8;
  pcVar6 = "0x";
  uVar7 = 2;
LAB_00d47dcc:
  FUN_00fa9698(param_2,1,pcVar6,uVar7,puVar3,iVar4);
  return;
}

