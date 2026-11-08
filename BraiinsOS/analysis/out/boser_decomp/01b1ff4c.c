// FUN_01b1ff4c @ 01b1ff4c size=160 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b1ff4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1 != 0) {
    *param_4 = 0;
    iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0xc))();
    if (iVar1 == 1) {
      pcVar2 = *(code **)(*(int *)(param_1 + 4) + 0x10);
      if (pcVar2 == (code *)0x0) {
        return 0;
      }
      iVar1 = (*pcVar2)(param_1,param_3,0);
      if (iVar1 == 1) {
        *param_4 = 0x30;
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

