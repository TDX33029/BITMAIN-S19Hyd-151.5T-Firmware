// FUN_01429e70 @ 01429e70 size=172 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01429e70(undefined4 *param_1,uint param_2)

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
    uVar6 = 1;
  }
  else {
    uVar3 = (undefined1)param_2;
    uVar1 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_c = (CONCAT11(uVar3,uVar1) & 0x3fff | 0x8000) | 0xc0;
      uVar6 = 2;
    }
    else {
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
    }
  }
  FUN_01ac6cbc(*param_1,&local_c,uVar6);
  return 0;
}

