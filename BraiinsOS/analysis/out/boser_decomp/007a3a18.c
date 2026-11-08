// FUN_007a3a18 @ 007a3a18 size=300 calls_out=4 calls_in=1
// strings: 

void FUN_007a3a18(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_50;
  int local_4c;
  uint local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  undefined1 local_28;
  
  FUN_01656cb0(&local_50);
  iVar2 = local_4c;
  if (local_50 == 1) {
    local_28 = (undefined1)local_48;
    local_2c = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01c09520,&DAT_01cfd9e0);
  }
  uVar7 = local_48 & 0xff;
  FUN_015e99dc(local_4c + 8,1);
  if (*(int *)(iVar2 + 0x14) != 0) {
    iVar6 = *(int *)(iVar2 + 0x10);
    uVar4 = iVar6 + 1;
    uVar8 = uVar4 - *(uint *)(iVar2 + 8);
    if (uVar4 < *(uint *)(iVar2 + 8)) {
      uVar8 = uVar4;
    }
    *(uint *)(iVar2 + 0x10) = uVar8;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
    piVar5 = (int *)(*(int *)(iVar2 + 0xc) + iVar6 * 0x28);
    iVar6 = *piVar5;
    local_50 = piVar5[1];
    local_4c = piVar5[2];
    local_48 = piVar5[3];
    iStack_44 = piVar5[4];
    local_40 = piVar5[5];
    iStack_3c = piVar5[6];
    iStack_38 = piVar5[7];
    iStack_34 = piVar5[8];
    iStack_30 = piVar5[9];
    if (iVar6 != -0x7ffffffa) {
      FUN_00a97e8c(iVar2,uVar7);
      *param_1 = iVar6;
      param_1[1] = local_50;
      param_1[2] = local_4c;
      param_1[3] = local_48;
      param_1[4] = iStack_44;
      param_1[5] = local_40;
      param_1[6] = iStack_3c;
      param_1[7] = iStack_38;
      param_1[8] = iStack_34;
      param_1[9] = iStack_30;
      return;
    }
  }
  cVar1 = *(char *)(param_2 + 0x44);
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(iVar2,uVar7);
  *param_1 = -0x7ffffffa;
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  return;
}

