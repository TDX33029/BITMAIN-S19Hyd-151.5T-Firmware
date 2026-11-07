// FUN_016e3c1c @ 016e3c1c size=248 calls_out=7 calls_in=2
// strings: 

void FUN_016e3c1c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  FUN_016ec274();
  piVar3 = param_1 + 1;
  switch(*param_1) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 6:
    puVar1 = (undefined4 *)*piVar3;
    break;
  case 1:
    puVar1 = (undefined4 *)*piVar3;
    FUN_0134aee0(*puVar1,puVar1[1],4,0x1c);
    break;
  case 5:
    iVar2 = *piVar3;
    FUN_016e3fb0();
    thunk_FUN_01be4678(iVar2);
    return;
  case 7:
    iVar2 = *piVar3;
    FUN_016e3e38(iVar2);
    thunk_FUN_01be4678(iVar2);
    return;
  case 8:
    iVar2 = *piVar3;
    FUN_016e3bec(iVar2 + 0x24);
    thunk_FUN_01be4678(iVar2);
    return;
  case 9:
    iVar2 = *piVar3;
    FUN_016e3b9c(iVar2);
    thunk_FUN_01be4678(iVar2);
    return;
  default:
    iVar2 = *piVar3;
    FUN_016bedfc(iVar2);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  thunk_FUN_01be4678(puVar1);
  return;
}

