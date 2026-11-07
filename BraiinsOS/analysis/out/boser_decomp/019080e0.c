// FUN_019080e0 @ 019080e0 size=364 calls_out=3 calls_in=2
// strings: packet number too long

void FUN_019080e0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,byte *param_5,
                 byte *param_6,uint param_7,int param_8)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint local_38;
  undefined1 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 auStack_28 [16];
  
  if (param_4 == 0x10) {
    pcVar4 = *(code **)(*(int *)(param_2 + 0xf8) + 4);
    FUN_01bed4e2(auStack_28,param_3,0x10);
    (*pcVar4)(&local_30,param_2,auStack_28);
    local_34 = local_2c;
    local_38 = local_30;
    if (param_7 < 5) {
      bVar3 = 0xf;
      uVar5 = (uint)(char)*param_5;
      if (uVar5 < 0x80000000) {
        bVar3 = 0x1f;
      }
      if (param_8 != 0) {
        uVar5 = uVar5 ^ local_30;
      }
      pbVar2 = (byte *)((uint)&local_38 | 1);
      iVar1 = (uVar5 & 3) + 1;
      *param_5 = bVar3 & (byte)local_30 ^ *param_5;
      do {
        bVar7 = param_7 == 0;
        if (!bVar7) {
          param_7 = param_7 - 1;
          *param_6 = *param_6 ^ *pbVar2;
          iVar1 = iVar1 + -1;
          bVar7 = iVar1 == 0;
          param_6 = param_6 + 1;
          pbVar2 = pbVar2 + 1;
        }
      } while (!bVar7);
      *param_1 = 0x80000029;
      return;
    }
    uVar6 = 0x16;
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
    uVar6 = 0x18;
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
  param_1[3] = uVar6;
  return;
}

