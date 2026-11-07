// FUN_01016968 @ 01016968 size=140 calls_out=1 calls_in=2
// strings: 

void FUN_01016968(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 local_23;
  byte local_22;
  byte local_21;
  
  local_23 = 8;
  FUN_01284394(param_3,&local_23,1);
  iVar2 = 10;
  do {
    uVar1 = param_1 >> 7 | param_2 << 0x19;
    local_21 = (byte)param_1;
    if (uVar1 == 0 && param_2 >> 7 == 0) {
      FUN_01284394(param_3,&local_21,1);
      return;
    }
    local_22 = local_21 | 0x80;
    param_2 = param_2 >> 7;
    FUN_01284394(param_3,&local_22,1);
    iVar2 = iVar2 + -1;
    param_1 = uVar1;
  } while (iVar2 != 0);
  return;
}

