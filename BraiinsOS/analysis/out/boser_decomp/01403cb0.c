// FUN_01403cb0 @ 01403cb0 size=236 calls_out=3 calls_in=0
// strings: 

void FUN_01403cb0(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  
  DataMemoryBarrier(0xb);
  do {
    uVar4 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar4 & 0xfffffffe;
  DataMemoryBarrier(0xb);
  if ((uVar4 & 2) == 0) {
    return;
  }
  FUN_01656cb0(&local_24,param_1 + 1);
  if (local_24 == 1) {
    local_14 = local_1c;
    local_18 = local_20;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01cf3788,&DAT_01cf3768);
  }
  iVar5 = *(int *)(local_20 + 0x10) * 0xc;
  piVar2 = (int *)(*(int *)(local_20 + 0xc) + -0xc);
  do {
    piVar3 = piVar2;
    if (iVar5 == 0) goto LAB_01403d50;
    iVar5 = iVar5 + -0xc;
    piVar2 = piVar3 + 3;
  } while (piVar3[3] != 1);
  iVar5 = piVar3[4];
  piVar3[4] = 0;
  if (iVar5 != 0) {
    (**(code **)(iVar5 + 4))(piVar3[5]);
  }
LAB_01403d50:
  FUN_00a97e8c(local_20,local_1c);
  return;
}

