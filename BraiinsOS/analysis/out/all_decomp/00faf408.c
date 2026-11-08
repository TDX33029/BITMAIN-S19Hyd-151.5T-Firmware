// FUN_00faf408 @ 00faf408 size=236 calls_out=2 calls_in=2
// strings: 

void FUN_00faf408(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_2c [20];
  
  if ((*(uint *)(param_3 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_3 + 8) & 0x4000000) == 0) {
      iVar1 = FUN_00fabdb8(param_1,param_2,auStack_2c,0x14);
      iVar3 = 0x14 - iVar1;
      puVar2 = auStack_2c + iVar1;
      pcVar4 = (char *)0x1;
      uVar5 = 0;
      goto LAB_00faf4dc;
    }
    iVar1 = 0xf;
    do {
      iVar7 = iVar1;
      uVar6 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x1c;
      auStack_2c[iVar7] = (&DAT_005642f0)[uVar6];
      uVar6 = param_2 >> 4;
      param_2 = param_2 >> 4;
      iVar1 = iVar7 + -1;
    } while (param_1 != 0 || uVar6 != 0);
  }
  else {
    iVar1 = 0xf;
    do {
      iVar7 = iVar1;
      uVar6 = param_1 & 0xf;
      param_1 = param_1 >> 4 | param_2 << 0x1c;
      auStack_2c[iVar7] = (&DAT_00563e90)[uVar6];
      uVar6 = param_2 >> 4;
      param_2 = param_2 >> 4;
      iVar1 = iVar7 + -1;
    } while (param_1 != 0 || uVar6 != 0);
  }
  iVar3 = 0x11 - (iVar7 + 1);
  puVar2 = auStack_2c + iVar7;
  pcVar4 = "0x";
  uVar5 = 2;
LAB_00faf4dc:
  FUN_00fa9698(param_3,1,pcVar4,uVar5,puVar2,iVar3);
  return;
}

