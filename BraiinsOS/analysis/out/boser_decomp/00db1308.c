// FUN_00db1308 @ 00db1308 size=212 calls_out=1 calls_in=2
// strings: variables | operationName

void FUN_00db1308(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 5:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_0050c2f4,5);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_00db13e8;
    }
    break;
  case 9:
    iVar2 = thunk_FUN_01bed842(param_2,"variables",9);
    if (iVar2 == 0) {
      uVar1 = 2;
      goto LAB_00db13e8;
    }
    break;
  case 10:
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_00520f23,10);
    if (iVar2 == 0) {
      uVar1 = 3;
      goto LAB_00db13e8;
    }
    break;
  case 0xd:
    iVar2 = thunk_FUN_01bed842(param_2,"operationName",0xd);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_00db13e8;
    }
  }
  uVar1 = 4;
LAB_00db13e8:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}

