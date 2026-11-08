// FUN_019c8ea4 @ 019c8ea4 size=760 calls_out=7 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_019c8ea4(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c [2];
  
  iVar2 = param_2[6];
  local_40 = 0;
  local_48 = 0;
  local_44 = 1;
  iVar8 = *param_2;
  iVar6 = param_2[4];
  iVar3 = param_2[5];
  iVar4 = param_2[1];
  uVar7 = param_2[2];
  uVar10 = param_2[3];
  local_54 = 1;
  local_50 = 0;
  do {
    local_4c = local_40;
    if (uVar10 <= uVar7) {
      local_34 = 0;
      local_3c = iVar8;
      local_38 = iVar4;
      local_30 = iVar6;
      FUN_019ba410(local_2c,iVar3,&local_3c);
      param_2[2] = 0;
      param_2[3] = local_34;
      param_2[4] = local_30;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(local_2c[0] & 0xff) {
      case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        uVar7 = 0;
        iVar6 = local_30;
        uVar10 = local_34;
      }
    }
    iVar5 = iVar8 + uVar7;
    uVar9 = uVar10 - uVar7;
    if (uVar9 < 8) {
      if (uVar9 == 0) {
        uVar9 = 0;
        uVar11 = 0;
      }
      else {
        uVar1 = 0;
        do {
          if (*(char *)(iVar5 + uVar1) == (char)iVar2) {
            uVar11 = CONCAT44(uVar1,1);
            goto LAB_019c9018;
          }
          uVar1 = uVar1 + 1;
        } while (uVar9 != uVar1);
        uVar11 = (ulonglong)uVar9 << 0x20;
      }
    }
    else {
      uVar11 = FUN_01307168((char)iVar2,iVar5,uVar9);
    }
LAB_019c9018:
    uVar1 = (uint)(uVar11 >> 0x20);
    if ((uVar11 & 1) != 0) {
      if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar1,uVar9,&DAT_01d2842c);
      }
      iVar2 = uVar1 + 1;
      if ((uint)(local_48 - local_4c) <= uVar1) {
        FUN_006520b4(&local_48,local_4c,iVar2,1,1);
        local_54 = local_44;
        local_4c = local_40;
      }
      FUN_01bed4e2(local_54 + local_4c,iVar5,iVar2);
      local_40 = local_4c + iVar2;
      uVar9 = uVar7 + iVar2;
      if (uVar10 < uVar7 + iVar2) {
        uVar9 = uVar10;
      }
      param_2[2] = uVar9;
      local_50 = iVar2 + local_50;
      goto LAB_019c90c4;
    }
    if ((uint)(local_48 - local_4c) < uVar9) {
      FUN_006520b4(&local_48,local_4c,uVar9,1,1);
      local_54 = local_44;
      local_4c = local_40;
    }
    FUN_01bed4e2(local_54 + local_4c,iVar5,uVar9);
    local_40 = local_4c + uVar9;
    uVar7 = uVar7 + uVar9;
    local_50 = uVar9 + local_50;
    if (uVar10 < uVar7) {
      uVar7 = uVar10;
    }
    param_2[2] = uVar7;
    if (uVar9 == 0) {
LAB_019c90c4:
      if (local_50 == 0) {
        *param_1 = -0x7fffffff;
        FUN_0134bd64(local_48,local_54);
        return;
      }
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0xffffffff,0,&DAT_01d2843c);
      }
      if (*(char *)(local_54 + local_40 + -1) == (char)param_2[6]) {
        local_40 = local_40 + -1;
      }
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
      return;
    }
  } while( true );
}

