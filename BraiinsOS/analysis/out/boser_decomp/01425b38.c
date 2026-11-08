// FUN_01425b38 @ 01425b38 size=180 calls_out=4 calls_in=3
// strings: 

void FUN_01425b38(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_28;
  undefined1 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  if (param_1 != 0) {
    FUN_01933ff0(&local_20,param_1 + 8);
    iVar1 = local_1c;
    if (local_20 == 1) {
      local_24 = (undefined1)local_18;
      local_28 = local_1c;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01cf4960,&DAT_01cf49c0);
    }
    uVar2 = local_18 & 0xff;
    if (*(undefined1 **)(local_1c + 0x38) != &DAT_3b9aca00) {
      FUN_01421a04(&local_20,*(undefined4 *)(local_1c + 0x40),*(undefined4 *)(local_1c + 0x44));
      *(int *)(iVar1 + 0x30) = local_20;
      *(int *)(iVar1 + 0x34) = local_1c;
      *(uint *)(iVar1 + 0x38) = local_18;
    }
    FUN_00a97e8c(iVar1,uVar2);
  }
  return;
}

