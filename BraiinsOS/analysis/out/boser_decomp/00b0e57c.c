// FUN_00b0e57c @ 00b0e57c size=32 calls_out=0 calls_in=0
// strings: 

bool FUN_00b0e57c(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)*(byte *)((int)param_1 + 0x59);
  bVar1 = false;
  bVar3 = uVar2 == 4;
  if (bVar3) {
    uVar2 = *param_1;
    param_4 = param_1[1];
  }
  if (bVar3 && (uVar2 == 0 && param_4 == 0)) {
    if (param_1[4] == 0 && param_1[5] == 0) {
      bVar1 = ((((param_1[8] == 0 && param_1[9] == 0) && param_1[0xc] == 0) && param_1[0xe] == 0) &&
              param_1[0x10] == 0) && param_1[0x12] == 0;
    }
    return bVar1;
  }
  return false;
}

