// FUN_019bf7c4 @ 019bf7c4 size=584 calls_out=12 calls_in=1
// strings: 

void FUN_019bf7c4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  
  local_34 = 0x1b6;
  local_30 = 1;
  local_38 = 0;
  local_2c = 0;
  FUN_019a581c(&local_68,&local_38,param_2,param_3);
  if ((char)local_68 == '\x04') {
    local_60 = local_64;
    local_58 = thunk_FUN_01be5118(0x4000);
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1);
    }
    local_54 = 0;
    local_5c = 0x4000;
    FUN_019a65b4(&local_50,&local_60,&local_5c);
    if ((char)local_50 == '\x04') {
      iVar1 = thunk_FUN_01be5118(0x78);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x78);
      }
      local_48 = 10;
      local_40 = 0;
      local_44 = iVar1;
      if (local_54 != 0) {
        iVar2 = local_58 + local_54;
        iVar5 = local_58;
        iVar6 = local_54;
        iVar8 = 0;
        do {
          iVar4 = 0;
          while (*(char *)(iVar5 + iVar4) != '\0') {
            iVar4 = iVar4 + 1;
            if (iVar5 + iVar4 == iVar2) goto LAB_019bf984;
          }
          FUN_012fbd94(&local_38,iVar5,iVar4);
          iVar9 = iVar8;
          if (local_38 != 1) {
            lVar10 = FUN_013245a0(local_34,local_30);
            iVar2 = (int)((ulonglong)lVar10 >> 0x20);
            if (iVar2 != 0) {
              uVar7 = 0;
              if (lVar10 < 0) {
LAB_019bfa08:
                    /* WARNING: Subroutine does not return */
                FUN_00664620(uVar7,local_6c);
              }
              uVar7 = 1;
              local_6c = FUN_01298504(iVar2,1);
              if (local_6c == 0) {
                local_6c = iVar2;
                goto LAB_019bfa08;
              }
              FUN_01bed4e2(local_6c,(int)lVar10,iVar2);
              if (iVar8 == local_48) {
                FUN_019abd3c(&local_48);
                iVar1 = local_44;
              }
              iVar9 = iVar8 + 1;
              piVar3 = (int *)(iVar1 + iVar8 * 0xc);
              *piVar3 = iVar2;
              piVar3[1] = local_6c;
              piVar3[2] = iVar2;
              local_40 = iVar9;
            }
          }
          iVar2 = iVar5 + iVar6;
          iVar5 = iVar5 + iVar4 + 1;
          iVar6 = iVar6 - (iVar4 + 1);
          iVar8 = iVar9;
        } while (iVar6 != 0);
      }
LAB_019bf984:
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = local_40;
    }
    else {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      FUN_0069263c(local_50,local_4c);
    }
    FUN_0134bd64(local_5c,local_58);
    FUN_01bf01d6(local_64);
  }
  else {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    FUN_0069263c(local_68,local_64);
  }
  return;
}

