// FUN_0196191c @ 0196191c size=236 calls_out=4 calls_in=2
// strings: assertion failed: size <= max_allocError('')empty string; expected a semver versionunexpected character after wildcard in version reqexcessive number of version comparators1 element in sequence

void FUN_0196191c(uint *param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint local_20;
  uint local_1c;
  
  if (param_3 == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    if (param_3 < 9) {
      local_1c = 0;
      local_20 = 0;
      FUN_01bed4e2(&local_20,param_2,param_3);
    }
    else {
      uVar4 = param_3 + ((uint)((short)(0x26U - (short)LZCOUNT(param_3) & 0xff) * 0x25) >> 8);
      if (0x7ffffffd < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: size <= max_allocError(\"\")empty string, expected a semver versionunexpected character after wildcard in version reqexcessive number of version comparators1 element in sequence"
                     ,0x23,&DAT_01d27184);
      }
      pbVar1 = (byte *)FUN_01298504(uVar4,2);
      if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(2,uVar4);
      }
      pbVar2 = pbVar1;
      uVar4 = param_3;
      do {
        pbVar3 = pbVar2 + 1;
        *pbVar2 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        pbVar2 = pbVar3;
      } while (uVar4 != 0);
      FUN_01bed4e2(pbVar3,param_2,param_3);
      local_1c = 0;
      local_20 = (uint)pbVar1 >> 1 | 0x80000000;
    }
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  return;
}

