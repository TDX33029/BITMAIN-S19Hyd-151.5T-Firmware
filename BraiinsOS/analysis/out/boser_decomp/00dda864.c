// FUN_00dda864 @ 00dda864 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_00dda864(undefined1 *param_1,short *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 7) {
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00532588,7);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_00dda8b8;
    }
  }
  else if ((param_3 == 2) && (*param_2 == 0x6469)) {
    uVar1 = 0;
    goto LAB_00dda8b8;
  }
  uVar1 = 2;
LAB_00dda8b8:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

