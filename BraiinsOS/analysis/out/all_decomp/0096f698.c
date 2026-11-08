// FUN_0096f698 @ 0096f698 size=368 calls_out=2 calls_in=6
// strings: 

void FUN_0096f698(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    goto LAB_0096f850;
  default:
    return;
  case 3:
    FUN_0096f510(param_1 + 4);
    break;
  case 4:
    FUN_0096f510(param_1 + 4);
    break;
  case 5:
    FUN_0096f510(param_1 + 4);
    break;
  case 6:
    FUN_0096f510(param_1 + 4);
    break;
  case 7:
    FUN_0096f510(param_1 + 4);
    break;
  case 8:
    FUN_0096f510(param_1 + 4);
    break;
  case 9:
    FUN_0096f510(param_1 + 4);
    break;
  case 10:
    FUN_0096f510(param_1 + 4);
    break;
  case 0xb:
    FUN_0096f510(param_1 + 4);
    break;
  case 0xc:
    FUN_0096f510(param_1 + 4);
    break;
  case 0xd:
    FUN_0096f510(param_1 + 4);
    break;
  case 0xe:
    FUN_0096f510(param_1 + 4);
    break;
  case 0xf:
    FUN_0096f510(param_1 + 4);
    break;
  case 0x10:
    FUN_0096f510(param_1 + 4);
    break;
  case 0x11:
    FUN_0096f510(param_1 + 4);
    break;
  case 0x12:
    FUN_0096f510(param_1 + 4);
    break;
  case 0x13:
    FUN_0096f510(param_1 + 4);
    break;
  case 0x14:
    FUN_0096f510(param_1 + 4);
    break;
  case 0x15:
    FUN_0096f510(param_1 + 4);
    break;
  case 0x16:
    FUN_0096f510(param_1 + 4);
    break;
  case 0x17:
    FUN_0096f510(param_1 + 4);
  }
  param_1 = param_1 + 1;
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_0096f850:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00f370cc(*param_1);
    return;
  }
  return;
}

