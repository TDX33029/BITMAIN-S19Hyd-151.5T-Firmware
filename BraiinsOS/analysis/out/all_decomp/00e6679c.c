// FUN_00e6679c @ 00e6679c size=348 calls_out=5 calls_in=2
// strings: 

void FUN_00e6679c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  code *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 **local_18;
  undefined1 *local_14;
  
  FUN_00efbe38(&local_20);
  if (local_20 != (undefined4 *)0x1) {
    local_40 = local_18;
    iStack_3c = (int)local_14;
    if (local_14 == (undefined1 *)0x0) {
      switch(local_18) {
      case (undefined1 **)0x0:
        param_1[1] = 0;
        *param_1 = 0;
        return;
      case (undefined1 **)0x1:
        uVar1 = 1;
        break;
      case (undefined1 **)0x2:
        uVar1 = 2;
        break;
      case (undefined1 **)0x3:
        uVar1 = 3;
        break;
      case (undefined1 **)0x4:
        uVar1 = 4;
        break;
      default:
        local_30 = local_18;
        local_38 = CONCAT31(local_38._1_3_,1);
        local_18 = &local_28;
        local_20 = &local_38;
        local_2c = (int)local_14;
        local_24 = (code *)&DAT_018ab990;
        local_28 = &DAT_0187d088;
        local_14 = &LAB_0115452c;
        local_1c = (undefined4 *)&LAB_01579e10;
        local_1c = (undefined4 *)FUN_00e94644(&DAT_0058e458,&local_20);
        goto LAB_00e668bc;
      }
      param_1[1] = uVar1;
      *param_1 = 0;
      return;
    }
    local_24 = FUN_00fac4cc;
    local_28 = (undefined1 *)&local_40;
    FUN_00600d2c(&local_38,&DAT_00584bb4,&local_28);
    local_1c = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (local_1c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *local_1c = local_38;
    local_1c[1] = uStack_34;
    local_1c[2] = local_30;
  }
LAB_00e668bc:
  *(undefined4 **)(param_1 + 4) = local_1c;
  *param_1 = 1;
  return;
}

