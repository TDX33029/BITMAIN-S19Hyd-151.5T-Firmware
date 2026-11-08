// FUN_0002af10 @ 0002af10  size=32  callers=7
// program: bmminer


undefined4 FUN_0002af10(int param_1,int param_2)

{
  return *(undefined4 *)
          (*(int *)(DAT_00a4eddc + 0x18) + (*(int *)(DAT_00a4eddc + 0x14) * param_1 + param_2) * 4);
}

