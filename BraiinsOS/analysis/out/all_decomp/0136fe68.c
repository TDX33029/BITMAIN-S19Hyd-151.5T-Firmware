// FUN_0136fe68 @ 0136fe68 size=664 calls_out=9 calls_in=2
// strings: 

void FUN_0136fe68(undefined4 param_1,undefined1 *param_2)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  uint local_14;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    FUN_01394948(&local_30,param_2,0,0x10ffff);
    local_34 = 0;
    goto LAB_01370034;
  case 1:
    FUN_013946c8(&local_30,0xff00);
    local_34 = 1;
LAB_01370034:
    FUN_01376278(param_1,&local_34);
    return;
  case 2:
    FUN_01394948(&local_20,param_2,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4));
    FUN_013e10d4(&local_20);
    local_34 = 0;
    goto LAB_013700dc;
  case 3:
    local_1c = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (local_1c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x10);
    }
    local_1c[3] = 0x10ffff;
    *local_1c = 0;
    local_1c[1] = 9;
    local_1c[2] = 0xb;
    local_14 = local_14 & 0xffffff00;
    local_18 = 2;
    local_20 = 2;
    FUN_013944d0(&local_20);
    goto LAB_0136ffac;
  case 4:
    local_1c = (undefined4 *)thunk_FUN_016d4a50(0x18);
    if (local_1c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x18);
    }
    local_1c[1] = 9;
    local_1c[2] = 0xb;
    *local_1c = 0;
    local_1c[3] = 0xc;
    local_1c[4] = 0xe;
    local_1c[5] = 0x10ffff;
    local_14 = local_14 & 0xffffff00;
    local_18 = 3;
    local_20 = 3;
    FUN_013944d0(&local_20);
LAB_0136ffac:
    local_34 = 0;
    goto LAB_013700dc;
  case 5:
    FUN_013946c8(&local_20,CONCAT11(param_2[1],param_2[1]));
    FUN_013dff54(&local_20);
    break;
  case 6:
    local_1c = (undefined4 *)thunk_FUN_016d4a50(4);
    if (local_1c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    *local_1c = 0xff0b0900;
    local_14 = local_14 & 0xffffff00;
    local_18 = 2;
    local_20 = 2;
    FUN_01394744(&local_20);
    break;
  case 7:
    local_1c = (undefined4 *)thunk_FUN_016d4a50(6);
    if (local_1c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,6);
    }
    *(undefined2 *)(local_1c + 1) = 0xff0e;
    *local_1c = 0xc0b0900;
    local_14 = local_14 & 0xffffff00;
    local_18 = 3;
    local_20 = 3;
    FUN_01394744(&local_20);
  }
  local_34 = 1;
LAB_013700dc:
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = local_18;
  local_24 = local_14;
  FUN_01376278(param_1,&local_34);
  return;
}

