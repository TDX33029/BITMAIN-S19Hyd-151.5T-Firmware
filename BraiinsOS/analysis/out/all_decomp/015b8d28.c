// FUN_015b8d28 @ 015b8d28 size=460 calls_out=5 calls_in=1
// strings: 

void FUN_015b8d28(undefined4 *param_1,byte *param_2,uint param_3,int param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte local_168 [128];
  byte local_e8 [128];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (0x40 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0040f9bf,0x2f,&DAT_018aa708);
  }
  FUN_016dd606(local_168,0x36,0x80);
  FUN_016dd606(local_e8,0x5c,0x80);
  pbVar3 = local_168;
  pbVar4 = local_e8;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    bVar1 = *param_2;
    bVar2 = *pbVar4;
    *pbVar3 = *pbVar3 ^ bVar1;
    *pbVar4 = bVar2 ^ bVar1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    param_2 = param_2 + 1;
  }
  puVar7 = param_1 + 8;
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  FUN_016dd606(puVar7,0,0x49);
  param_1[8] = 1;
  param_1[9] = 0;
  FUN_01585360(param_1,local_168,1);
  uVar6 = param_5 >> 6;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (uVar6 != 0) {
    uVar5 = *puVar7;
    *puVar7 = uVar5 + uVar6;
    param_1[9] = param_1[9] + (uint)CARRY4(uVar5,uVar6);
    FUN_01585360(param_1,param_4);
    uVar6 = param_5 & 0x7fffffc0;
    param_5 = param_5 & 0x3f;
    param_4 = param_4 + uVar6;
  }
  FUN_016dd1aa(param_1 + 10,param_4,param_5);
  *(char *)(param_1 + 0x1a) = (char)param_5;
  FUN_016dd606(&local_68,0,0x40);
  FUN_015b55b0(param_1,&local_68,0x40);
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  FUN_016dd606(puVar7,0,0x49);
  *puVar7 = 1;
  param_1[9] = 0;
  FUN_01585360(param_1,local_e8,1);
  param_1[10] = local_68;
  param_1[0xb] = uStack_64;
  param_1[0xc] = uStack_60;
  param_1[0xd] = uStack_5c;
  param_1[0xe] = local_58;
  param_1[0xf] = uStack_54;
  param_1[0x10] = uStack_50;
  param_1[0x11] = uStack_4c;
  *(undefined1 *)(param_1 + 0x1a) = 0x20;
  FUN_015b55b0(param_1,param_6,param_7);
  return;
}

