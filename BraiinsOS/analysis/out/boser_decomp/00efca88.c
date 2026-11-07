// FUN_00efca88 @ 00efca88 size=140 calls_out=1 calls_in=16
// strings: 

void FUN_00efca88(char param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char local_23;
  byte local_22;
  byte local_21;
  
  local_23 = param_1 << 3;
  FUN_01284394(param_3,&local_23,1);
  uVar3 = (int)param_2 >> 0x1f;
  iVar2 = 10;
  do {
    uVar1 = param_2 >> 7 | uVar3 << 0x19;
    local_21 = (byte)param_2;
    if (uVar1 == 0 && uVar3 >> 7 == 0) {
      FUN_01284394(param_3,&local_21,1);
      return;
    }
    local_22 = local_21 | 0x80;
    uVar3 = uVar3 >> 7;
    FUN_01284394(param_3,&local_22,1);
    iVar2 = iVar2 + -1;
    param_2 = uVar1;
  } while (iVar2 != 0);
  return;
}

