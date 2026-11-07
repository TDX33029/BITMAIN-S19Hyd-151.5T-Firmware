// FUN_00e67b28 @ 00e67b28 size=448 calls_out=2 calls_in=1
// strings: 

undefined4 * FUN_00e67b28(uint *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30 [2];
  uint local_28;
  uint local_24;
  uint local_20;
  int iStack_1c;
  
  if (*param_2 == 2 && param_2[1] == 0) {
    uVar1 = *param_1;
    *param_1 = uVar1 + 1;
    param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar1);
    return (undefined4 *)0x0;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  param_1[1] = param_1[1] + (uint)(0xfffffffe < uVar1);
  puVar2 = (undefined4 *)FUN_00e712cc(param_2,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2;
  }
  if ((undefined1 *)param_2[0x40] == &DAT_3b9aca00) {
    uVar7 = *param_1 + 1;
    iVar4 = param_1[1] + (uint)(0xfffffffe < *param_1);
  }
  else {
    local_3c = 0;
    uVar5 = *param_1 + 1;
    uVar1 = param_1[1] + (uint)(0xfffffffe < *param_1);
    *param_1 = uVar5;
    param_1[1] = uVar1;
    local_40 = 0;
    local_38 = 0;
    FUN_015f3c24(local_30,param_2 + 0x3e,&local_40);
    if ((local_30[0] & 1) != 0) {
      iVar4 = thunk_FUN_016d4a50(0x28);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x28);
      }
      FUN_016dd1aa(iVar4,&DAT_003594c0,0x28);
      local_20 = 0x28;
      iStack_1c = iVar4;
      puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar2 = local_20;
      puVar2[1] = iStack_1c;
      puVar2[2] = 0x28;
      return puVar2;
    }
    uVar6 = 1;
    if (((local_24 != 0 || local_24 < (0xfa < local_28)) &&
        (uVar6 = 3, local_24 != 0 || local_24 < (0xffff < local_28))) && (uVar6 = 9, local_24 == 0))
    {
      uVar6 = 5;
    }
    uVar3 = 5;
    if (local_20 < 0x10000) {
      uVar3 = 3;
    }
    if (local_20 < 0xfb) {
      uVar3 = 1;
    }
    uVar7 = uVar3 + uVar5 + uVar6;
    iVar4 = uVar1 + CARRY4(uVar3,uVar5) + (uint)CARRY4(uVar3 + uVar5,uVar6);
  }
  uVar1 = 1;
  uVar5 = param_2[0x3b];
  uVar6 = 1;
  if (((uVar5 != 0 || uVar5 < (0xfa < (uint)param_2[0x3a])) &&
      (uVar6 = 3, uVar5 != 0 || uVar5 < (0xffff < (uint)param_2[0x3a]))) && (uVar6 = 9, uVar5 == 0))
  {
    uVar6 = 5;
  }
  uVar5 = param_2[0x3d];
  if (((uVar5 != 0 || uVar5 < (0xfa < (uint)param_2[0x3c])) &&
      (uVar1 = 3, uVar5 != 0 || uVar5 < (0xffff < (uint)param_2[0x3c]))) && (uVar1 = 9, uVar5 == 0))
  {
    uVar1 = 5;
  }
  *param_1 = uVar7 + uVar6 + uVar1;
  param_1[1] = iVar4 + (uint)CARRY4(uVar7,uVar6) + (uint)CARRY4(uVar7 + uVar6,uVar1);
  return (undefined4 *)0x0;
}

