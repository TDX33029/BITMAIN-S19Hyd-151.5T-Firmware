// FUN_010bd934 @ 010bd934 size=224 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_010bd934(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_14;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    uVar5 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_14 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar5 = 2;
    }
    else {
      uVar3 = (undefined1)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        uVar5 = 3;
        local_14 = (CONCAT21(CONCAT11(uVar1,uVar2),uVar3) & 0x3fffff | 0x800000) & 0xffff3fff |
                   0x80e0;
      }
      else {
        uVar5 = 4;
        local_14 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),(char)(param_2 >> 0x12)) &
                   0x3f3f3fff | 0x808080f0;
      }
    }
  }
  uVar4 = *(uint *)(param_1 + 0x24);
  uVar6 = uVar4 + uVar5;
  if (CARRY4(uVar4,uVar5) || 0x1d < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar4,uVar6,0x1d,&DAT_01884bb4);
  }
  FUN_016dd1aa(param_1 + uVar4 + 0x28,&local_14);
  *(uint *)(param_1 + 0x24) = uVar6;
  return 0;
}

