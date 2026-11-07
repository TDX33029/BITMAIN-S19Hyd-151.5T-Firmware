// FUN_01a50a40 @ 01a50a40 size=456 calls_out=7 calls_in=1
// strings: 

void FUN_01a50a40(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint uStack_30;
  int iStack_2c;
  uint local_28;
  
  uVar10 = *(undefined4 *)(param_3 + 8);
  iVar11 = *(int *)(param_3 + 0xc);
  FUN_01a4fe90(&local_58);
  iVar7 = local_44;
  iVar6 = local_48;
  iVar5 = local_50;
  iVar4 = local_54;
  if (local_58 == 1) {
    *(undefined4 *)(param_3 + 8) = uVar10;
    *(int *)(param_3 + 0xc) = iVar11;
    FUN_01a471bc(&local_40,param_3);
    if (local_40 == 3) {
      uVar1 = (undefined1)local_3c;
      if (local_3c < 0x80) {
        local_28 = local_3c & 0xff;
        uVar9 = 1;
      }
      else {
        uVar2 = (undefined1)(local_3c >> 6);
        if (local_3c < 0x800) {
          local_28 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
          uVar9 = 2;
        }
        else {
          uVar3 = (undefined1)(local_3c >> 0xc);
          if (local_3c >> 0x10 == 0) {
            uVar9 = 3;
            local_28 = (CONCAT21(CONCAT11(uVar1,uVar2),uVar3) & 0xff3fff | 0x8000) & 0x3fffff |
                       0x8000e0;
          }
          else {
            uVar9 = 4;
            local_28 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),(char)(local_3c >> 0x12)) &
                       0x3f3f3fff | 0x808080f0;
          }
        }
      }
      iVar8 = FUN_01298504(uVar9,1);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar9);
      }
      FUN_01bed4e2(iVar8,&local_28,uVar9);
      local_40 = 3;
      local_34 = uVar9;
      local_3c = uVar9;
      local_38 = iVar8;
      uStack_30 = (uint)&local_58 | 4;
      iStack_2c = iVar11;
    }
    else if (local_40 == 1) {
      FUN_0134aee0(local_54,local_50,4,0xc);
      FUN_012d40d0(local_48,local_44);
      *param_1 = 1;
      param_1[1] = local_3c;
      param_1[2] = local_38;
      param_1[3] = local_34;
      param_1[4] = uStack_30;
      param_1[5] = iStack_2c;
      return;
    }
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = uStack_30;
    param_1[5] = iStack_2c;
    FUN_0134aee0(iVar4,iVar5,4,0xc);
    FUN_012d40d0(iVar6,iVar7);
  }
  else {
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = local_50;
    param_1[3] = iStack_4c;
    param_1[4] = local_48;
    param_1[5] = local_44;
  }
  return;
}

