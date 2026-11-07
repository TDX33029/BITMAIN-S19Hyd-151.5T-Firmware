// FUN_01049718 @ 01049718 size=328 calls_out=5 calls_in=6
// strings: Label requires a minimum length of 1

void FUN_01049718(undefined2 *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  char *local_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (param_3 == (char *)0x0) {
    local_60[2] = (char *)0x24;
    local_60[1] = "Label requires a minimum length of 1";
    local_60[0] = (char *)CONCAT22(local_60[0]._2_2_,0x10);
    iVar1 = thunk_FUN_016d4a50(0x44);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
  }
  else {
    if (param_3 < (char *)0x40) {
      if (param_3 < (char *)0x19) {
        uVar2 = 0;
        FUN_016dd606((char *)((int)local_60 + (int)param_3),0,0x18 - (int)param_3);
        FUN_016dd1aa(local_60,param_2,param_3);
        local_70 = local_60[3];
        uStack_6c = uStack_50;
        uStack_68 = uStack_4c;
      }
      else {
        iVar1 = thunk_FUN_016d4a50(param_3);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,param_3);
        }
        FUN_016dd1aa(iVar1,param_2,param_3);
        uVar2 = 1;
        local_60[0] = param_3;
        local_60[2] = param_3;
        local_60[1] = (char *)iVar1;
      }
      *(char **)(param_1 + 2) = local_60[0];
      *(char **)(param_1 + 4) = local_60[1];
      param_1[1] = (short)param_3;
      *param_1 = uVar2;
      *(char **)(param_1 + 6) = local_60[2];
      *(undefined4 *)(param_1 + 8) = local_70;
      *(undefined4 *)(param_1 + 10) = uStack_6c;
      *(undefined4 *)(param_1 + 0xc) = uStack_68;
      return;
    }
    local_60[0] = (char *)CONCAT22(local_60[0]._2_2_,0xc);
    local_60[1] = param_3;
    iVar1 = thunk_FUN_016d4a50(0x44);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
  }
  FUN_016dd1aa(iVar1,local_60,0x44);
  *(int *)(param_1 + 2) = iVar1;
  *param_1 = 2;
  return;
}

