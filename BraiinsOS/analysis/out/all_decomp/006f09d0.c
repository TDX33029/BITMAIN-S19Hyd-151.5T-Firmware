// FUN_006f09d0 @ 006f09d0 size=36 calls_out=0 calls_in=0
// strings: 

void FUN_006f09d0(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}

