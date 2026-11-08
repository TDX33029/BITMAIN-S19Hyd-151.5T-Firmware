// FUN_00efc9fc @ 00efc9fc size=140 calls_out=1 calls_in=26
// strings: 

void FUN_00efc9fc(char param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  char local_23;
  byte local_22;
  byte local_21;
  
  local_23 = param_1 << 3;
  FUN_01284394(param_3,&local_23,1);
  iVar1 = 10;
  do {
    local_21 = (byte)param_2;
    if (param_2 >> 7 == 0) {
      FUN_01284394(param_3,&local_21,1);
      return;
    }
    local_22 = local_21 | 0x80;
    FUN_01284394(param_3,&local_22,1);
    iVar1 = iVar1 + -1;
    param_2 = param_2 >> 7;
  } while (iVar1 != 0);
  return;
}

