// FUN_01aa90ac @ 01aa90ac size=96 calls_out=1 calls_in=1
// strings: 

bool FUN_01aa90ac(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  do {
    pbVar3 = pbVar2;
    if (pbVar3 == (byte *)param_1[1]) break;
    bVar1 = *pbVar3;
    *param_1 = pbVar3 + 1;
    if ((char)bVar1 < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c((uint)bVar1,0x80,&DAT_01d2e628);
    }
    pbVar2 = pbVar3 + 1;
  } while ((""[bVar1] & 0x20U) != 0);
  return pbVar3 != (byte *)param_1[1];
}

