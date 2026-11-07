// FUN_012b116c @ 012b116c size=136 calls_out=1 calls_in=1
// strings: 

int FUN_012b116c(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)*param_1;
    puVar2 = (undefined4 *)param_1[1];
    do {
      if (puVar1 == puVar2) {
        return param_2;
      }
      local_30 = *puVar1;
      local_2c = puVar1[1];
      puVar1 = puVar1 + 2;
      *param_1 = puVar1;
      local_3c = 0x80000000;
      local_28 = 0;
      local_40 = 0;
      uStack_48 = 0;
      uStack_44 = 4;
      FUN_01298818(&uStack_48);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

