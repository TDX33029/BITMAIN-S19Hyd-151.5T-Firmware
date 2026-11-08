// FUN_01291dd8 @ 01291dd8 size=316 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_01291dd8(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_2c;
  uint *local_28;
  code *local_24;
  
  uVar2 = (int)param_1 >> 0xd;
  uVar6 = (param_1 & 0x1fff) >> 3;
  local_2c = uVar2;
  if (0x2dc < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar6,0x2dd,&DAT_01d2a928);
  }
  bVar3 = ""[uVar6];
  if (uVar2 < 10000) {
    uVar1 = (uint)((short)((uVar2 & 0xffff) >> 2) * 0x147b) >> 0x11;
    iVar4 = FUN_0128891c(param_2,param_3,uVar1);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = FUN_0128891c(param_2,param_3,uVar2 + uVar1 * -100);
  }
  else {
    local_28 = &local_2c;
    local_24 = FUN_012fce60;
    iVar4 = FUN_012fa178(param_2,param_3,&DAT_00570b30,&local_28);
  }
  uVar7 = 1;
  if (iVar4 == 0) {
    pcVar5 = *(code **)(param_3 + 0x10);
    iVar4 = (*pcVar5)(param_2,0x2d);
    uVar7 = 1;
    if (iVar4 == 0) {
      iVar4 = FUN_0128891c(param_2,param_3,uVar6 + bVar3 >> 6);
      if ((iVar4 == 0) && (iVar4 = (*pcVar5)(param_2,0x2d), iVar4 == 0)) {
        uVar7 = FUN_0128891c(param_2,param_3,(uVar6 + bVar3 & 0x3f) >> 1);
      }
    }
  }
  return uVar7;
}

