// FUN_017123c0 @ 017123c0 size=172 calls_out=4 calls_in=1
// strings: 

int FUN_017123c0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  
  FUN_01933ff0(&local_2c,*param_1 + 8);
  if (local_2c == 1) {
    local_1c = local_24;
    local_20 = local_28;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01d194ac,&DAT_01d2c7c8);
  }
  uVar4 = *(uint *)(local_28 + 0x144);
  iVar1 = FUN_01367c40(*(undefined4 *)(local_28 + 0x18c),*(undefined4 *)(local_28 + 400),param_1[1],
                       param_1[2]);
  uVar3 = *(uint *)(iVar1 + 0x3c);
  uVar2 = *(uint *)(iVar1 + 0xe0);
  FUN_00a97e8c(local_28,local_24);
  uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
  if (uVar4 < uVar3) {
    uVar3 = uVar4;
  }
  iVar1 = uVar3 - uVar2;
  if (uVar3 < uVar2) {
    iVar1 = 0;
  }
  return iVar1;
}

