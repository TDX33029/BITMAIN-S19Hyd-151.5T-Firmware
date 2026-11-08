// FUN_0190d580 @ 0190d580 size=220 calls_out=2 calls_in=0
// strings: 

void FUN_0190d580(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  
  local_30 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
  iVar2 = 0;
  local_34 = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  local_38 = 0;
  do {
    *(byte *)((int)&local_38 + iVar2) =
         *(byte *)((int)&local_38 + iVar2) ^ *(byte *)(param_2 + iVar2 + 0x230);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xc);
  local_48 = local_38;
  uStack_44 = local_34;
  uStack_40 = local_30;
  pcVar3 = *(code **)(*(int *)(param_2 + 0x210) + 4);
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
  }
  (*pcVar3)(&local_38,param_2,&local_48,param_5,param_6,param_7,param_8);
  uVar1 = 0x8000001a;
  if ((char)local_38 == '\0') {
    FUN_01bed4e2(param_1 + 1,(int)&local_38 + 1,0x10);
    uVar1 = 0x80000029;
  }
  *param_1 = uVar1;
  return;
}

