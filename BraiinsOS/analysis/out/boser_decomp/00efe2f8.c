// FUN_00efe2f8 @ 00efe2f8 size=140 calls_out=1 calls_in=5
// strings: 

void FUN_00efe2f8(char param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  char local_23;
  byte local_22;
  byte local_21;
  
  local_23 = param_1 << 3;
  FUN_01284394(param_5,&local_23,1);
  iVar1 = 10;
  do {
    uVar2 = param_3 >> 7 | param_4 << 0x19;
    local_21 = (byte)param_3;
    if (uVar2 == 0 && param_4 >> 7 == 0) {
      FUN_01284394(param_5,&local_21,1);
      return;
    }
    local_22 = local_21 | 0x80;
    param_4 = param_4 >> 7;
    FUN_01284394(param_5,&local_22,1);
    iVar1 = iVar1 + -1;
    param_3 = uVar2;
  } while (iVar1 != 0);
  return;
}

