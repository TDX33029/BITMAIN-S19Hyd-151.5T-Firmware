// FUN_01be2a08 @ 01be2a08 size=304 calls_out=7 calls_in=3
// strings: libunwind: __unw_init_local(cursor=%p; context=%p)  | LIBUNWIND_PRINT_APIS

undefined4 FUN_01be2a08(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *local_38;
  undefined1 *puStack_34;
  uint local_30;
  undefined1 auStack_2c [8];
  int local_24;
  int local_1c;
  
  local_1c = DAT_01d53560;
  if (DAT_01d53488 == '\0') {
    iVar2 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    DAT_01d53487 = iVar2 != 0;
    DAT_01d53488 = '\x01';
  }
  if (DAT_01d53487 != '\0') {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_init_local(cursor=%p, context=%p)\n",param_1,
                 param_2);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  param_1[1] = &DAT_01d53484;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *param_1 = &PTR_LAB_01be132c_1_01d3b218;
  puVar3 = param_2;
  puVar6 = param_1 + 2;
  do {
    uVar8 = *puVar3;
    puVar4 = puVar3 + 4;
    uVar1 = puVar3[1];
    uVar5 = puVar3[2];
    puVar6[3] = puVar3[3];
    *puVar6 = uVar8;
    puVar6[1] = uVar1;
    puVar6[2] = uVar5;
    puVar3 = puVar4;
    puVar6 = puVar6 + 4;
  } while (puVar4 != param_2 + 0x10);
  param_1[0x12] = 0;
  FUN_01bed93e(param_1 + 0x14,0,0x88);
  FUN_01bed93e(param_1 + 0x36,0,0x80);
  *(undefined2 *)(param_1 + 0x60) = 0;
  FUN_01bed93e(param_1 + 0x56,0,0x28);
  uVar7 = param_1[0x11] & 0xfffffffe;
  if (uVar7 != 0) {
    local_38 = &DAT_01d53484;
    puStack_34 = auStack_2c;
    local_30 = uVar7;
    iVar2 = FUN_01be3cf8(0x1be1299,&local_38);
    if (((iVar2 != 0) && (local_24 != 0)) &&
       (iVar2 = FUN_01be27b4(param_1,uVar7,auStack_2c), iVar2 != 0)) goto LAB_01be2ace;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
LAB_01be2ace:
  if (DAT_01d53560 != local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

