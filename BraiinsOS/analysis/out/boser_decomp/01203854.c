// FUN_01203854 @ 01203854 size=264 calls_out=5 calls_in=1
// strings: 

void FUN_01203854(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  
  FUN_01656cb0(&local_2c);
  if (local_2c == 1) {
    local_1c = local_24;
    local_20 = local_28;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01c23420,&DAT_01c23498);
  }
  FUN_009d345c(local_28 + 8,1);
  if (*(int *)(local_28 + 0x14) != 0) {
    *(int *)(local_28 + 0x14) = *(int *)(local_28 + 0x14) + -1;
    uVar2 = *(int *)(local_28 + 0x10) + 1;
    pcVar3 = (char *)(*(int *)(local_28 + 0xc) + *(int *)(local_28 + 0x10) * 0x11);
    cVar1 = *pcVar3;
    uVar4 = uVar2 - *(uint *)(local_28 + 8);
    if (uVar2 < *(uint *)(local_28 + 8)) {
      uVar4 = uVar2;
    }
    *(uint *)(local_28 + 0x10) = uVar4;
    if (cVar1 != '\x03') {
      FUN_01bed4e2(param_1 + 1,pcVar3 + 1,0x10);
      FUN_00a97e8c(local_28,local_24);
      *param_1 = cVar1;
      return;
    }
  }
  cVar1 = *(char *)(param_2 + 0x44);
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(local_28,local_24);
  *param_1 = '\x03';
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x02';
  }
  param_1[1] = cVar1;
  return;
}

