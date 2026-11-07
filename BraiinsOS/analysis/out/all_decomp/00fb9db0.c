// FUN_00fb9db0 @ 00fb9db0 size=220 calls_out=2 calls_in=3
// strings: 

void FUN_00fb9db0(uint *param_1,int param_2)

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
      iVar1 = FUN_00fabc64(*param_1,auStack_1a);
      iVar3 = 10 - iVar1;
      puVar2 = auStack_1a + iVar1;
      pcVar5 = (char *)0x1;
      uVar6 = 0;
      goto LAB_00fb9e74;
    }
    uVar4 = *param_1;
    iVar1 = 7;
    do {
      iVar7 = iVar1;
      uVar8 = uVar4 & 0xf;
      uVar4 = uVar4 >> 4;
      auStack_1a[iVar7] = (&DAT_005642f0)[uVar8];
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
      auStack_1a[iVar7] = (&DAT_00563e90)[uVar8];
      iVar1 = iVar7 + -1;
    } while (uVar4 != 0);
  }
  iVar3 = 9 - (iVar7 + 1);
  puVar2 = auStack_1a + iVar7;
  pcVar5 = "0x";
  uVar6 = 2;
LAB_00fb9e74:
  FUN_00fa9698(param_2,1,pcVar5,uVar6,puVar2,iVar3);
  return;
}

