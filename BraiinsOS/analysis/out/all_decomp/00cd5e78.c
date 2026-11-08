// FUN_00cd5e78 @ 00cd5e78 size=716 calls_out=5 calls_in=1
// strings: 

void FUN_00cd5e78(uint *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint local_68;
  uint local_64;
  uint local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined1 local_40;
  int local_3c;
  int local_38;
  undefined2 local_34;
  int local_30 [2];
  int local_28;
  
  uVar6 = param_3 - param_2;
  uVar1 = 0;
  if (0x7ffffff8 < uVar6) {
LAB_00cd5e94:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,uVar6);
  }
  if (param_3 == param_2) {
    uVar8 = 0;
    local_64 = 4;
    local_68 = 0;
  }
  else {
    if (uVar6 < 4) {
      local_58 = 0;
      iVar9 = FUN_016d51b0(&local_58,4,uVar6);
      uVar1 = 4;
      if (iVar9 != 0) goto LAB_00cd5e94;
      local_64 = local_58;
    }
    else {
      local_64 = thunk_FUN_016d4a50(uVar6);
    }
    if (local_64 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar6);
    }
    local_68 = uVar6 / 0x18;
    iVar9 = 0;
    uVar8 = 0;
    do {
      iVar4 = param_2 + iVar9;
      local_40 = 1;
      local_34 = 0;
      local_50 = *(int *)(iVar4 + 0x14);
      iVar5 = *(int *)(iVar4 + 0x10);
      local_3c = 0;
      local_44 = 10;
      local_4c = 0;
      local_58 = 10;
      local_54 = iVar5;
      local_48 = local_50;
      local_38 = local_50;
      FUN_0062a644(local_30,&local_58);
      if (local_30[0] == 1) {
        uVar7 = local_28 - local_3c;
joined_r0x00cd601c:
        iVar5 = iVar5 + local_3c;
        uVar3 = uVar7;
        if ((uVar7 == 0) || (*(char *)(iVar5 + uVar7 + -1) != '\n')) {
LAB_00cd6048:
          uVar1 = 0;
          bVar10 = uVar3 == 0;
          if ((int)uVar3 < 0) goto LAB_00cd6140;
        }
        else {
          uVar3 = uVar7 - 1;
          if (uVar3 != 0) {
            if (*(char *)(iVar5 + uVar7 + -2) == '\r') {
              uVar3 = uVar7 - 2;
            }
            goto LAB_00cd6048;
          }
          bVar10 = true;
          uVar3 = 0;
        }
        uVar6 = uVar3;
        if (bVar10) {
          uVar7 = 1;
          uVar6 = 0;
        }
        else {
          uVar7 = thunk_FUN_016d4a50(uVar6);
          if (uVar7 == 0) {
            uVar1 = 1;
LAB_00cd6140:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar1,uVar6);
          }
        }
      }
      else {
        if ((local_34._1_1_ == '\0') && (((char)local_34 == '\x01' || (local_38 != local_3c)))) {
          uVar7 = local_38 - local_3c;
          iVar5 = local_54;
          goto joined_r0x00cd601c;
        }
        uVar7 = 1;
        uVar6 = 0;
        iVar5 = 1;
      }
      FUN_016dd1aa(uVar7,iVar5,uVar6);
      iVar5 = *(int *)(iVar4 + 8);
      uVar1 = *(undefined4 *)(iVar4 + 4);
      if (iVar5 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = thunk_FUN_016d4a50(iVar5);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar5);
        }
      }
      FUN_016dd1aa(iVar4,uVar1,iVar5);
      uVar8 = uVar8 + 1;
      piVar2 = (int *)(local_64 + iVar9);
      *piVar2 = iVar5;
      iVar9 = iVar9 + 0x18;
      piVar2[1] = iVar4;
      piVar2[2] = iVar5;
      piVar2[3] = uVar6;
      piVar2[5] = uVar6;
      piVar2[4] = uVar7;
      uVar6 = uVar7;
    } while (local_68 != uVar8);
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = uVar8;
  return;
}

