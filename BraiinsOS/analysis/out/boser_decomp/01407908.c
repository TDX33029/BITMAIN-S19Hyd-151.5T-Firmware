// FUN_01407908 @ 01407908 size=548 calls_out=10 calls_in=0
// strings: 

void FUN_01407908(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 *puStack_60;
  uint local_5c;
  int local_58;
  uint uStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  uVar6 = *(undefined4 *)(param_3 + 4);
  iVar11 = *(int *)(param_3 + 8);
  uVar12 = FUN_01adafd4(param_2[2],param_2[3],param_2[4],param_2[5],uVar6,iVar11);
  uVar10 = (uint)((ulonglong)uVar12 >> 0x20);
  uVar5 = param_2[7] & 0x3f;
  uVar7 = (uint)uVar12 >> uVar5 | uVar10 << (0x20 - uVar5 & 0xff);
  if (-1 < (int)(uVar5 - 0x20)) {
    uVar7 = uVar10 >> (uVar5 - 0x20 & 0xff);
  }
  uVar10 = 0;
  if (param_2[7] != 0x40) {
    uVar10 = uVar7;
  }
  if ((uint)param_2[1] <= uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar10,param_2[1],&DAT_01cf3dd8);
  }
  iVar8 = *param_2;
  uVar1 = FUN_013f0d78();
  local_6c = uVar1;
  piVar2 = (int *)FUN_0140b398();
  piVar9 = piVar2;
  do {
    iVar4 = piVar9[1];
    uVar7 = iVar4 - 1U & (uint)uVar12;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,0,&DAT_01cf3570);
    }
    local_30 = 0;
    local_48 = *piVar9;
    local_2c = CONCAT31(local_2c._1_3_,1);
    local_38 = local_48 + uVar7 * 4;
    local_44 = iVar4;
    local_40 = &local_6c;
    local_3c = uVar7;
    local_34 = uVar7;
    while( true ) {
      FUN_013f4d28(&local_68,&local_48);
      uVar7 = local_5c;
      if (local_68 != 1) goto LAB_01407ac8;
      if (local_64 == 0) break;
      uVar5 = local_5c & 0xfffffff8;
      if (uVar5 == 0) goto LAB_01407ac8;
      if ((*(int *)(uVar5 + 0x28) == iVar11) &&
         (iVar4 = thunk_FUN_01bed842(*(undefined4 *)(uVar5 + 0x24),uVar6,iVar11), iVar4 == 0)) {
        if ((uVar7 & 2) == 0) {
          FUN_01408d28(&local_48,uVar5);
          local_68 = local_48;
          local_64 = local_44;
          puStack_60 = local_40;
          local_5c = local_3c;
          local_58 = local_38;
          uStack_54 = local_34;
          iStack_50 = local_30;
          iStack_4c = local_2c;
        }
        else {
LAB_01407ac8:
          local_58 = -0x80000000;
        }
        FUN_0140b280(iVar8 + uVar10 * 8,uVar1,piVar2,piVar9);
        *param_1 = local_68;
        param_1[1] = local_64;
        param_1[2] = (int)puStack_60;
        param_1[3] = local_5c;
        param_1[4] = local_58;
        param_1[5] = uStack_54;
        param_1[6] = iStack_50;
        param_1[7] = iStack_4c;
        FUN_013f0f2c(uVar1);
        return;
      }
    }
    piVar3 = (int *)FUN_013f608c(piVar9,&local_6c,param_2[2],param_2[3],param_2[4],param_2[5],0);
    if (piVar3 != (int *)0x0) {
      piVar9 = piVar3;
    }
  } while( true );
}

