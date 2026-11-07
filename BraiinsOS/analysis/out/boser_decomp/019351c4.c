// FUN_019351c4 @ 019351c4 size=156 calls_out=6 calls_in=0
// strings: 

void FUN_019351c4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int local_70;
  int local_6c;
  undefined1 local_68;
  int local_4c;
  
  FUN_01933ff0(&local_70,param_1);
  if (local_70 == 1) {
    FUN_00a97e8c(local_6c,local_68);
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d259e0);
  }
  iVar1 = FUN_018f7a64(local_6c + 0x18,param_2);
  if (iVar1 != 0) {
    FUN_01bed4e2(&local_70,iVar1 + 0x10,0x60);
    *(undefined4 *)(iVar1 + 0x34) = 0x80000000;
    if (local_4c != -0x80000000) {
      FUN_0192a3c8(&local_70);
    }
  }
  FUN_00a97e8c(local_6c,local_68);
  return;
}

