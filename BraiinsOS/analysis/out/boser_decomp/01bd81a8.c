// FUN_01bd81a8 @ 01bd81a8 size=268 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01bd81a8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + (-param_1 & 0xfU);
  uVar1 = FUN_01bd7f00(param_2);
  *(uint *)(param_1 + (-param_1 & 0xfU)) = uVar1 & 0x3ffffff;
  *(uint *)(iVar2 + 4) = uVar1 & 0x3ffffff;
  uVar1 = FUN_01bd7f00(param_2 + 3);
  uVar1 = uVar1 >> 2 & 0x3ffff03;
  *(uint *)(iVar2 + 8) = uVar1;
  *(uint *)(iVar2 + 0xc) = uVar1;
  uVar1 = FUN_01bd7f00(param_2 + 6);
  uVar1 = uVar1 >> 4 & 0x3ffc0ff;
  *(uint *)(iVar2 + 0x10) = uVar1;
  *(uint *)(iVar2 + 0x14) = uVar1;
  uVar1 = FUN_01bd7f00(param_2 + 9);
  uVar1 = uVar1 >> 6 & 0x3f03fff;
  *(uint *)(iVar2 + 0x18) = uVar1;
  *(uint *)(iVar2 + 0x1c) = uVar1;
  uVar1 = FUN_01bd7f00(param_2 + 0xc);
  uVar1 = (uVar1 & 0xfffffff) >> 8;
  *(uint *)(iVar2 + 0x20) = uVar1;
  *(uint *)(iVar2 + 0x24) = uVar1;
  FUN_01bed93e(iVar2 + 0x30,0,0x28);
  FUN_01bd8bf8(iVar2 + 0x90,iVar2,iVar2,&DAT_00564ab0);
  FUN_01bd8bf8(iVar2 + 0xc0,iVar2 + 0x90,iVar2 + 0x90,&DAT_00564ab0);
  FUN_01bd7ec4(param_1 + 0x194,param_2 + 0x10);
  *(undefined4 *)(param_1 + 400) = 0;
  return 0;
}

