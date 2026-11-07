// FUN_018f4554 @ 018f4554 size=468 calls_out=5 calls_in=2
// strings: packet number too long

void FUN_018f4554(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4,byte *param_5,
                 byte *param_6,uint param_7,int param_8)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28 [4];
  
  if (param_4 == 0x10) {
    FUN_01bed4e2(local_48,param_3,0x10);
    if (*param_2 == '\x03') {
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_28[3] = 0;
      local_28[2] = 0;
      local_28[1] = 0;
      local_28[0] = 0;
      FUN_01afe5b4(local_28,&local_38,0x10,param_2 + 1,(uint)local_48 | 4,local_48[0]);
    }
    else {
      FUN_01bed4e2(local_28,param_3,0x10);
      FUN_01b2ad04(local_28,local_28,param_2 + 4,1);
    }
    if (param_7 < 5) {
      bVar3 = 0xf;
      uVar4 = (uint)(char)*param_5;
      if (uVar4 < 0x80000000) {
        bVar3 = 0x1f;
      }
      if (param_8 != 0) {
        uVar4 = uVar4 ^ local_28[0];
      }
      pbVar2 = (byte *)((uint)local_28 | 1);
      iVar1 = (uVar4 & 3) + 1;
      *param_5 = bVar3 & (byte)local_28[0] ^ *param_5;
      do {
        bVar6 = param_7 == 0;
        if (!bVar6) {
          param_7 = param_7 - 1;
          *param_6 = *param_6 ^ *pbVar2;
          iVar1 = iVar1 + -1;
          bVar6 = iVar1 == 0;
          param_6 = param_6 + 1;
          pbVar2 = pbVar2 + 1;
        }
      } while (!bVar6);
      *param_1 = 0x80000029;
      return;
    }
    uVar5 = 0x16;
    iVar1 = thunk_FUN_01be5118(0x16);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x16);
    }
    FUN_01bed4e2(iVar1,"packet number too long",0x16);
    param_1[2] = iVar1;
    *param_1 = &DAT_80000020;
    param_1[1] = 0x16;
  }
  else {
    uVar5 = 0x18;
    iVar1 = thunk_FUN_01be5118(0x18);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x18);
    }
    FUN_01bed4e2(iVar1,&DAT_005230c0,0x18);
    *(char *)((int)param_1 + 0xb) = (char)((uint)iVar1 >> 0x18);
    *(short *)((int)param_1 + 9) = (short)((uint)iVar1 >> 8);
    *(char *)(param_1 + 2) = (char)iVar1;
    *param_1 = &DAT_80000020;
    param_1[1] = 0x18;
  }
  param_1[3] = uVar5;
  return;
}

