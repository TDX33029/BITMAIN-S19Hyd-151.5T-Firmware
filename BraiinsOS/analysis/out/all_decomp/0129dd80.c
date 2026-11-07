// FUN_0129dd80 @ 0129dd80 size=632 calls_out=6 calls_in=3
// strings: 

void FUN_0129dd80(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_40;
  int local_3c;
  int local_38;
  undefined8 local_30;
  
  iVar4 = 0;
  iVar3 = param_3;
  if ((*param_2 & 1) != 0) {
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    iVar4 = 2;
    iVar3 = uVar2 - (0x7f >= uVar1);
    if (uVar2 != 0 || uVar2 < (0x7f < uVar1)) {
      iVar4 = 3;
      iVar3 = uVar2 - (0x3fff >= uVar1);
      if (uVar2 != 0 || uVar2 < (0x3fff < uVar1)) {
        iVar4 = 4;
        iVar3 = uVar2 - (0x1fffff >= uVar1);
        if ((uVar2 != 0 || uVar2 < (0x1fffff < uVar1)) &&
           (iVar4 = 5, uVar2 != 0 || uVar2 < (0xfffffff < uVar1))) {
          iVar4 = 6;
          if (7 < uVar2) {
            iVar4 = 7;
          }
          if (0x3ff < uVar2) {
            iVar4 = 8;
            if (0x1ffff < uVar2) {
              iVar4 = 9;
            }
            if ((0xffffff < uVar2) && (iVar4 = 0xb, uVar2 < 0x80000000)) {
              iVar4 = 10;
            }
          }
        }
      }
    }
  }
  uVar1 = param_2[4];
  if ((uVar1 & 1) != 0) {
    iVar4 = iVar4 + 9;
  }
  iVar3 = FUN_01337c54(param_2[8],uVar1,iVar3);
  param_2[9] = iVar4 + iVar3;
  FUN_01328ef8(&local_40,param_3);
  if (local_40 == 4) {
    if ((*param_2 & 1) != 0) {
      uVar6 = param_2[2];
      uVar5 = param_2[3];
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar2 - uVar1 < 5) {
        local_30 = CONCAT35(local_30._5_3_,8);
        FUN_01328914(&local_40,param_3,&local_30,1);
        if (local_40 != 4) goto LAB_0129de88;
      }
      else {
        if (uVar2 < uVar1) goto LAB_0129dfe4;
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 8;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_0132901c(&local_40,param_3,uVar6,uVar5);
      if (local_40 != 4) goto LAB_0129de88;
    }
    if ((param_2[4] & 1) != 0) {
      uVar2 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      uVar7 = *(undefined8 *)(param_2 + 6);
      if (uVar2 - uVar1 < 5) {
        local_30 = CONCAT35(local_30._5_3_,0x11);
        FUN_01328914(&local_40,param_3,&local_30,1);
        if (local_40 != 4) goto LAB_0129de88;
      }
      else {
        if (uVar2 < uVar1) {
LAB_0129dfe4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar1,uVar2,uVar2,&DAT_0188fa90);
        }
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x11;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      local_30 = uVar7;
      FUN_01328914(&local_40,param_3,&local_30,8);
      if (local_40 != 4) goto LAB_0129de88;
    }
    FUN_01328b10(&local_40,param_3,param_2[8]);
    if (local_40 == 4) {
      *param_1 = 4;
      return;
    }
  }
LAB_0129de88:
  param_1[1] = local_3c;
  *param_1 = local_40;
  param_1[2] = local_38;
  return;
}

