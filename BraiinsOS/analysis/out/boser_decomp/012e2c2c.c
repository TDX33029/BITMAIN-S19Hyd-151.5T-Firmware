// FUN_012e2c2c @ 012e2c2c size=256 calls_out=4 calls_in=2
// strings: 

void FUN_012e2c2c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined1 local_28;
  
  FUN_01656cb0(&local_38);
  iVar2 = local_34;
  if (local_38 == 1) {
    local_28 = (undefined1)local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01ce3778,&DAT_01d06958);
  }
  uVar8 = local_30 & 0xff;
  iVar6 = *(int *)(local_34 + 0x10);
  iVar3 = *(int *)(local_34 + 0xc);
  iVar7 = iVar6 * 0xc;
  iVar5 = -1;
  do {
    if (iVar7 == 0) {
      local_38 = 0;
      goto LAB_012e2cb8;
    }
    piVar1 = (int *)(iVar3 + 4);
    iVar7 = iVar7 + -0xc;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0xc;
  } while (*piVar1 != param_3);
  FUN_012e8fb8(&local_38,local_34 + 8,iVar5,&DAT_01d06a88);
  iVar6 = *(int *)(iVar2 + 0x10);
LAB_012e2cb8:
  uVar4 = 0;
  if (iVar6 == 0) {
    uVar4 = *(uint *)(iVar2 + 0x1c);
  }
  DataMemoryBarrier(0xb);
  if (iVar6 == 0) {
    uVar4 = (uint)(uVar4 == 0);
  }
  *(char *)(param_2 + 0x20) = (char)uVar4;
  DataMemoryBarrier(0xb);
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = local_30;
  FUN_00a97e8c(iVar2,uVar8);
  return;
}

