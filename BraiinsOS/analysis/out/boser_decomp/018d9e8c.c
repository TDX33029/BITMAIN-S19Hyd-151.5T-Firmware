// FUN_018d9e8c @ 018d9e8c size=164 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_018d9e8c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint unaff_r7;
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  
  FUN_01933ff0(&local_2c,param_1);
  if (local_2c == 1) {
    local_1c = local_24;
    local_20 = local_28;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01d23088,&DAT_01d23078);
  }
  iVar1 = FUN_018c44d8(local_28 + 8,param_2);
  if (iVar1 == 0) {
    uVar2 = 0xb;
  }
  else {
    unaff_r7 = (uint)*(ushort *)(iVar1 + 0x72);
    uVar2 = (uint)*(ushort *)(iVar1 + 0x70);
  }
  FUN_00a97e8c(local_28,local_24);
  return CONCAT44(unaff_r7,uVar2);
}

