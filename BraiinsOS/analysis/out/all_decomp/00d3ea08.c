// FUN_00d3ea08 @ 00d3ea08 size=520 calls_out=8 calls_in=1
// strings: 

undefined4 FUN_00d3ea08(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar1 = (&switchD_00d3ea24::switchdataD_00d3ea28)[*(byte *)((int)param_1 + 0x11)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((int)param_1 + 0x11)) {
  case 0:
    uVar1 = param_1[2];
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = uVar1;
    param_1[1] = param_1[3];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018ad404);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018ad404);
  case 4:
    goto switchD_00d3ea24_caseD_4;
  }
  while( true ) {
    uVar6 = thunk_FUN_016de0ee(uVar1,0x40);
    iVar3 = (int)uVar6 + (int)((ulonglong)uVar6 >> 0x20);
    uVar1 = *param_1;
    if (*(char *)(iVar3 + 0x38) != '\x01') {
      if (*(char *)(iVar3 + 0x38) == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_015f853c(&DAT_018ae900);
      }
      FUN_015e8e6c(iVar3,FUN_01655ec4);
      *(undefined1 *)(iVar3 + 0x38) = 1;
    }
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      uVar6 = FUN_0164e918();
      if ((uint)uVar6 < 2) {
        uVar6 = CONCAT44((int)((ulonglong)uVar6 >> 0x20),1);
      }
    }
    else {
      uVar6 = CONCAT44(*(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x2c));
    }
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    uVar4 = (uint)uVar6;
    uVar2 = uVar2 ^ uVar2 << 0x11;
    uVar5 = 1;
    *(uint *)(iVar3 + 0x28) = uVar4;
    *(undefined4 *)(iVar3 + 0x24) = 1;
    uVar2 = uVar4 >> 0x10 ^ uVar2 >> 7 ^ uVar4 ^ uVar2;
    *(uint *)(iVar3 + 0x2c) = uVar2;
    uVar2 = uVar2 + uVar4 >> 0x19 & 0x70;
    DataMemoryBarrier(0xb);
    local_40 = uVar1 + uVar2;
    local_3c = *(uint *)(uVar1 + uVar2) >> 2;
    *(undefined1 *)(param_1 + 4) = 1;
    local_24 = local_24 & 0xffffff00;
    local_28 = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    DataMemoryBarrier(0xb);
    uVar1 = *(uint *)(*param_1 + 0x98) & 0xfffffffe;
    if (*(uint *)param_1[1] != uVar1) break;
    if ((*(uint *)(*param_1 + 0x98) & 1) != 0) goto LAB_00d3ebec;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = local_40;
    param_1[6] = local_3c;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = local_2c;
    param_1[0xb] = 0;
    param_1[0xc] = local_24;
switchD_00d3ea24_caseD_4:
    iVar3 = FUN_0163c044(param_1 + 5,param_2);
    if (iVar3 != 0) {
      *(undefined1 *)((int)param_1 + 0x11) = 4;
      return 2;
    }
    FUN_0163bdc0(param_1 + 5);
    if (param_1[9] != 0) {
      (**(code **)(param_1[9] + 0xc))(param_1[10]);
    }
    uVar1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  uVar5 = 0;
  *(uint *)param_1[1] = uVar1;
LAB_00d3ebec:
  FUN_0163bdc0(&local_40);
  if (local_30 != 0) {
    (**(code **)(local_30 + 0xc))(local_2c);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 1;
  return uVar5;
}

