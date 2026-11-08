// FUN_01933210 @ 01933210 size=228 calls_out=2 calls_in=0
// strings: 

void FUN_01933210(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined2 local_3d;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined4 local_28;
  uint uStack_24;
  uint uStack_20;
  
  uVar3 = *(uint *)(param_3 + 8);
  if (uVar3 < 0x10) {
    *param_1 = 0x80000019;
  }
  else {
    local_34 = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
               param_6 >> 0x18;
    local_30 = param_5 << 0x18 | (param_5 >> 8 & 0xff) << 0x10 | (param_5 >> 0x10 & 0xff) << 8 |
               param_5 >> 0x18;
    iVar2 = 0;
    local_38 = 0;
    do {
      *(byte *)((int)&local_38 + iVar2) =
           *(byte *)((int)&local_38 + iVar2) ^ *(byte *)(param_2 + iVar2 + 0xc);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xc);
    local_39 = (undefined1)uVar3;
    local_3b = 3;
    local_3d = 0x317;
    local_3a = (undefined1)(uVar3 >> 8);
    local_28 = local_38;
    uStack_24 = local_34;
    uStack_20 = local_30;
    uVar4 = FUN_01931b5c(param_2,&local_28,&local_3d,*(undefined4 *)(param_3 + 4),uVar3);
    uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 == 0) {
      *param_1 = 0x80000019;
      param_1[1] = 0;
    }
    else {
      if (uVar1 < uVar3) {
        *(uint *)(param_3 + 8) = uVar1;
      }
      FUN_018ef4e0(param_1,param_3);
    }
  }
  return;
}

