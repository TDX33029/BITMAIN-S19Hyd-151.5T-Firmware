// FUN_0188fb14 @ 0188fb14 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_0188fb14(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_58 [16];
  
  FUN_01bed93e(local_58,0,0x40);
  iVar3 = 0;
  do {
    uVar2 = *(uint *)(param_2 + iVar3);
    uVar1 = ((uint *)(param_2 + iVar3))[1];
    *(uint *)((int)local_58 + iVar3) =
         uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
    iVar4 = iVar3 + 8;
    *(uint *)((int)local_58 + iVar3 + 4) =
         uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18;
    iVar3 = iVar4;
  } while (iVar4 != 0x40);
  FUN_01bed4e2(param_1,local_58,0x40);
  return;
}

