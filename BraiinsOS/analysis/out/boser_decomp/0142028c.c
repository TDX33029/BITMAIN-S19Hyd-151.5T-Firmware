// FUN_0142028c @ 0142028c size=68 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_0142028c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar2 = uVar1 + param_3;
  if (CARRY4(uVar1,param_3) || 0x1d < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,uVar2,0x1d,&DAT_01cf46f4);
  }
  FUN_01bed4e2(param_1 + uVar1 + 0x28);
  *(uint *)(param_1 + 0x24) = uVar2;
  return 0;
}

