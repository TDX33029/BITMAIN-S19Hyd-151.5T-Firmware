// FUN_00ad7f80 @ 00ad7f80 size=404 calls_out=2 calls_in=7
// strings: 

void FUN_00ad7f80(undefined4 *param_1)

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
    goto LAB_00ad8164;
  default:
    return;
  case 3:
    FUN_00a07300(param_1 + 4);
    break;
  case 4:
    FUN_00a07300(param_1 + 4);
    break;
  case 5:
    FUN_00a07300(param_1 + 4);
    break;
  case 6:
    FUN_00a07300(param_1 + 4);
    break;
  case 7:
    FUN_00a07300(param_1 + 4);
    break;
  case 8:
    FUN_00a07300(param_1 + 4);
    break;
  case 9:
    FUN_00a07300(param_1 + 4);
    break;
  case 10:
    FUN_00a07300(param_1 + 4);
    break;
  case 0xb:
    FUN_00a07300(param_1 + 4);
    break;
  case 0xc:
    FUN_00a07300(param_1 + 4);
    break;
  case 0xd:
    FUN_00a07300(param_1 + 4);
    break;
  case 0xe:
    FUN_00a07300(param_1 + 4);
    break;
  case 0xf:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x10:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x11:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x12:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x13:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x14:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x15:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x16:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x17:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x18:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x19:
    FUN_00a07300(param_1 + 4);
    break;
  case 0x1a:
    FUN_00a07300(param_1 + 4);
  }
  param_1 = param_1 + 1;
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
LAB_00ad8164:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00f370cc(*param_1);
    return;
  }
  return;
}

