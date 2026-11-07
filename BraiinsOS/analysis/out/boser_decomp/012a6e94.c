// FUN_012a6e94 @ 012a6e94 size=600 calls_out=6 calls_in=2
// strings: 

void FUN_012a6e94(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_5e8 [360];
  int local_480 [41];
  int local_3dc;
  undefined4 local_3d8;
  undefined1 auStack_3d0 [192];
  int local_310;
  undefined1 auStack_30c [320];
  uint local_1cc;
  uint local_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [324];
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  undefined4 local_2c;
  
  if (param_3 != param_4) {
    iVar6 = param_3 + 0x148;
    do {
      FUN_012a6adc(auStack_1a0,*(undefined4 *)(iVar6 + -0x2c),*(undefined4 *)(iVar6 + -0x28));
      bVar1 = *(byte *)(iVar6 + -2);
      bVar7 = (bVar1 & 0x80) == 0;
      if (bVar7) {
        bVar1 = *(byte *)(iVar6 + 2);
      }
      if (bVar7 && (bVar1 & 0x80) == 0) {
        uVar4 = local_5c & 0xff7fffff;
      }
      else {
        uVar4 = local_5c | 0x800000;
      }
      local_5c = uVar4;
      FUN_01bed4e2(&local_310,auStack_1a0,0x144);
      local_1c8 = local_58 | 0x280000;
      local_1c4 = local_54;
      uStack_1c0 = uStack_50;
      uStack_1bc = uStack_4c;
      uStack_1b8 = uStack_48;
      local_1b4 = local_44;
      uStack_1b0 = uStack_40;
      uStack_1ac = uStack_3c;
      uStack_1a8 = uStack_38;
      local_1cc = uVar4 | 0x280000;
      FUN_012a6e94(local_480,&local_310,*(int *)(iVar6 + -0xe8),
                   *(int *)(iVar6 + -0xe4) * 0x16c + *(int *)(iVar6 + -0xe8));
      if (*(int *)(iVar6 + -0xa4) != -0x80000000) {
        FUN_01bed4e2(&local_310,local_480,0xa4);
        iVar3 = local_3dc;
        FUN_01bed4e2(auStack_1a0,auStack_3d0,0xbc);
        FUN_006666fc(&local_30,*(undefined4 *)(iVar6 + -0xa0),*(undefined4 *)(iVar6 + -0x9c));
        iVar2 = local_30;
        uVar5 = local_2c;
        if (iVar3 != -0x80000000) {
          FUN_0134bd64(iVar3,local_3d8);
        }
        FUN_01bed4e2(local_480,&local_310,0xa4);
        local_3dc = iVar2;
        local_3d8 = uVar5;
        FUN_01bed4e2(auStack_3d0,auStack_1a0,0xbc);
      }
      iVar3 = local_480[0];
      FUN_01bed4e2(auStack_5e8,(uint)local_480 | 4,0x168);
      if (iVar3 == 2) break;
      FUN_01bed4e2(auStack_30c,auStack_5e8,0x168);
      FUN_01bed4e2(auStack_1a0,param_2,0x16c);
      local_310 = iVar3;
      FUN_012a7118(local_480,auStack_1a0,&local_310);
      FUN_01bed4e2(param_2,local_480,0x16c);
      iVar3 = iVar6 + 0x24;
      iVar6 = iVar6 + 0x16c;
    } while (iVar3 != param_4);
  }
  FUN_01bed4e2(param_1,param_2,0x16c);
  return;
}

