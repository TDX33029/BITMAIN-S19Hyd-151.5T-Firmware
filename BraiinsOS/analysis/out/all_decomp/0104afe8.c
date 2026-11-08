// FUN_0104afe8 @ 0104afe8 size=260 calls_out=4 calls_in=2
// strings: 

void FUN_0104afe8(uint *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  
  uVar3 = (uint)*param_2;
  local_28 = param_3 + uVar3;
  if ((int)local_28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_28);
  }
  if (local_28 == 0) {
    local_24 = 1;
    local_28 = 0;
  }
  else {
    local_24 = thunk_FUN_016d4a50(local_28);
    if (local_24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_28);
    }
  }
  local_20 = 0;
  if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,0x20,&DAT_01883548);
  }
  uVar1 = 0;
  if (local_28 < uVar3) {
    FUN_0104e980(&local_28,0,uVar3,1,1);
    uVar1 = local_20;
  }
  if (uVar3 != 0) {
    puVar2 = param_2 + 1;
    do {
      uVar3 = uVar3 - 1;
      *(char *)(local_24 + uVar1) = (char)*puVar2;
      uVar1 = uVar1 + 1;
      *(undefined1 *)puVar2 = 0;
      puVar2 = (ushort *)((int)puVar2 + 1);
    } while (uVar3 != 0);
  }
  *param_2 = 0;
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = uVar1;
  return;
}

