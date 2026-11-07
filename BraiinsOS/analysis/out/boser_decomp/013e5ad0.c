// FUN_013e5ad0 @ 013e5ad0 size=644 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013e5ad0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *local_30;
  undefined1 *local_2c;
  code *local_28;
  
  local_2c = (undefined1 *)&local_30;
  local_30 = (int *)(param_1 + 0x50);
  uVar5 = *param_2;
  iVar4 = param_2[1];
  local_28 = FUN_013e5820;
  iVar1 = FUN_012fa178(uVar5,iVar4,&DAT_0058ea06,&local_2c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c) != -0x80000000) {
      local_28 = FUN_013d8f3c;
      local_30 = (int *)(param_1 + 0x3c);
      local_2c = (undefined1 *)&local_30;
      iVar1 = FUN_012fa178(uVar5,iVar4,&DAT_00588fe1,&local_2c);
      if (iVar1 != 0) {
        return 1;
      }
    }
    iVar1 = (**(code **)(iVar4 + 0xc))(uVar5,&DAT_0056fed8,8);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 8) != 0) {
        piVar3 = *(int **)(param_1 + 4);
        iVar1 = *(int *)(param_1 + 8) * 0x4c;
        do {
          local_28 = FUN_013cc05c;
          local_30 = piVar3;
          local_2c = (undefined1 *)&local_30;
          iVar2 = FUN_012fa178(uVar5,iVar4,&DAT_005bd5be,&local_2c);
          if (iVar2 != 0) {
            return 1;
          }
          piVar3 = piVar3 + 0x13;
          iVar1 = iVar1 + -0x4c;
        } while (iVar1 != 0);
      }
      if ((*(char *)(param_1 + 0x60) == '\0') && (*(char *)(param_1 + 0x54) != '\x03')) {
        return 0;
      }
      local_30 = (int *)CONCAT22(local_30._2_2_,*(undefined2 *)(param_1 + 0x5a));
      local_28 = FUN_012fcf18;
      local_2c = (undefined1 *)&local_30;
      iVar1 = FUN_012fa178(uVar5,iVar4,&DAT_005bd6ad,&local_2c);
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x14) != 0) {
          piVar3 = *(int **)(param_1 + 0x10);
          iVar1 = *(int *)(param_1 + 0x14) * 0xe8;
          do {
            local_28 = FUN_013cbe24;
            local_30 = piVar3;
            local_2c = (undefined1 *)&local_30;
            iVar2 = FUN_012fa178(uVar5,iVar4,&DAT_00582d7f,&local_2c);
            if (iVar2 != 0) {
              return 1;
            }
            piVar3 = piVar3 + 0x3a;
            iVar1 = iVar1 + -0xe8;
          } while (iVar1 != 0);
        }
        local_28 = FUN_012fcf18;
        local_2c = (undefined1 *)&local_30;
        local_30._0_2_ = *(undefined2 *)(param_1 + 0x5c);
        iVar1 = FUN_012fa178(uVar5,iVar4,&DAT_0059c102,&local_2c);
        if ((iVar1 == 0) &&
           (iVar1 = FUN_013e5d8c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                                 uVar5,iVar4), iVar1 == 0)) {
          local_30 = (int *)CONCAT22(local_30._2_2_,*(undefined2 *)(param_1 + 0x5e));
          local_28 = FUN_012fcf18;
          local_2c = (undefined1 *)&local_30;
          iVar1 = FUN_012fa178(uVar5,iVar4,&DAT_00592cd1,&local_2c);
          if (iVar1 == 0) {
            uVar5 = FUN_013e5d8c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                                 uVar5,iVar4);
            return uVar5;
          }
          return 1;
        }
      }
    }
  }
  return 1;
}

