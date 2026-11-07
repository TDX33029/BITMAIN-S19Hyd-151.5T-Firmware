// FUN_017820bc @ 017820bc size=288 calls_out=7 calls_in=6
// strings: 

undefined8 FUN_017820bc(int param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_01781ff4(&DAT_018dfea0,FUN_01781c50);
  if (DAT_018dfe98 == 0) goto LAB_01782108;
  iVar1 = FUN_016deb20(DAT_018dfe9c);
  if (iVar1 == 0) {
    iVar1 = FUN_016d38c8(0x20,1);
    if (iVar1 == 0) goto LAB_01782108;
    iVar2 = FUN_016df794(DAT_018dfe9c);
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(iVar1);
      goto LAB_01782108;
    }
  }
  iVar2 = FUN_016dedc0(&DAT_018dfec4);
  if (iVar2 == 0) {
    (&DAT_018dfea4)[param_1] = param_3;
    FUN_016df192(&DAT_018dfec4);
    *(undefined4 *)(iVar1 + param_1 * 4) = param_2;
    return 1;
  }
LAB_01782108:
  (*param_3)(param_2);
  return 0;
}

