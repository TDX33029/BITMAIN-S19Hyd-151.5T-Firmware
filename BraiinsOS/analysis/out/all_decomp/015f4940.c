// FUN_015f4940 @ 015f4940 size=144 calls_out=5 calls_in=2
// strings: 

void FUN_015f4940(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_20 [4];
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  FUN_016d26c8();
  iVar1 = FUN_016d26b2(param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_016d2bc8();
    local_14 = (undefined1 *)*piVar2;
    local_18 = (undefined1 *)((uint)local_18 & 0xffffff00);
    if (local_14 != (undefined1 *)0x4) {
      FUN_015bf4a0(&local_18);
      local_1c = *piVar2;
      local_14 = &LAB_015f3dfc;
      local_20[0] = 0;
      local_18 = local_20;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00583723,&local_18,&DAT_018ab540);
    }
  }
  return;
}

