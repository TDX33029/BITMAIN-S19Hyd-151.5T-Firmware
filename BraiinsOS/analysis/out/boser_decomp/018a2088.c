// FUN_018a2088 @ 018a2088 size=224 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_018a2088(uint *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint3 uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_14;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    uVar7 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_14 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
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
      local_14 = CONCAT31(uVar4,bVar5);
    }
  }
  uVar8 = *param_1 | (uint)(param_1[1] < uVar7);
  *param_1 = uVar8;
  param_1[1] = param_1[1] - uVar7;
  uVar6 = 1;
  if (uVar8 == 0) {
    uVar6 = (**(code **)(((undefined4 *)param_1[2])[1] + 0xc))(*(undefined4 *)param_1[2],&local_14);
  }
  return uVar6;
}

