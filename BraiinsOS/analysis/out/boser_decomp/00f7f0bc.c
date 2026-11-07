// FUN_00f7f0bc @ 00f7f0bc size=356 calls_out=4 calls_in=1
// strings: 

void FUN_00f7f0bc(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_58;
  int local_54;
  int iStack_50;
  int local_48;
  int local_44;
  uint local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  FUN_01656cb0(&local_48);
  iVar2 = local_44;
  if (local_48 == 1) {
    local_54 = CONCAT31(local_54._1_3_,(undefined1)local_40);
    local_58 = local_44;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_58,&DAT_01c193a4,&DAT_01c23498);
  }
  uVar9 = local_40 & 0xff;
  FUN_009d3270(local_44 + 8,1);
  if (*(int *)(iVar2 + 0x14) != 0) {
    iVar7 = *(int *)(iVar2 + 0x10);
    uVar4 = iVar7 + 1;
    uVar8 = uVar4 - *(uint *)(iVar2 + 8);
    if (uVar4 < *(uint *)(iVar2 + 8)) {
      uVar8 = uVar4;
    }
    *(uint *)(iVar2 + 0x10) = uVar8;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
    piVar5 = (int *)(*(int *)(iVar2 + 0xc) + iVar7 * 0x30);
    local_48 = *piVar5;
    local_44 = piVar5[1];
    local_40 = piVar5[2];
    iStack_3c = piVar5[3];
    local_38 = piVar5[4];
    iStack_34 = piVar5[5];
    iStack_30 = piVar5[6];
    iStack_2c = piVar5[7];
    puVar6 = (undefined1 *)piVar5[8];
    local_58 = piVar5[9];
    local_54 = piVar5[10];
    iStack_50 = piVar5[0xb];
    if (puVar6 != &DAT_3b9aca00) {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
      param_1[3] = iStack_3c;
      param_1[4] = local_38;
      param_1[5] = iStack_34;
      param_1[6] = iStack_30;
      param_1[7] = iStack_2c;
      param_1[8] = (int)puVar6;
      param_1[9] = local_58;
      param_1[10] = local_54;
      param_1[0xb] = iStack_50;
      FUN_00f2be94(iVar2,uVar9);
      return;
    }
  }
  cVar1 = *(char *)(param_2 + 0x44);
  DataMemoryBarrier(0xb);
  FUN_00f2be94(iVar2,uVar9);
  param_1[8] = (int)&DAT_3b9aca00;
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  *(undefined1 *)param_1 = uVar3;
  return;
}

