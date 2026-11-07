// FUN_018ef3d4 @ 018ef3d4 size=268 calls_out=3 calls_in=0
// strings: 

void FUN_018ef3d4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_40 [5];
  undefined2 local_29;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  uVar3 = *(uint *)(param_3 + 8);
  if (uVar3 < 0x10) {
    *param_1 = 0x80000019;
  }
  else {
    iVar4 = *(int *)(param_3 + 4);
    local_40[2] = param_5 << 0x18 | (param_5 >> 8 & 0xff) << 0x10 | (param_5 >> 0x10 & 0xff) << 8 |
                  param_5 >> 0x18;
    iVar1 = 0;
    local_40[0] = 0;
    local_40[1] = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
                  param_6 >> 0x18;
    do {
      *(byte *)((int)local_40 + iVar1) =
           *(byte *)((int)local_40 + iVar1) ^ *(byte *)(param_2 + iVar1 + 0x220);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xc);
    local_50 = local_40[0];
    uStack_4c = local_40[1];
    uStack_48 = local_40[2];
    FUN_01bed4e2(local_40,iVar4 + (uVar3 - 0x10),0x10);
    local_26 = (undefined1)(uVar3 >> 8);
    local_27 = 3;
    local_29 = 0x317;
    local_25 = (undefined1)uVar3;
    uVar5 = FUN_01896d58(param_2,&local_50,&local_29,5,local_40,iVar4,uVar3 - 0x10,0);
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == 0) {
      *param_1 = 0x80000019;
      param_1[1] = 0;
    }
    else {
      if (uVar2 < uVar3) {
        *(uint *)(param_3 + 8) = uVar2;
      }
      FUN_018ef4e0(param_1,param_3);
    }
  }
  return;
}

