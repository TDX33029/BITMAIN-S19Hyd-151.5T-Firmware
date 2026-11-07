// FUN_018d9dac @ 018d9dac size=184 calls_out=6 calls_in=0
// strings: 

void FUN_018d9dac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int local_78;
  int local_74;
  uint local_70;
  int local_18;
  undefined1 local_14;
  
  FUN_01933ff0(&local_78,param_1);
  if (local_78 == 1) {
    local_14 = (undefined1)local_70;
    local_18 = local_74;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01d23088,&DAT_01d23068);
  }
  uVar2 = local_70 & 0xff;
  iVar1 = FUN_018c4600(local_74 + 8,param_2);
  if (iVar1 != 0) {
    FUN_01bed4e2(&local_78,iVar1 + 0x10,0x60);
    *(undefined4 *)(iVar1 + 0x18) = 0x80000000;
    if (local_70 != 0x80000000) {
      FUN_018c4448(&local_78);
    }
  }
  FUN_00a97e8c(local_74,uVar2);
  return;
}

