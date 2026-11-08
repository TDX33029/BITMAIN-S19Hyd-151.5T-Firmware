// FUN_0003b5bc @ 0003b5bc  size=664  callers=1
// program: bmminer


undefined4 FUN_0003b5bc(uint param_1)

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
  undefined1 auStack_820 [8];
  char local_818 [16];
  undefined4 local_808;
  char acStack_804 [4];
  undefined4 local_800;
  char acStack_7fc [2020];
  
  pcVar8 = local_818;
  iVar1 = FUN_0003b534();
  if (iVar1 != 0) {
    if (DAT_00087bbc < 4) {
      return 0;
    }
    builtin_strncpy(local_818,"Sweep already do",0x10);
    local_808._0_1_ = 'n';
    local_808._1_1_ = 'e';
    local_808._2_1_ = ',';
    local_808._3_1_ = ' ';
    builtin_strncpy(acStack_804,"exit",4);
    local_800 = CONCAT13(local_800._3_1_,0xa2e);
    FUN_00032218(3,local_818,0);
    return 0;
  }
  FUN_00034828(auStack_820);
  DAT_00507480 = 2;
  if (DAT_00087bbc < 5) {
    if (1 < param_1 - 0xa0) {
LAB_0003b67c:
      FUN_0003a9e0(0x14,0xff);
      if (DAT_00087bbc < 4) {
        DAT_00507480 = 1;
        return 0xffffffff;
      }
      pcVar9 = "Sweep type error, exit.\n";
      goto LAB_0003b7ac;
    }
  }
  else {
    snprintf(local_818,0x800,"[DEBUG] Sweep init, sweep_type = 0x%X.\n",param_1);
    FUN_00032218(4,local_818,0);
    if (1 < param_1 - 0xa0) goto LAB_0003b67c;
    if (4 < DAT_00087bbc) {
      builtin_strncpy(local_818,"[DEBUG] Allocate",0x10);
      local_808._0_1_ = ' ';
      local_808._1_1_ = 'm';
      local_808._2_1_ = 'e';
      local_808._3_1_ = 'm';
      builtin_strncpy(acStack_804,"ory ",4);
      local_800._0_1_ = 'f';
      local_800._1_1_ = 'o';
      local_800._2_1_ = 'r';
      local_800._3_1_ = ' ';
      builtin_strncpy(acStack_7fc,"sweep.\n",8);
      FUN_00032218(4,local_818,0);
    }
  }
  if ((DAT_00507478 != (uint *)0x0) ||
     (DAT_00507478 = calloc(0x107c,1), DAT_00507478 != (uint *)0x0)) {
    puVar5 = DAT_00507478;
    *DAT_00507478 = param_1;
    iVar1 = 0;
    puVar5[1] = 0x477fff00;
    do {
      iVar2 = FUN_000201d8(iVar1);
      if ((iVar2 != 0) && (iVar2 = FUN_0002002c(), 0 < iVar2)) {
        puVar5 = DAT_00507478 + iVar2 + iVar1 * 0x100 + 2;
        puVar7 = DAT_00507478 + iVar1 * 0x100 + 2;
        do {
          puVar7 = puVar7 + 1;
          *puVar7 = 300;
        } while (puVar7 != puVar5);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    FUN_0003a9e0(0xf,0xff);
    if (DAT_00087bbc < 4) {
      DAT_00507480 = 1;
      return 0xffffffff;
    }
    snprintf(local_818,0x800,"Unknown miner type(%d).\n",5);
    FUN_00032218(3,local_818,0);
    DAT_00507480 = 1;
    return 0xffffffff;
  }
  FUN_0003a9e0(0xd,0xff);
  if (DAT_00087bbc < 4) {
    DAT_00507480 = 1;
    return 0xffffffff;
  }
  pcVar9 = " memory for sweep ctxt.\n";
  builtin_strncpy(local_818,"Fail to allocate",0x10);
  pcVar8 = (char *)&local_808;
LAB_0003b7ac:
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
  FUN_00032218(3,local_818,0);
  DAT_00507480 = 1;
  return 0xffffffff;
}

