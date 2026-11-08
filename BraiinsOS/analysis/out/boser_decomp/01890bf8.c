// FUN_01890bf8 @ 01890bf8 size=356 calls_out=6 calls_in=1
// strings: 

int FUN_01890bf8(uint param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char local_58 [56];
  
  FUN_01bed93e(local_58,0,0x31);
  uVar3 = param_1 << 2 | 1;
  uVar2 = param_1 * 4;
  if (0x30 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar3,0x31,&DAT_01d2156c);
  }
  if (0xc < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,param_1,0xc,&DAT_01d2199c);
  }
  FUN_01896024(param_2,param_1,(uint)local_58 | 1,uVar2);
  iVar1 = 0;
  while (local_58[iVar1] == '\0') {
    iVar1 = iVar1 + 1;
    if (uVar2 + 1 == iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2157c);
    }
  }
  uVar2 = iVar1 + ((int)local_58[iVar1] >> 7);
  if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,uVar3,uVar3,&DAT_01d2158c);
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d2159c);
  }
  *param_3 = 2;
  if (param_4 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(1,1,&DAT_01d215ac);
  }
  uVar3 = uVar3 - uVar2;
  param_3[1] = (char)uVar3;
  if (param_4 - 2U < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar3,param_4 - 2U,&DAT_01d215bc);
  }
  FUN_01bed4e2(param_3 + 2,local_58 + uVar2,uVar3);
  return uVar3 + 2;
}

