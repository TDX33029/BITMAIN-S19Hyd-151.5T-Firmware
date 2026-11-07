// FUN_0109fc24 @ 0109fc24 size=728 calls_out=9 calls_in=3
// strings: 

void FUN_0109fc24(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  code *pcVar8;
  uint *puVar9;
  undefined1 auStack_a4 [64];
  int local_64;
  uint local_60;
  uint local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  int *local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  code *local_2c;
  uint *local_28;
  code *local_24;
  
  FUN_0109ff54(&local_30,param_2,param_3,auStack_a4,"");
  if (((uint)local_28 & 0xff) == 3) {
    *param_1 = 1;
    return;
  }
  if (((uint)local_28 & 0xff) == 2) {
    *(char *)(param_1 + 2) = (char)local_30;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (((uint)local_28 & 1) != 0) {
    FUN_00f5eea8(param_1 + 1,local_30,local_2c);
    *param_1 = 0;
    return;
  }
  if ((int)local_2c < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_2c);
  }
  iVar4 = 1;
  pcVar5 = (code *)0;
  if (local_2c != (code *)0x0) {
    iVar4 = thunk_FUN_016d4a50(local_2c);
    pcVar5 = local_2c;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_2c);
    }
  }
  local_60 = 0;
  uVar7 = 0x20 - LZCOUNT((uint)pcVar5 >> 10);
  if (6 < uVar7) {
    uVar7 = 7;
  }
  local_58 = (int *)(uVar7 << 2 | 1);
  local_64 = iVar4;
  local_5c = (uint)pcVar5;
  if (local_2c != (code *)0x0) {
    pcVar8 = local_2c;
    puVar9 = local_30;
    do {
      piVar3 = local_58;
      cVar1 = ""[(byte)*puVar9];
      if (cVar1 == '\0') {
        *param_1 = 1;
        if (((uint)local_58 & 1) != 0) {
          if (local_5c + ((uint)local_58 >> 5) == 0) {
            return;
          }
          thunk_FUN_016d3fb4(local_64 - ((uint)local_58 >> 5));
          return;
        }
        piVar6 = local_58 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar4 + -1;
        if (iVar4 != 1) {
          return;
        }
        DataMemoryBarrier(0xb);
        if (*local_58 != 0) {
          thunk_FUN_016d3fb4(local_58[1]);
        }
        thunk_FUN_016d3fb4(piVar3);
        return;
      }
      if (pcVar5 == (code *)local_60) {
        FUN_00f5f538(&local_64,1);
        *(char *)(local_64 + local_60) = cVar1;
        iVar4 = local_64;
        pcVar5 = (code *)local_5c;
        if (local_5c == local_60) {
          local_2c = (code *)0x0;
          local_30 = (uint *)0x1;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_30);
        }
      }
      else {
        *(char *)(iVar4 + local_60) = cVar1;
      }
      local_60 = local_60 + 1;
      pcVar8 = (code *)((int)pcVar8 - 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    } while (pcVar8 != (code *)0x0);
  }
  piVar3 = local_58;
  if (((uint)local_58 & 1) == 0) {
    local_48 = &DAT_018ad580;
  }
  else {
    local_50 = local_64 - ((uint)local_58 >> 5);
    local_54 = local_5c + ((uint)local_58 >> 5);
    local_4c = local_60 + ((uint)local_58 >> 5);
    FUN_00f5ef18(&local_48,&local_54);
    local_38 = (uint)piVar3 >> 5;
    if (local_40 < (uint)piVar3 >> 5) {
      local_28 = &local_34;
      local_34 = local_40;
      local_24 = FUN_007883b8;
      local_2c = FUN_007883b8;
      local_30 = &local_38;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00584155,&local_30,&DAT_018a6700);
    }
    local_60 = local_40 - local_38;
    local_64 = local_44 + local_38;
    local_58 = local_3c;
  }
  param_1[1] = local_48;
  *param_1 = 0;
  param_1[2] = local_64;
  param_1[3] = local_60;
  param_1[4] = local_58;
  return;
}

