// FUN_01283fd8 @ 01283fd8 size=212 calls_out=4 calls_in=74
// strings: 

void FUN_01283fd8(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  local_30 = (undefined1 *)&local_38;
  local_34 = param_2[1];
  local_38 = param_3;
  if (local_34 < param_3) {
    local_28 = &local_34;
    local_24 = &LAB_01a6a304;
    local_2c = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005b26c0,&local_30,&DAT_01c25b98);
  }
  if ((param_2[3] & 1) == 0) {
    puVar2 = (uint *)(param_2[3] + 0x10);
    do {
      uVar3 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar3 + 1;
    if (uVar3 < 0x80000000) goto LAB_01284038;
    FUN_0128479c();
  }
  FUN_01283f5c(param_2,2);
LAB_01284038:
  local_30 = (undefined1 *)*param_2;
  local_2c = (undefined1 *)param_2[1];
  local_28 = (uint *)param_2[2];
  local_24 = (undefined1 *)param_2[3];
  FUN_01283ef4(param_2,param_3);
  *param_1 = local_30;
  param_1[1] = param_3;
  param_1[2] = param_3;
  param_1[3] = local_24;
  return;
}

