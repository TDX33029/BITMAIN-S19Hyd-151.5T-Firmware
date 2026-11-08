// FUN_01446b7c @ 01446b7c size=760 calls_out=6 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01446b7c(uint *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int local_60;
  uint local_4c;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  
  iVar5 = param_2[5];
  iVar10 = *param_2;
  iVar1 = param_3[2];
  iVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar9 = param_2[3];
  iVar11 = param_2[4];
  local_4c = 0;
  local_44 = iVar1;
  do {
    if (uVar9 <= uVar4) {
      local_38 = 0;
      local_40 = iVar10;
      local_3c = iVar3;
      local_34 = iVar11;
      FUN_019ba410(&local_30,iVar5,&local_40);
      param_2[2] = 0;
      param_2[3] = local_38;
      param_2[4] = local_34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(local_30 & 0xff) {
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        uVar4 = 0;
        uVar9 = local_38;
        iVar11 = local_34;
      }
    }
    uVar7 = uVar9 - uVar4;
    iVar6 = iVar10 + uVar4;
    if (uVar7 < 8) {
      if (uVar7 == 0) {
        uVar7 = 0;
        uVar12 = 0;
      }
      else {
        uVar2 = 0;
        do {
          if (*(char *)(iVar6 + uVar2) == '\n') {
            uVar12 = CONCAT44(uVar2,1);
            goto LAB_01446ccc;
          }
          uVar2 = uVar2 + 1;
        } while (uVar7 != uVar2);
        uVar12 = (ulonglong)uVar7 << 0x20;
      }
    }
    else {
      uVar12 = FUN_01307168(10,iVar6,uVar7);
    }
LAB_01446ccc:
    uVar2 = (uint)(uVar12 >> 0x20);
    if ((uVar12 & 1) != 0) {
      if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar2,uVar7,&DAT_01d2842c);
      }
      iVar11 = uVar2 + 1;
      if ((uint)(*param_3 - local_44) <= uVar2) {
        FUN_006520b4(param_3,local_44,iVar11,1,1);
        local_44 = param_3[2];
      }
      local_60 = param_3[1];
      FUN_01bed4e2(local_60 + local_44,iVar6,iVar11);
      local_44 = local_44 + iVar11;
      param_3[2] = local_44;
      uVar7 = uVar4 + iVar11;
      if (uVar9 < uVar4 + iVar11) {
        uVar7 = uVar9;
      }
      local_4c = iVar11 + local_4c;
      param_2[2] = uVar7;
      break;
    }
    if ((uint)(*param_3 - local_44) < uVar7) {
      FUN_006520b4(param_3,local_44,uVar7,1,1);
      local_44 = param_3[2];
    }
    local_60 = param_3[1];
    FUN_01bed4e2(local_60 + local_44,iVar6,uVar7);
    local_44 = local_44 + uVar7;
    uVar4 = uVar4 + uVar7;
    param_3[2] = local_44;
    if (uVar9 < uVar4) {
      uVar4 = uVar9;
    }
    local_4c = uVar7 + local_4c;
    param_2[2] = uVar4;
  } while (uVar7 != 0);
  puVar8 = &local_30;
  local_30 = CONCAT31(local_30._1_3_,4);
  local_2c = local_4c;
  FUN_012fbd94(&local_40,local_60 + iVar1,local_44 - iVar1);
  if (local_40 != 0) {
    *param_1 = local_30;
    param_1[1] = local_2c;
    if ((local_30 & 0xff) != 4) {
      local_44 = iVar1;
      goto LAB_01446de8;
    }
    puVar8 = &DAT_01d276bc;
    local_44 = iVar1;
  }
  uVar4 = puVar8[1];
  *param_1 = *puVar8;
  param_1[1] = uVar4;
LAB_01446de8:
  param_3[2] = local_44;
  return;
}

