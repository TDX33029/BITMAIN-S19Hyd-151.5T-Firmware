// FUN_011e2b78 @ 011e2b78 size=576 calls_out=4 calls_in=9
// strings: 

uint FUN_011e2b78(undefined1 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_70 [3];
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  uint local_4c [3];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  cVar1 = *param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    return (uint)(cVar1 == '\0');
  case 1:
    uVar2 = 0;
    if (cVar1 == '\x01') {
      return (uint)(param_1[1] == param_2[1]);
    }
    break;
  case 2:
    uVar2 = 0;
    if (cVar1 == '\x02') {
      uVar2 = FUN_011e2dd0(param_1 + 8,param_2 + 8);
      return uVar2;
    }
    break;
  case 3:
    uVar2 = 0;
    if ((cVar1 == '\x03') && (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
      iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
      return (uint)(iVar3 == 0);
    }
    break;
  case 4:
    uVar2 = 0;
    if ((cVar1 == '\x04') && (iVar3 = *(int *)(param_1 + 0xc), iVar3 == *(int *)(param_2 + 0xc))) {
      if (iVar3 == 0) {
        return 1;
      }
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_1 + 8);
      do {
        iVar3 = iVar3 + -1;
        uVar2 = FUN_011e2b78(iVar5,iVar4);
        if (uVar2 == 0) {
          return 0;
        }
        iVar5 = iVar5 + 0x18;
        iVar4 = iVar4 + 0x18;
      } while (iVar3 != 0);
    }
    break;
  case 5:
    uVar2 = 0;
    if ((cVar1 == '\x05') &&
       (local_50 = *(int *)(param_1 + 0xc), local_50 == *(int *)(param_2 + 0xc))) {
      local_4c[2] = *(uint *)(param_2 + 4);
      local_70[2] = *(uint *)(param_1 + 4);
      local_40 = *(undefined4 *)(param_2 + 8);
      local_2c = 0;
      if (local_4c[2] != 0) {
        local_2c = local_50;
      }
      local_4c[0] = (uint)(local_4c[2] != 0);
      local_64 = *(undefined4 *)(param_1 + 8);
      if (local_70[2] == 0) {
        local_50 = 0;
      }
      local_70[0] = (uint)(local_70[2] != 0);
      local_24 = 0;
      local_28 = 0;
      local_38 = 0;
      local_4c[1] = 0;
      local_5c = 0;
      local_70[1] = 0;
      local_60 = local_70[0];
      local_58 = local_70[2];
      local_54 = local_64;
      local_3c = local_4c[0];
      local_34 = local_4c[2];
      local_30 = local_40;
      while( true ) {
        uVar6 = FUN_00f45584(local_70);
        iVar3 = (int)uVar6;
        uVar2 = 1;
        if (iVar3 == 0) break;
        uVar7 = FUN_00f45584(local_4c);
        iVar4 = (int)uVar7;
        if ((((iVar4 == 0) || (uVar2 = 0, *(int *)(iVar3 + 8) != *(int *)(iVar4 + 8))) ||
            (iVar3 = thunk_FUN_016dd50a(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar4 + 4)),
            iVar3 != 0)) ||
           (iVar3 = FUN_011e2b78((int)((ulonglong)uVar6 >> 0x20),(int)((ulonglong)uVar7 >> 0x20)),
           iVar3 == 0)) break;
      }
    }
  }
  return uVar2;
}

