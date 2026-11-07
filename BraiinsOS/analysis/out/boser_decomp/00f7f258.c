// FUN_00f7f258 @ 00f7f258 size=272 calls_out=4 calls_in=1
// strings: 

void FUN_00f7f258(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
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
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01c19394,&DAT_01c23498);
  }
  FUN_01203378(local_28 + 8,1);
  if (*(int *)(local_28 + 0x14) != 0) {
    *(int *)(local_28 + 0x14) = *(int *)(local_28 + 0x14) + -1;
    uVar7 = *(int *)(local_28 + 0x10) + 1;
    piVar3 = (int *)(*(int *)(local_28 + 0xc) + *(int *)(local_28 + 0x10) * 0x28);
    iVar4 = *piVar3;
    uVar5 = uVar7 - *(uint *)(local_28 + 8);
    if (uVar7 < *(uint *)(local_28 + 8)) {
      uVar5 = uVar7;
    }
    *(uint *)(local_28 + 0x10) = uVar5;
    if (iVar4 != 3) {
      *param_1 = iVar4;
      iVar4 = piVar3[2];
      iVar6 = piVar3[3];
      iVar8 = piVar3[4];
      param_1[1] = piVar3[1];
      param_1[2] = iVar4;
      param_1[3] = iVar6;
      param_1[4] = iVar8;
      iVar4 = piVar3[6];
      iVar6 = piVar3[7];
      iVar8 = piVar3[8];
      iVar9 = piVar3[9];
      param_1[5] = piVar3[5];
      param_1[6] = iVar4;
      param_1[7] = iVar6;
      param_1[8] = iVar8;
      param_1[9] = iVar9;
      FUN_00f2be94(local_28,local_24);
      return;
    }
  }
  cVar1 = *(char *)(param_2 + 0x44);
  DataMemoryBarrier(0xb);
  FUN_00f2be94(local_28,local_24);
  *param_1 = 3;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}

