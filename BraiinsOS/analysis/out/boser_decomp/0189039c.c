// FUN_0189039c @ 0189039c size=108 calls_out=3 calls_in=24
// strings: 

void FUN_0189039c(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined1 auStack_60 [80];
  
  uVar1 = *(uint *)(*(int *)(param_2 + 200) + 0x50);
  FUN_01bed4e2(auStack_60,param_2 + 0x80,0x50);
  if (0x80 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x80,&DAT_01d2149c);
  }
  FUN_0189040c(param_1,auStack_60,param_2,uVar1,*(undefined4 *)(param_2 + 0xd0));
  return;
}

