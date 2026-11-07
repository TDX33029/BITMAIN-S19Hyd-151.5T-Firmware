// FUN_0130978c @ 0130978c size=224 calls_out=1 calls_in=0
// strings: 

bool FUN_0130978c(uint *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint3 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_1c;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_1c = param_2 & 0xff;
    uVar7 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_1c = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar7 = 2;
    }
    else {
      bVar3 = (byte)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        bVar5 = bVar3 | 0xe0;
        uVar4 = (CONCAT11(uVar1,uVar2) & 0xff3f | 0x80) & 0xff3fff | 0x8000;
        uVar7 = 3;
      }
      else {
        uVar7 = 4;
        bVar5 = (byte)(param_2 >> 0x12) | 0xf0;
        uVar4 = CONCAT21(CONCAT11(uVar1,uVar2),bVar3) & 0x3f3f3f | 0x808080;
      }
      local_1c = CONCAT31(uVar4,bVar5);
    }
  }
  uVar6 = *param_1;
  uVar8 = uVar6 + uVar7;
  if (!CARRY4(uVar6,uVar7) && 0xf >= uVar8) {
    FUN_01bed4e2((int)param_1 + uVar6 + 4,&local_1c);
    *param_1 = uVar8;
  }
  return CARRY4(uVar6,uVar7) || 0xf < uVar8;
}

