// FUN_016d7408 @ 016d7408 size=90 calls_out=1 calls_in=0
// strings: 

void FUN_016d7408(undefined4 *param_1,int param_2,undefined2 *param_3,char *param_4,uint param_5,
                 undefined4 param_6)

{
  undefined2 *puVar1;
  uint uVar2;
  
  if (param_2 == 2) {
    puVar1 = param_3 + 2;
    uVar2 = 4;
    goto LAB_016d741e;
  }
  if (param_2 != 10) {
    return;
  }
  puVar1 = param_3 + 4;
  if (*param_4 == -2) {
    if ((param_4[1] & 0xc0U) == 0x80) goto LAB_016d744e;
  }
  else if ((*param_4 == -1) && ((param_4[1] & 0xfU) == 2)) {
LAB_016d744e:
    *(undefined4 *)(param_3 + 0xc) = param_6;
    uVar2 = 0x10;
    goto LAB_016d741e;
  }
  uVar2 = 0x10;
LAB_016d741e:
  if (uVar2 <= param_5) {
    *param_3 = (short)param_2;
    FUN_016dd1aa(puVar1,param_4,uVar2,param_4,param_4);
    *param_1 = param_3;
  }
  return;
}

