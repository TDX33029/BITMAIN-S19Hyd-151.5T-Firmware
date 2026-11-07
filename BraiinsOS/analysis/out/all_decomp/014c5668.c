// FUN_014c5668 @ 014c5668 size=264 calls_out=7 calls_in=0
// strings: 

void FUN_014c5668(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x278)) {
  case 0:
    FUN_016dd1aa(param_2 + 0x13c,param_2,0x13c);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6264);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6264);
  }
  iVar3 = param_2 + 0x13c;
  FUN_014c57f0(&local_30,iVar3,param_3);
  if (local_30 == (undefined4 *)0x3) {
    *param_1 = 4;
    *(undefined1 *)(param_2 + 0x278) = 3;
    return;
  }
  if (*(char *)(param_2 + 0x274) == '\x03') {
    iVar3 = param_2 + 0x1d8;
  }
  else if (*(char *)(param_2 + 0x274) != '\0') goto LAB_014c570c;
  FUN_014c5278(iVar3);
LAB_014c570c:
  if (local_30 == (undefined4 *)&SUB_00000002) {
    local_30 = puStack_2c;
    puStack_2c = (undefined4 *)uStack_28;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar1 = local_30;
    puVar1[1] = puStack_2c;
    uVar2 = 3;
    local_30 = puVar1;
    puStack_2c = &DAT_018a500c;
  }
  else {
    uVar2 = 2;
  }
  *param_1 = uVar2;
  param_1[1] = local_30;
  param_1[2] = puStack_2c;
  param_1[3] = uStack_28;
  param_1[4] = uStack_24;
  *(undefined1 *)(param_2 + 0x278) = 1;
  return;
}

