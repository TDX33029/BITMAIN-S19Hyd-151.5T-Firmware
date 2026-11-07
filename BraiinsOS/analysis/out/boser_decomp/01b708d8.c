// FUN_01b708d8 @ 01b708d8 size=272 calls_out=8 calls_in=2
// strings: 

undefined8 FUN_01b708d8(int param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_01b70810(&DAT_01d53348,FUN_01b704ac);
  if (DAT_01d53340 == 0) goto LAB_01b70920;
  iVar1 = FUN_01beed8c(DAT_01d53344);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0x20);
    if (iVar1 == 0) goto LAB_01b70920;
    FUN_01bed93e(iVar1,0,0x20);
    iVar2 = FUN_01bef9b8(DAT_01d53344,iVar1);
    if (iVar2 != 0) {
      thunk_FUN_01be4678(iVar1);
      goto LAB_01b70920;
    }
  }
  iVar2 = FUN_01bef02c(&DAT_01d5336c);
  if (iVar2 == 0) {
    (&DAT_01d5334c)[param_1] = param_3;
    FUN_01bef3fe(&DAT_01d5336c);
    *(undefined4 *)(iVar1 + param_1 * 4) = param_2;
    return 1;
  }
LAB_01b70920:
  (*param_3)(param_2);
  return 0;
}

