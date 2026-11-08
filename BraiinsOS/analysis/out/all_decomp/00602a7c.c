// FUN_00602a7c @ 00602a7c size=152 calls_out=1 calls_in=0
// strings: 

void FUN_00602a7c(int param_1,undefined4 *param_2)

{
  undefined1 local_21;
  undefined1 *local_20;
  code *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_20 = (undefined1 *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    local_21 = *(undefined1 *)(param_1 + 0x11);
    local_14 = &LAB_00fac484;
    local_1c = FUN_00fac0c8;
    local_18 = local_20;
    local_20 = &local_21;
    FUN_00fa948c(*param_2,param_2[1],&DAT_00576294,&local_20);
    return;
  }
  local_1c = (code *)&LAB_00fac484;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00595352,&local_20);
  return;
}

