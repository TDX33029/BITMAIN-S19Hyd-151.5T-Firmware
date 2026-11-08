// FUN_016a2080 @ 016a2080 size=156 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_016a2080(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1[1];
  if (param_3 <= uVar2) {
    iVar3 = *param_1;
    iVar1 = thunk_FUN_016dd50a(param_2,iVar3);
    if (iVar1 == 0) {
      if ((param_3 != 0 && param_3 < uVar2) && (*(char *)(iVar3 + param_3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar3,uVar2,param_3,uVar2,&DAT_018ae550);
      }
      *param_1 = iVar3 + param_3;
      param_1[1] = uVar2 - param_3;
      return 0;
    }
  }
  return 1;
}

