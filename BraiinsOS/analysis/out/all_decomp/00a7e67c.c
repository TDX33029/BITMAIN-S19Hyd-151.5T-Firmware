// FUN_00a7e67c @ 00a7e67c size=840 calls_out=9 calls_in=3
// strings: 

undefined4 FUN_00a7e67c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  
  uVar3 = (&switchD_00a7e698::switchdataD_00a7e69c)[*(byte *)(param_1 + 0xe)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0xe)) {
  case 0:
    iVar6 = *(int *)*param_1;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    uVar3 = iVar6 + 8;
    param_1[3] = uVar3;
    param_1[4] = (int *)*param_1 + 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018acd5c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018acd5c);
  }
  uVar9 = thunk_FUN_016de0ee(uVar3,0x40);
  iVar6 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  if (*(char *)(iVar6 + 0x38) != '\x01') {
    cVar8 = '\0';
    cVar1 = '\0';
    if (*(char *)(iVar6 + 0x38) == '\x02') goto LAB_00a7e734;
    FUN_015e8e6c(iVar6,FUN_00a303f4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  }
  cVar8 = *(char *)(iVar6 + 0x31);
  cVar1 = *(char *)(iVar6 + 0x30);
  cVar2 = cVar8;
  if (cVar1 == '\x01') {
    if (cVar8 == '\0') {
      FUN_016455a4(*param_2,param_2[1]);
LAB_00a7e79c:
      *(undefined1 *)(param_1 + 0xe) = 3;
      return 2;
    }
    cVar2 = cVar8 + -1;
  }
  *(char *)(iVar6 + 0x31) = cVar2;
LAB_00a7e734:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x15)) {
  case 0:
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[1] = param_1[3];
    param_1[2] = param_1[4];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018ad404);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018ad404);
  case 4:
    goto switchD_00a7e740_caseD_4;
  }
  cVar2 = *(char *)(iVar6 + 0x38);
  iVar4 = param_1[1];
  if (cVar2 != '\x01') goto LAB_00a7e7f0;
LAB_00a7e778:
  if ((*(uint *)(iVar6 + 0x24) & 1) == 0) goto LAB_00a7e82c;
  do {
    uVar9 = CONCAT44(*(undefined4 *)(iVar6 + 0x28),*(undefined4 *)(iVar6 + 0x2c));
LAB_00a7e840:
    uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar5 = (uint)uVar9;
    uVar3 = uVar3 ^ uVar3 << 0x11;
    uVar7 = 1;
    *(uint *)(iVar6 + 0x28) = uVar5;
    *(undefined4 *)(iVar6 + 0x24) = 1;
    uVar3 = uVar5 >> 0x10 ^ uVar3 >> 7 ^ uVar5 ^ uVar3;
    *(uint *)(iVar6 + 0x2c) = uVar3;
    uVar3 = uVar3 + uVar5 >> 0x19 & 0x70;
    DataMemoryBarrier(0xb);
    local_48 = iVar4 + uVar3;
    local_44 = *(uint *)(iVar4 + uVar3) >> 2;
    *(undefined1 *)(param_1 + 5) = 1;
    local_2c = local_2c & 0xffffff00;
    local_30 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    DataMemoryBarrier(0xb);
    uVar3 = *(uint *)(param_1[1] + 0xf0) & 0xfffffffe;
    if (*(uint *)param_1[2] != uVar3) {
      uVar7 = 0;
      *(uint *)param_1[2] = uVar3;
LAB_00a7e98c:
      FUN_0163bdc0(&local_48);
      if (local_38 != 0) {
        (**(code **)(local_38 + 0xc))(local_34);
      }
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)((int)param_1 + 0x15) = 1;
      *(undefined1 *)(param_1 + 0xe) = 1;
      return uVar7;
    }
    if ((*(uint *)(param_1[1] + 0xf0) & 1) != 0) goto LAB_00a7e98c;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[6] = local_48;
    param_1[7] = local_44;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = local_34;
    param_1[0xc] = 0;
    param_1[0xd] = local_2c;
switchD_00a7e740_caseD_4:
    iVar4 = FUN_0163c044(param_1 + 6,param_2);
    if (iVar4 != 0) {
      *(undefined1 *)((int)param_1 + 0x15) = 4;
      if (cVar1 != '\0') {
        if (*(char *)(iVar6 + 0x38) != '\x01') {
          if (*(char *)(iVar6 + 0x38) == '\x02') {
            *(undefined1 *)(param_1 + 0xe) = 3;
            return 2;
          }
          FUN_015e8e6c(iVar6,FUN_01655ec4);
          *(undefined1 *)(iVar6 + 0x38) = 1;
        }
        *(char *)(iVar6 + 0x31) = cVar8;
        *(undefined1 *)(iVar6 + 0x30) = 1;
        *(undefined1 *)(param_1 + 0xe) = 3;
        return 2;
      }
      goto LAB_00a7e79c;
    }
    FUN_0163bdc0(param_1 + 6);
    if (param_1[10] != 0) {
      (**(code **)(param_1[10] + 0xc))(param_1[0xb]);
    }
    *(undefined1 *)(param_1 + 5) = 0;
    cVar2 = *(char *)(iVar6 + 0x38);
    iVar4 = param_1[1];
    if (cVar2 == '\x01') goto LAB_00a7e778;
LAB_00a7e7f0:
    if (cVar2 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar6,FUN_01655ec4);
    *(undefined1 *)(iVar6 + 0x38) = 1;
  } while ((*(uint *)(iVar6 + 0x24) & 1) != 0);
LAB_00a7e82c:
  uVar9 = FUN_0164e918();
  if ((uint)uVar9 < 2) {
    uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),1);
  }
  goto LAB_00a7e840;
}

