// FUN_008c549c @ 008c549c size=236 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_008c549c(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int local_48;
  undefined4 local_44;
  undefined4 local_3c;
  char *local_38;
  undefined1 *local_34;
  char *local_30;
  undefined1 *local_2c;
  char *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  
  if (*param_1 == '\x01') {
    local_3c = *(undefined4 *)(param_1 + 4);
    local_30 = param_1 + 8;
    local_38 = (char *)&local_3c;
    puVar2 = &DAT_0057717d;
    local_2c = &LAB_00fac484;
  }
  else {
    local_38 = param_1 + 8;
    puVar2 = &DAT_00599d46;
  }
  local_34 = &LAB_00fac484;
  FUN_00600d2c(&local_48,puVar2,&local_38);
  local_28 = param_1 + 0x14;
  local_30 = param_1 + 0x10;
  local_38 = param_1 + 0xc;
  local_1c = &DAT_006043a8;
  local_24 = &LAB_00fac484;
  local_2c = &LAB_00fac484;
  local_34 = &LAB_00fac484;
  local_20 = (undefined1 *)&local_48;
  uVar1 = FUN_00fa948c(*param_2,param_2[1],&DAT_00588dc7,&local_38);
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
  return uVar1;
}

