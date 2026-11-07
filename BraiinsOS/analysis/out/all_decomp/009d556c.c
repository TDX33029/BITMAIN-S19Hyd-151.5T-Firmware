// FUN_009d556c @ 009d556c size=436 calls_out=4 calls_in=0
// strings: 

int FUN_009d556c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_65;
  int local_64;
  undefined4 local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 *local_34;
  int *local_30;
  code *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  
  iVar3 = param_1;
  if (param_2 != 0) {
    iVar3 = param_1 + 0x60;
  }
  local_65 = (undefined1)param_2;
  if (*(int *)(iVar3 + 8) == 0x3b9aca01) {
    (**(code **)(*(int *)(param_1 + 0xc4) + 0x18))(&local_64,*(undefined4 *)(param_1 + 0xc0));
    local_24 = &LAB_010f4f94;
    local_28 = &local_65;
    local_38 = param_1 + 200;
    local_2c = FUN_010f4f54;
    local_34 = &DAT_006043a8;
    local_30 = &local_64;
    FUN_00600d2c(&local_48,&DAT_0059154d,&local_38);
    iVar1 = thunk_FUN_016d4a50(0x14);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x14);
    }
    iVar2 = thunk_FUN_016d4a50(0x14);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x14);
    }
    local_34 = (undefined4 *)local_48;
    local_30 = (int *)uStack_44;
    local_2c = (code *)uStack_40;
    if (local_64 != 0) {
      thunk_FUN_016d3fb4(local_60);
    }
    if (*(int *)(iVar3 + 8) != 0x3b9aca01) {
      if (*(int *)(iVar3 + 0x38) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x3c));
      }
      if (*(int *)(iVar3 + 0x48) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x4c));
      }
      if (*(int *)(iVar3 + 0x20) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar3 + 0x24));
      }
    }
    *(undefined1 **)(iVar3 + 8) = &DAT_3b9aca00;
    *(undefined1 *)(iVar3 + 0x58) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 5;
    *(int *)(iVar3 + 0x3c) = iVar1;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined4 *)(iVar3 + 0x44) = 0;
    *(undefined4 *)(iVar3 + 0x48) = 5;
    *(int *)(iVar3 + 0x4c) = iVar2;
    *(undefined4 *)(iVar3 + 0x50) = 0;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(undefined1 *)(iVar3 + 0x34) = 0;
    *(undefined1 **)(iVar3 + 0x18) = &DAT_3b9aca00;
    *(int *)(iVar3 + 0x1c) = local_38;
    *(undefined4 **)(iVar3 + 0x20) = local_34;
    *(int **)(iVar3 + 0x24) = local_30;
    *(code **)(iVar3 + 0x28) = local_2c;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
  }
  return iVar3;
}

