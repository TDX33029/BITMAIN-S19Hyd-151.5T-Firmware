// FUN_016d776c @ 016d776c size=268 calls_out=8 calls_in=5
// strings: 

void FUN_016d776c(undefined4 *param_1)

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
    FUN_016d8154();
    thunk_FUN_01be4678(iVar2);
    return;
  case 7:
    iVar2 = *piVar3;
    FUN_016d7fdc(iVar2);
    thunk_FUN_01be4678(iVar2);
    return;
  case 8:
    iVar2 = *piVar3;
    FUN_016d7fac(iVar2 + 0x24);
    thunk_FUN_01be4678(iVar2);
    return;
  case 9:
    iVar2 = *piVar3;
    FUN_016d7f58(iVar2);
    thunk_FUN_01be4678(iVar2);
    return;
  default:
    iVar2 = *piVar3;
    FUN_016bedfc();
    thunk_FUN_01be4678(iVar2);
    return;
  }
  thunk_FUN_01be4678(puVar1);
  return;
}

