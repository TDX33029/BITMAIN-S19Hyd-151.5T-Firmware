// FUN_01508738 @ 01508738 size=260 calls_out=6 calls_in=10
// strings: 

void FUN_01508738(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_48;
  int local_44;
  int local_40;
  int *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  lVar6 = FUN_0159662c(*param_2 + 0x20);
  iVar2 = (int)((ulonglong)lVar6 >> 0x20);
  uVar3 = 0;
  if (lVar6 < 0) {
LAB_01508764:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,iVar2);
  }
  iVar5 = 1;
  iVar4 = 0;
  if (iVar2 != 0) {
    uVar3 = 1;
    iVar5 = FUN_01298504(iVar2,1);
    iVar4 = iVar2;
    if (iVar5 == 0) goto LAB_01508764;
  }
  FUN_01bed4e2(iVar5,(int)lVar6,iVar2);
  local_44 = 1;
  local_38 = &local_48;
  local_40 = 0;
  local_48 = 0;
  local_2c = 0;
  local_30 = 0x60000020;
  local_34 = &DAT_01cfa9e8;
  iVar1 = FUN_01592e4c(param_2,&local_38);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01cfaa00);
  }
  param_1[3] = local_48;
  param_1[4] = local_44;
  param_1[5] = local_40;
  *param_1 = iVar4;
  param_1[1] = iVar5;
  param_1[2] = iVar2;
  return;
}

