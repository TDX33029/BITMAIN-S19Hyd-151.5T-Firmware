// FUN_013b9c7c @ 013b9c7c size=88 calls_out=1 calls_in=1
// strings: 

byte FUN_013b9c7c(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  bVar1 = 0;
  if (param_3 != 0) {
    uVar2 = param_3 - 1;
    if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,param_2,&DAT_01893cd0);
    }
    bVar1 = ""[*(byte *)(param_1 + uVar2)];
  }
  if (param_3 < param_2) {
    bVar3 = ""[*(byte *)(param_1 + param_3)];
  }
  return (bVar1 ^ bVar3) & 1;
}

