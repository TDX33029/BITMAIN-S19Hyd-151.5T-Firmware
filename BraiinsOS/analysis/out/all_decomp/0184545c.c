// FUN_0184545c @ 0184545c size=304 calls_out=7 calls_in=3
// strings: libunwind: __unw_init_local(cursor=%p; context=%p)  | LIBUNWIND_PRINT_APIS

undefined4 FUN_0184545c(undefined4 *param_1,undefined4 *param_2)

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
  
  local_1c = DAT_018ddaf8;
  if (DAT_018dffe0 == '\0') {
    iVar2 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar2 != 0;
    DAT_018dffe0 = '\x01';
  }
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_init_local(cursor=%p, context=%p)\n",param_1,
                 param_2);
    FUN_016daeb4(&DAT_018db5c0);
  }
  param_1[1] = &DAT_018dffdc;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  *param_1 = &PTR_LAB_01843d80_1_018bc394;
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
  FUN_016dd606(param_1 + 0x14,0,0x88);
  FUN_016dd606(param_1 + 0x36,0,0x80);
  *(undefined2 *)(param_1 + 0x60) = 0;
  FUN_016dd606(param_1 + 0x56,0,0x28);
  uVar7 = param_1[0x11] & 0xfffffffe;
  if (uVar7 != 0) {
    local_38 = &DAT_018dffdc;
    puStack_34 = auStack_2c;
    local_30 = uVar7;
    iVar2 = FUN_016d3634(0x1843ced,&local_38);
    if (((iVar2 != 0) && (local_24 != 0)) &&
       (iVar2 = FUN_01845208(param_1,uVar7,auStack_2c), iVar2 != 0)) goto LAB_01845522;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
LAB_01845522:
  if (DAT_018ddaf8 != local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

