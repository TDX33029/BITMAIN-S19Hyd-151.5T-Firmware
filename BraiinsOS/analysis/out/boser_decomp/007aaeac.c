// FUN_007aaeac @ 007aaeac size=72 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_007aaeac(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 < 0xc) {
    uVar2 = uVar2 + 1;
    if ((char)param_2[2] != '\0') {
      uVar1 = uVar2;
    }
    if (uVar1 <= uVar2) {
      return CONCAT44(uVar2 - uVar1,param_1 + uVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar1,uVar2,0xc,&DAT_01c096e0);
}

