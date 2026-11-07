// FUN_0110e2c4 @ 0110e2c4 size=124 calls_out=1 calls_in=0
// strings: 

void FUN_0110e2c4(byte *param_1,undefined4 *param_2)

{
  char cVar1;
  byte *local_14;
  byte **local_10;
  undefined1 *local_c;
  
  cVar1 = '\x01';
  if (5 < *param_1) {
    cVar1 = *param_1 - 6;
  }
  if (cVar1 == '\0') {
    local_c = &LAB_0076dae8;
  }
  else {
    if (cVar1 == '\x01') {
      local_c = &LAB_0110eb28;
      goto LAB_0110e314;
    }
    local_c = &LAB_008b9b38;
  }
  param_1 = param_1 + 4;
LAB_0110e314:
  local_10 = &local_14;
  local_14 = param_1;
  FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_10);
  return;
}

