// FUN_00d3ecd4 @ 00d3ecd4 size=712 calls_out=9 calls_in=1
// strings: 

undefined1 FUN_00d3ecd4(int *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  int local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  
  uVar9 = thunk_FUN_016de0ee(param_1,0x40);
  iVar5 = (int)uVar9 + (int)((ulonglong)uVar9 >> 0x20);
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    cVar6 = '\0';
    cVar7 = '\0';
    if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_00d3ed48;
    FUN_015e8e6c(iVar5,FUN_00bacf28);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  cVar7 = *(char *)(iVar5 + 0x31);
  cVar6 = *(char *)(iVar5 + 0x30);
  cVar1 = cVar7;
  if (cVar6 == '\x01') {
    if (cVar7 == '\0') {
      FUN_016455a4(*param_2,param_2[1]);
      return 2;
    }
    cVar1 = cVar7 + -1;
  }
  *(char *)(iVar5 + 0x31) = cVar1;
LAB_00d3ed48:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x11)) {
  case 0:
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = param_1[2];
    param_1[1] = param_1[3];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018ad404);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018ad404);
  case 4:
    goto switchD_00d3ed54_caseD_4;
  }
  cVar1 = *(char *)(iVar5 + 0x38);
  iVar3 = *param_1;
  if (cVar1 != '\x01') goto LAB_00d3ede4;
LAB_00d3ed8c:
  if ((*(uint *)(iVar5 + 0x24) & 1) == 0) goto LAB_00d3ee20;
  do {
    uVar9 = CONCAT44(*(undefined4 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x2c));
LAB_00d3ee34:
    uVar2 = (uint)((ulonglong)uVar9 >> 0x20);
    uVar4 = (uint)uVar9;
    uVar2 = uVar2 ^ uVar2 << 0x11;
    uVar8 = 1;
    *(uint *)(iVar5 + 0x28) = uVar4;
    *(undefined4 *)(iVar5 + 0x24) = 1;
    uVar2 = uVar4 >> 0x10 ^ uVar2 >> 7 ^ uVar4 ^ uVar2;
    *(uint *)(iVar5 + 0x2c) = uVar2;
    uVar2 = uVar2 + uVar4 >> 0x19 & 0x70;
    DataMemoryBarrier(0xb);
    local_48 = iVar3 + uVar2;
    local_44 = *(uint *)(iVar3 + uVar2) >> 2;
    *(undefined1 *)(param_1 + 4) = 1;
    local_2c = local_2c & 0xffffff00;
    local_30 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    DataMemoryBarrier(0xb);
    uVar2 = *(uint *)(*param_1 + 0x188) & 0xfffffffe;
    if (*(uint *)param_1[1] != uVar2) {
      uVar8 = 0;
      *(uint *)param_1[1] = uVar2;
LAB_00d3ef8c:
      FUN_0163bdc0(&local_48);
      if (local_38 != 0) {
        (**(code **)(local_38 + 0xc))(local_34);
      }
      *(undefined1 *)(param_1 + 4) = 0;
      *(undefined1 *)((int)param_1 + 0x11) = 1;
      return uVar8;
    }
    if ((*(uint *)(*param_1 + 0x188) & 1) != 0) goto LAB_00d3ef8c;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = local_48;
    param_1[6] = local_44;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = local_34;
    param_1[0xb] = 0;
    param_1[0xc] = local_2c;
switchD_00d3ed54_caseD_4:
    iVar3 = FUN_0163c044(param_1 + 5,param_2);
    if (iVar3 != 0) {
      *(undefined1 *)((int)param_1 + 0x11) = 4;
      if (cVar6 == '\0') {
        return 2;
      }
      if (*(char *)(iVar5 + 0x38) != '\x01') {
        if (*(char *)(iVar5 + 0x38) == '\x02') {
          return 2;
        }
        FUN_015e8e6c(iVar5,FUN_01655ec4);
        *(undefined1 *)(iVar5 + 0x38) = 1;
      }
      *(char *)(iVar5 + 0x31) = cVar7;
      *(undefined1 *)(iVar5 + 0x30) = 1;
      return 2;
    }
    FUN_0163bdc0(param_1 + 5);
    if (param_1[9] != 0) {
      (**(code **)(param_1[9] + 0xc))(param_1[10]);
    }
    *(undefined1 *)(param_1 + 4) = 0;
    cVar1 = *(char *)(iVar5 + 0x38);
    iVar3 = *param_1;
    if (cVar1 == '\x01') goto LAB_00d3ed8c;
LAB_00d3ede4:
    if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(iVar5,FUN_01655ec4);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  } while ((*(uint *)(iVar5 + 0x24) & 1) != 0);
LAB_00d3ee20:
  uVar9 = FUN_0164e918();
  if ((uint)uVar9 < 2) {
    uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),1);
  }
  goto LAB_00d3ee34;
}

