// FUN_01040124 @ 01040124 size=320 calls_out=5 calls_in=1
// strings: 

void FUN_01040124(undefined2 *param_1,ushort *param_2,undefined1 param_3)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint local_40;
  int local_3c;
  uint uStack_38;
  uint local_30;
  int local_2c;
  uint local_28;
  
  uVar3 = (uint)*param_2;
  if (uVar3 == 0) {
    local_2c = 1;
    local_30 = 0;
  }
  else {
    uVar2 = uVar3 << 1;
    local_2c = thunk_FUN_016d4a50(uVar2);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar2);
    }
    local_28 = 0;
    local_30 = uVar2;
    if (0x18 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,0x18,&DAT_01883548);
    }
    if (uVar2 < uVar3) {
      local_28 = 0;
      FUN_0104e980(&local_30,0,uVar3,1,1);
      local_40 = local_30;
      local_3c = local_2c;
      goto joined_r0x01040180;
    }
  }
  local_28 = 0;
  local_40 = local_30;
  local_3c = local_2c;
joined_r0x01040180:
  uVar2 = local_28;
  if (uVar3 != 0) {
    puVar1 = param_2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *(char *)(local_3c + uVar2) = (char)*puVar1;
      uVar2 = uVar2 + 1;
      *(undefined1 *)puVar1 = 0;
      puVar1 = (ushort *)((int)puVar1 + 1);
    } while (uVar3 != 0);
  }
  *param_2 = 0;
  if (uVar2 == local_40) {
    uStack_38 = uVar2;
    local_30 = local_40;
    local_2c = local_3c;
    FUN_006029c0(&local_40);
  }
  *(uint *)(param_1 + 2) = local_40;
  *(int *)(param_1 + 4) = local_3c;
  *(uint *)(param_1 + 6) = uVar2 + 1;
  *(undefined1 *)(local_3c + uVar2) = param_3;
  *param_1 = 1;
  return;
}

