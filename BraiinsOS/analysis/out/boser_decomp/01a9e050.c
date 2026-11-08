// FUN_01a9e050 @ 01a9e050 size=212 calls_out=1 calls_in=3
// strings: 

void FUN_01a9e050(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  iVar3 = 10;
  uVar1 = param_1 << 3;
  do {
    if (uVar1 >> 7 == 0) {
      local_23 = (byte)uVar1;
      FUN_01ac6cbc(param_3,&local_23,1);
      break;
    }
    local_24 = (byte)uVar1 | 0x80;
    FUN_01ac6cbc(param_3,&local_24,1);
    iVar3 = iVar3 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar3 != 0);
  uVar1 = (int)param_2 >> 0x1f;
  iVar3 = 10;
  do {
    uVar2 = param_2 >> 7 | uVar1 << 0x19;
    local_21 = (byte)param_2;
    if (uVar2 == 0 && uVar1 >> 7 == 0) {
      FUN_01ac6cbc(param_3,&local_21,1);
      return;
    }
    local_22 = local_21 | 0x80;
    uVar1 = uVar1 >> 7;
    FUN_01ac6cbc(param_3,&local_22,1);
    iVar3 = iVar3 + -1;
    param_2 = uVar2;
  } while (iVar3 != 0);
  return;
}

