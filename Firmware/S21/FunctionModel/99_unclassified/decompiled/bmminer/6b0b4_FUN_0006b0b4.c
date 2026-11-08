// FUN_0006b0b4 @ 0006b0b4  size=148  callers=1
// program: bmminer


undefined4 FUN_0006b0b4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint local_c;
  
  iVar1 = DAT_009451ac + param_1 * 0x40;
  for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
    *(undefined1 *)(param_2 + local_c) = *(undefined1 *)(iVar1 + local_c + 0x20);
  }
  return 0;
}

