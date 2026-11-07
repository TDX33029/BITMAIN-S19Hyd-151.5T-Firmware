// FUN_00025da0 @ 00025da0  size=1032  callers=2
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00025da0(float param_1,int param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined3 uVar6;
  undefined2 uVar7;
  size_t sVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  char *param5;
  byte *pbVar18;
  uint param5_00;
  size_t param3;
  uint uVar19;
  int iVar20;
  uint uVar21;
  size_t local_21e8;
  uint local_21e4;
  char *local_21e0;
  byte local_21c4 [4];
  undefined4 local_21c0;
  undefined4 local_21bc;
  byte local_21b8 [4];
  undefined4 local_21b4 [97];
  undefined4 local_2030;
  char acStack_202c [8192];
  
  if (3 < DAT_000be63c) {
    param5 = "false";
    if (param_4 != 0) {
      param5 = "true";
    }
    snprintf((char *)&local_2030,0x2000,"chain = %d, freq = %g, is_higher_voltage = %s\n",param_2,
             (double)param_1,param5);
    FUN_0004948c(3,&local_2030,0);
  }
  local_21e0 = (char *)&local_2030;
  FUN_0002cef8(param_2,1,0,param_3);
  local_21bc = 0;
  local_21bc._2_1_ = 0;
  local_21bc._3_1_ = 0;
  local_21c0 = 0;
  local_21c0._1_1_ = 0;
  local_21c0._2_2_ = 0;
  memset(local_21b8,0,0x188);
  uVar11 = local_21bc;
  uVar19 = local_21c0;
  bVar4 = local_21c0._1_1_;
  uVar5 = local_21c0._2_2_;
  local_21c0 = uVar19;
  uVar14 = local_21bc._3_1_;
  uVar10 = local_21bc._2_1_;
  local_21bc = uVar11;
  uVar19 = local_21c0;
  local_21c0._1_1_ = bVar4;
  local_21c0._2_2_ = uVar5;
  uVar11 = local_21bc;
  local_21bc._2_1_ = uVar10;
  local_21bc._3_1_ = uVar14;
  FUN_00081ee8(param_1,&local_21c0,local_21c4,0);
  uVar11 = local_21bc;
  uVar19 = local_21c0;
  uVar17 = (uint)uVar19;
  uVar21 = (uint)local_21c4[0];
  uVar16 = (uint)local_21c0._1_1_;
  local_21bc._2_1_ = local_21c4[0];
  uVar15 = DAT_000be63c;
  if (uVar17 < 8) {
    local_21e8 = 0;
    local_21e4 = uVar17;
    do {
      local_21bc = uVar11;
      local_21c0 = uVar19;
      uVar14 = local_21bc._3_1_;
      bVar13 = local_21bc._2_1_;
      uVar5 = local_21c0._2_2_;
      bVar4 = local_21c0._1_1_;
      if (uVar16 <= uVar17) {
        uVar19 = uVar16;
        do {
          local_21bc._3_1_ = uVar14;
          local_21bc._2_1_ = bVar13;
          local_21c0._2_2_ = uVar5;
          local_21c0._1_1_ = bVar4;
          uVar14 = local_21bc._3_1_;
          bVar13 = local_21bc._2_1_;
          uVar5 = local_21c0._2_2_;
          bVar4 = local_21c0._1_1_;
          if (uVar21 < 2) {
            pbVar18 = local_21b8 + local_21e8 * 8;
            iVar20 = uVar19 * local_21e4 * uVar21;
            param5_00 = uVar21;
            do {
              local_21bc._3_1_ = uVar14;
              local_21bc._2_1_ = bVar13;
              local_21c0._2_2_ = uVar5;
              local_21c0._1_1_ = bVar4;
              uVar14 = local_21bc._3_1_;
              bVar13 = local_21bc._2_1_;
              uVar11 = local_21bc;
              uVar5 = local_21c0._2_2_;
              bVar4 = local_21c0._1_1_;
              uVar9 = local_21c0;
              local_21c0._1_1_ = bVar4;
              local_21c0._2_2_ = uVar5;
              local_21bc._2_1_ = bVar13;
              local_21bc._3_1_ = uVar14;
              *pbVar18 = (byte)uVar17;
              pbVar18[1] = (byte)uVar19;
              pbVar18[2] = (byte)param5_00;
              *(int *)(pbVar18 + 4) = iVar20;
              if (4 < uVar15) {
                bVar4 = local_21c0._1_1_;
                uVar5 = local_21c0._2_2_;
                local_21c0 = uVar9;
                uVar14 = local_21bc._3_1_;
                bVar13 = local_21bc._2_1_;
                local_21bc = uVar11;
                uVar15 = local_21c0;
                local_21c0._1_1_ = bVar4;
                local_21c0._2_2_ = uVar5;
                uVar11 = local_21bc;
                local_21bc._2_1_ = bVar13;
                local_21bc._3_1_ = uVar14;
                snprintf(local_21e0,0x2000,
                         "post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n",local_21e4,
                         uVar19,param5_00,iVar20);
                uVar11 = local_21bc;
                uVar15 = local_21c0;
                bVar4 = local_21c0._1_1_;
                uVar5 = local_21c0._2_2_;
                local_21c0 = uVar15;
                uVar14 = local_21bc._3_1_;
                bVar13 = local_21bc._2_1_;
                local_21bc = uVar11;
                uVar15 = local_21c0;
                local_21c0._1_1_ = bVar4;
                local_21c0._2_2_ = uVar5;
                uVar11 = local_21bc;
                local_21bc._2_1_ = bVar13;
                local_21bc._3_1_ = uVar14;
                FUN_0004948c(4,local_21e0,0);
                uVar11 = local_21bc;
                uVar9 = local_21c0;
                uVar15 = DAT_000be63c;
              }
              local_21bc = uVar11;
              local_21c0 = uVar9;
              uVar14 = local_21bc._3_1_;
              bVar13 = local_21bc._2_1_;
              uVar5 = local_21c0._2_2_;
              bVar4 = local_21c0._1_1_;
              param5_00 = param5_00 + 1;
              pbVar18 = pbVar18 + 8;
              iVar20 = iVar20 + uVar19 * local_21e4;
            } while ((param5_00 & 0xff) < 2);
            local_21e8 = local_21e8 + (1 - uVar21 & 0xff) + 1;
          }
          local_21bc._3_1_ = uVar14;
          local_21bc._2_1_ = bVar13;
          local_21c0._2_2_ = uVar5;
          local_21c0._1_1_ = bVar4;
          uVar14 = local_21bc._3_1_;
          bVar13 = local_21bc._2_1_;
          uVar5 = local_21c0._2_2_;
          bVar4 = local_21c0._1_1_;
          uVar19 = uVar19 + 1 & 0xff;
        } while (uVar19 <= uVar17);
      }
      local_21bc._3_1_ = uVar14;
      local_21bc._2_1_ = bVar13;
      local_21c0._2_2_ = uVar5;
      local_21c0._1_1_ = bVar4;
      uVar14 = local_21bc._3_1_;
      bVar13 = local_21bc._2_1_;
      uVar5 = local_21c0._2_2_;
      bVar4 = local_21c0._1_1_;
      local_21e4 = local_21e4 + 1;
      uVar17 = local_21e4 & 0xff;
      uVar19 = local_21c0;
      uVar11 = local_21bc;
      local_21c0._1_1_ = bVar4;
      local_21c0._2_2_ = uVar5;
      local_21bc._2_1_ = bVar13;
      local_21bc._3_1_ = uVar14;
    } while (uVar17 < 8);
  }
  else {
    local_21e8 = 0;
  }
  local_21bc = uVar11;
  local_21c0 = uVar19;
  uVar14 = local_21bc._3_1_;
  bVar13 = local_21bc._2_1_;
  uVar5 = local_21c0._2_2_;
  bVar4 = local_21c0._1_1_;
  uVar19 = local_21c0;
  uVar11 = local_21bc;
  if (4 < uVar15) {
    local_2030._0_1_ = '\n';
    local_2030._1_1_ = '\0';
    local_21c0._1_1_ = bVar4;
    local_21c0._2_2_ = uVar5;
    local_21bc._2_1_ = bVar13;
    local_21bc._3_1_ = uVar14;
    FUN_0004948c(4,local_21e0,0);
    uVar11 = local_21bc;
    uVar19 = local_21c0;
    bVar4 = local_21c0._1_1_;
    uVar5 = local_21c0._2_2_;
    bVar13 = local_21bc._2_1_;
    uVar14 = local_21bc._3_1_;
    if (4 < DAT_000be63c) {
      local_2030._0_1_ = 's';
      local_2030._1_1_ = 'o';
      local_2030._2_1_ = 'r';
      local_2030._3_1_ = 't';
      builtin_strncpy(acStack_202c,"ed\n",4);
      local_21c0 = uVar19;
      local_21bc = uVar11;
      uVar19 = local_21c0;
      local_21c0._1_1_ = bVar4;
      local_21c0._2_2_ = uVar5;
      uVar11 = local_21bc;
      local_21bc._2_1_ = bVar13;
      local_21bc._3_1_ = uVar14;
      FUN_0004948c(4,local_21e0,0);
      uVar11 = local_21bc;
      uVar19 = local_21c0;
      bVar4 = local_21c0._1_1_;
      uVar5 = local_21c0._2_2_;
      bVar13 = local_21bc._2_1_;
      uVar14 = local_21bc._3_1_;
    }
  }
  local_21bc._3_1_ = uVar14;
  local_21bc._2_1_ = bVar13;
  local_21c0._2_2_ = uVar5;
  local_21c0._1_1_ = bVar4;
  local_21bc = uVar11;
  local_21c0 = uVar19;
  uVar14 = local_21bc._3_1_;
  bVar13 = local_21bc._2_1_;
  uVar5 = local_21c0._2_2_;
  bVar4 = local_21c0._1_1_;
  uVar19 = local_21c0;
  local_21c0._1_1_ = bVar4;
  local_21c0._2_2_ = uVar5;
  uVar11 = local_21bc;
  local_21bc._2_1_ = bVar13;
  local_21bc._3_1_ = uVar14;
  qsort(local_21b8,local_21e8,8,(__compar_fn_t)&LAB_00024f78);
  uVar11 = local_21bc;
  uVar19 = local_21c0;
  if (local_21e8 != 0) {
    sVar8 = 0;
    pbVar18 = local_21b8;
    do {
      while (local_21bc = uVar11, local_21c0 = uVar19, param3 = sVar8, uVar14 = local_21bc._3_1_,
            bVar13 = local_21bc._2_1_, uVar5 = local_21c0._2_2_, bVar4 = local_21c0._1_1_,
            local_21c0._1_1_ = bVar4, local_21c0._2_2_ = uVar5, local_21bc._2_1_ = bVar13,
            local_21bc._3_1_ = uVar14, 4 < DAT_000be63c) {
        pbVar1 = pbVar18 + 4;
        pbVar2 = pbVar18 + 2;
        pbVar3 = pbVar18 + 1;
        bVar4 = *pbVar18;
        pbVar18 = pbVar18 + 8;
        uVar19 = local_21c0;
        uVar11 = local_21bc;
        snprintf(local_21e0,0x2000,
                 "[%d] post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n",param3,
                 (uint)bVar4,(uint)*pbVar3,(uint)*pbVar2,*(int *)pbVar1);
        uVar11 = local_21bc;
        uVar19 = local_21c0;
        bVar4 = local_21c0._1_1_;
        uVar5 = local_21c0._2_2_;
        local_21c0 = uVar19;
        uVar14 = local_21bc._3_1_;
        bVar13 = local_21bc._2_1_;
        local_21bc = uVar11;
        uVar19 = local_21c0;
        local_21c0._1_1_ = bVar4;
        local_21c0._2_2_ = uVar5;
        uVar11 = local_21bc;
        local_21bc._2_1_ = bVar13;
        local_21bc._3_1_ = uVar14;
        FUN_0004948c(4,local_21e0,0);
        uVar11 = local_21bc;
        uVar19 = local_21c0;
        sVar8 = param3 + 1;
        if (param3 + 1 == local_21e8) goto LAB_00026018;
      }
      pbVar18 = pbVar18 + 8;
      sVar8 = param3 + 1;
      uVar19 = local_21c0;
      uVar11 = local_21bc;
    } while (param3 + 1 != local_21e8);
LAB_00026018:
    local_21bc = uVar11;
    local_21c0 = uVar19;
    uVar14 = local_21bc._3_1_;
    iVar20 = 0;
    pbVar18 = local_21b8;
    do {
      local_21bc._3_1_ = uVar14;
      uVar14 = local_21bc._3_1_;
      uVar11 = CONCAT22(local_21c0._2_2_,*(undefined2 *)pbVar18);
      uVar6 = CONCAT14(pbVar18[2],local_21bc);
      uVar5 = local_21c0._2_2_;
      local_21c0 = CONCAT31((int3)(local_21c0 >> 8),*pbVar18);
      uVar19 = local_21c0;
      local_21c0._1_1_ = pbVar18[1];
      local_21c0._2_2_ = uVar5;
      uVar12 = local_21bc;
      local_21bc._2_1_ = pbVar18[2];
      local_21bc._3_1_ = uVar14;
      uVar15 = FUN_0002ce98(uVar11,CONCAT13(uVar14,uVar6));
      uVar11 = local_21bc;
      uVar19 = local_21c0;
      if (DAT_000bed50 < uVar15) {
        if (3 < DAT_000be63c) {
          uVar16 = (uint)local_21bc._2_1_;
          uVar17 = (uint)local_21c0._1_1_;
          bVar4 = local_21c0._1_1_;
          uVar5 = local_21c0._2_2_;
          local_21c0 = uVar19;
          uVar14 = local_21bc._3_1_;
          bVar13 = local_21bc._2_1_;
          local_21bc = uVar11;
          local_21c0._1_1_ = bVar4;
          local_21c0._2_2_ = uVar5;
          uVar11 = local_21bc;
          local_21bc._2_1_ = bVar13;
          local_21bc._3_1_ = uVar14;
          snprintf(local_21e0,0x2000,
                   "[%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USER_DIV = %d, freq = %d\n",iVar20,
                   (uint)uVar19,uVar17,uVar16,uVar15);
          uVar11 = local_21bc;
          uVar19 = local_21c0;
          bVar4 = local_21c0._1_1_;
          uVar5 = local_21c0._2_2_;
          local_21c0 = uVar19;
          uVar14 = local_21bc._3_1_;
          bVar13 = local_21bc._2_1_;
          local_21bc = uVar11;
          uVar19 = local_21c0;
          local_21c0._1_1_ = bVar4;
          local_21c0._2_2_ = uVar5;
          uVar11 = local_21bc;
          local_21bc._2_1_ = bVar13;
          local_21bc._3_1_ = uVar14;
          FUN_0004948c(3,local_21e0,0);
          uVar11 = local_21bc;
          uVar19 = local_21c0;
        }
        local_21bc = uVar11;
        local_21c0 = uVar19;
        uVar14 = local_21bc._3_1_;
        bVar13 = local_21bc._2_1_;
        uVar7 = local_21c0._2_2_;
        bVar4 = local_21c0._1_1_;
        uVar5 = CONCAT14(bVar4,local_21c0);
        uVar19 = local_21c0;
        local_21c0._1_1_ = bVar4;
        local_21c0._2_2_ = uVar7;
        uVar11 = local_21bc;
        local_21bc._2_1_ = bVar13;
        local_21bc._3_1_ = uVar14;
        FUN_0002d6b0(param_2,1,0,param_3,CONCAT22(uVar7,uVar5));
        uVar11 = local_21bc;
        uVar19 = local_21c0;
        bVar4 = local_21c0._1_1_;
        uVar5 = local_21c0._2_2_;
        local_21c0 = uVar19;
        uVar14 = local_21bc._3_1_;
        bVar13 = local_21bc._2_1_;
        local_21bc = uVar11;
        uVar19 = local_21c0;
        local_21c0._1_1_ = bVar4;
        local_21c0._2_2_ = uVar5;
        uVar11 = local_21bc;
        local_21bc._2_1_ = bVar13;
        local_21bc._3_1_ = uVar14;
        usleep(1000000);
        uVar11 = local_21bc;
        uVar19 = local_21c0;
      }
      local_21bc = uVar11;
      local_21c0 = uVar19;
      uVar14 = local_21bc._3_1_;
      iVar20 = iVar20 + 1;
      pbVar18 = pbVar18 + 8;
    } while (iVar20 != param3 + 1);
  }
  return;
}

