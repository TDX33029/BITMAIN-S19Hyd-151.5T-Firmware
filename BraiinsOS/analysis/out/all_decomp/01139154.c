// FUN_01139154 @ 01139154 size=524 calls_out=7 calls_in=3
// strings: 

void FUN_01139154(uint *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_r7;
  int unaff_r8;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined2 local_34;
  undefined1 local_32;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar7 = *(uint *)(param_2 + 8);
  if (0x5555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  iVar1 = uVar7 * 0x18;
  if (iVar1 == 0) {
    local_3c = 8;
    local_40 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    iVar10 = 0x1139194;
    local_3c = thunk_FUN_016d4a50();
    if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar1);
    }
    local_40 = uVar7;
    if (uVar7 != 0) {
      iVar8 = 0;
      uVar9 = 0;
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
          iVar4 = iVar3 + iVar8;
          local_32 = *(undefined1 *)(iVar4 + 3);
          local_34 = *(undefined2 *)(iVar4 + 1);
          local_44 = *(undefined4 *)(iVar4 + 0x10);
          local_48 = *(undefined4 *)(iVar4 + 0x14);
          iVar10 = *(int *)(iVar4 + 0xc);
          unaff_r8 = *(int *)(iVar4 + 8);
          unaff_r7 = *(int *)(iVar4 + 4);
          break;
        case 3:
          unaff_r7 = *(int *)(iVar3 + iVar8 + 0xc);
          uVar6 = *(undefined4 *)(iVar3 + iVar8 + 8);
          if (unaff_r7 == 0) {
            unaff_r8 = 1;
          }
          else {
            unaff_r8 = thunk_FUN_016d4a50(unaff_r7);
            if (unaff_r8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,unaff_r7);
            }
          }
          FUN_016dd1aa(unaff_r8,uVar6,unaff_r7);
          iVar10 = unaff_r7;
          break;
        case 4:
          FUN_01139154(&local_30,iVar3 + iVar8 + 4);
          unaff_r7 = local_30;
          unaff_r8 = local_2c;
          iVar10 = local_28;
          break;
        case 5:
          iVar10 = iVar3 + iVar8;
          if (*(int *)(iVar10 + 0xc) == 0) {
            iVar10 = 0;
            unaff_r7 = 0;
          }
          else {
            if (*(int *)(iVar10 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018ac52c);
            }
            FUN_0113a3a4(&local_30,*(int *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
            unaff_r7 = local_30;
            iVar10 = local_28;
          }
          unaff_r8 = local_2c;
        }
        puVar5 = (undefined1 *)(local_3c + iVar8);
        *puVar5 = uVar2;
        iVar8 = iVar8 + 0x18;
        *(undefined4 *)(puVar5 + 0x10) = local_44;
        *(undefined4 *)(puVar5 + 0x14) = local_48;
        *(undefined2 *)(puVar5 + 1) = local_34;
        puVar5[3] = local_32;
        *(int *)(puVar5 + 0xc) = iVar10;
        *(int *)(puVar5 + 8) = unaff_r8;
        *(int *)(puVar5 + 4) = unaff_r7;
      } while (uVar7 != uVar9);
    }
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = uVar7;
  return;
}

