// FUN_010e47f0 @ 010e47f0 size=596 calls_out=6 calls_in=4
// strings: 

code * FUN_010e47f0(undefined1 param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint ***pppuVar2;
  code *pcVar3;
  undefined *puVar4;
  int iVar5;
  uint ****ppppuVar6;
  int *piVar7;
  uint ****ppppuVar8;
  int local_68;
  code *local_64;
  uint ***local_58;
  int local_54;
  undefined4 ****local_50;
  uint ***local_4c;
  uint ***local_48;
  int local_44;
  uint ***apppuStack_3c [3];
  uint **local_30;
  undefined4 local_2c;
  uint ***local_28;
  code *local_24;
  
  if (param_4 == 0) {
    pcVar3 = (code *)FUN_010e98c8(&DAT_00387ec7,0x17);
    return pcVar3;
  }
  pppuVar2 = (uint ***)0x8;
  iVar5 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    piVar7 = (int *)*param_3;
    FUN_010e45d8(&local_68,piVar7);
    if (local_68 != 0) {
      return local_64;
    }
LAB_010e4954:
    local_4c = (uint ***)piVar7[1];
    pppuVar2 = (uint ***)0x0;
    goto LAB_010e4984;
  case 2:
    FUN_010e45d8(&local_50,*param_3);
    if (local_50 != (undefined4 ****)0x0) {
      return (code *)local_4c;
    }
    pppuVar2 = local_48;
    iVar5 = local_44;
    break;
  case 3:
    piVar7 = (int *)*param_3;
    do {
      FUN_010e45d8(&local_50,piVar7);
      if (local_50 == (undefined4 ****)&DAT_00000001) {
        return (code *)local_4c;
      }
      local_58 = local_48;
      local_54 = local_44;
      if (local_44 != 0) {
        local_50 = &local_58;
        ppppuVar8 = apppuStack_3c;
        ppppuVar6 = (uint ****)&local_50;
        puVar4 = &DAT_005918e8;
        local_4c = (uint ***)FUN_00fac4cc;
LAB_010e49dc:
        FUN_00600d2c(ppppuVar8,puVar4,ppppuVar6);
        pcVar3 = (code *)FUN_010e9978(ppppuVar8);
        return pcVar3;
      }
      local_30 = (uint **)((uint)local_48 & 7);
      local_2c = 0;
      uVar1 = 0;
      switch(local_30) {
      case (uint **)0x0:
        break;
      case (uint **)0x1:
        uVar1 = 1;
        break;
      case (uint **)0x2:
        uVar1 = 2;
        break;
      case (uint **)0x3:
        uVar1 = 3;
        break;
      case (uint **)0x4:
        if ((uint)local_48 >> 3 == 0) goto LAB_010e49f4;
        if ((uint)local_48 >> 3 == param_2) goto LAB_010e4954;
        goto switchD_010e4818_caseD_4;
      case (uint **)0x5:
        uVar1 = 5;
        break;
      default:
        local_28 = &local_30;
        ppppuVar8 = (uint ****)&local_50;
        puVar4 = &DAT_005976bb;
        local_24 = FUN_00fac4cc;
        ppppuVar6 = &local_28;
        goto LAB_010e49dc;
      }
      if ((uint)local_48 >> 3 == 0) {
LAB_010e49f4:
        pcVar3 = (code *)FUN_010e98c8(&DAT_00387f91,0x14);
        return pcVar3;
      }
      pcVar3 = (code *)FUN_010e47f0(uVar1,(uint)local_48 >> 3,param_3,param_4 + -1);
      if (pcVar3 != (code *)0x0) {
        return pcVar3;
      }
    } while( true );
  case 4:
switchD_010e4818_caseD_4:
    pcVar3 = (code *)FUN_010e98c8(&DAT_00387ede,0x18);
    return pcVar3;
  case 5:
    pppuVar2 = (uint ***)0x4;
  }
  piVar7 = (int *)*param_3;
  local_4c = (uint ***)piVar7[1];
  if ((uint)(pppuVar2 <= local_4c) <= (uint)-iVar5) {
    pcVar3 = (code *)FUN_010e98c8(&DAT_005649b0,0x10,-(iVar5 + (uint)(pppuVar2 > local_4c)),
                                  (int)local_4c - (int)pppuVar2);
    return pcVar3;
  }
  if (local_4c < pppuVar2) {
    local_50 = (undefined4 ****)pppuVar2;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_50);
  }
LAB_010e4984:
  *piVar7 = *piVar7 + (int)pppuVar2;
  piVar7[1] = (int)local_4c - (int)pppuVar2;
  return (code *)0x0;
}

