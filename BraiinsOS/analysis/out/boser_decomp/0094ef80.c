// FUN_0094ef80 @ 0094ef80 size=324 calls_out=3 calls_in=2
// strings: 

void FUN_0094ef80(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_2[1] == 0) {
    iVar8 = 0x3b9aca01;
    goto LAB_0094f0a0;
  }
  param_2[1] = param_2[1] + -1;
  local_40 = *param_2;
  local_3c = 3;
  FUN_0094ec34(&local_38,&local_40);
  iVar4 = local_30;
  iVar3 = local_34;
  iVar2 = local_38;
  iVar1 = local_3c;
  uVar6 = local_40;
  iVar8 = 0x3b9aca02;
  if (local_30 == 0x3b9aca02) {
    iVar7 = local_38;
  }
  else {
    if (local_30 == 0x3b9aca01) {
      uVar6 = 0;
    }
    else {
      if (local_3c != 0) {
        FUN_009c98e8(&local_38,local_40);
        iVar5 = local_2c;
        iVar7 = local_30;
        if (local_38 == 0) {
          if (iVar1 == 1) {
            uVar6 = 2;
            goto LAB_0094f094;
          }
          FUN_009c98e8(&local_38,uVar6);
          if (local_38 == 0) {
            param_1[1] = iVar5;
            param_1[2] = local_30;
            param_1[3] = local_2c;
            param_1[4] = iVar2;
            param_1[5] = iVar3;
            iVar8 = iVar4;
            goto LAB_0094f09c;
          }
        }
        iVar7 = local_34;
        goto LAB_0094f09c;
      }
      uVar6 = 1;
    }
LAB_0094f094:
    iVar7 = FUN_00a9d070(uVar6,&DAT_01c0c3c8,&DAT_01d064b8);
  }
LAB_0094f09c:
  *param_1 = iVar7;
LAB_0094f0a0:
  param_1[6] = iVar8;
  return;
}

