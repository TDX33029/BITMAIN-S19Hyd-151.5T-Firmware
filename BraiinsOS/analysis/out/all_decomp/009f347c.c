// FUN_009f347c @ 009f347c size=188 calls_out=1 calls_in=0
// strings: 

void FUN_009f347c(undefined4 param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint3 uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint local_c;
  
  if (param_2 < 0x80) {
    local_c = param_2 & 0xff;
    FUN_014be128(param_1,&local_c,1);
    return;
  }
  uVar3 = (undefined1)param_2;
  uVar1 = (undefined1)(param_2 >> 6);
  if (param_2 < 0x800) {
    local_c = (CONCAT11(uVar3,uVar1) & 0x3fff | 0x8000) | 0xc0;
    FUN_014be128(param_1,&local_c,2);
    return;
  }
  bVar2 = (byte)(param_2 >> 0xc);
  if (param_2 >> 0x10 == 0) {
    bVar5 = bVar2 | 0xe0;
    uVar4 = (CONCAT11(uVar3,uVar1) & 0xff3f | 0x80) & 0xff3fff | 0x8000;
    uVar6 = 3;
  }
  else {
    uVar6 = 4;
    bVar5 = (byte)(param_2 >> 0x12) | 0xf0;
    uVar4 = CONCAT21(CONCAT11(uVar3,uVar1),bVar2) & 0x3f3f3f | 0x808080;
  }
  local_c = CONCAT31(uVar4,bVar5);
  FUN_014be128(param_1,&local_c,uVar6);
  return;
}

