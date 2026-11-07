// FUN_0004eae4 @ 0004eae4  size=568  callers=0
// program: bmminer


undefined4 FUN_0004eae4(int param_1,void *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_870;
  undefined2 local_86c;
  byte abStack_868 [4];
  undefined1 local_864 [60];
  byte local_828;
  byte local_827;
  byte local_826;
  byte local_825;
  byte local_824;
  byte local_823;
  byte local_822;
  byte local_821;
  char local_818 [20];
  undefined4 uStack_804;
  char acStack_800 [2028];
  
  bVar5 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar5 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar5 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    uVar4 = 0xffffffff;
  }
  else {
    local_870 = 0xf04aa55;
    local_86c = 0xf04;
    memset(abStack_868,0,0x50);
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_870,6,abStack_868,0x4a);
    if (iVar1 != 0) {
      builtin_strncpy(local_818,"Get power error data",0x14);
      uStack_804._0_1_ = ' ';
      uStack_804._1_1_ = 'f';
      uStack_804._2_1_ = 'a';
      uStack_804._3_1_ = 'i';
      builtin_strncpy(acStack_800,"led\n",5);
      FUN_00032218(3,local_818,0);
      return 0xffffffff;
    }
    memcpy(param_2,local_864,0x44);
    uVar4 = 0;
    if (param_1 != 0) {
      builtin_strncpy(local_818,"Get power error data",0x14);
      uStack_804 = CONCAT13(uStack_804._3_1_,0xa3a);
      FUN_00032218(3,local_818,0);
      pbVar2 = abStack_868;
      iVar1 = 0;
      do {
        iVar3 = iVar1 + 0xc;
        snprintf(local_818,0x800,
                 "data[%02d-%02d]: %02x%02x%02x%02x %02x%02x%02x%02x %02x%02x%02x%02x\n",iVar1,
                 iVar1 + 0xb,(uint)pbVar2[4],(uint)pbVar2[5],(uint)pbVar2[6],(uint)pbVar2[7],
                 (uint)pbVar2[8],(uint)pbVar2[9],(uint)pbVar2[10],(uint)pbVar2[0xb],
                 (uint)pbVar2[0xc],(uint)pbVar2[0xd],(uint)pbVar2[0xe],(uint)pbVar2[0xf]);
        FUN_00032218(3,local_818,0);
        pbVar2 = pbVar2 + 0xc;
        iVar1 = iVar3;
      } while (iVar3 != 0x3c);
      snprintf(local_818,0x800,"data[60-67]: %02x%02x%02x%02x %02x%02x%02x%02x\n",(uint)local_828,
               (uint)local_827,(uint)local_826,(uint)local_825,(uint)local_824,(uint)local_823,
               (uint)local_822,(uint)local_821);
      FUN_00032218(3,local_818,0);
      return 0;
    }
  }
  return uVar4;
}

