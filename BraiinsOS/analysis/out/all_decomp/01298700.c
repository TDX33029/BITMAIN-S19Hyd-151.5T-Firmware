// FUN_01298700 @ 01298700 size=300 calls_out=6 calls_in=0
// strings: 

void FUN_01298700(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_48;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  uVar1 = *(uint *)(param_2 + 0x2c);
  local_2c = 0;
  local_30 = 0;
  local_34 = 1;
  local_48 = 0x80000000;
  local_44 = param_3;
  if (*(uint *)(param_2 + 0x28) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,*(uint *)(param_2 + 0x28),&DAT_01890988);
  }
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x24);
    iVar3 = uVar1 * 0x50;
    do {
      FUN_01298d30(iVar2);
      iVar2 = iVar2 + 0x50;
      iVar3 = iVar3 + -0x50;
    } while (iVar3 != 0);
  }
  FUN_012980c0(param_2);
  FUN_01297d60(&local_28,param_2,&local_48);
  if (local_28 == 4) {
    if (0x80000000 < local_48) {
      *param_1 = 4;
      return;
    }
    FUN_013287bc(&local_28,&local_48);
    if (local_28 == 4) {
      *param_1 = 4;
      goto joined_r0x012987fc;
    }
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
joined_r0x012987fc:
  if (((int)local_48 < 0) || (local_48 == 0)) {
    return;
  }
  thunk_FUN_016d3fb4(local_44);
  return;
}

