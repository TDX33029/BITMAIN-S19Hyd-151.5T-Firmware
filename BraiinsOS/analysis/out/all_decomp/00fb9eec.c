// FUN_00fb9eec @ 00fb9eec size=528 calls_out=4 calls_in=1
// strings: 

void FUN_00fb9eec(undefined4 **param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 ***local_7c;
  undefined1 *local_78;
  int **local_74;
  code *local_70;
  int *local_6c;
  code *local_68;
  undefined4 *local_3c;
  undefined4 **local_38;
  undefined2 local_32;
  int **local_30;
  undefined1 *local_2c;
  int *local_28;
  code *local_24;
  undefined2 *local_20;
  code *local_1c;
  
  if ((*(byte *)((int)param_2 + 0xb) & 0x18) == 0) {
    local_30 = param_1;
    if (param_1[5] == (int *)0x0) {
      local_38 = (undefined4 **)CONCAT22(local_38._2_2_,*(undefined2 *)(param_1 + 6));
      local_70 = FUN_00fac370;
      local_74 = (int **)&local_38;
      local_7c = &local_30;
      local_78 = &LAB_00fb9a90;
      FUN_00fa948c(*param_2,param_2[1],&DAT_00582f96,&local_7c);
      return;
    }
    local_3c = (undefined4 *)CONCAT22(local_3c._2_2_,*(undefined2 *)(param_1 + 6));
    local_68 = FUN_00fac370;
    local_6c = (int *)&local_3c;
    local_74 = (int **)&local_38;
    local_70 = (code *)&LAB_00fac484;
    local_7c = &local_30;
    local_78 = &LAB_00fb9a90;
    local_38 = (undefined4 **)param_1[5];
    FUN_00fa948c(*param_2,param_2[1],&DAT_00584221,&local_7c);
    return;
  }
  local_7c = (undefined4 ***)0x0;
  if (param_1[5] == (undefined4 *)0x0) {
    local_3c = (undefined4 *)CONCAT22(local_3c._2_2_,*(undefined2 *)(param_1 + 6));
    puVar2 = &DAT_00582f96;
    local_24 = FUN_00fac370;
  }
  else {
    local_32 = *(undefined2 *)(param_1 + 6);
    puVar2 = &DAT_00584221;
    local_20 = &local_32;
    local_1c = FUN_00fac370;
    local_24 = (code *)&LAB_00fac484;
    local_3c = param_1[5];
  }
  local_28 = (int *)&local_3c;
  local_2c = &LAB_00fb9a90;
  local_30 = (int **)&local_38;
  local_38 = param_1;
  iVar1 = FUN_00fa948c(&local_7c,&DAT_01881354,puVar2,&local_30);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_018811fc,&DAT_0188137c);
  }
  if ((int **)0x3a < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_7c,0x3a,&DAT_018812f4);
  }
  FUN_00faace8(param_2,&local_78);
  return;
}

