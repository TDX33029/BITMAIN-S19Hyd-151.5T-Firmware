// FUN_01961774 @ 01961774 size=120 calls_out=1 calls_in=1
// strings: 

uint FUN_01961774(undefined4 *param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int local_c;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    uVar3 = 1;
    uVar1 = (uint)*(byte *)(param_1 + 1) << 8;
  }
  else {
    local_c = param_1[1];
    if (local_c != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_c,&DAT_005288a8,0);
    }
    uVar1 = (uint)pbVar2[1] << 0x10 | (uint)*pbVar2 << 0x18;
    uVar3 = 0;
  }
  return uVar1 | uVar3;
}

