// FUN_00904718 @ 00904718 size=752 calls_out=6 calls_in=1
// strings: 

/* WARNING: Switch with 1 destination removed at 0x009048dc : 4 cases all go to same destination */

void FUN_00904718(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char local_38;
  undefined1 local_37;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar6 = *(uint *)(param_2 + 0x14);
  if (uVar6 < uVar2) {
    do {
      uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
      if ((0x17 < uVar7 - 9) || ((1 << (uVar7 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar7 == 0x22) {
          if (uVar2 <= uVar6) goto LAB_00904854;
          goto LAB_0090482c;
        }
        if (uVar7 != 0x7b) {
          local_30 = 10;
          goto LAB_00904774;
        }
        cVar5 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar5;
        if (cVar5 == '\0') {
          local_30 = 0x18;
          goto LAB_00904774;
        }
        uVar6 = uVar6 + 1;
        *(uint *)(param_2 + 0x14) = uVar6;
        if (uVar2 <= uVar6) goto LAB_00904800;
        piVar9 = (int *)(param_2 + 0xc);
        goto LAB_009047d8;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(param_2 + 0x14) = uVar6;
    } while (uVar2 != uVar6);
  }
  local_30 = 5;
LAB_00904774:
  uVar3 = FUN_008f9984(param_2,&local_30);
  *(undefined4 *)(param_1 + 4) = uVar3;
  *param_1 = 1;
  return;
LAB_0090482c:
  uVar7 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar6);
  uVar8 = uVar7 - 9;
  if ((0x17 < uVar8) || ((1 << (uVar8 & 0xff) & 0x800013U) == 0)) {
    if (uVar7 == 0x22) {
      *(undefined4 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      FUN_0157e384(&local_30,(int *)(param_2 + 0xc),param_2);
      if (local_30 == 2) goto LAB_00904954;
      FUN_0090fcd8(&local_38,local_2c,local_28);
      if (local_38 != '\x01') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_37) {
        case 0:
          param_1[1] = 0;
          *param_1 = 0;
          return;
        case 1:
          uVar1 = 1;
          break;
        case 2:
          uVar1 = 2;
          break;
        case 3:
          uVar1 = 3;
        }
        param_1[1] = uVar1;
        *param_1 = 0;
        return;
      }
    }
    else {
      local_34 = FUN_005b8238(param_2,&uStack_21,&DAT_01867458);
    }
    local_2c = FUN_00e959bc(local_34,param_2);
    goto LAB_00904954;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) {
LAB_00904854:
    local_30 = 5;
    local_2c = FUN_008f9984(param_2,&local_30);
LAB_00904954:
    *(undefined4 *)(param_1 + 4) = local_2c;
    *param_1 = 1;
    return;
  }
  goto LAB_0090482c;
LAB_009047d8:
  uVar7 = *(byte *)(*piVar9 + uVar6) - 9;
  if (0x19 < uVar7) {
LAB_00904a70:
    if (*(byte *)(*piVar9 + uVar6) == 0x7d) {
      local_30 = 10;
    }
    else {
      local_30 = 0x11;
    }
    goto LAB_00904804;
  }
  if ((1 << (uVar7 & 0xff) & 0x800013U) == 0) {
    if (uVar7 != 0x19) goto LAB_00904a70;
    *(undefined4 *)(param_2 + 8) = 0;
    *(uint *)(param_2 + 0x14) = uVar6 + 1;
    FUN_0157e384(&local_30,piVar9,param_2);
    if (local_30 != 2) {
      FUN_0090fcd8(&local_38,local_2c,local_28);
      if (local_38 != '\x01') {
        iVar4 = FUN_01114eb4(param_2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        if ((iVar4 != 0) || (iVar4 = FUN_008fa9ec(param_2), iVar4 != 0)) goto LAB_00904900;
        uVar2 = *(uint *)(param_2 + 0x10);
        uVar6 = *(uint *)(param_2 + 0x14);
        cVar5 = *(char *)(param_2 + 0x24);
        param_1[1] = local_37;
        *(char *)(param_2 + 0x24) = cVar5 + '\x01';
        if (uVar2 <= uVar6) goto code_r0x00904a00;
        goto code_r0x009049d8;
      }
      local_2c = local_34;
    }
    iVar4 = FUN_00e959bc(local_2c,param_2);
    goto LAB_00904900;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) {
LAB_00904800:
    local_30 = 3;
LAB_00904804:
    iVar4 = FUN_008f9984(param_2,&local_30);
LAB_00904900:
    *(int *)(param_1 + 4) = iVar4;
    *param_1 = 1;
    *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
    return;
  }
  goto LAB_009047d8;
code_r0x009049d8:
  uVar7 = *(byte *)(*piVar9 + uVar6) - 9;
  if ((0x17 < uVar7) || ((1 << (uVar7 & 0xff) & 0x800013U) == 0)) {
    if (*(byte *)(*piVar9 + uVar6) == 0x7d) {
      *(uint *)(param_2 + 0x14) = uVar6 + 1;
      *param_1 = 0;
      return;
    }
    local_30 = 10;
    goto code_r0x00904a04;
  }
  uVar6 = uVar6 + 1;
  *(uint *)(param_2 + 0x14) = uVar6;
  if (uVar2 == uVar6) {
code_r0x00904a00:
    local_30 = 3;
code_r0x00904a04:
    uVar3 = FUN_005b8c9c(param_2,&local_30);
    *(undefined4 *)(param_1 + 4) = uVar3;
    *param_1 = 1;
    return;
  }
  goto code_r0x009049d8;
}

