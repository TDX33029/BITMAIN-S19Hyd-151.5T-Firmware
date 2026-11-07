// FUN_01b80660 @ 01b80660 size=468 calls_out=2 calls_in=1
// strings: 

uint FUN_01b80660(byte *param_1,uint param_2,int param_3,int *param_4,uint *param_5,byte *param_6,
                 uint param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_7 == 0) {
LAB_01b8082c:
    uVar5 = 0xffffffb8;
  }
  else {
    uVar5 = (uint)*param_6;
    if (uVar5 < 0x80) {
      if (param_7 < uVar5 + 1) goto LAB_01b8082c;
      uVar4 = FUN_01b814d4(param_1,param_2 - 1,param_6 + 1,uVar5,6,param_8,param_9,0);
      if (0xffffff88 < uVar4) {
        return uVar4;
      }
LAB_01b806f4:
      FUN_01bed93e(param_3,0,0x34);
      iVar1 = 0;
      for (pbVar3 = param_1; pbVar3 != param_1 + uVar4; pbVar3 = pbVar3 + 1) {
        uVar2 = (uint)*pbVar3;
        if (0xc < uVar2) goto LAB_01b80804;
        *(int *)(param_3 + uVar2 * 4) = *(int *)(param_3 + uVar2 * 4) + 1;
        iVar1 = iVar1 + ((1 << *pbVar3) >> 1);
      }
      if ((iVar1 != 0) && (LZCOUNT(iVar1) - 0x14U < 0xd)) {
        uVar2 = 0x20 - LZCOUNT(iVar1);
        *param_5 = uVar2;
        uVar2 = (1 << (uVar2 & 0xff)) - iVar1;
        iVar1 = LZCOUNT(uVar2);
        if (uVar2 == 0x80000000U >> iVar1) {
          iVar1 = 0x20 - iVar1;
          param_1[uVar4] = (byte)iVar1;
          *(int *)(param_3 + iVar1 * 4) = *(int *)(param_3 + iVar1 * 4) + 1;
          if ((1 < *(uint *)(param_3 + 4)) && ((*(uint *)(param_3 + 4) & 1) == 0)) {
            *param_4 = uVar4 + 1;
            return uVar5 + 1;
          }
        }
      }
    }
    else {
      uVar2 = (uint)(*param_6 >> 1);
      if (param_7 < uVar2 - 0x3e) goto LAB_01b8082c;
      uVar4 = uVar5 - 0x7f;
      if (uVar4 < param_2) {
        uVar5 = uVar2 - 0x3f;
        uVar2 = 0;
        do {
          iVar1 = (uVar2 >> 1) + 1;
          param_1[uVar2] = param_6[iVar1] >> 4;
          param_1[uVar2 + 1] = param_6[iVar1] & 0xf;
          uVar2 = uVar2 + 2;
        } while (uVar2 < uVar4);
        goto LAB_01b806f4;
      }
    }
LAB_01b80804:
    uVar5 = 0xffffffec;
  }
  return uVar5;
}

