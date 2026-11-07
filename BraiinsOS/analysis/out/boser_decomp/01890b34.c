// FUN_01890b34 @ 01890b34 size=184 calls_out=3 calls_in=0
// strings: 

int FUN_01890b34(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d2153c);
  }
  *param_4 = 0x30;
  if (param_5 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(2,1,1,&DAT_01d2154c);
  }
  iVar2 = *param_1;
  uVar3 = param_5 - 2;
  uVar1 = FUN_01890bf8(*(undefined4 *)(iVar2 + 0xc),param_2,param_4 + 2,uVar3);
  if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,uVar3,uVar3,&DAT_01d2155c);
  }
  iVar2 = FUN_01890bf8(*(undefined4 *)(iVar2 + 0xc),param_3,param_4 + 2 + uVar1,uVar3 - uVar1);
  param_4[1] = (char)(iVar2 + uVar1);
  return iVar2 + uVar1 + 2;
}

