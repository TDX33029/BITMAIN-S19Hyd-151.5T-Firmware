// FUN_01bef848 @ 01bef848 size=34 calls_out=0 calls_in=1
// strings: 

undefined1 FUN_01bef848(int *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(param_1);
    if (*param_1 != 0) {
      uVar2 = 0x10;
      goto LAB_01bef864;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = 0x7fffffff;
  uVar2 = 0;
LAB_01bef864:
  DataMemoryBarrier(0x1b);
  return uVar2;
}

