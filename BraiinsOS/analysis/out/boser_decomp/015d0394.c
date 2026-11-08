// FUN_015d0394 @ 015d0394 size=828 calls_out=5 calls_in=1
// strings: 

void FUN_015d0394(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char *param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  ushort uVar3;
  undefined *puVar2;
  undefined2 uVar4;
  char **ppcVar5;
  undefined4 uVar6;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  char *local_f8;
  undefined4 local_f4;
  undefined *local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined1 auStack_e4 [100];
  undefined4 local_80;
  uint local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 *puStack_6c;
  undefined4 **local_5c;
  code *local_58;
  undefined4 **local_54;
  code *local_50;
  undefined4 *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  cVar1 = *param_6;
  uVar3 = (ushort)((uint)param_8 >> 8);
  local_12c = param_3;
  local_128 = param_4;
  if (cVar1 == '\x02') {
    local_124 = 0x230c;
    if (param_2 < 0x230d) {
      local_120 = 0;
      uVar6 = 0xfb0000e0;
      uStack_11e = 0xe0;
      uStack_11c = 0xfb00;
      uStack_11a = (short)param_8;
      FUN_01bed93e(&local_f8,0,0x78);
      uVar3 = (ushort)((uint)(param_8 << 0x18) >> 0x10) | uVar3 & 0xff;
      local_80 = 0x10;
      uVar4 = 2;
LAB_015d0504:
      local_100 = (char *)CONCAT22(uVar3,uVar4);
      local_fc = uVar6;
      FUN_01979f18(&local_78,param_7,param_1,param_2,&local_100);
      if ((char)local_78 != '\x04') {
        puStack_6c = local_74;
        local_70 = local_78;
        if (4 < DAT_01d51b00) {
          local_3c = &local_12c;
          local_54 = &local_3c;
          local_5c = (undefined4 **)&local_120;
          local_50 = (code *)&LAB_01a6029c;
          local_58 = FUN_0130a2f8;
          local_28 = &DAT_01cfc7e8;
          local_2c = 0x17;
          local_30 = "m";
          local_34 = 0x17;
          local_38 = "m";
          FUN_015fb650(&DAT_0057ff94,&local_5c,5,&local_38);
          local_78 = local_70 & 0xff;
        }
        FUN_0069d8a4(local_78,puStack_6c);
        return;
      }
      local_3c = local_74;
      if (DAT_01d51b00 < 5) {
        return;
      }
      if (cVar1 != '\x02') {
        FUN_01bed4e2((int)&local_70 + 1,param_6 + 0x11,0x10);
      }
      else {
        local_70 = *(int *)(param_6 + 6) << 8;
        puStack_6c._0_1_ = (undefined1)((uint)*(int *)(param_6 + 6) >> 0x18);
      }
      local_70 = CONCAT31(local_70._1_3_,cVar1 != '\x02');
      local_54 = (undefined4 **)&local_12c;
      local_5c = &local_3c;
      local_50 = (code *)&LAB_018a13b8;
      puVar2 = &DAT_00574eb2;
      local_2c = 0x17;
      ppcVar5 = &local_38;
      local_34 = 0x17;
      uVar6 = 5;
      local_28 = &DAT_01cfc7d8;
      local_30 = "m";
      local_38 = "m";
      goto LAB_015d06c4;
    }
  }
  else {
    local_124 = 0x22f8;
    if (param_2 < 0x22f9) {
      uStack_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0xfb000000;
      uStack_11c = 0x2ff;
      uStack_11a = 0;
      uVar6 = 0;
      local_108 = param_5;
      local_10c = 0;
      local_120 = 1;
      local_f8 = (char *)0x2ff;
      local_f4 = 0;
      local_f0 = (undefined *)0x0;
      uStack_ec = 0xfb000000;
      local_e8 = param_5;
      local_104 = (short)param_8;
      FUN_01bed93e(auStack_e4,0,100);
      uVar3 = (ushort)((uint)(param_8 << 0x18) >> 0x10) | uVar3 & 0xff;
      local_80 = 0x1c;
      uVar4 = 10;
      goto LAB_015d0504;
    }
  }
  if (DAT_01d51b00 < 4) {
    return;
  }
  local_54 = (undefined4 **)&local_124;
  local_f0 = &DAT_01cfc7f8;
  local_50 = FUN_012fd02c;
  local_5c = (undefined4 **)&local_120;
  puVar2 = &DAT_0058081b;
  local_f4 = 0x17;
  ppcVar5 = (char **)&local_100;
  local_fc = 0x17;
  local_f8 = "m";
  local_100 = "m";
  uVar6 = 4;
  local_120 = (undefined2)param_2;
  uStack_11e = (undefined2)(param_2 >> 0x10);
LAB_015d06c4:
  local_58 = FUN_012fd02c;
  FUN_015fb650(puVar2,&local_5c,uVar6,ppcVar5);
  return;
}

