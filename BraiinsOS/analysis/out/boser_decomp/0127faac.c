// FUN_0127faac @ 0127faac size=212 calls_out=1 calls_in=0
// strings: 

void FUN_0127faac(undefined4 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_1c;
  undefined1 local_18 [4];
  uint *local_14;
  undefined4 local_10;
  
  local_30 = *param_1;
  uStack_2c = param_1[1];
  uStack_28 = param_1[2];
  uStack_24 = param_1[3];
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_1c = param_2 & 0xff;
    local_10 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_1c = (uint)(CONCAT11(uVar1,uVar2) & 0x3fff | 0x80c0);
      local_10 = 2;
    }
    else {
      uVar3 = (undefined1)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        local_10 = 3;
        local_1c = (CONCAT12(uVar1,CONCAT11(uVar2,uVar3)) & 0xff3fff | 0x80e0) & 0xff3fffff |
                   0x800000;
      }
      else {
        local_10 = 4;
        local_1c = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),(char)(param_2 >> 0x12)) &
                   0x3f3f3fff | 0x808080f0;
      }
    }
  }
  local_14 = &local_1c;
  local_18[0] = 5;
  FUN_01967538(local_18,&local_30,&DAT_01c25930);
  return;
}

