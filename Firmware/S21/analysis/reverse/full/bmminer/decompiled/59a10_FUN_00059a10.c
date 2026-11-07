// FUN_00059a10 @ 00059a10  size=464  callers=0
// program: bmminer


undefined4 FUN_00059a10(uint param_1,char *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  char local_2018 [40];
  undefined4 uStack_1ff0;
  char acStack_1fec [8148];
  
  if (DAT_000be63c < 5) {
    if (1 < param_1 - 0xa0) {
LAB_00059a44:
      FUN_00056e88(0x14,0xff);
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      snprintf(local_2018,0x2000,"Invalid sweep type 0x%X\n",param_1);
      goto LAB_00059b4c;
    }
  }
  else {
    snprintf(local_2018,0x2000,"[DEBUG] sweep_type = 0x%X, pattern_file_path = %s\n",param_1,param_2
            );
    FUN_0004948c(4,local_2018,0);
    if (1 < param_1 - 0xa0) goto LAB_00059a44;
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2018,"[DEBUG] allocate memory for pattern test",0x28);
      uStack_1ff0._0_1_ = '.';
      uStack_1ff0._1_1_ = '\n';
      uStack_1ff0._2_1_ = '\0';
      FUN_0004948c(4,local_2018,0);
    }
  }
  puVar3 = DAT_00944b84;
  if (DAT_00944b84 == (uint *)0x0) {
    puVar3 = calloc(0x44,1);
    DAT_00944b84 = puVar3;
    if (puVar3 == (uint *)0x0) {
      FUN_00056e88(0xd,0xff);
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      builtin_strncpy(local_2018,"Fail to allocate memory for send work co",0x28);
      uStack_1ff0._0_1_ = 'n';
      uStack_1ff0._1_1_ = 't';
      uStack_1ff0._2_1_ = 'e';
      uStack_1ff0._3_1_ = 'x';
      builtin_strncpy(acStack_1fec,"t.\n",4);
LAB_00059b4c:
      FUN_0004948c(3,local_2018,0);
      return 0xffffffff;
    }
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  *puVar3 = param_1;
  if (param_1 == 0xa0) {
    uVar1 = FUN_000591c8();
    puVar3[1] = uVar1;
  }
  else {
    uVar1 = FUN_000583e4();
    puVar3[1] = uVar1;
  }
  uVar2 = (**(code **)(DAT_00944b84[1] + 4))(param_2);
  return uVar2;
}

