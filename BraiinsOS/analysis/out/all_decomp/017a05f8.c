// FUN_017a05f8 @ 017a05f8 size=1764 calls_out=3 calls_in=2
// strings: 

uint FUN_017a05f8(int param_1,int *param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_44;
  int local_34;
  int local_30;
  
  iVar3 = *param_3;
  iVar13 = *param_2;
  if (iVar3 == 0) {
    iVar10 = 0;
    local_34 = 0;
  }
  else {
    local_34 = iVar3 + param_3[1];
    iVar10 = iVar3 + param_3[2];
  }
  if (iVar13 == 0) {
    iVar11 = 0;
    local_30 = 0;
  }
  else {
    iVar11 = param_2[2];
    local_30 = iVar13 + param_2[1];
  }
  if (iVar13 != 0) {
    iVar11 = iVar13 + iVar11;
  }
  if (*(int *)(param_1 + 300) == 1) {
    if (iVar10 != 0) {
      iVar10 = iVar10 - *(int *)(param_1 + 0x988);
    }
    param_3[2] = param_3[2] - *(int *)(param_1 + 0x988);
    *(undefined4 *)(param_1 + 0x988) = 0;
  }
LAB_017a06a0:
  iVar6 = *(int *)(param_1 + 0x974);
  do {
    if (iVar6 == 0) {
      return 0xffffffc2;
    }
    if (iVar6 == 1) {
      local_44 = iVar11;
      if (param_4 != 2) {
        iVar6 = *(int *)(param_1 + 300);
        if (iVar6 == 0) {
          iVar2 = *(int *)(param_1 + 0x95c);
          uVar5 = local_34 - iVar10;
          goto LAB_017a0860;
        }
        if (param_4 == 0) {
          uVar5 = *(uint *)(param_1 + 0x250);
          if ((uint)(local_34 - iVar10) < *(uint *)(param_1 + 0x250)) {
            *(int *)(param_1 + 0x988) = local_34 - iVar10;
            iVar6 = *(int *)(param_1 + 0x978);
            goto LAB_017a0ad4;
          }
        }
        else {
          if (param_4 == 1 && iVar10 == local_34) goto LAB_017a0ac8;
          uVar5 = local_34 - iVar10;
          if (*(uint *)(param_1 + 0x250) <= (uint)(local_34 - iVar10)) {
            uVar5 = *(uint *)(param_1 + 0x250);
          }
        }
        uVar8 = local_30 - iVar11;
        uVar9 = uVar8;
        if (uVar5 < 0xff00ff00) goto LAB_017a0794;
        if (uVar8 < 0xffffffb8) {
LAB_017a0b84:
          iVar2 = *(int *)(param_1 + 0x130);
          uVar9 = uVar8;
          goto LAB_017a0b88;
        }
        goto LAB_017a07f4;
      }
      uVar5 = local_34 - iVar10;
      uVar8 = local_30 - iVar11;
      if (uVar5 < 0xff00ff00) {
        uVar4 = uVar5 + (uVar5 >> 8);
        if (uVar5 < 0x20000) {
          uVar4 = uVar4 + (0x20000 - uVar5 >> 0xb);
        }
        if (uVar4 == 0) {
          uVar4 = 0xffffffb8;
        }
      }
      else {
        uVar4 = 0xffffffb8;
      }
      uVar9 = uVar8;
      if ((uVar8 < uVar4) && (iVar2 = *(int *)(param_1 + 0x130), iVar2 != 1)) {
        iVar6 = *(int *)(param_1 + 300);
        if (iVar6 == 0) {
          iVar2 = *(int *)(param_1 + 0x95c);
          goto LAB_017a0860;
        }
        if (*(uint *)(param_1 + 0x250) <= uVar5) {
          uVar5 = *(uint *)(param_1 + 0x250);
        }
        if (uVar5 < 0xff00ff00) goto LAB_017a0794;
        if (0xffffffb7 < uVar8) goto LAB_017a07e4;
LAB_017a0b88:
        uVar8 = uVar9;
        if (iVar2 == 1) {
LAB_017a0cac:
          uVar9 = uVar8;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x968);
          local_44 = *(int *)(param_1 + 0x964);
        }
LAB_017a07d8:
        if (param_4 == 2) {
LAB_017a07e4:
          if (local_34 != iVar10 + uVar5) goto LAB_017a07f4;
          uVar4 = FUN_0179fe00(param_1,local_44,uVar8,iVar10,uVar5);
          uVar7 = 1;
        }
        else {
LAB_017a07f4:
          uVar7 = 0;
          uVar4 = FUN_0179eb28(param_1,local_44,uVar8,iVar10,uVar5,1,0);
        }
        if (iVar10 != 0) {
          iVar10 = iVar10 + uVar5;
        }
        if (0xffffff88 < uVar4) {
          return uVar4;
        }
        *(uint *)(param_1 + 0x978) = uVar7;
        uVar8 = uVar9;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x95c);
        if (iVar2 == 0) {
          uVar5 = FUN_0179fe00(param_1,iVar11,uVar8,iVar10,uVar5);
          if (uVar5 < 0xffffff89) {
            *(undefined4 *)(param_1 + 0x974) = 0;
            *(undefined4 *)(param_1 + 0x978) = 1;
            *(undefined4 *)(param_1 + 600) = 0;
            *(undefined4 *)(param_1 + 0x25c) = 0;
            param_3[2] = local_34 - iVar3;
            param_2[2] = (iVar11 + uVar5) - iVar13;
            return 0;
          }
          return uVar5;
        }
        iVar6 = *(int *)(param_1 + 300);
        if (iVar6 != 0) {
          if (*(uint *)(param_1 + 0x250) <= uVar5) {
            uVar5 = *(uint *)(param_1 + 0x250);
          }
          if (uVar5 < 0xff00ff00) goto LAB_017a0794;
          if (uVar8 < 0xffffffb8) goto LAB_017a0b84;
          goto LAB_017a07e4;
        }
LAB_017a0860:
        uVar8 = *(int *)(param_1 + 0x960) - iVar2;
        if (uVar5 <= uVar8) {
          uVar8 = uVar5;
        }
        if (uVar8 != 0) {
          FUN_016dd1aa(*(int *)(param_1 + 0x950) + iVar2,iVar10,uVar8);
          iVar2 = *(int *)(param_1 + 0x95c);
        }
        uVar5 = uVar8 + iVar2;
        if (iVar10 != 0) {
          iVar10 = iVar10 + uVar8;
        }
        *(uint *)(param_1 + 0x95c) = uVar5;
        if (param_4 == 0) {
          if (uVar5 < *(uint *)(param_1 + 0x960)) goto LAB_017a0ac8;
        }
        else if ((param_4 == 1) && (uVar5 == *(uint *)(param_1 + 0x958))) {
LAB_017a0ac8:
          local_34 = iVar10;
          iVar6 = *(int *)(param_1 + 0x978);
          goto LAB_017a0ad4;
        }
        iVar6 = *(int *)(param_1 + 300);
        uVar8 = local_30 - iVar11;
        uVar9 = uVar8;
        if (iVar6 == 0) {
          iVar2 = *(int *)(param_1 + 0x958);
          uVar5 = *(int *)(param_1 + 0x95c) - iVar2;
          if (uVar5 < 0xff00ff00) goto LAB_017a0794;
          if ((uVar8 < 0xffffffb8) && (*(int *)(param_1 + 0x130) != 1)) {
            local_44 = *(int *)(param_1 + 0x964);
            uVar4 = *(uint *)(param_1 + 0x968);
          }
          else {
            uVar4 = uVar8;
          }
        }
        else {
          uVar5 = local_34 - iVar10;
          if (*(uint *)(param_1 + 0x250) <= (uint)(local_34 - iVar10)) {
            uVar5 = *(uint *)(param_1 + 0x250);
          }
          if (0xff00feff < uVar5) {
            if (uVar8 < 0xffffffb8) goto LAB_017a0b84;
            goto LAB_017a0cac;
          }
LAB_017a0794:
          uVar8 = uVar5 + (uVar5 >> 8);
          if (uVar5 < 0x20000) {
            uVar8 = uVar8 + (0x20000 - uVar5 >> 0xb);
          }
          if (uVar8 == 0) {
            uVar8 = 0xffffffb8;
          }
          if ((uVar9 < uVar8) && (*(int *)(param_1 + 0x130) != 1)) {
            local_44 = *(int *)(param_1 + 0x964);
            uVar8 = *(uint *)(param_1 + 0x968);
          }
          else {
            uVar8 = uVar9;
          }
          if (iVar6 != 0) goto LAB_017a07d8;
          iVar2 = *(int *)(param_1 + 0x958);
          uVar4 = uVar8;
          uVar8 = uVar9;
        }
        bVar1 = param_4 == 2 && iVar10 == local_34;
        if (bVar1) {
          uVar4 = FUN_0179fe00(param_1);
        }
        else {
          uVar4 = FUN_0179eb28(param_1,local_44,uVar4,*(int *)(param_1 + 0x950) + iVar2,uVar5,1,0);
        }
        uVar7 = (uint)bVar1;
        if (0xffffff88 < uVar4) {
          return uVar4;
        }
        iVar6 = *(int *)(param_1 + 0x95c);
        uVar5 = iVar6 + *(int *)(param_1 + 0x250);
        *(uint *)(param_1 + 0x978) = uVar7;
        *(uint *)(param_1 + 0x960) = uVar5;
        if (*(uint *)(param_1 + 0x954) < uVar5) {
          iVar6 = 0;
          *(int *)(param_1 + 0x960) = *(int *)(param_1 + 0x250);
          *(undefined4 *)(param_1 + 0x95c) = 0;
        }
        *(int *)(param_1 + 0x958) = iVar6;
      }
      if (iVar11 == local_44) break;
      iVar2 = 0;
      *(uint *)(param_1 + 0x96c) = uVar4;
      *(undefined4 *)(param_1 + 0x970) = 0;
      *(undefined4 *)(param_1 + 0x974) = 2;
    }
    else {
      if (iVar6 != 2) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar2 = *(int *)(param_1 + 0x970);
      uVar4 = *(int *)(param_1 + 0x96c) - iVar2;
      uVar8 = local_30 - iVar11;
    }
    if (uVar8 < uVar4) {
      uVar5 = uVar8;
    }
    else {
      uVar5 = uVar4;
    }
    iVar12 = iVar11;
    if (uVar5 != 0) {
      iVar12 = iVar11 + uVar5;
      FUN_016dd1aa(iVar11,*(int *)(param_1 + 0x964) + iVar2,uVar5);
      iVar2 = *(int *)(param_1 + 0x970);
    }
    iVar6 = *(int *)(param_1 + 0x978);
    *(uint *)(param_1 + 0x970) = uVar5 + iVar2;
    iVar11 = iVar12;
    if (uVar8 < uVar4) {
      local_34 = iVar10;
LAB_017a0ad4:
      param_3[2] = local_34 - iVar3;
      param_2[2] = iVar11 - iVar13;
      if (iVar6 != 0) {
        return 0;
      }
      if (*(int *)(param_1 + 300) == 1) {
        return *(int *)(param_1 + 0x250) - *(int *)(param_1 + 0x988);
      }
      uVar5 = *(int *)(param_1 + 0x960) - *(int *)(param_1 + 0x95c);
      if (uVar5 == 0) {
        return *(uint *)(param_1 + 0x250);
      }
      return uVar5;
    }
    *(undefined4 *)(param_1 + 0x96c) = 0;
    *(undefined4 *)(param_1 + 0x970) = 0;
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x974) = 0;
      *(undefined4 *)(param_1 + 600) = 0;
      *(undefined4 *)(param_1 + 0x25c) = 0;
      param_3[2] = iVar10 - iVar3;
      param_2[2] = iVar12 - iVar13;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x974) = 1;
    iVar6 = *(int *)(param_1 + 0x974);
  } while( true );
  iVar11 = iVar11 + uVar4;
  if (uVar7 != 0) {
    *(undefined4 *)(param_1 + 0x974) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    param_3[2] = iVar10 - iVar3;
    param_2[2] = iVar11 - iVar13;
    return 0;
  }
  goto LAB_017a06a0;
}

