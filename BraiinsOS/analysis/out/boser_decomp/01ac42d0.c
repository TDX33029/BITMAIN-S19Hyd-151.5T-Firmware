// FUN_01ac42d0 @ 01ac42d0 size=432 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01ac42d0(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_24;
  undefined4 local_20;
  int *local_1c;
  code *local_18;
  undefined4 local_14;
  
  cVar3 = '\x05';
  if (1 < *param_1) {
    cVar3 = *param_1 - 2;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar3) {
  case '\0':
    local_78 = *(int *)(param_1 + 8);
    local_14 = *(undefined4 *)(param_1 + 0xc);
    break;
  default:
    FUN_012fbd94(&local_1c,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (local_1c != (int *)0x0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar3) {
      default:
        local_24 = *(int *)(param_1 + 0xc);
        break;
      case '\x04':
        local_24 = 0;
        if (*(short *)(param_1 + 4) != 0x12) {
          local_24 = *(int *)(param_1 + 0x10);
        }
        break;
      case '\x05':
        goto switchD_01ac4350_caseD_5;
      }
LAB_01ac4468:
      local_7c = 0;
      local_80 = 10;
      local_18 = FUN_012fd02c;
      local_1c = &local_24;
      uVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_005885af,&local_1c);
      goto LAB_01ac4498;
    }
    goto LAB_01ac43e4;
  case '\x04':
    if (*(short *)(param_1 + 4) == 0x12) {
      local_14 = 0;
      local_78 = 1;
    }
    else {
      local_78 = *(int *)(param_1 + 0xc);
      local_14 = *(undefined4 *)(param_1 + 0x10);
    }
    break;
  case '\x05':
    FUN_012fbd94(&local_1c,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    if (local_1c != (int *)0x0) {
switchD_01ac4350_caseD_5:
      uVar1 = *(uint *)(param_1 + 0x14);
      iVar4 = 2;
      if (uVar1 < 0x10000) {
        iVar4 = 1;
      }
      if (uVar1 < 0x7e) {
        iVar4 = 0;
      }
      local_24 = (&DAT_0053976c)[iVar4] + (param_1[7] & 0x3f) * 4 + uVar1;
      goto LAB_01ac4468;
    }
LAB_01ac43e4:
    local_78 = (int)local_18;
  }
  local_7c = 0;
  local_80 = 0xf;
  local_18 = (code *)&LAB_018a13b8;
  local_1c = &local_24;
  local_74 = local_14;
  local_24 = local_78;
  local_20 = local_14;
  uVar2 = FUN_012fa178(*param_2,param_2[1],&DAT_00590e5f,&local_1c);
LAB_01ac4498:
  FUN_01ac44dc(&local_80);
  return uVar2;
}

