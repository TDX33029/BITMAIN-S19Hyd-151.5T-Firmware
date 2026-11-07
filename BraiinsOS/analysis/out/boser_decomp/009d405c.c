// FUN_009d405c @ 009d405c size=248 calls_out=4 calls_in=1
// strings: 

void FUN_009d405c(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_34;
  int local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  
  FUN_01656cb0(&local_34);
  if (local_34 == 1) {
    local_24 = local_2c;
    local_28 = local_30;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01c0ce58,&DAT_01c23498);
  }
  FUN_009d2fdc(local_30 + 8,1);
  if (*(int *)(local_30 + 0x14) != 0) {
    *(int *)(local_30 + 0x14) = *(int *)(local_30 + 0x14) + -1;
    uVar4 = *(int *)(local_30 + 0x10) + 1;
    piVar3 = (int *)(*(int *)(local_30 + 0xc) + *(int *)(local_30 + 0x10) * 0x10);
    iVar6 = *piVar3;
    uVar5 = uVar4 - *(uint *)(local_30 + 8);
    if (uVar4 < *(uint *)(local_30 + 8)) {
      uVar5 = uVar4;
    }
    *(uint *)(local_30 + 0x10) = uVar5;
    if (iVar6 != -0x80000000) {
      iVar7 = piVar3[1];
      iVar8 = piVar3[2];
      iVar9 = piVar3[3];
      FUN_00a97e8c(local_30,local_2c);
      *param_1 = iVar6;
      param_1[1] = iVar7;
      param_1[2] = iVar8;
      param_1[3] = iVar9;
      return;
    }
  }
  cVar1 = *(char *)(param_2 + 0x44);
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(local_30,local_2c);
  *param_1 = -0x80000000;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}

