// FUN_00e66bc0 @ 00e66bc0 size=564 calls_out=6 calls_in=2
// strings: 

void FUN_00e66bc0(int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *local_50;
  undefined4 *local_4c;
  int **local_48;
  undefined1 *local_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  int *local_20;
  code *local_1c;
  
  FUN_00efbe38(&local_50);
  if (local_50 != (undefined4 *)0x1) {
    local_34 = (int)local_44;
    local_38 = (int)local_48;
    if (local_44 == (undefined1 *)0x0) {
      switch(local_48) {
      case (int **)0x0:
        *param_1 = 5;
        param_1[1] = 0;
        return;
      case (int **)0x1:
        if (7 < (uint)param_2[1]) {
          uVar1 = *(undefined8 *)*param_2;
          param_2[1] = param_2[1] - 8;
          *param_2 = (undefined8 *)*param_2 + 1;
          *(undefined8 *)(param_1 + 2) = uVar1;
          *param_1 = 6;
          param_1[1] = 0;
          return;
        }
        local_48 = (int **)0x8;
        local_4c = (undefined4 *)0x2501;
        local_50 = (undefined4 *)0x80000000;
        puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        param_1[2] = (int)puVar2;
        *puVar2 = local_50;
        puVar2[1] = local_4c;
        puVar2[2] = local_48;
        *param_1 = 7;
        param_1[1] = 0;
        return;
      case (int **)0x2:
        FUN_00efc920(&local_50,param_2);
        if (local_50 == (undefined4 *)0x5 && local_4c == (undefined4 *)0x0) {
          param_1[1] = 0;
          *param_1 = 7;
          param_1[2] = (int)local_48;
          return;
        }
        *param_1 = (int)local_50;
        param_1[1] = (int)local_4c;
        param_1[2] = (int)local_48;
        param_1[3] = (int)local_44;
        param_1[4] = iStack_40;
        param_1[5] = iStack_3c;
        return;
      default:
        local_28 = (int)local_48;
        local_30 = CONCAT31(local_30._1_3_,1);
        local_48 = &local_20;
        local_50 = &local_30;
        local_24 = (int)local_44;
        local_1c = (code *)&DAT_018ab990;
        local_20 = (int *)&DAT_0187d080;
        local_44 = &LAB_0115452c;
        local_4c = (undefined4 *)&LAB_01579e10;
        local_4c = (undefined4 *)FUN_00e94644(&DAT_0058e458,&local_50);
      }
    }
    else {
      local_1c = FUN_00fac4cc;
      local_20 = &local_38;
      FUN_00600d2c(&local_30,&DAT_00584bb4,&local_20);
      local_4c = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (local_4c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *local_4c = local_30;
      local_4c[1] = uStack_2c;
      local_4c[2] = local_28;
    }
  }
  *param_1 = 7;
  param_1[1] = 0;
  param_1[2] = (int)local_4c;
  return;
}

