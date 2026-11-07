// FUN_00c04b50 @ 00c04b50 size=284 calls_out=2 calls_in=0
// strings: 

bool FUN_00c04b50(uint *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_24 = param_2 & 0xff;
    uVar5 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_24 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar5 = 2;
    }
    else {
      uVar3 = (undefined1)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        uVar5 = 3;
        local_24 = (CONCAT21(CONCAT11(uVar1,uVar2),uVar3) & 0x3fffff | 0x800000) & 0xffff3fff |
                   0x80e0;
      }
      else {
        uVar5 = 4;
        local_24 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),(char)(param_2 >> 0x12)) &
                   0x3f3f3fff | 0x808080f0;
      }
    }
  }
  FUN_008bbe24(&local_20,&local_24,uVar5);
  uVar7 = local_20 & 0xff;
  if (uVar7 != 4) {
    if (((char)*param_1 != '\x04') && ((char)*param_1 == '\x03')) {
      puVar6 = (undefined4 *)param_1[1];
      uVar5 = *puVar6;
      puVar8 = (undefined4 *)puVar6[1];
      pcVar4 = (code *)*puVar8;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar5);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      thunk_FUN_016d3fb4(puVar6);
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  return uVar7 != 4;
}

