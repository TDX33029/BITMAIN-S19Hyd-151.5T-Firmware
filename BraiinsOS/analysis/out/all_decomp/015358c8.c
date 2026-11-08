// FUN_015358c8 @ 015358c8 size=396 calls_out=2 calls_in=0
// strings: 

void FUN_015358c8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)((int)param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0xb) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)((int)param_1 + 0x11) = 0;
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    *(undefined1 *)((int)param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
    *(undefined1 *)((int)param_1 + 0x16) = 0;
    *(undefined1 *)((int)param_1 + 0x17) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
    *(undefined1 *)((int)param_1 + 0x1b) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    *(undefined1 *)((int)param_1 + 0x1f) = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    *(undefined1 *)((int)param_1 + 0x22) = 0;
    *(undefined1 *)((int)param_1 + 0x23) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(undefined1 *)((int)param_1 + 0x26) = 0;
    *(undefined1 *)((int)param_1 + 0x27) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((int)param_1 + 0x29) = 0;
    *(undefined1 *)((int)param_1 + 0x2a) = 0;
    *(undefined1 *)((int)param_1 + 0x2b) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)((int)param_1 + 0x2d) = 0;
    *(undefined1 *)((int)param_1 + 0x2e) = 0;
    *(undefined1 *)((int)param_1 + 0x2f) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    *(undefined1 *)((int)param_1 + 0x32) = 0;
    *(undefined1 *)((int)param_1 + 0x33) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    *(undefined1 *)((int)param_1 + 0x36) = 0;
    *(undefined1 *)((int)param_1 + 0x37) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0x39) = 0;
    *(undefined1 *)((int)param_1 + 0x3a) = 0;
    *(undefined1 *)((int)param_1 + 0x3b) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)((int)param_1 + 0x3d) = 0;
    *(undefined1 *)((int)param_1 + 0x3e) = 0;
    *(undefined1 *)((int)param_1 + 0x3f) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)((int)param_1 + 0x41) = 0;
    *(undefined1 *)((int)param_1 + 0x42) = 0;
    *(undefined1 *)((int)param_1 + 0x43) = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined1 *)((int)param_1 + 0x45) = 0;
    *(undefined1 *)((int)param_1 + 0x46) = 0;
    *(undefined1 *)((int)param_1 + 0x47) = 0;
    if (*param_1 == 0) {
      return;
    }
  }
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00604edc(param_1[1]);
  }
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[2],param_1[3]);
    return;
  }
  return;
}

