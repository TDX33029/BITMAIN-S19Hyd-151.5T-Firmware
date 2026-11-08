// FUN_0079b0f0 @ 0079b0f0 size=312 calls_out=10 calls_in=1
// strings: 

void FUN_0079b0f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int unaff_r4;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*param_1 == 0) {
    switch((char)param_1[0x57]) {
    case '\0':
      FUN_0079a4d4(param_1 + 0x44);
      FUN_0079a694(param_1 + 0x42);
      FUN_005faf6c(param_1 + 0x56);
      return;
    default:
      return;
    case '\x03':
      FUN_0079a52c(param_1 + 0x58);
      break;
    case '\x04':
      FUN_0079a610(param_1 + 0x5c);
      break;
    case '\x05':
      FUN_0079a674(param_1 + 0x7a);
      if (param_1[0x58] != -0x80000000) {
        FUN_019bb7e0(param_1[0x77],param_1[0x78]);
      }
    }
    FUN_0079a730(param_1 + 0x20);
    piVar1 = (int *)param_1[0x55];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar5 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar5);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x55]);
    }
    FUN_005faf6c(param_1 + 0x54);
    FUN_0079a694(param_1 + 0x1e);
    FUN_0079a4d4(param_1 + 2);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  bVar5 = param_1[2] == 0 && param_1[3] == 0;
  if (param_1[2] != 0 || param_1[3] != 0) {
    unaff_r4 = param_1[4];
    bVar5 = unaff_r4 == 0;
  }
  if (!bVar5) {
    puVar4 = (undefined4 *)param_1[5];
    pcVar3 = (code *)*puVar4;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(unaff_r4);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_01be4678(unaff_r4);
      return;
    }
  }
  return;
}

