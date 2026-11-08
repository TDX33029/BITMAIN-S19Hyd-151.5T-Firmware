// FUN_00efd76c @ 00efd76c size=420 calls_out=6 calls_in=1
// strings: 

void FUN_00efd76c(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  code *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int **local_18;
  undefined1 *local_14;
  
  FUN_00efbe38(&local_20);
  if (local_20 != (undefined1 *)0x1) {
    local_2c = (int)local_14;
    local_30 = (int)local_18;
    if (local_14 == (undefined1 *)0x0) {
      switch(local_18) {
      case (int **)0x0:
        *param_1 = -0x80000000;
        return;
      case (int **)0x1:
        *param_1 = -0x7fffffff;
        return;
      case (int **)0x2:
        *param_1 = -0x7ffffffe;
        return;
      case (int **)0x3:
        goto switchD_00efd820_caseD_3;
      case (int **)0x4:
        *param_1 = (int)&DAT_80000004;
        return;
      default:
        local_38 = (int)local_18;
        local_40 = CONCAT31(local_40._1_3_,1);
        local_18 = &local_28;
        local_34 = (int)local_14;
        local_24 = (code *)&DAT_018ab990;
        local_28 = (int *)&DAT_0187d088;
        local_14 = &LAB_0115452c;
        local_1c = &LAB_01579e10;
        local_20 = (undefined1 *)&local_40;
        iVar2 = FUN_00e94644(&DAT_0058e458,&local_20);
        *param_1 = -0x7ffffffb;
        param_1[1] = iVar2;
        return;
      }
    }
    local_24 = FUN_00fac4cc;
    local_28 = &local_30;
    FUN_00600d2c(&local_40,&DAT_00584bb4,&local_28);
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar1 = local_40;
    puVar1[1] = uStack_3c;
    puVar1[2] = local_38;
    *param_1 = -0x7ffffffb;
    param_1[1] = (int)puVar1;
    return;
  }
LAB_00efd790:
  *param_1 = -0x7ffffffb;
  param_1[1] = (int)local_1c;
  return;
switchD_00efd820_caseD_3:
  FUN_00f16f58(&local_20,param_2);
  if (local_20 != (undefined1 *)0x80000000) {
    *param_1 = (int)local_20;
    param_1[1] = (int)local_1c;
    param_1[2] = (int)local_18;
    return;
  }
  goto LAB_00efd790;
}

