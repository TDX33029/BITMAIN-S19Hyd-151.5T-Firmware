// FUN_012bb2c4 @ 012bb2c4 size=284 calls_out=2 calls_in=1
// strings: 

void FUN_012bb2c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 *local_2c;
  code *local_28;
  
  local_2c = &local_48;
  if (((param_5 != (char *)0x0) && (*param_5 == '\x03')) &&
     (iVar1 = *(int *)(param_5 + 0xc), iVar1 != 0)) {
    local_28 = (code *)&LAB_018a13b8;
    local_30 = &LAB_018a13b8;
    local_34 = (undefined4 *)&DAT_01ce271c;
    local_48 = param_1;
    uStack_44 = param_2;
    uStack_40 = param_4;
    FUN_012fa178(param_3,&DAT_01ce25b4,&DAT_00572469,&local_34);
    iVar2 = *(int *)(param_5 + 8);
    iVar3 = 0;
    do {
      if (iVar3 != 0) {
        FUN_012b2fd4(param_3,&DAT_00533bc1,2);
      }
      local_3c = *(undefined4 *)((iVar2 - iVar3) + 4);
      local_38 = *(undefined4 *)((iVar2 - iVar3) + 8);
      local_28 = FUN_012bb81c;
      local_30 = &DAT_012b5b4c;
      local_34 = &uStack_40;
      local_2c = &local_3c;
      FUN_012fa178(param_3,&DAT_01ce25b4,&DAT_004200d0,&local_34);
      iVar3 = iVar3 + -0xc;
    } while (iVar1 * -0xc != iVar3);
    FUN_012b2fd4(param_3,"]",1);
  }
  return;
}

