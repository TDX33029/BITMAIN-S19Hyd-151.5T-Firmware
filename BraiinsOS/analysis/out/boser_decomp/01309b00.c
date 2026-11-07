// FUN_01309b00 @ 01309b00 size=220 calls_out=2 calls_in=0
// strings: 

void FUN_01309b00(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_1a [10];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar1 = FUN_012fc81c(*param_1,auStack_1a);
      iVar3 = 10 - iVar1;
      puVar2 = auStack_1a + iVar1;
      pcVar5 = (char *)0x1;
      uVar6 = 0;
      goto LAB_01309bc4;
    }
    uVar4 = *param_1;
    iVar1 = 7;
    do {
      iVar7 = iVar1;
      uVar8 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_1a[iVar7] = (&DAT_005682a8)[uVar8];
      iVar1 = iVar7 + -1;
    } while (uVar4 != 0);
  }
  else {
    uVar4 = *param_1;
    iVar1 = 7;
    do {
      iVar7 = iVar1;
      uVar8 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_1a[iVar7] = (&DAT_005679b8)[uVar8];
      iVar1 = iVar7 + -1;
    } while (uVar4 != 0);
  }
  iVar3 = 9 - (iVar7 + 1);
  puVar2 = auStack_1a + iVar7;
  pcVar5 = "0x";
  uVar6 = 2;
LAB_01309bc4:
  FUN_012fa378(param_2,1,pcVar5,uVar6,puVar2,iVar3);
  return;
}

