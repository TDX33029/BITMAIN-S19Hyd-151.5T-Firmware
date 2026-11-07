// FUN_0003df8c @ 0003df8c  size=464  callers=0
// program: bmminer


undefined4 FUN_0003df8c(uint param_1,char *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  char local_818 [40];
  undefined4 uStack_7f0;
  char acStack_7ec [2004];
  
  if (DAT_00087bbc < 5) {
    if (1 < param_1 - 0xa0) {
LAB_0003dfc0:
      FUN_0003a9e0(0x14,0xff);
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      snprintf(local_818,0x800,"Invalid sweep type 0x%X\n",param_1);
      goto LAB_0003e0c8;
    }
  }
  else {
    snprintf(local_818,0x800,"[DEBUG] sweep_type = 0x%X, pattern_file_path = %s\n",param_1,param_2);
    FUN_00032218(4,local_818,0);
    if (1 < param_1 - 0xa0) goto LAB_0003dfc0;
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_818,"[DEBUG] allocate memory for pattern test",0x28);
      uStack_7f0._0_1_ = '.';
      uStack_7f0._1_1_ = '\n';
      uStack_7f0._2_1_ = '\0';
      FUN_00032218(4,local_818,0);
    }
  }
  puVar3 = DAT_0050748c;
  if (DAT_0050748c == (uint *)0x0) {
    puVar3 = calloc(0x44,1);
    DAT_0050748c = puVar3;
    if (puVar3 == (uint *)0x0) {
      FUN_0003a9e0(0xd,0xff);
      if (DAT_00087bbc < 4) {
        return 0xffffffff;
      }
      builtin_strncpy(local_818,"Fail to allocate memory for send work co",0x28);
      uStack_7f0._0_1_ = 'n';
      uStack_7f0._1_1_ = 't';
      uStack_7f0._2_1_ = 'e';
      uStack_7f0._3_1_ = 'x';
      builtin_strncpy(acStack_7ec,"t.\n",4);
LAB_0003e0c8:
      FUN_00032218(3,local_818,0);
      return 0xffffffff;
    }
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  *puVar3 = param_1;
  if (param_1 == 0xa0) {
    uVar1 = FUN_0003d76c();
    puVar3[1] = uVar1;
  }
  else {
    uVar1 = FUN_0003c890();
    puVar3[1] = uVar1;
  }
  uVar2 = (**(code **)(DAT_0050748c[1] + 4))(param_2);
  return uVar2;
}

