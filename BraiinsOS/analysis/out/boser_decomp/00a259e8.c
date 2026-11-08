// FUN_00a259e8 @ 00a259e8 size=536 calls_out=3 calls_in=2
// strings: 

void FUN_00a259e8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 4;
  local_44 = 4;
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_20 = 1;
  local_24 = 1;
  local_34 = 0x80000000;
  local_54 = 8;
  local_64 = 1;
  local_68 = 1;
  piVar2 = (int *)thunk_FUN_01be5118(0x50);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x50);
  }
  FUN_01bed4e2(piVar2,&local_68,0x50);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + 1;
  if (-1 < iVar3) {
    local_1c = 0;
    local_28 = 0;
    local_2c = 0;
    local_3c = 0;
    local_40 = 0;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_58 = 0;
    local_5c = 0;
    local_60 = 0;
    local_20 = 1;
    local_24 = 1;
    local_30 = 4;
    local_34 = 0x80000000;
    local_44 = 4;
    local_54 = 1;
    local_64 = 1;
    local_68 = 1;
    piVar4 = (int *)thunk_FUN_01be5118(0x50);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x50);
    }
    FUN_01bed4e2(piVar4,&local_68,0x50);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + 1;
    if (-1 < iVar3) {
      local_1c = 0;
      local_28 = 0;
      local_2c = 0;
      local_3c = 0;
      local_40 = 0;
      local_48 = 0;
      local_4c = 0;
      local_50 = 0;
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      local_20 = 1;
      local_24 = 1;
      local_30 = 4;
      local_34 = 0x80000000;
      local_44 = 4;
      local_54 = 4;
      local_64 = 1;
      local_68 = 1;
      puVar5 = (uint *)thunk_FUN_01be5118(0x50);
      if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x50);
      }
      FUN_01bed4e2(puVar5,&local_68,0x50);
      do {
        uVar6 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar6 + 1;
      if (uVar6 < 0x80000000) {
        *param_1 = (int)piVar2;
        param_1[1] = (int)piVar2;
        param_1[2] = (int)piVar4;
      }
      if (-1 < (int)uVar6) {
        param_1[3] = (int)piVar4;
        param_1[4] = (int)puVar5;
        param_1[5] = (int)puVar5;
        return;
      }
    }
  }
  software_udf(0xfdee,0xa25bd8);
  return;
}

