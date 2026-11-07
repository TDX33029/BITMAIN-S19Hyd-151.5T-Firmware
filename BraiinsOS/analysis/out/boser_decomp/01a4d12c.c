// FUN_01a4d12c @ 01a4d12c size=196 calls_out=4 calls_in=1
// strings: 

void FUN_01a4d12c(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  
  uVar2 = param_2 - (param_2 >> 1);
  uVar3 = 0xa2c2;
  if (param_2 < 0xa2c2) {
    uVar3 = param_2;
  }
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  if (uVar3 < 0x31) {
    uVar3 = 0x30;
  }
  uVar4 = 0;
  iVar1 = uVar3 * 0xc0;
  if (0xaaaaaa < uVar2) {
LAB_01a4d178:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar1);
  }
  if (iVar1 == 0) {
    local_28 = 8;
    uVar3 = 0;
  }
  else {
    uVar4 = 8;
    local_28 = FUN_01298504(iVar1,8);
    if (local_28 == 0) goto LAB_01a4d178;
  }
  local_24 = 0;
  local_2c = uVar3;
  FUN_01a520f4(param_1,param_2,local_28,uVar3,param_2 < 0x41);
  FUN_01a4c988(&local_2c);
  return;
}

