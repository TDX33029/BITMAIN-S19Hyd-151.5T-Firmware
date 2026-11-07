// FUN_0001db34 @ 0001db34  size=1024  callers=2
// program: bmminer


void FUN_0001db34(float param_1,int param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  char *param5;
  uint uVar8;
  byte *pbVar9;
  uint param5_00;
  size_t param3;
  uint param4;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  size_t local_9e4;
  uint local_9e0;
  byte local_9c4 [4];
  uint local_9c0;
  undefined4 local_9bc;
  byte local_9b8 [4];
  undefined4 local_9b4 [97];
  undefined4 local_830;
  char acStack_82c [2048];
  
  if (3 < DAT_00087bbc) {
    param5 = "false";
    if (param_4 != 0) {
      param5 = "true";
    }
    snprintf((char *)&local_830,0x800,"chain = %d, freq = %g, is_higher_voltage = %s\n",param_2,
             (double)param_1,param5);
    FUN_00032218(3,&local_830,0);
  }
  FUN_00021060(param_2,1,0,param_3);
  local_9c0 = 0;
  local_9bc = 0;
  memset(local_9b8,0,0x188);
  FUN_00057ae4(param_1,&local_9c0,local_9c4,0);
  uVar7 = local_9c0 & 0xff;
  uVar11 = (uint)local_9c4[0];
  uVar8 = local_9c0 >> 8 & 0xff;
  local_9bc._0_3_ = CONCAT12(local_9c4[0],(undefined2)local_9bc);
  uVar6 = DAT_00087bbc;
  if (uVar7 < 8) {
    local_9e4 = 0;
    local_9e0 = uVar7;
    do {
      if (uVar8 <= uVar7) {
        param4 = uVar8;
        do {
          if (uVar11 < 2) {
            pbVar9 = local_9b8 + local_9e4 * 8;
            iVar10 = param4 * local_9e0 * uVar11;
            param5_00 = uVar11;
            do {
              *pbVar9 = (byte)uVar7;
              pbVar9[1] = (byte)param4;
              pbVar9[2] = (byte)param5_00;
              *(int *)(pbVar9 + 4) = iVar10;
              if (4 < uVar6) {
                snprintf((char *)&local_830,0x800,
                         "post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n",local_9e0,
                         param4,param5_00,iVar10);
                FUN_00032218(4,&local_830,0);
                uVar6 = DAT_00087bbc;
              }
              param5_00 = param5_00 + 1;
              pbVar9 = pbVar9 + 8;
              iVar10 = iVar10 + param4 * local_9e0;
            } while ((param5_00 & 0xff) < 2);
            local_9e4 = local_9e4 + (1 - uVar11 & 0xff) + 1;
          }
          param4 = param4 + 1 & 0xff;
        } while (param4 <= uVar7);
      }
      local_9e0 = local_9e0 + 1;
      uVar7 = local_9e0 & 0xff;
    } while (uVar7 < 8);
  }
  else {
    local_9e4 = 0;
  }
  if (4 < uVar6) {
    local_830._0_1_ = '\n';
    local_830._1_1_ = '\0';
    FUN_00032218(4,&local_830,0);
    if (4 < DAT_00087bbc) {
      local_830._0_1_ = 's';
      local_830._1_1_ = 'o';
      local_830._2_1_ = 'r';
      local_830._3_1_ = 't';
      builtin_strncpy(acStack_82c,"ed\n",4);
      FUN_00032218(4,&local_830,0);
    }
  }
  qsort(local_9b8,local_9e4,8,(__compar_fn_t)&LAB_0001d500);
  if (local_9e4 != 0) {
    sVar5 = 0;
    pbVar9 = local_9b8;
    do {
      while (param3 = sVar5, DAT_00087bbc < 5) {
        pbVar9 = pbVar9 + 8;
        sVar5 = param3 + 1;
        if (param3 + 1 == local_9e4) goto LAB_0001dd9c;
      }
      pbVar1 = pbVar9 + 4;
      pbVar2 = pbVar9 + 2;
      pbVar3 = pbVar9 + 1;
      bVar4 = *pbVar9;
      pbVar9 = pbVar9 + 8;
      snprintf((char *)&local_830,0x800,
               "[%d] post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n",param3,
               (uint)bVar4,(uint)*pbVar3,(uint)*pbVar2,*(int *)pbVar1);
      FUN_00032218(4,&local_830,0);
      sVar5 = param3 + 1;
    } while (param3 + 1 != local_9e4);
LAB_0001dd9c:
    iVar10 = 0;
    pbVar9 = local_9b8;
    do {
      local_9bc._0_3_ = CONCAT12(pbVar9[2],(undefined2)local_9bc);
      local_9c0 = CONCAT22(local_9c0._2_2_,*(undefined2 *)pbVar9);
      uVar6 = FUN_00021000(local_9c0,local_9bc);
      if (DAT_00087df0 < uVar6) {
        if (3 < DAT_00087bbc) {
          uVar12 = CONCAT44(local_9c0 >> 8,local_9c0) & 0xff000000ff;
          snprintf((char *)&local_830,0x800,
                   "[%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USER_DIV = %d, freq = %d\n",iVar10,
                   (int)uVar12,(int)(uVar12 >> 0x20),local_9bc >> 0x10 & 0xff,uVar6);
          FUN_00032218(3,&local_830,0);
        }
        FUN_000210e4(param_2,1,0,param_3,local_9c0);
        usleep(1000000);
      }
      iVar10 = iVar10 + 1;
      pbVar9 = pbVar9 + 8;
    } while (iVar10 != param3 + 1);
  }
  return;
}

