// FUN_007ba870 @ 007ba870 size=592 calls_out=6 calls_in=6
// strings: 

void FUN_007ba870(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int unaff_r9;
  uint uVar9;
  uint uVar10;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  undefined2 local_34;
  undefined1 local_32;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar10 = *(uint *)(param_2 + 8);
  iVar1 = uVar10 * 0x18;
  if (0x5555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    local_3c = 8;
    local_40 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    local_3c = thunk_FUN_016d4a50(iVar1);
    if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar1);
    }
    local_40 = uVar10;
    if (uVar10 != 0) {
      iVar8 = 0;
      uVar9 = 0;
      iVar4 = iVar1;
      do {
        if (iVar1 == iVar8) break;
        uVar2 = *(undefined1 *)(iVar3 + iVar8);
        uVar9 = uVar9 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar2) {
        case 0:
          break;
        default:
          iVar5 = iVar3 + iVar8;
          local_32 = *(undefined1 *)(iVar5 + 3);
          local_34 = *(undefined2 *)(iVar5 + 1);
          local_48 = *(undefined4 *)(iVar5 + 0x10);
          local_4c = *(undefined4 *)(iVar5 + 0x14);
          local_44 = *(int *)(iVar5 + 4);
          iVar4 = *(int *)(iVar5 + 0xc);
          unaff_r9 = *(int *)(iVar5 + 8);
          break;
        case 3:
          iVar4 = *(int *)(iVar3 + iVar8 + 0xc);
          uVar7 = *(undefined4 *)(iVar3 + iVar8 + 8);
          if (iVar4 == 0) {
            unaff_r9 = 1;
          }
          else {
            unaff_r9 = thunk_FUN_016d4a50(iVar4);
            if (unaff_r9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar4);
            }
          }
          FUN_016dd1aa(unaff_r9,uVar7,iVar4);
          local_44 = iVar4;
          break;
        case 4:
          FUN_007ba870(&local_30,iVar3 + iVar8 + 4);
          local_44 = local_30;
          iVar4 = local_28;
          unaff_r9 = local_2c;
          break;
        case 5:
          iVar4 = iVar3 + iVar8;
          if (*(int *)(iVar4 + 0xc) == 0) {
            local_44 = 0;
            iVar4 = 0;
          }
          else {
            if (*(int *)(iVar4 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018ac52c);
            }
            FUN_00747b14(&local_30,*(int *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
            local_44 = local_30;
            iVar4 = local_28;
          }
          unaff_r9 = local_2c;
        }
        puVar6 = (undefined1 *)(local_3c + iVar8);
        *puVar6 = uVar2;
        iVar8 = iVar8 + 0x18;
        *(undefined4 *)(puVar6 + 0x10) = local_48;
        *(undefined4 *)(puVar6 + 0x14) = local_4c;
        puVar6[3] = local_32;
        *(undefined2 *)(puVar6 + 1) = local_34;
        *(int *)(puVar6 + 0xc) = iVar4;
        *(int *)(puVar6 + 8) = unaff_r9;
        *(int *)(puVar6 + 4) = local_44;
      } while (uVar10 != uVar9);
    }
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = uVar10;
  return;
}

