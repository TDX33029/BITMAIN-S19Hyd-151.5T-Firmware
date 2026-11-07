// FUN_00045c40 @ 00045c40  size=120  callers=58
// program: bmminer


undefined4 FUN_00045c40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_0050f5f4 == 0) && (iVar1 = FUN_000458e8(), iVar1 != 0)) {
    return 0xffffffff;
  }
  if (DAT_0050f5dc == 0) {
    iVar1 = *(int *)(&DAT_0008819c + param_1 * 4);
  }
  else {
    iVar1 = *(int *)(&DAT_00087eb0 + param_1 * 4);
  }
  *(undefined4 *)(DAT_0050f5e8 + iVar1 * 4) = param_2;
  return 0;
}

