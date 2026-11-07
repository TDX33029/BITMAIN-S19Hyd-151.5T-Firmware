// FUN_00a9c848 @ 00a9c848 size=360 calls_out=7 calls_in=0
// strings: 

void FUN_00a9c848(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  uVar1 = *(undefined1 *)(param_2 + 7);
  uVar9 = param_2[1];
  FUN_006666fc(&local_38,uVar9,param_2[2]);
  uVar5 = local_30;
  puVar4 = local_34;
  puVar3 = local_38;
  uVar2 = *(undefined1 *)(param_2 + 6);
  FUN_019bb7e0(*param_2,uVar9);
  FUN_019bb7e0(param_2[3],param_2[4]);
  uVar8 = (uint)*(byte *)((int)param_2 + 0x1d);
  uVar9 = *(undefined4 *)(&DAT_0053525c + uVar8 * 4);
  iVar6 = FUN_01298504(uVar9,1);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar9);
  }
  FUN_01bed4e2(iVar6,(&PTR_DAT_01d30d04)[uVar8],uVar9);
  local_38 = &local_48;
  local_40 = 0;
  local_48 = 0;
  local_2c = 0;
  local_44 = 1;
  local_30 = 0x60000020;
  local_34 = &DAT_01c0ff80;
  iVar7 = FUN_007b3150((byte *)((int)param_2 + 0x1d),&local_38);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c0ffb8);
  }
  param_1[7] = local_48;
  param_1[8] = local_44;
  param_1[9] = local_40;
  *param_1 = puVar3;
  param_1[1] = puVar4;
  param_1[2] = uVar5;
  param_1[4] = uVar9;
  param_1[5] = iVar6;
  param_1[6] = uVar9;
  *(undefined1 *)(param_1 + 3) = uVar2;
  *(undefined1 *)(param_1 + 10) = uVar1;
  return;
}

