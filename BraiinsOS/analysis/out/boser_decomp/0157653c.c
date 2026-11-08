// FUN_0157653c @ 0157653c size=88 calls_out=1 calls_in=38
// strings: 

void FUN_0157653c(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = *(undefined1 *)((int)param_1 + 0x1d);
  iVar2 = param_1[7];
  *(undefined1 *)(param_1 + 7) = 0;
  if (((char)iVar2 == '\x01') && (*param_1 != -0x80000000)) {
    iVar2 = param_1[2];
    if (iVar2 == *param_1) {
      FUN_006666a0(param_1);
    }
    *(undefined1 *)(param_1[1] + iVar2) = uVar1;
    param_1[2] = iVar2 + 1;
  }
  return;
}

