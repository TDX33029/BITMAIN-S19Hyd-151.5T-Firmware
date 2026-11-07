// FUN_00fba14c @ 00fba14c size=308 calls_out=4 calls_in=1
// strings: 

void FUN_00fba14c(undefined4 **param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 ***local_48;
  undefined1 *local_44;
  int **local_40;
  code *local_3c;
  undefined4 **local_2c;
  undefined2 local_26;
  int **local_24;
  undefined1 *local_20;
  undefined2 *local_1c;
  code *local_18;
  undefined1 uStack_11;
  
  if ((*(byte *)((int)param_2 + 0xb) & 0x18) == 0) {
    local_2c = (undefined4 **)CONCAT22(local_2c._2_2_,*(undefined2 *)(param_1 + 1));
    local_3c = FUN_00fac370;
    local_40 = (int **)&local_2c;
    local_48 = &local_24;
    local_44 = &LAB_00fba2ac;
    local_24 = param_1;
    FUN_00fa948c(*param_2,param_2[1],&DAT_005988a1,&local_48);
    return;
  }
  local_48 = (undefined4 ***)0x0;
  local_26 = *(undefined2 *)(param_1 + 1);
  local_1c = &local_26;
  local_20 = &LAB_00fba2ac;
  local_18 = FUN_00fac370;
  local_24 = (int **)&local_2c;
  local_2c = param_1;
  iVar1 = FUN_00fa948c(&local_48,&DAT_0188133c,&DAT_005988a1,&local_24);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_11,&DAT_018811fc,&DAT_0188136c);
  }
  if ((int **)0x15 < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_48,0x15,&DAT_018812f4);
  }
  FUN_00faace8(param_2,&local_44);
  return;
}

