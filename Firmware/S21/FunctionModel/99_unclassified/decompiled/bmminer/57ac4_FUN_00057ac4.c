// FUN_00057ac4 @ 00057ac4  size=600  callers=1
// program: bmminer


undefined4 FUN_00057ac4(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_2020 [8];
  char local_2018 [16];
  undefined4 local_2008;
  char acStack_2004 [4];
  undefined4 local_2000;
  char acStack_1ffc [8164];
  
  pcVar8 = local_2018;
  iVar1 = FUN_00057a3c();
  if (iVar1 != 0) {
    if (DAT_000be63c < 4) {
      return 0;
    }
    builtin_strncpy(local_2018,"Sweep already do",0x10);
    local_2008._0_1_ = 'n';
    local_2008._1_1_ = 'e';
    local_2008._2_1_ = ',';
    local_2008._3_1_ = ' ';
    builtin_strncpy(acStack_2004,"exit",4);
    local_2000 = CONCAT13(local_2000._3_1_,0xa2e);
    FUN_0004948c(3,local_2018,0);
    return 0;
  }
  FUN_0004bd34(auStack_2020);
  DAT_00944b78 = 2;
  if (DAT_000be63c < 5) {
    if (1 < param_1 - 0xa0) {
LAB_00057b84:
      FUN_00056e88(0x14,0xff);
      if (DAT_000be63c < 4) {
        DAT_00944b78 = 1;
        return 0xffffffff;
      }
      pcVar9 = "Sweep type error, exit.\n";
      goto LAB_00057c74;
    }
  }
  else {
    snprintf(local_2018,0x2000,"[DEBUG] Sweep init, sweep_type = 0x%X.\n",param_1);
    FUN_0004948c(4,local_2018,0);
    if (1 < param_1 - 0xa0) goto LAB_00057b84;
    if (4 < DAT_000be63c) {
      builtin_strncpy(local_2018,"[DEBUG] Allocate",0x10);
      local_2008._0_1_ = ' ';
      local_2008._1_1_ = 'm';
      local_2008._2_1_ = 'e';
      local_2008._3_1_ = 'm';
      builtin_strncpy(acStack_2004,"ory ",4);
      local_2000._0_1_ = 'f';
      local_2000._1_1_ = 'o';
      local_2000._2_1_ = 'r';
      local_2000._3_1_ = ' ';
      builtin_strncpy(acStack_1ffc,"sweep.\n",8);
      FUN_0004948c(4,local_2018,0);
    }
  }
  if ((DAT_00944b70 != (uint *)0x0) ||
     (DAT_00944b70 = calloc(0x107c,1), DAT_00944b70 != (uint *)0x0)) {
    puVar5 = DAT_00944b70;
    iVar1 = 0;
    *DAT_00944b70 = param_1;
    puVar5[1] = 0x477fff00;
    do {
      iVar2 = FUN_0002a6f0(iVar1);
      if ((iVar2 != 0) && (iVar2 = FUN_0002a514(), 0 < iVar2)) {
        puVar5 = DAT_00944b70 + iVar2 + iVar1 * 0x100 + 2;
        puVar7 = DAT_00944b70 + iVar1 * 0x100 + 2;
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = 300;
        } while (puVar7 != puVar5);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    DAT_00944b78 = 1;
    return 0xffffffff;
  }
  FUN_00056e88(0xd,0xff);
  if (DAT_000be63c < 4) {
    DAT_00944b78 = 1;
    return 0xffffffff;
  }
  pcVar9 = " memory for sweep ctxt.\n";
  builtin_strncpy(local_2018,"Fail to allocate",0x10);
  pcVar8 = (char *)&local_2008;
LAB_00057c74:
  uVar3 = *(undefined4 *)(pcVar9 + 4);
  uVar4 = *(undefined4 *)(pcVar9 + 8);
  uVar6 = *(undefined4 *)(pcVar9 + 0xc);
  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
  *(undefined4 *)((int)pcVar8 + 4) = uVar3;
  *(undefined4 *)((int)pcVar8 + 8) = uVar4;
  *(undefined4 *)((int)pcVar8 + 0xc) = uVar6;
  uVar3 = *(undefined4 *)(pcVar9 + 0x14);
  uVar4 = *(undefined4 *)(pcVar9 + 0x18);
  *(undefined4 *)((int)pcVar8 + 0x10) = *(undefined4 *)(pcVar9 + 0x10);
  *(undefined4 *)((int)pcVar8 + 0x14) = uVar3;
  *(char *)((int)pcVar8 + 0x18) = (char)uVar4;
  FUN_0004948c(3,local_2018,0);
  DAT_00944b78 = 1;
  return 0xffffffff;
}

