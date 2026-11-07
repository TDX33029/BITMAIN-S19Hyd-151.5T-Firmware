// FUN_01afd7e0 @ 01afd7e0 size=228 calls_out=2 calls_in=1
// strings: 

void FUN_01afd7e0(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  byte local_25;
  uint local_24;
  
  ppuVar2 = &PTR_01d3b2b0;
  uVar5 = 0;
  uVar4 = 0;
  local_24 = DAT_01d53560;
  uVar3 = 0;
  do {
    uVar6 = FUN_01afd780(param_1,&local_25,ppuVar2,uVar3);
    uVar1 = 0;
    if ((int)uVar6 == 0) goto LAB_01afd878;
    if (uVar4 >> 0x19 != 0) {
      uVar1 = 0;
      goto LAB_01afd878;
    }
    uVar3 = (uint)local_25;
    if ((uVar5 == 0 && uVar4 == 0) && (uVar1 = 0, uVar3 == 0x80)) goto LAB_01afd878;
    ppuVar2 = (undefined **)(uVar3 & 0x7f);
    uVar4 = uVar4 << 7 | uVar5 >> 0x19;
    uVar5 = (uint)ppuVar2 | uVar5 << 7;
  } while ((local_25 & 0x80) != 0);
  uVar1 = 1;
  *param_2 = uVar5;
  param_2[1] = uVar4;
LAB_01afd878:
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,(int)((ulonglong)uVar6 >> 0x20),local_24 ^ DAT_01d53560,0);
  }
  return;
}

