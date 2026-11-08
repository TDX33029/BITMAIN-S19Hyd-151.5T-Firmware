// FUN_01aa98bc @ 01aa98bc size=260 calls_out=3 calls_in=3
// strings: 

undefined4 FUN_01aa98bc(byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  byte *local_18;
  uint local_14;
  
  while( true ) {
    FUN_014faff8(&local_20,param_1,param_2,0x25);
    uVar2 = local_14;
    pbVar1 = local_18;
    if (local_20 == 0) {
      uVar4 = FUN_01aa917c(param_1,param_2);
      return uVar4;
    }
    if (local_1c == 0) {
      if (local_14 < 2) {
        return 0;
      }
    }
    else {
      iVar3 = FUN_01aa917c();
      if (iVar3 == 0 || uVar2 < 2) {
        return 0;
      }
    }
    if (((9 < *pbVar1 - 0x30) && (5 < (*pbVar1 & 0xdf) - 0x41)) ||
       ((9 < pbVar1[1] - 0x30 && (5 < (pbVar1[1] & 0xdf) - 0x41)))) break;
    if ((uVar2 != 2) && ((char)pbVar1[2] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(pbVar1,uVar2,2,uVar2,&DAT_01d2e658);
    }
    param_2 = uVar2 - 2;
    param_1 = pbVar1 + 2;
  }
  return 0;
}

