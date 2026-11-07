// FUN_018b4804 @ 018b4804 size=116 calls_out=3 calls_in=2
// strings: 

void FUN_018b4804(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_018beed0(param_2,0x20);
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
    *(undefined **)(param_1 + 8) = &DAT_00520ee1;
    *(undefined4 *)(param_1 + 0xc) = 6;
    uVar1 = 1;
    param_1[4] = 0xb;
  }
  else {
    if (iVar2 != 0x20) {
                    /* WARNING: Subroutine does not return */
      FUN_013070f0(0x20,iVar2,&DAT_01d22494);
    }
    FUN_01bed4e2(param_1 + 1,(int)uVar3,0x20);
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}

