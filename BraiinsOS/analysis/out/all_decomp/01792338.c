// FUN_01792338 @ 01792338 size=560 calls_out=3 calls_in=1
// strings: 

uint FUN_01792338(uint param_1,uint param_2,int param_3,int *param_4,uint *param_5,byte *param_6,
                 uint param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auStack_390 [876];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  uVar5 = param_1;
  if (param_7 == 0) {
LAB_017924f0:
    uVar1 = 0xffffffb8;
  }
  else {
    uVar6 = (uint)*param_6;
    if (uVar6 < 0x80) {
      if (param_7 < uVar6 + 1) goto LAB_017924f0;
      uVar5 = FUN_01792afc(param_1,param_2 - 1,param_6 + 1,uVar6,6,auStack_390,0x36c,0);
      uVar1 = uVar5;
      if (0xffffff88 < uVar5) goto LAB_01792444;
      uVar1 = FUN_016dd606(param_3,0,0x34);
      if (uVar5 != 0) goto LAB_01792400;
    }
    else {
      uVar3 = (uint)(*param_6 >> 1);
      uVar1 = uVar3 - 0x3e;
      uVar5 = uVar1;
      if (param_7 < uVar1) goto LAB_017924f0;
      uVar5 = uVar6 - 0x7f;
      if (uVar5 < param_2) {
        uVar6 = uVar3 - 0x3f;
        uVar1 = 0;
        do {
          iVar2 = (uVar1 >> 1) + 1;
          *(byte *)(param_1 + uVar1) = param_6[iVar2] >> 4;
          *(byte *)(param_1 + 1 + uVar1) = param_6[iVar2] & 0xf;
          uVar1 = uVar1 + 2;
        } while (uVar1 < uVar5);
        FUN_016dd606(param_3,0,0x34);
LAB_01792400:
        pbVar4 = (byte *)(param_1 - 1);
        uVar1 = 0;
        pbVar7 = pbVar4 + uVar5;
        do {
          pbVar4 = pbVar4 + 1;
          uVar3 = (uint)*pbVar4;
          if (0xc < uVar3) goto LAB_01792440;
          *(int *)(param_3 + uVar3 * 4) = *(int *)(param_3 + uVar3 * 4) + 1;
          uVar1 = uVar1 + ((1 << *pbVar4) >> 1);
        } while (pbVar7 != pbVar4);
        if ((uVar1 != 0) && (LZCOUNT(uVar1) - 0x14U < 0xd)) {
          uVar3 = 0x20 - LZCOUNT(uVar1);
          *param_5 = uVar3;
          uVar1 = (1 << (uVar3 & 0xff)) - uVar1;
          if (uVar1 == 0x80000000U >> LZCOUNT(uVar1)) {
            iVar2 = 0x20 - LZCOUNT(uVar1);
            *(char *)(param_1 + uVar5) = (char)iVar2;
            *(int *)(param_3 + iVar2 * 4) = *(int *)(param_3 + iVar2 * 4) + 1;
            if ((1 < *(uint *)(param_3 + 4)) && ((*(uint *)(param_3 + 4) & 1) == 0)) {
              *param_4 = uVar5 + 1;
              uVar5 = uVar1;
              uVar1 = uVar6 + 1;
              goto LAB_01792444;
            }
          }
        }
      }
    }
LAB_01792440:
    uVar5 = uVar1;
    uVar1 = 0xffffffec;
  }
LAB_01792444:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar5,local_24 ^ DAT_018ddaf8,0);
  }
  return uVar1;
}

