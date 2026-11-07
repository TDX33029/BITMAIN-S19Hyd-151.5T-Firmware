// FUN_012fff48 @ 012fff48 size=244 calls_out=2 calls_in=0
// strings: 

void FUN_012fff48(int *param_1,int param_2)

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
  undefined1 auStack_2c [20];
  
  uVar1 = *(uint *)*param_1;
  uVar4 = ((uint *)*param_1)[1];
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar2 = FUN_012fc968(uVar1,uVar4,auStack_2c,0x14);
      iVar5 = 0x14 - iVar2;
      puVar3 = auStack_2c + iVar2;
      pcVar6 = (char *)0x1;
      uVar7 = 0;
      goto LAB_01300024;
    }
    iVar2 = 0xf;
    do {
      iVar9 = iVar2;
      uVar8 = uVar1 & 0xf;
      uVar1 = uVar1 >> 4 | uVar4 << 0x1c;
      auStack_2c[iVar9] = (&DAT_005682a8)[uVar8];
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
      auStack_2c[iVar9] = (&DAT_005679b8)[uVar8];
      uVar8 = uVar4 >> 4;
      uVar4 = uVar4 >> 4;
      iVar2 = iVar9 + -1;
    } while (uVar1 != 0 || uVar8 != 0);
  }
  iVar5 = 0x11 - (iVar9 + 1);
  puVar3 = auStack_2c + iVar9;
  pcVar6 = "0x";
  uVar7 = 2;
LAB_01300024:
  FUN_012fa378(param_2,1,pcVar6,uVar7,puVar3,iVar5);
  return;
}

