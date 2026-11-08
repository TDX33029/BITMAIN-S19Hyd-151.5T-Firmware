// FUN_00057ac4 @ 00057ac4  size=600
// callers: [FUN_00055518]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  char local_2018 [4];
  char acStack_2014 [4];
  char acStack_2010 [4];
  char acStack_200c [4];
  char local_2008 [4];
  char acStack_2004 [4];
  undefined3 local_2000;
  char cStack_1ffd;
  char acStack_1ffc [4];
  char local_1ff8 [8160];
  
  pcVar8 = local_2018;
  iVar1 = FUN_00057a3c();
  if (iVar1 != 0) {
    if (DAT_000be63c < 4) {
      return 0;
    }
    local_2018[0] = s_Sweep_already_done__exit__000a5ec8[0];
    local_2018[1] = s_Sweep_already_done__exit__000a5ec8[1];
    local_2018[2] = s_Sweep_already_done__exit__000a5ec8[2];
    local_2018[3] = s_Sweep_already_done__exit__000a5ec8[3];
    acStack_2014[0] = s_Sweep_already_done__exit__000a5ec8[4];
    acStack_2014[1] = s_Sweep_already_done__exit__000a5ec8[5];
    acStack_2014[2] = s_Sweep_already_done__exit__000a5ec8[6];
    acStack_2014[3] = s_Sweep_already_done__exit__000a5ec8[7];
    acStack_2010[0] = s_Sweep_already_done__exit__000a5ec8[8];
    acStack_2010[1] = s_Sweep_already_done__exit__000a5ec8[9];
    acStack_2010[2] = s_Sweep_already_done__exit__000a5ec8[10];
    acStack_2010[3] = s_Sweep_already_done__exit__000a5ec8[0xb];
    acStack_200c[0] = s_Sweep_already_done__exit__000a5ec8[0xc];
    acStack_200c[1] = s_Sweep_already_done__exit__000a5ec8[0xd];
    acStack_200c[2] = s_Sweep_already_done__exit__000a5ec8[0xe];
    acStack_200c[3] = s_Sweep_already_done__exit__000a5ec8[0xf];
    local_2008[0] = s_Sweep_already_done__exit__000a5ec8[0x10];
    local_2008[1] = s_Sweep_already_done__exit__000a5ec8[0x11];
    local_2008[2] = s_Sweep_already_done__exit__000a5ec8[0x12];
    local_2008[3] = s_Sweep_already_done__exit__000a5ec8[0x13];
    acStack_2004[0] = s_Sweep_already_done__exit__000a5ec8[0x14];
    acStack_2004[1] = s_Sweep_already_done__exit__000a5ec8[0x15];
    acStack_2004[2] = s_Sweep_already_done__exit__000a5ec8[0x16];
    acStack_2004[3] = s_Sweep_already_done__exit__000a5ec8[0x17];
    local_2000 = (undefined3)ram0x000a5ee0;
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
      local_2018[0] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0];
      local_2018[1] = s__DEBUG__Allocate_memory_for_swee_000a5f28[1];
      local_2018[2] = s__DEBUG__Allocate_memory_for_swee_000a5f28[2];
      local_2018[3] = s__DEBUG__Allocate_memory_for_swee_000a5f28[3];
      acStack_2014[0] = s__DEBUG__Allocate_memory_for_swee_000a5f28[4];
      acStack_2014[1] = s__DEBUG__Allocate_memory_for_swee_000a5f28[5];
      acStack_2014[2] = s__DEBUG__Allocate_memory_for_swee_000a5f28[6];
      acStack_2014[3] = s__DEBUG__Allocate_memory_for_swee_000a5f28[7];
      acStack_2010[0] = s__DEBUG__Allocate_memory_for_swee_000a5f28[8];
      acStack_2010[1] = s__DEBUG__Allocate_memory_for_swee_000a5f28[9];
      acStack_2010[2] = s__DEBUG__Allocate_memory_for_swee_000a5f28[10];
      acStack_2010[3] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0xb];
      acStack_200c[0] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0xc];
      acStack_200c[1] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0xd];
      acStack_200c[2] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0xe];
      acStack_200c[3] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0xf];
      local_2008[0] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x10];
      local_2008[1] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x11];
      local_2008[2] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x12];
      local_2008[3] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x13];
      acStack_2004[0] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x14];
      acStack_2004[1] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x15];
      acStack_2004[2] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x16];
      acStack_2004[3] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x17];
      local_2000._0_1_ = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x18];
      local_2000._1_1_ = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x19];
      local_2000._2_1_ = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x1a];
      cStack_1ffd = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x1b];
      acStack_1ffc[0] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x1c];
      acStack_1ffc[1] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x1d];
      acStack_1ffc[2] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x1e];
      acStack_1ffc[3] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x1f];
      local_1ff8[0] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x20];
      local_1ff8[1] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x21];
      local_1ff8[2] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x22];
      local_1ff8[3] = s__DEBUG__Allocate_memory_for_swee_000a5f28[0x23];
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
  local_2018[0] = s_Fail_to_allocate_memory_for_swee_000a5f4c[0];
  local_2018[1] = s_Fail_to_allocate_memory_for_swee_000a5f4c[1];
  local_2018[2] = s_Fail_to_allocate_memory_for_swee_000a5f4c[2];
  local_2018[3] = s_Fail_to_allocate_memory_for_swee_000a5f4c[3];
  acStack_2014[0] = s_Fail_to_allocate_memory_for_swee_000a5f4c[4];
  acStack_2014[1] = s_Fail_to_allocate_memory_for_swee_000a5f4c[5];
  acStack_2014[2] = s_Fail_to_allocate_memory_for_swee_000a5f4c[6];
  acStack_2014[3] = s_Fail_to_allocate_memory_for_swee_000a5f4c[7];
  acStack_2010[0] = s_Fail_to_allocate_memory_for_swee_000a5f4c[8];
  acStack_2010[1] = s_Fail_to_allocate_memory_for_swee_000a5f4c[9];
  acStack_2010[2] = s_Fail_to_allocate_memory_for_swee_000a5f4c[10];
  acStack_2010[3] = s_Fail_to_allocate_memory_for_swee_000a5f4c[0xb];
  acStack_200c[0] = s_Fail_to_allocate_memory_for_swee_000a5f4c[0xc];
  acStack_200c[1] = s_Fail_to_allocate_memory_for_swee_000a5f4c[0xd];
  acStack_200c[2] = s_Fail_to_allocate_memory_for_swee_000a5f4c[0xe];
  acStack_200c[3] = s_Fail_to_allocate_memory_for_swee_000a5f4c[0xf];
  pcVar8 = local_2008;
LAB_00057c74:
  uVar3 = *(undefined4 *)(pcVar9 + 4);
  uVar4 = *(undefined4 *)(pcVar9 + 8);
  uVar6 = *(undefined4 *)(pcVar9 + 0xc);
  *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
  *(undefined4 *)(pcVar8 + 4) = uVar3;
  *(undefined4 *)(pcVar8 + 8) = uVar4;
  *(undefined4 *)(pcVar8 + 0xc) = uVar6;
  uVar3 = *(undefined4 *)(pcVar9 + 0x14);
  uVar4 = *(undefined4 *)(pcVar9 + 0x18);
  *(undefined4 *)(pcVar8 + 0x10) = *(undefined4 *)(pcVar9 + 0x10);
  *(undefined4 *)(pcVar8 + 0x14) = uVar3;
  pcVar8[0x18] = (char)uVar4;
  FUN_0004948c(3,local_2018,0);
  DAT_00944b78 = 1;
  return 0xffffffff;
}


