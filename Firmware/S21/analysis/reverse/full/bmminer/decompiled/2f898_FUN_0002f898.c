// FUN_0002f898 @ 0002f898  size=396  callers=0
// program: bmminer


void FUN_0002f898(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char acStack_2020 [8192];
  
  if (param_1 == 0 || 3 < param_2) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2020,0x2000,"%s: input bad param\n","api_miner_chain_rate_array");
      FUN_0004948c(3,acStack_2020,0);
    }
    return;
  }
  uVar3 = FUN_0007f548();
  if (DAT_000c709c < 0x18) {
    if (DAT_000c709c != 0) {
      uVar7 = 0;
      puVar6 = (undefined4 *)(&DAT_00a4f4a8 + param_2 * 0xc0);
      do {
        uVar7 = uVar7 + 1;
        FUN_00098f78(*puVar6,puVar6[1]);
        uVar4 = FUN_00080784();
        FUN_0007f9e4(uVar3,uVar4);
        puVar6 = puVar6 + 2;
      } while (uVar7 < DAT_000c709c);
    }
  }
  else {
    uVar8 = DAT_000c709c % 0x18;
    uVar7 = uVar8 + 0x18;
    do {
      iVar2 = uVar8 * -0x55555555;
      uVar5 = uVar8 % 0x18;
      uVar8 = uVar8 + 1;
      iVar1 = (param_2 * 0x18 + uVar5) * 8;
      FUN_00098f78(*(undefined4 *)(&DAT_00a4f4a8 + iVar1),*(undefined4 *)(&DAT_00a4f4ac + iVar1),
                   iVar2);
      uVar4 = FUN_00080784();
      FUN_0007f9e4(uVar3,uVar4);
    } while (uVar7 != uVar8);
  }
  FUN_0007ec50(param_1,"rate_array",uVar3);
  return;
}

