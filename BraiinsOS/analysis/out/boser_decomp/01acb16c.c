// FUN_01acb16c @ 01acb16c size=160 calls_out=2 calls_in=2
// strings: 

void FUN_01acb16c(int param_1,char param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == param_3) {
    return;
  }
  if (param_2 == '\0') {
    iVar1 = *(int *)(param_1 + 4);
    if ((param_3 != 0) && ((uVar2 <= param_3 || (*(char *)(iVar1 + param_3) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar1,uVar2,param_3,uVar2,&DAT_01d2fb48);
    }
    if (((uVar2 - param_3 == 2) && ((*(byte *)(iVar1 + param_3) & 0xdf) - 0x41 < 0x1a)) &&
       (((byte *)(iVar1 + param_3))[1] == 0x3a)) {
      return;
    }
  }
  FUN_01acb210();
  return;
}

