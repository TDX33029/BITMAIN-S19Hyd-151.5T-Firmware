// FUN_012fb858 @ 012fb858 size=220 calls_out=2 calls_in=2
// strings: 

void FUN_012fb858(uint param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_1a [10];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      iVar1 = FUN_012fc81c(param_1,auStack_1a);
      iVar3 = 10 - iVar1;
      puVar2 = auStack_1a + iVar1;
      pcVar4 = (char *)0x1;
      uVar5 = 0;
      goto LAB_012fb928;
    }
    iVar1 = 7;
    do {
      iVar6 = iVar1;
      uVar7 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      auStack_1a[iVar6] = (&DAT_005682a8)[uVar7];
      iVar1 = iVar6 + -1;
    } while (param_1 != 0);
  }
  else {
    iVar1 = 7;
    do {
      iVar6 = iVar1;
      uVar7 = param_1 & 0xf;
      param_1 = param_1 >> 4;
      auStack_1a[iVar6] = (&DAT_005679b8)[uVar7];
      iVar1 = iVar6 + -1;
    } while (param_1 != 0);
  }
  iVar3 = 9 - (iVar6 + 1);
  puVar2 = auStack_1a + iVar6;
  pcVar4 = "0x";
  uVar5 = 2;
LAB_012fb928:
  FUN_012fa378(param_2,1,pcVar4,uVar5,puVar2,iVar3);
  return;
}

