// FUN_0087c668 @ 0087c668 size=132 calls_out=2 calls_in=0
// strings: 

void FUN_0087c668(int *param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int local_20;
  int iStack_1c;
  
  (**(code **)(*(int *)(param_2 + 0x15c) + 0xc))
            (&local_20,
             *(int *)(param_2 + 0x158) + (*(int *)(*(int *)(param_2 + 0x15c) + 8) - 1U & 0xfffffff8)
             + 8);
  if (local_20 == 0) {
    *param_1 = 0;
    param_1[1] = iStack_1c;
    return;
  }
  piVar1 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar1 + 2) = param_3;
  *piVar1 = local_20;
  piVar1[1] = iStack_1c;
  *param_1 = (int)piVar1;
  param_1[1] = (int)&DAT_01861a04;
  return;
}

