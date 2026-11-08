// FUN_01aa6a48 @ 01aa6a48 size=628 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01aa6a48(char param_1,byte *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *local_30;
  uint local_2c;
  byte *local_28;
  uint local_24;
  
  if (param_1 == '?') {
    FUN_014faff8(&local_30,param_2,param_3,0x23);
    if (local_30 == (byte *)0x0) {
      uVar4 = 0;
      pbVar8 = &DAT_00000001;
      pbVar5 = param_2;
      uVar7 = param_3;
    }
    else {
      uVar4 = local_24;
      pbVar5 = local_30;
      uVar7 = local_2c;
      pbVar8 = local_28;
    }
  }
  else {
    uVar7 = 0;
    pbVar5 = &DAT_00000001;
    uVar4 = param_3;
    pbVar8 = param_2;
  }
  while( true ) {
    FUN_014faff8(&local_30,pbVar5,uVar7,0x25);
    uVar3 = local_24;
    pbVar6 = local_28;
    if (local_30 == (byte *)0x0) break;
    if ((((local_2c != 0) && (iVar1 = FUN_01aa934c(), iVar1 == 0)) || (uVar3 < 2)) ||
       (((9 < *pbVar6 - 0x30 && (5 < (*pbVar6 & 0xdf) - 0x41)) ||
        ((9 < pbVar6[1] - 0x30 && (5 < (pbVar6[1] & 0xdf) - 0x41)))))) {
      return 5;
    }
    if ((uVar3 != 2) && ((char)pbVar6[2] < -0x40)) goto LAB_01aa6c98;
    uVar7 = uVar3 - 2;
    pbVar5 = pbVar6 + 2;
  }
  iVar1 = FUN_01aa934c(pbVar5,uVar7);
  uVar2 = 5;
  if ((iVar1 != 0) && ((param_4 != 0 || (uVar2 = 7, uVar4 == 0)))) {
    while( true ) {
      FUN_014faff8(&local_30,pbVar8,uVar4,0x25);
      uVar3 = local_24;
      pbVar6 = local_28;
      if (local_30 == (byte *)0x0) break;
      if (((((local_2c != 0) && (iVar1 = FUN_01aa934c(), iVar1 == 0)) || (uVar3 < 2)) ||
          ((9 < *pbVar6 - 0x30 && (5 < (*pbVar6 & 0xdf) - 0x41)))) ||
         ((9 < pbVar6[1] - 0x30 && (5 < (pbVar6[1] & 0xdf) - 0x41)))) {
        return 6;
      }
      if ((uVar3 != 2) && ((char)pbVar6[2] < -0x40)) {
LAB_01aa6c98:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pbVar6,uVar3,2,uVar3,&DAT_01d2e658);
      }
      uVar4 = uVar3 - 2;
      pbVar8 = pbVar6 + 2;
    }
    iVar1 = FUN_01aa934c(pbVar8,uVar4);
    uVar2 = 6;
    if (iVar1 != 0) {
      uVar2 = 0xb;
    }
  }
  return uVar2;
}

