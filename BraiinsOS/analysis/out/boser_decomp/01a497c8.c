// FUN_01a497c8 @ 01a497c8 size=396 calls_out=3 calls_in=1
// strings: 

void FUN_01a497c8(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar4 = 0;
  iVar5 = 1;
  uVar3 = 0;
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  uVar6 = 0;
LAB_01a49800:
  do {
    uVar2 = param_3 - uVar3;
    if (uVar2 < 8) {
      uVar1 = 0;
      if (uVar2 == 0) {
        uVar7 = 0;
      }
      else {
        do {
          if (*(char *)(param_2 + uVar3 + uVar1) == '_') {
            uVar7 = CONCAT44(uVar1,1);
            goto LAB_01a4985c;
          }
          uVar1 = uVar1 + 1;
        } while (uVar2 != uVar1);
        uVar7 = (ulonglong)uVar2 << 0x20;
      }
    }
    else {
      uVar7 = FUN_01307168(0x5f,param_2 + uVar3);
    }
LAB_01a4985c:
    if ((uVar7 & 1) == 0) goto LAB_01a498f0;
    uVar2 = uVar3 + (int)(uVar7 >> 0x20);
    uVar3 = uVar2 + 1;
    if ((uVar2 < param_3) && (*(char *)(param_2 + uVar2) == '_')) {
      uVar2 = uVar2 - uVar6;
      if ((uint)(local_30 - iVar4) < uVar2) {
        FUN_006520b4(&local_30,iVar4,uVar2,1,1);
        iVar4 = local_28;
        iVar5 = local_2c;
      }
      FUN_01bed4e2(iVar5 + iVar4,param_2 + uVar6,uVar2);
      iVar4 = iVar4 + uVar2;
      uVar6 = uVar3;
      local_28 = iVar4;
      goto LAB_01a49800;
    }
    if (param_3 < uVar3) {
LAB_01a498f0:
      param_3 = param_3 - uVar6;
      if ((uint)(local_30 - iVar4) < param_3) {
        FUN_006520b4(&local_30,iVar4,param_3,1,1);
        iVar4 = local_28;
        iVar5 = local_2c;
      }
      FUN_01bed4e2(iVar5 + iVar4,param_2 + uVar6,param_3);
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = iVar4 + param_3;
      return;
    }
  } while( true );
}

