// FUN_012840f8 @ 012840f8 size=228 calls_out=4 calls_in=2
// strings: 

void FUN_012840f8(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  uint *local_20;
  undefined1 *local_1c;
  
  local_28 = (undefined1 *)&local_30;
  local_2c = param_2[2];
  local_30 = 9;
  if (local_2c < 9) {
    local_20 = &local_2c;
    local_1c = &LAB_01a6a304;
    local_24 = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005a420c,&local_28,&DAT_01c25ba8);
  }
  if ((param_2[3] & 1) == 0) {
    puVar2 = (uint *)(param_2[3] + 0x10);
    do {
      uVar3 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar3 + 1;
    if (uVar3 < 0x80000000) goto LAB_01284158;
    FUN_0128479c();
  }
  FUN_01283f5c(param_2,2);
LAB_01284158:
  local_28 = (undefined1 *)*param_2;
  local_24 = (undefined1 *)param_2[1];
  local_20 = (uint *)param_2[2];
  local_1c = (undefined1 *)param_2[3];
  FUN_01283ef4(&local_28,9);
  uVar3 = param_2[1];
  if (8 < uVar3) {
    uVar3 = 9;
  }
  param_2[1] = uVar3;
  param_2[2] = 9;
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  param_1[3] = local_1c;
  return;
}

