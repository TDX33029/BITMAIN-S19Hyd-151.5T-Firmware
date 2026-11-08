// FUN_01298584 @ 01298584 size=328 calls_out=8 calls_in=0
// strings: 

void FUN_01298584(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_44 = thunk_FUN_016d4a50(0x2000);
  if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x2000);
  }
  uVar1 = *(uint *)(param_2 + 0x2c);
  local_2c = 0;
  local_30 = 0x2000;
  uStack_40 = 0;
  local_48 = 0x2000;
  uStack_3c = param_3;
  uStack_38 = param_4;
  local_34 = local_44;
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
      goto joined_r0x01298694;
    }
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
joined_r0x01298694:
  if (((int)local_48 < 0) || (local_48 == 0)) {
    return;
  }
  thunk_FUN_016d3fb4(local_44);
  return;
}

