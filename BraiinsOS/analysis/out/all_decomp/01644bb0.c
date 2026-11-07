// FUN_01644bb0 @ 01644bb0 size=312 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01644bb0(int *param_1,uint param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_1c;
  
  if (param_2 < 0x80) {
    local_1c = param_2 & 0xff;
    uVar6 = 1;
    cVar1 = (char)param_1[2];
  }
  else {
    uVar4 = (undefined1)param_2;
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_1c = (CONCAT11(uVar4,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar6 = 2;
      cVar1 = (char)param_1[2];
    }
    else {
      uVar3 = (undefined1)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        uVar6 = 3;
        local_1c = (CONCAT21(CONCAT11(uVar4,uVar2),uVar3) & 0x3fffff | 0x800000) & 0xffff3fff |
                   0x80e0;
        cVar1 = (char)param_1[2];
      }
      else {
        uVar6 = 4;
        local_1c = CONCAT31(CONCAT21(CONCAT11(uVar4,uVar2),uVar3),(char)(param_2 >> 0x12)) &
                   0x3f3f3fff | 0x808080f0;
        cVar1 = (char)param_1[2];
      }
    }
  }
  if (cVar1 != '\0') {
    return 0;
  }
  uVar8 = param_1[1];
  if (uVar6 <= uVar8) {
    iVar7 = *param_1;
    iVar5 = thunk_FUN_016dd50a(&local_1c,iVar7,uVar6);
    if (iVar5 == 0) {
      *param_1 = iVar7 + uVar6;
      param_1[1] = uVar8 - uVar6;
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return 0;
}

