// FUN_01415bb0 @ 01415bb0 size=352 calls_out=2 calls_in=9
// strings: 

void FUN_01415bb0(undefined4 *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  while( true ) {
    uVar7 = FUN_01307268(0x3a,param_2);
    uVar3 = (uint)(uVar7 >> 0x20);
    if ((uVar7 & 1) == 0) break;
    if ((uVar3 < param_3) && (*(char *)(param_2 + uVar3) == ':')) {
      uVar3 = uVar3 + 1;
      pbVar1 = (byte *)(param_2 + uVar3);
      if ((uVar3 < param_3) && ((char)*pbVar1 < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar3,param_3,&DAT_01cf4320);
      }
      param_3 = param_3 - uVar3;
      if (param_3 == 0) break;
      if (param_3 == 1) {
        bVar2 = *pbVar1;
        if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) break;
      }
      else {
        bVar2 = *pbVar1;
      }
      uVar3 = param_3;
      pbVar4 = pbVar1;
      if (bVar2 == 0x2b) {
        pbVar4 = pbVar1 + 1;
        uVar3 = param_3 - 1;
      }
      uVar6 = 0;
      uVar5 = 0;
      if (4 < uVar3) goto LAB_01415ca8;
      goto joined_r0x01415c74;
    }
    if (param_3 < uVar3) break;
  }
  goto LAB_01415bf8;
joined_r0x01415c74:
  if (uVar3 == 0) goto LAB_01415c9c;
  bVar2 = *pbVar4;
  if (9 < bVar2 - 0x30) goto LAB_01415bf8;
  pbVar4 = pbVar4 + 1;
  uVar3 = uVar3 - 1;
  uVar6 = (bVar2 - 0x30) + uVar6 * 10;
  uVar5 = (undefined2)uVar6;
  goto joined_r0x01415c74;
  while( true ) {
    if (9 < *pbVar4 - 0x30) break;
    uVar3 = uVar3 - 1;
    uVar6 = (uVar6 * 2 & 0xffff) + (*pbVar4 - 0x30 & 0xffff);
    pbVar4 = pbVar4 + 1;
    if (uVar6 >> 0x10 != 0) break;
LAB_01415ca8:
    uVar5 = (undefined2)uVar6;
    if (uVar3 == 0) {
LAB_01415c9c:
      *(undefined2 *)(param_1 + 2) = uVar5;
      *param_1 = pbVar1;
      param_1[1] = param_3;
      return;
    }
    uVar6 = (uVar6 & 0xffff) * 4 + (uVar6 & 0xffff);
    if (uVar6 >> 0xf != 0) break;
  }
LAB_01415bf8:
  *param_1 = 0;
  return;
}

