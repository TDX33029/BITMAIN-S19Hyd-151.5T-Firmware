// FUN_00030200 @ 00030200  size=476  callers=0
// program: bmminer


void FUN_00030200(int param_1)

{
  int param3;
  int param4;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char local_2020 [8192];
  
  if (param_1 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(local_2020,0x2000,"%s: input bad json param\n","api_miner_asic_tpl");
      FUN_0004948c(3,local_2020,0);
      return;
    }
  }
  else {
    param3 = FUN_0002aee8();
    param4 = FUN_0002aefc();
    if (param3 != 0 && param4 != 0) {
      uVar1 = FUN_0007f548();
      if (4 < DAT_000be63c) {
        snprintf(local_2020,0x2000,"api_miner_asic_tpl r=%d,c=%d",param3,param4);
        FUN_0004948c(4,local_2020,0);
      }
      if (0 < param3) {
        iVar6 = 0;
        do {
          uVar2 = FUN_0007f548();
          if (0 < param4) {
            iVar5 = 0;
            do {
              iVar3 = FUN_0002af10(iVar6,iVar5);
              iVar5 = iVar5 + 1;
              uVar4 = FUN_00080784(iVar3,iVar3 >> 0x1f);
              FUN_0007f9e4(uVar2,uVar4);
            } while (param4 != iVar5);
          }
          iVar6 = iVar6 + 1;
          FUN_0007f9e4(uVar1,uVar2);
        } while (param3 != iVar6);
      }
      FUN_0007ec50(param_1,&DAT_0009c694,uVar1);
      return;
    }
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2020,"miner tpl is empty!!!",0x16);
      FUN_0004948c(3,local_2020,0);
      return;
    }
  }
  return;
}

