// FUN_00f98b94 @ 00f98b94 size=208 calls_out=4 calls_in=1
// strings: 

void FUN_00f98b94(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint local_20;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  if (0x7fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  puVar1 = (undefined1 *)thunk_FUN_016d4a50(param_2);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_2);
  }
  *puVar1 = 0x20;
  local_20 = 1;
  if (param_2 != 1) {
    uVar2 = param_2;
    local_20 = 1;
    do {
      uVar3 = local_20;
      FUN_016dd1aa(puVar1 + uVar3,puVar1,uVar3);
      bVar4 = 3 < uVar2;
      local_20 = uVar3 * 2;
      uVar2 = uVar2 >> 1;
    } while (bVar4);
    if (param_2 != local_20) {
      FUN_016dd1aa(puVar1 + local_20,puVar1,param_2 + uVar3 * -2);
      local_20 = param_2;
    }
  }
  *param_1 = param_2;
  param_1[1] = (uint)puVar1;
  param_1[2] = local_20;
  return;
}

