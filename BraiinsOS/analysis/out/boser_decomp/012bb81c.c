// FUN_012bb81c @ 012bb81c size=352 calls_out=2 calls_in=0
// strings: 

void FUN_012bb81c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  iVar2 = param_1[1];
  pbVar7 = (byte *)*param_1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    pbVar4 = pbVar7;
    do {
      pbVar5 = pbVar4 + 1;
      uVar6 = (uint)*pbVar4;
      if (0x7fffffff < (uint)(int)(char)*pbVar4) {
        if (uVar6 < 0xe0) {
          uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
          pbVar5 = pbVar4 + 2;
        }
        else {
          uVar3 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (uVar6 < 0xf0) {
            uVar6 = uVar3 | (uVar6 & 0x1f) << 0xc;
            pbVar5 = pbVar4 + 3;
          }
          else {
            pbVar5 = pbVar4 + 4;
            uVar6 = pbVar4[3] & 0x3f | uVar3 << 6 | (uVar6 & 7) << 0x12;
          }
        }
      }
      if ((uVar6 - 9 < 0x18) && ((1 << (uVar6 - 9 & 0xff) & 0x80001fU) != 0)) goto LAB_012bb950;
      if (0x7f < uVar6) {
        uVar3 = uVar6 >> 8;
        if (uVar3 < 0x20) {
          if (uVar3 == 0) {
            bVar1 = (&DAT_00533bcd)[uVar6 & 0xff] & 1;
            goto joined_r0x012bb934;
          }
          if ((uVar3 == 0x16) && (uVar6 == 0x1680)) goto LAB_012bb950;
        }
        else if (uVar3 == 0x20) {
          bVar1 = (&DAT_00533bcd)[uVar6 & 0xff] & 2;
joined_r0x012bb934:
          if (bVar1 != 0) {
LAB_012bb950:
            FUN_012fb170(pbVar7,iVar2,*param_2,param_2[1]);
            return;
          }
        }
        else if (uVar3 == 0x30 && uVar6 == 0x3000) goto LAB_012bb950;
      }
      pbVar4 = pbVar5;
    } while (pbVar5 != pbVar7 + iVar2);
  }
  FUN_012fb940(param_2,pbVar7,iVar2);
  return;
}

