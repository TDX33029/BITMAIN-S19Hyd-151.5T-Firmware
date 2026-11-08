// FUN_00f7b1e4 @ 00f7b1e4 size=728 calls_out=1 calls_in=1
// strings: 

longlong FUN_00f7b1e4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint unaff_r11;
  bool bVar12;
  
  uVar6 = 0;
  if (*param_2 != 0) {
LAB_00f7b1fc:
    return CONCAT44(unaff_r11,uVar6);
  }
  iVar9 = param_2[1];
  uVar8 = param_2[2];
  if ((*(uint *)(param_1 + 0x144) & 0x2000) == 0) {
    bVar12 = param_3 == 0;
    if (!bVar12) {
      param_2 = (int *)(*(uint *)(param_1 + 0x148) & 0x2000);
      bVar12 = param_2 == (int *)0x0;
    }
    if (!bVar12) {
LAB_00f7b30c:
      return (ulonglong)unaff_r11 << 0x20;
    }
  }
  else if (param_3 != 0) goto LAB_00f7b30c;
  bVar12 = (*(uint *)(param_1 + 0x144) & 0x100) == 0;
  if (bVar12) {
    param_2 = (int *)(uint)*(byte *)(param_1 + 0x149);
  }
  if (bVar12 && ((uint)param_2 & 1) == 0) {
    iVar3 = *(int *)(param_1 + 100);
    iVar11 = *(int *)(param_1 + 0x60);
  }
  else {
    iVar3 = *(int *)(param_1 + 100);
    iVar11 = *(int *)(param_1 + 0x60);
    iVar4 = iVar3 * 0x16c + iVar11;
    if (iVar3 != 0) {
      iVar2 = iVar11;
      do {
        unaff_r11 = *(uint *)(iVar2 + 0x120);
        iVar10 = iVar2 + 0x16c;
        if (uVar8 <= unaff_r11) {
          uVar6 = *(uint *)(iVar2 + 0x11c);
          iVar1 = thunk_FUN_016dd50a(iVar9,uVar6,uVar8);
          if (iVar1 == 0) {
LAB_00f7b2f8:
            if (uVar6 != 0) {
              goto LAB_00f7b338;
            }
            break;
          }
        }
        puVar5 = (uint *)(*(int *)(iVar2 + 0x24) + 4);
        for (iVar2 = *(int *)(iVar2 + 0x28) * 0xc; iVar2 != 0; iVar2 = iVar2 + -0xc) {
          unaff_r11 = *puVar5;
          if (uVar8 <= unaff_r11) {
            uVar6 = puVar5[-1];
            iVar1 = thunk_FUN_016dd50a(iVar9,uVar6,uVar8);
            if (iVar1 == 0) goto LAB_00f7b2f8;
          }
          puVar5 = puVar5 + 3;
        }
        iVar2 = iVar10;
      } while (iVar10 != iVar4);
    }
  }
joined_r0x00f7b474:
  if (iVar3 != 0) {
    iVar3 = iVar11 + iVar3 * 0x16c;
    do {
      uVar6 = *(uint *)(iVar11 + 0x120);
      if (uVar8 == uVar6) {
        uVar7 = *(undefined4 *)(iVar11 + 0x11c);
        iVar4 = thunk_FUN_016dd50a(iVar9,uVar7,uVar8);
        if (iVar4 == 0) {
          return CONCAT44(uVar8,uVar7);
        }
      }
      if (*(int *)(iVar11 + 0x28) != 0) {
        puVar5 = (uint *)(*(int *)(iVar11 + 0x24) + 4);
        iVar4 = *(int *)(iVar11 + 0x28) * 0xc;
        do {
          if ((uVar8 == *puVar5) && (iVar2 = thunk_FUN_016dd50a(iVar9,puVar5[-1],uVar8), iVar2 == 0)
             ) {
            return CONCAT44(uVar6,*(undefined4 *)(iVar11 + 0x11c));
          }
          puVar5 = puVar5 + 3;
          iVar4 = iVar4 + -0xc;
        } while (iVar4 != 0);
      }
      iVar11 = iVar11 + 0x16c;
    } while (iVar11 != iVar3);
    unaff_r11 = uVar8;
  }
  return (ulonglong)unaff_r11 << 0x20;
LAB_00f7b338:
  if (iVar10 == iVar4) goto LAB_00f7b1fc;
  if ((uVar8 <= *(uint *)(iVar10 + 0x120)) &&
     (iVar2 = thunk_FUN_016dd50a(iVar9,*(undefined4 *)(iVar10 + 0x11c),uVar8), iVar2 == 0))
  goto joined_r0x00f7b474;
  puVar5 = (uint *)(*(int *)(iVar10 + 0x24) + 4);
  for (iVar2 = *(int *)(iVar10 + 0x28) * 0xc; iVar2 != 0; iVar2 = iVar2 + -0xc) {
    if ((uVar8 <= *puVar5) && (iVar1 = thunk_FUN_016dd50a(iVar9,puVar5[-1],uVar8), iVar1 == 0))
    goto joined_r0x00f7b474;
    puVar5 = puVar5 + 3;
  }
  iVar10 = iVar10 + 0x16c;
  goto LAB_00f7b338;
}

