// FUN_01aa6cc4 @ 01aa6cc4 size=156 calls_out=3 calls_in=1
// strings: internal error: entered unreachable code: this case should be handled by the caller

undefined4 FUN_01aa6cc4(short *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24 [2];
  char local_1c;
  
  if ((1 < param_2) && (*param_1 == 0x2f2f)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: this case should be handled by the caller"
                 ,0xa7,&DAT_01d2e500);
  }
  FUN_014fb0e8(local_24,param_1,param_2,0x2f,0x3a);
  cVar1 = '\0';
  if (local_24[0] != 0) {
    cVar1 = local_1c;
  }
  if (local_24[0] != 0 && cVar1 != '/') {
    uVar3 = 4;
  }
  else {
    iVar2 = FUN_01aa98bc(param_1,param_2);
    uVar3 = 4;
    if (iVar2 != 0) {
      uVar3 = 0xb;
    }
  }
  return uVar3;
}

