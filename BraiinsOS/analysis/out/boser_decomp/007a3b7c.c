// FUN_007a3b7c @ 007a3b7c size=224 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_007a3b7c(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  
  FUN_01656cb0(&local_24,param_1);
  if (local_24 == 1) {
    local_14 = local_1c;
    local_18 = local_20;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01c09530,&DAT_01cfd9e0);
  }
  FUN_015eaf80(local_20 + 8,1);
  if (*(int *)(local_20 + 0x14) == 0) {
    cVar1 = *(char *)(param_1 + 0x44);
    DataMemoryBarrier(0xb);
    FUN_00a97e8c(local_20,local_1c);
    uVar3 = 1;
    uVar5 = 0;
    if (cVar1 != '\0') {
      uVar5 = 2;
    }
  }
  else {
    *(int *)(local_20 + 0x14) = *(int *)(local_20 + 0x14) + -1;
    uVar2 = *(int *)(local_20 + 0x10) + 1;
    uVar5 = (uint)*(byte *)(*(int *)(local_20 + 0xc) + *(int *)(local_20 + 0x10));
    uVar4 = uVar2 - *(uint *)(local_20 + 8);
    if (uVar2 < *(uint *)(local_20 + 8)) {
      uVar4 = uVar2;
    }
    *(uint *)(local_20 + 0x10) = uVar4;
    FUN_00a97e8c(local_20,local_1c);
    uVar3 = 0;
  }
  return CONCAT44(uVar5,uVar3);
}

