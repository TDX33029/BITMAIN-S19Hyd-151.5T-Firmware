// FUN_0137c924 @ 0137c924 size=228 calls_out=4 calls_in=3
// strings: 

uint FUN_0137c924(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
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
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01ceafc4,&DAT_01cea8cc);
  }
  iVar5 = param_1[1];
  iVar4 = param_1[2];
  iVar2 = FUN_01367c40(*(undefined4 *)(local_28 + 0x18c),*(undefined4 *)(local_28 + 400),iVar5,iVar4
                      );
  uVar3 = 0;
  bVar1 = *(byte *)(iVar2 + 0x20) - 6;
  if (*(byte *)(iVar2 + 0x20) < 6) {
    bVar1 = 6;
  }
  if ((bVar1 < 7) && ((1 << (uint)bVar1 & 0x62U) != 0)) {
    iVar2 = FUN_01367c40(*(undefined4 *)(local_28 + 0x18c),*(undefined4 *)(local_28 + 400),iVar5,
                         iVar4);
    uVar3 = *(uint *)(iVar2 + 0xb4) ^ 1;
  }
  FUN_00a97e8c(local_28,local_24);
  return uVar3;
}

