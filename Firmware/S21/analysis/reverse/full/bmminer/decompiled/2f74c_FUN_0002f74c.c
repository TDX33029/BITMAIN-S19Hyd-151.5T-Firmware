// FUN_0002f74c @ 0002f74c  size=328  callers=0
// program: bmminer


void FUN_0002f74c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char acStack_2018 [8196];
  
  if (param_1 != 0 && param_2 < 4) {
    iVar4 = (int)(short)param_2;
    uVar1 = FUN_0007f548();
    iVar2 = FUN_00018c24(iVar4,0);
    uVar3 = FUN_00080784(iVar2,iVar2 >> 0x1f);
    FUN_0007f9e4(uVar1,uVar3);
    iVar2 = FUN_00018c24(iVar4,5);
    uVar3 = FUN_00080784(iVar2,iVar2 >> 0x1f);
    FUN_0007f9e4(uVar1,uVar3);
    iVar2 = FUN_00018c24(iVar4,1);
    uVar3 = FUN_00080784(iVar2,iVar2 >> 0x1f);
    FUN_0007f9e4(uVar1,uVar3);
    iVar2 = FUN_00018c24(iVar4,6);
    uVar3 = FUN_00080784(iVar2,iVar2 >> 0x1f);
    FUN_0007f9e4(uVar1,uVar3);
    FUN_0007ec50(param_1,"temp_pcb",uVar1);
    return;
  }
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    snprintf(acStack_2018,0x2000,"%s: input bad param\n","api_miner_chain_temp_pcb");
    FUN_0004948c(3,acStack_2018,0);
  }
  return;
}

