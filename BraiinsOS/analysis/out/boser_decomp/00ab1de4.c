// FUN_00ab1de4 @ 00ab1de4 size=512 calls_out=11 calls_in=1
// strings: Over `u32::MAX` routes created. If you need this; please file an issue. | path wasn't matched so endpoint shouldn't exist

void FUN_00ab1de4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 *local_e4;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0070d58c(&local_11c,*(int *)(param_1 + 0x20) + 8,param_2,param_3);
  if (local_11c == (undefined4 *)0x0) {
    uVar3 = FUN_0070d26c(*(undefined1 *)(param_1 + 0x28),param_2,param_3);
    if ((int)uVar3 != 0) {
      FUN_00ab2094(param_4);
      local_30 = (undefined4 *)0x80000000;
LAB_00ab1fb8:
      local_e4 = local_30;
      local_e0 = uVar3;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("path wasn\'t matched so endpoint shouldn\'t exist",0x2f,&local_e4,&DAT_01c0ff98,
                   &DAT_01d2ccb8);
    }
    iVar2 = *(uint *)(param_1 + 0x24) + 1;
    if (0xfffffffe < *(uint *)(param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Over `u32::MAX` routes created. If you need this, please file an issue.",0x47,
                   &DAT_01d2cca8);
    }
    *(int *)(param_1 + 0x24) = iVar2;
    local_58 = param_2;
    local_54 = param_3;
    uVar1 = FUN_00ff7120((int *)(param_1 + 0x20));
    FUN_01a65fd0(&local_50,uVar1,param_2,param_3,iVar2);
    if (local_50 != -0x7ffffffd) {
      local_e0._4_4_ = &local_40;
      local_40 = local_50;
      local_3c = uStack_4c;
      uStack_38 = uStack_48;
      local_e4 = &local_58;
      local_d8 = &LAB_015a6eb0;
      local_e0._0_4_ = &LAB_01674ec4;
      FUN_00664898(&local_30,&DAT_005b5ab7,&local_e4);
      uVar3 = CONCAT44(uStack_28,uStack_2c);
      if (-1 < local_40) {
        FUN_019bb7e0(local_40,local_3c);
      }
      if (local_30 != (undefined4 *)0x80000000) {
        FUN_00ab2094(param_4);
        if (local_30 == (undefined4 *)0x80000001) {
          return;
        }
        goto LAB_00ab1fb8;
      }
    }
    FUN_00ab20ac(&local_e4,param_1,iVar2,param_4);
    if (local_e4 != (undefined4 *)&SUB_00000004) {
      FUN_00ab2094(&local_e4);
    }
  }
  else {
    FUN_00ab20ac(&local_e4,param_1,*local_11c,param_4);
    if (local_e4 != (undefined4 *)&SUB_00000004) {
      FUN_00ab2094(&local_e4);
    }
    if (local_118 == 0) {
      FUN_0134aee0(local_114,local_110,4,0x10);
      return;
    }
  }
  return;
}

