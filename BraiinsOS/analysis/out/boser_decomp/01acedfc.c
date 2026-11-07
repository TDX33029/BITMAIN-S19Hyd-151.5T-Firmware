// FUN_01acedfc @ 01acedfc size=204 calls_out=1 calls_in=4
// strings: 

undefined4 FUN_01acedfc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  switch(param_2) {
  case 2:
    if ((short)*param_1 != 0x7377) {
      return 2;
    }
    break;
  case 3:
    iVar1 = thunk_FUN_01bed842(param_1,&DAT_00532790,3);
    if (iVar1 != 0) {
      uVar3 = 3;
      puVar2 = &DAT_00532793;
      goto LAB_01aceeb8;
    }
    break;
  case 4:
    if (*param_1 != 0x70747468) {
      iVar1 = thunk_FUN_01bed842(param_1,&DAT_0056edac,4);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = 2;
      }
      return uVar3;
    }
    break;
  case 5:
    uVar3 = 5;
    puVar2 = &DAT_0053278b;
LAB_01aceeb8:
    iVar1 = thunk_FUN_01bed842(param_1,puVar2,uVar3);
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    return uVar3;
  default:
    return 2;
  }
  return 1;
}

