// FUN_01938278 @ 01938278 size=256 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01938278(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *local_3c;
  int local_38;
  int local_34;
  int **local_30;
  undefined1 *local_2c;
  int *local_28;
  undefined1 *local_24;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(uVar5,param_1[5],param_1[6]);
  uVar3 = 1;
  if ((iVar1 == 0) && (iVar1 = (*pcVar4)(uVar5,0x5312dd,2), iVar1 == 0)) {
    uVar2 = *param_1 + 0x80000001U & *param_1 >> 0x1f;
    if (uVar2 != 0) {
      if (uVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x019382fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(param_1[2] + 0x10))(param_1[1],param_2);
        return uVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x01938350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)(&DAT_01938354 + *(int *)(&DAT_01938354 + param_1[1] * 4)))();
      return uVar3;
    }
    local_3c = param_1 + 3;
    local_38 = param_1[1];
    local_34 = param_1[2];
    local_28 = &local_38;
    local_24 = &LAB_019ba78c;
    local_30 = &local_3c;
    local_2c = &LAB_006e1cd8;
    uVar3 = FUN_012fa178(uVar5,iVar6,&DAT_00581882,&local_30);
  }
  return uVar3;
}

