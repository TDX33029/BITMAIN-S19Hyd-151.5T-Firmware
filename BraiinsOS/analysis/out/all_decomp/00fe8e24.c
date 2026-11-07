// FUN_00fe8e24 @ 00fe8e24 size=856 calls_out=8 calls_in=1
// strings: 

void FUN_00fe8e24(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uVar7 = *(uint *)(param_2 + 0x38);
  uVar9 = param_3 + 1;
  bVar1 = false;
  uVar6 = uVar9;
  uVar8 = uVar7;
  do {
    FUN_00fe7e50(&local_40,param_2,uVar6);
    if (local_40 != 0x12) {
      param_1[1] = local_40;
      *param_1 = 1;
      param_1[2] = local_3c;
      param_1[3] = local_38;
      param_1[4] = uStack_34;
      param_1[5] = uStack_30;
      return;
    }
    uVar6 = *(uint *)(param_2 + 0x14);
    if (local_3c == uVar6) {
      param_1[5] = local_3c;
      *param_1 = 1;
      param_1[1] = 1;
      return;
    }
    if (uVar6 <= local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(local_3c,uVar6,&DAT_018817c8);
    }
    switch(*(undefined1 *)(*(int *)(param_2 + 0x10) + local_3c)) {
    case 0x29:
      if ((local_3c != uVar9) && (!(bool)(bVar1 & local_3c - param_3 == 2))) {
        *param_1 = 0;
        param_1[1] = local_3c + 1;
        param_1[2] = 0x80000000;
        return;
      }
    default:
switchD_00fe8eb0_caseD_2a:
      FUN_00feb624(param_1 + 1,*(int *)(param_2 + 0x10),uVar6,uVar9,local_3c);
      *param_1 = 1;
      return;
    case 0x2d:
      bVar4 = true;
      if (bVar1) goto switchD_00fe8eb0_caseD_2a;
      goto LAB_00fe8e64;
    case 0x3a:
      if (!(bool)(bVar1 & local_3c - param_3 == 2)) {
        FUN_00fe559c(&local_40,param_2,local_3c + 1,param_4);
        uVar3 = uStack_30;
        uVar2 = uStack_34;
        uVar8 = local_38;
        uVar6 = local_3c;
        if ((local_40 & 1) != 0) {
          *param_1 = 1;
          param_1[1] = local_3c;
          param_1[2] = local_38;
          param_1[3] = uStack_34;
          param_1[4] = uStack_30;
          param_1[5] = local_2c;
          return;
        }
        uVar10 = 1;
        local_40 = local_38;
        local_3c = uStack_34;
        local_38 = uStack_30;
        uStack_34 = local_2c;
        uStack_30 = uStack_28;
        iVar5 = 4;
        uVar9 = *(uint *)(param_2 + 0x14);
        if (uVar6 != uVar9) {
          if (uVar9 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar6,uVar9,&DAT_018817d8);
          }
          if (*(char *)(*(int *)(param_2 + 0x10) + uVar6) == ')') {
            *(uint *)(param_2 + 0x38) = uVar7;
            param_1[2] = uVar8;
            param_1[3] = uVar2;
            param_1[4] = uVar3;
            param_1[5] = local_2c;
            param_1[6] = uStack_28;
            *param_1 = 0;
            param_1[1] = uVar6 + 1;
            return;
          }
          uVar10 = 0x14;
          iVar5 = thunk_FUN_016d4a50(0x14);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,0x14);
          }
          FUN_016dd1aa(iVar5,&DAT_00377a40,0x14);
          param_1[3] = iVar5;
          param_1[1] = 0;
          param_1[2] = 0x14;
          iVar5 = 0x10;
        }
        *(undefined4 *)((int)param_1 + iVar5) = uVar10;
        *param_1 = 1;
        param_1[5] = uVar6;
        FUN_00fe5d20(&local_40);
        return;
      }
      goto switchD_00fe8eb0_caseD_2a;
    case 0x55:
      if (bVar1) {
        uVar8 = uVar8 & 0xfffffff7;
LAB_00fe8e5c:
        bVar4 = true;
      }
      else {
        uVar8 = uVar8 | 8;
        bVar4 = false;
      }
      break;
    case 0x69:
      if (bVar1) {
        uVar8 = uVar8 & 0xfffffffe;
        goto LAB_00fe8e5c;
      }
      uVar8 = uVar8 | 1;
      bVar4 = false;
      break;
    case 0x6d:
      if (bVar1) {
        uVar8 = uVar8 & 0xfffffffd;
        goto LAB_00fe8e5c;
      }
      uVar8 = uVar8 | 2;
      bVar4 = false;
      break;
    case 0x73:
      if (bVar1) {
        uVar8 = uVar8 & 0xfffffffb;
        goto LAB_00fe8e5c;
      }
      uVar8 = uVar8 | 4;
      bVar4 = false;
      break;
    case 0x75:
      bVar4 = false;
      if (bVar1) {
        param_1[5] = local_3c;
        *param_1 = 1;
        param_1[1] = 0xb;
        return;
      }
      goto LAB_00fe8e64;
    case 0x78:
      if (bVar1) {
        uVar8 = uVar8 & 0xffffffef;
        goto LAB_00fe8e5c;
      }
      uVar8 = uVar8 | 0x10;
      bVar4 = false;
    }
    *(uint *)(param_2 + 0x38) = uVar8;
LAB_00fe8e64:
    bVar1 = bVar4;
    uVar6 = local_3c + 1;
  } while( true );
}

