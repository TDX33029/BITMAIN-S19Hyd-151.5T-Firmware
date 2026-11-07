// FUN_0130d344 @ 0130d344 size=1592 calls_out=8 calls_in=10
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0130d344(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_29;
  undefined4 local_28;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(uint *)(param_3 + 0x18);
    uVar1 = *(uint *)(param_3 + 0x1c);
    if (uVar3 - uVar1 < 5) {
      local_29 = 10;
      local_28 = 0;
      FUN_01328914(&local_38,param_3,&local_29,1);
      if (local_38 != 4) goto LAB_0130d52c;
    }
    else {
      if (uVar3 < uVar1) goto LAB_0130d94c;
      *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 10;
      *(uint *)(param_3 + 0x1c) = uVar1 + 1;
    }
    FUN_01328ef8(&local_38,param_3,uVar8);
    if (local_38 != 4) {
LAB_0130d52c:
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = local_30;
      return;
    }
    FUN_01328914(&local_38,param_3,uVar6,uVar8);
    if (local_38 != 4) goto LAB_0130d52c;
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x1c);
  if (uVar2 <= uVar1) {
    if (uVar2 != 0) {
      iVar9 = *(int *)(param_2 + 0x14);
      iVar7 = uVar2 * 0x28;
      do {
        uVar3 = *(uint *)(param_3 + 0x18);
        uVar1 = *(uint *)(param_3 + 0x1c);
        if (uVar3 - uVar1 < 5) {
          local_29 = 0x12;
          local_28 = 0;
          FUN_01328914(&local_38,param_3,&local_29,1);
          if (local_38 != 4) goto LAB_0130d8c8;
        }
        else {
          if (uVar3 < uVar1) goto LAB_0130d94c;
          *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x12;
          *(uint *)(param_3 + 0x1c) = uVar1 + 1;
        }
        FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar9 + 0x24));
        if ((local_38 != 4) || (FUN_0130ddec(&local_38,iVar9,param_3), local_38 != 4))
        goto LAB_0130d8c8;
        iVar9 = iVar9 + 0x28;
        iVar7 = iVar7 + -0x28;
      } while (iVar7 != 0);
    }
    if (*(char *)(param_2 + 0x44) != '\0') {
      iVar7 = *(int *)(param_2 + 0x40);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01890768);
      }
      uVar3 = *(uint *)(param_3 + 0x18);
      uVar1 = *(uint *)(param_3 + 0x1c);
      if (uVar3 - uVar1 < 5) {
        local_29 = 0x1a;
        local_28 = 0;
        FUN_01328914(&local_38,param_3,&local_29,1);
        if (local_38 != 4) goto LAB_0130d8e0;
      }
      else {
        if (uVar3 < uVar1) {
LAB_0130d94c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar1,uVar3,uVar3,&DAT_0188fa90);
        }
        *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x1a;
        *(uint *)(param_3 + 0x1c) = uVar1 + 1;
      }
      FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar7 + 0x14));
      if ((local_38 != 4) || (FUN_012f9858(&local_38,iVar7,param_3), local_38 != 4)) {
LAB_0130d8e0:
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = local_30;
        return;
      }
    }
    uVar1 = *(uint *)(param_2 + 0x28);
    uVar2 = *(uint *)(param_2 + 0x2c);
    if (uVar2 <= uVar1) {
      if (uVar2 != 0) {
        iVar7 = *(int *)(param_2 + 0x24);
        iVar9 = 0;
        do {
          uVar3 = *(uint *)(param_3 + 0x18);
          uVar1 = *(uint *)(param_3 + 0x1c);
          if (uVar3 - uVar1 < 5) {
            local_29 = 0x22;
            local_28 = 0;
            FUN_01328914(&local_38,param_3,&local_29,1);
            if (local_38 != 4) goto LAB_0130d8e0;
          }
          else {
            if (uVar3 < uVar1) goto LAB_0130d94c;
            *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x22;
            *(uint *)(param_3 + 0x1c) = uVar1 + 1;
          }
          iVar10 = iVar7 + iVar9;
          FUN_01328ef8(&local_38,param_3,*(undefined4 *)(iVar10 + 0x14));
          if (local_38 != 4) goto LAB_0130d8e0;
          if (*(int *)(iVar7 + iVar9) == 1) {
            iVar4 = *(int *)(iVar10 + 4);
            uVar3 = *(uint *)(param_3 + 0x18);
            uVar1 = *(uint *)(param_3 + 0x1c);
            if (uVar3 - uVar1 < 5) {
              local_29 = 8;
              local_28 = 0;
              FUN_01328914(&local_38,param_3,&local_29,1);
              if (local_38 != 4) goto LAB_0130d8f4;
            }
            else {
              if (uVar3 < uVar1) goto LAB_0130d94c;
              *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 8;
              *(uint *)(param_3 + 0x1c) = uVar1 + 1;
            }
            FUN_0132901c(&local_38,param_3,iVar4,iVar4 >> 0x1f);
            if (local_38 != 4) goto LAB_0130d8f4;
          }
          if (*(int *)(iVar10 + 8) == 1) {
            iVar4 = *(int *)(iVar10 + 0xc);
            uVar3 = *(uint *)(param_3 + 0x18);
            uVar1 = *(uint *)(param_3 + 0x1c);
            if (uVar3 - uVar1 < 5) {
              local_29 = 0x10;
              local_28 = 0;
              FUN_01328914(&local_38,param_3,&local_29,1);
              if (local_38 != 4) goto LAB_0130d8f4;
            }
            else {
              if (uVar3 < uVar1) goto LAB_0130d94c;
              *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x10;
              *(uint *)(param_3 + 0x1c) = uVar1 + 1;
            }
            FUN_0132901c(&local_38,param_3,iVar4,iVar4 >> 0x1f);
            if (local_38 != 4) {
LAB_0130d8f4:
              *param_1 = local_38;
              param_1[1] = local_34;
              param_1[2] = local_30;
              return;
            }
          }
          FUN_01328b10(&local_38,param_3,*(undefined4 *)(iVar10 + 0x10));
          if (local_38 != 4) {
            *param_1 = local_38;
            param_1[1] = local_34;
            param_1[2] = local_30;
            return;
          }
          iVar9 = iVar9 + 0x18;
        } while (uVar2 * 0x18 != iVar9);
      }
      uVar1 = *(uint *)(param_2 + 0x38);
      uVar2 = *(uint *)(param_2 + 0x3c);
      if (uVar2 <= uVar1) {
        if (uVar2 != 0) {
          puVar5 = (undefined4 *)(*(int *)(param_2 + 0x34) + 4);
          iVar7 = uVar2 * 0xc;
          do {
            uVar6 = *puVar5;
            uVar8 = puVar5[1];
            uVar3 = *(uint *)(param_3 + 0x18);
            uVar1 = *(uint *)(param_3 + 0x1c);
            if (uVar3 - uVar1 < 5) {
              local_28 = 0;
              local_29 = 0x2a;
              FUN_01328914(&local_38,param_3,&local_29,1);
              if (local_38 != 4) {
                *param_1 = local_38;
                param_1[1] = local_34;
                param_1[2] = local_30;
                return;
              }
            }
            else {
              if (uVar3 < uVar1) goto LAB_0130d94c;
              *(undefined1 *)(*(int *)(param_3 + 0x14) + uVar1) = 0x2a;
              *(uint *)(param_3 + 0x1c) = uVar1 + 1;
            }
            FUN_01328ef8(&local_38,param_3,uVar8);
            if (local_38 != 4) {
LAB_0130d908:
              *param_1 = local_38;
              param_1[1] = local_34;
              param_1[2] = local_30;
              return;
            }
            FUN_01328914(&local_38,param_3,uVar6,uVar8);
            if (local_38 != 4) goto LAB_0130d908;
            puVar5 = puVar5 + 3;
            iVar7 = iVar7 + -0xc;
          } while (iVar7 != 0);
        }
        FUN_01328b10(&local_38,param_3,*(undefined4 *)(param_2 + 0x48));
        if (local_38 == 4) {
          *param_1 = 4;
          return;
        }
LAB_0130d8c8:
        *param_1 = local_38;
        param_1[1] = local_34;
        param_1[2] = local_30;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa36c(0,uVar2,uVar1,&DAT_01890988);
}

