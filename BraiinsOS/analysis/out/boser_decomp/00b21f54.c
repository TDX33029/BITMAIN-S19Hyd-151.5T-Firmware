// FUN_00b21f54 @ 00b21f54 size=324 calls_out=4 calls_in=1
// strings: 

void FUN_00b21f54(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint unaff_r8;
  int unaff_r10;
  int local_30;
  int iStack_2c;
  int local_28;
  int *local_24;
  
  uVar3 = FUN_019ec670(param_3);
  if ((uVar3 & 0xff) == 2) {
    uVar3 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar3 & 1) != 0) {
      *param_1 = 3;
      param_1[1] = 0;
      return;
    }
    unaff_r8 = (uVar3 & 0xffffff) >> 0x10;
    uVar3 = (uVar3 & 0xffffff) >> 8;
  }
  FUN_009ce824(&local_30,*param_2,param_2 + 1,param_3);
  if (local_30 == 3 && iStack_2c == 0) {
    if (*(int *)(local_28 + 0x10) == 1) {
      unaff_r10 = *(int *)(local_28 + 0x14);
      if (unaff_r10 == 0) {
        param_3 = *(int **)(local_28 + 0x18);
        do {
          iVar4 = *param_3;
          bVar2 = (bool)hasExclusiveAccess(param_3);
        } while (!bVar2);
        *param_3 = iVar4 + 1;
        if (iVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xb22094);
          (*pcVar1)();
        }
        unaff_r10 = 0;
      }
      else {
        param_3 = *(int **)(local_28 + 0x18);
      }
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
    FUN_009ced9c();
  }
  else {
    if (local_30 == 0) {
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_00b22080;
    }
    if (local_30 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      param_3 = local_24;
      unaff_r10 = local_28;
    }
  }
  uVar3 = 0;
  *param_1 = uVar5;
  param_1[1] = 0;
  param_1[2] = unaff_r10;
  param_1[3] = param_3;
LAB_00b22080:
  FUN_019edbc4(uVar3,unaff_r8);
  return;
}

