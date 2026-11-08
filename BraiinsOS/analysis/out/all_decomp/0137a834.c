// FUN_0137a834 @ 0137a834 size=188 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_0137a834(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  
  if (param_1 == 1) {
    return 0;
  }
  uVar2 = (param_5 & 0x7ffffff) >> (param_2 & 0x1f);
  if (param_4 <= (param_5 & 0x7ffffff) >> (param_2 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,param_4,&DAT_01893ae0);
  }
  piVar3 = (int *)(param_3 + uVar2 * 8);
  uVar2 = piVar3[1];
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_018942e8);
  }
  pbVar4 = (byte *)(*piVar3 + 8);
  if ((*pbVar4 & 2) == 0) {
    return 0;
  }
  uVar1 = param_6 * 4 + 0xd;
  if (uVar2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_018942f8);
  }
  if (uVar2 - uVar1 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,4,uVar2 - uVar1,&DAT_01892db0);
  }
  return *(undefined4 *)(pbVar4 + uVar1);
}

