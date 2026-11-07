// FUN_01555e08 @ 01555e08 size=164 calls_out=3 calls_in=2
// strings: 

void FUN_01555e08(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_016d38c8(0xc,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0xc);
  }
  uVar2 = *(uint *)(param_3 + 0x40);
  if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar2,0x40,&DAT_018a7f14);
  }
  (**(code **)(((undefined4 *)*param_2)[1] + 0x10))
            (*(undefined4 *)*param_2,iVar1,0xc,param_2 + 0x11,0x30,param_4,0xf,param_3,uVar2);
  *param_1 = 0xc;
  param_1[1] = iVar1;
  param_1[2] = 0xc;
  return;
}

