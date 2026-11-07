// FUN_010bd8ec @ 010bd8ec size=68 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_010bd8ec(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar2 = uVar1 + param_3;
  if (CARRY4(uVar1,param_3) || 0x1d < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,uVar2,0x1d,&DAT_01884bb4);
  }
  FUN_016dd1aa(param_1 + uVar1 + 0x28);
  *(uint *)(param_1 + 0x24) = uVar2;
  return 0;
}

