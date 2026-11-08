// FUN_0002aa68 @ 0002aa68  size=568  callers=5
// program: cgminer


void FUN_0002aa68(int *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char local_818 [12];
  undefined4 uStack_80c;
  char local_808 [2036];
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(local_818,0x800,"Discard work called with NULL work from %s %s:%d",param_2,param_3,
               param_4);
      FUN_0001dd98(3,local_818,0);
    }
  }
  else {
    if (((*(char *)(iVar1 + 0x111) == '\0') && (*(int *)(iVar1 + 0xf0) == 0)) &&
       (*(char *)(iVar1 + 0x110) == '\0')) {
      iVar2 = *(int *)(iVar1 + 0x104);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x7c) = *(int *)(iVar2 + 0x7c) + 1;
        *(int *)(*(int *)(iVar1 + 0x104) + 0x40) = *(int *)(*(int *)(iVar1 + 0x104) + 0x40) + -1;
        *(int *)(*(int *)(iVar1 + 0x104) + 0x44) = *(int *)(*(int *)(iVar1 + 0x104) + 0x44) + -1;
      }
      bVar3 = 0xfffffffe < DAT_00075018;
      DAT_00075018 = DAT_00075018 + 1;
      DAT_0007501c = DAT_0007501c + (uint)bVar3;
      if ((DAT_000686f1 != '\0') &&
         (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
        builtin_strncpy(local_818,"Discarded wo",0xc);
        uStack_80c._0_1_ = 'r';
        uStack_80c._1_1_ = 'k';
        uStack_80c._2_1_ = '\0';
        FUN_0001dd98(7,local_818,0);
      }
    }
    else if ((DAT_000686f1 != '\0') &&
            (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      builtin_strncpy(local_818,"Discarded cl",0xc);
      uStack_80c._0_1_ = 'o';
      uStack_80c._1_1_ = 'n';
      uStack_80c._2_1_ = 'e';
      uStack_80c._3_1_ = 'd';
      builtin_strncpy(local_808," or rolled work",0x10);
      FUN_0001dd98(7,local_818,0);
    }
    FUN_0002a76c(param_1,param_2,param_3,param_4);
  }
  return;
}

