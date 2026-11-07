// FUN_00fa3b90 @ 00fa3b90 size=380 calls_out=2 calls_in=0
// strings: 

void FUN_00fa3b90(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  iVar3 = param_1[1];
  pbVar7 = (byte *)*param_1;
  if (iVar3 == 0) {
    FUN_00faace8(param_2,pbVar7,0);
    return;
  }
  pbVar5 = pbVar7;
  do {
    uVar6 = (uint)*pbVar5;
    pbVar2 = pbVar5 + 1;
    if (0x7fffffff < (uint)(int)(char)*pbVar5) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar5[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar2 = pbVar5 + 2;
      }
      else {
        uVar4 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar4 | (uVar6 & 0x1f) << 0xc;
          pbVar2 = pbVar5 + 3;
        }
        else {
          uVar6 = pbVar5[3] & 0x3f | uVar4 << 6 | (uVar6 & 7) << 0x12;
          pbVar2 = pbVar5 + 4;
        }
      }
    }
    pbVar5 = pbVar2;
    if ((uVar6 - 9 < 0x18) && ((1 << (uVar6 - 9 & 0xff) & 0x80001fU) != 0)) goto LAB_00fa3ce0;
    if (0x7f < uVar6) {
      uVar4 = uVar6 >> 8;
      if (uVar4 < 0x20) {
        if (uVar4 == 0) {
          bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 1;
joined_r0x00fa3be4:
          if (bVar1 != 0) {
LAB_00fa3ce0:
            FUN_00faa4e8(pbVar7,iVar3,*param_2,param_2[1]);
            return;
          }
        }
        else if ((uVar4 == 0x16) && (uVar6 == 0x1680)) goto LAB_00fa3ce0;
      }
      else {
        if (uVar4 == 0x20) {
          bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 2;
          goto joined_r0x00fa3be4;
        }
        if (uVar4 == 0x30 && uVar6 == 0x3000) goto LAB_00fa3ce0;
      }
    }
    if (pbVar5 == pbVar7 + iVar3) {
      FUN_00faace8(param_2,pbVar7,iVar3);
      return;
    }
  } while( true );
}

