// FUN_0062aaec @ 0062aaec size=360 calls_out=2 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

bool FUN_0062aaec(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  byte local_5c;
  char local_5b;
  undefined4 local_58;
  int local_54;
  undefined4 uStack_50;
  int iStack_4c;
  byte local_40;
  char local_3f;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  
  local_a0 = *param_1;
  uStack_9c = param_1[1];
  uStack_98 = param_1[2];
  uStack_94 = param_1[3];
  local_90 = param_1[4];
  uStack_8c = param_1[5];
  uStack_88 = param_1[6];
  uStack_84 = param_1[7];
  local_80 = *param_2;
  uStack_7c = param_2[1];
  uStack_78 = param_2[2];
  uStack_74 = param_2[3];
  local_70 = param_2[4];
  uStack_6c = param_2[5];
  uStack_68 = param_2[6];
  uStack_64 = param_2[7];
  do {
    while( true ) {
      FUN_015c7164(&local_5c,&local_a0);
      iVar5 = iStack_4c;
      uVar4 = uStack_50;
      iVar9 = local_54;
      uVar3 = local_58;
      cVar2 = local_5b;
      bVar1 = local_5c;
      uVar12 = (uint)local_5c;
      if (uVar12 == 10) {
        FUN_015c7164(&local_40,&local_80);
        return local_40 == 10;
      }
      FUN_015c7164(&local_40,&local_80);
      iVar7 = local_30;
      uVar6 = local_34;
      uVar10 = (uint)local_40;
      if (uVar10 == 10) {
        return false;
      }
      iVar11 = uVar12 - 5;
      iVar8 = uVar10 - 5;
      if (uVar12 < 5 || iVar11 == 0) {
        iVar11 = 0;
      }
      if (uVar10 < 6) {
        iVar8 = 0;
      }
      if (iVar11 != iVar8) {
        return false;
      }
      if (iVar11 == 4) break;
      if ((iVar11 == 0) && (uVar10 < 6)) {
        if (uVar12 != uVar10) {
          return false;
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar1) {
        default:
          goto switchD_0062abb8_caseD_0;
        case 1:
        case 4:
          if (iVar9 != local_38) {
            return false;
          }
          iVar9 = thunk_FUN_016dd50a(uVar3,local_3c,iVar9);
          if (iVar9 != 0 || iVar5 != iVar7) {
            return false;
          }
          iVar9 = thunk_FUN_016dd50a(uVar4,uVar6,iVar5);
          goto joined_r0x0062ac2c;
        case 2:
        case 5:
          if (cVar2 != local_3f) {
            return false;
          }
        }
      }
    }
switchD_0062abb8_caseD_0:
    if (iVar9 != local_38) {
      return false;
    }
    iVar9 = thunk_FUN_016dd50a(uVar3,local_3c,iVar9);
joined_r0x0062ac2c:
    if (iVar9 != 0) {
      return false;
    }
  } while( true );
}

