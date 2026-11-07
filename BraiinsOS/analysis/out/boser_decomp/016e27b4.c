// FUN_016e27b4 @ 016e27b4 size=1000 calls_out=7 calls_in=0
// strings: ClassUnicodeRange | start

undefined4 FUN_016e27b4(int *param_1,undefined4 *****param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  undefined4 ******ppppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 ****ppppuVar12;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 ******local_38;
  code *local_34;
  undefined4 ******local_30;
  undefined4 ******local_28;
  code *local_24;
  undefined4 ******ppppppuStack_20;
  undefined4 ****local_1c;
  
  pppppuVar11 = *(undefined4 ******)*param_1;
  ppppuVar12 = (undefined4 ****)((uint *)*param_1)[1];
  uVar6 = (int)pppppuVar11 - 9;
  if ((uVar6 < 5) || (pppppuVar11 == (undefined4 *****)0x20)) {
LAB_016e27dc:
    local_28 = &local_38;
    local_24 = FUN_012fdbc0;
    local_38 = (undefined4 ******)pppppuVar11;
    FUN_00664898(&local_44,&DAT_005b90b1,&local_28);
  }
  else {
    if ((undefined4 *****)0x7f < pppppuVar11) {
      uVar6 = (uint)pppppuVar11 >> 8;
      if (uVar6 < 0x20) {
        if (uVar6 == 0) {
          bVar1 = (&DAT_00533bcd)[(uint)pppppuVar11 & 0xff];
          bVar2 = bVar1 & 1;
          goto joined_r0x016e2988;
        }
        if ((uVar6 == 0x16) && (pppppuVar11 == (undefined4 *****)0x1680)) goto LAB_016e27dc;
      }
      else if (uVar6 == 0x20) {
        bVar1 = (&DAT_00533bcd)[(uint)pppppuVar11 & 0xff];
        bVar2 = bVar1 & 2;
joined_r0x016e2988:
        uVar6 = (uint)bVar1;
        if (bVar2 != 0) goto LAB_016e27dc;
      }
      else if (uVar6 == 0x30 && pppppuVar11 == (undefined4 *****)0x3000) goto LAB_016e27dc;
    }
    if (pppppuVar11 >= (undefined4 *****)0x20) {
      uVar6 = (int)pppppuVar11 - 0x7f;
    }
    if (pppppuVar11 < (undefined4 *****)0x20 || uVar6 < 0x21) goto LAB_016e27dc;
    uVar5 = SUB41(pppppuVar11,0);
    if (pppppuVar11 < (undefined4 *****)0x80) {
      local_28 = (undefined4 ******)((uint)pppppuVar11 & 0xff);
      uVar7 = 1;
    }
    else {
      uVar3 = (undefined1)((uint)pppppuVar11 >> 6);
      if (pppppuVar11 < (undefined4 *****)0x800) {
        local_28 = (undefined4 ******)((CONCAT11(uVar5,uVar3) & 0x3fff | 0x8000) | 0xc0);
        uVar7 = 2;
      }
      else {
        uVar4 = (undefined1)((uint)pppppuVar11 >> 0xc);
        if ((uint)pppppuVar11 >> 0x10 == 0) {
          uVar7 = 3;
          local_28 = (undefined4 ******)
                     ((CONCAT21(CONCAT11(uVar5,uVar3),uVar4) & 0xff3fff | 0x8000) & 0x3fffff |
                     0x8000e0);
        }
        else {
          uVar7 = 4;
          local_28 = (undefined4 ******)
                     (CONCAT31(CONCAT21(CONCAT11(uVar5,uVar3),uVar4),
                               (char)((uint)pppppuVar11 >> 0x12)) & 0x3f3f3fff | 0x808080f0);
        }
      }
    }
    iVar8 = FUN_01298504(uVar7,1);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar7);
    }
    FUN_01bed4e2(iVar8,&local_28,uVar7);
    local_44 = uVar7;
    local_40 = iVar8;
    local_3c = uVar7;
  }
  uVar6 = (int)ppppuVar12 - 9;
  if ((4 < uVar6) && (ppppuVar12 != (undefined4 ****)0x20)) {
    if ((undefined4 ****)0x7f < ppppuVar12) {
      uVar6 = (uint)ppppuVar12 >> 8;
      if (uVar6 < 0x20) {
        if (uVar6 == 0) {
          bVar1 = (&DAT_00533bcd)[(uint)ppppuVar12 & 0xff];
          bVar2 = bVar1 & 1;
          goto joined_r0x016e2a14;
        }
        if ((uVar6 == 0x16) && (ppppuVar12 == (undefined4 ****)0x1680)) goto LAB_016e280c;
      }
      else if (uVar6 == 0x20) {
        bVar1 = (&DAT_00533bcd)[(uint)ppppuVar12 & 0xff];
        bVar2 = bVar1 & 2;
joined_r0x016e2a14:
        uVar6 = (uint)bVar1;
        if (bVar2 != 0) goto LAB_016e280c;
      }
      else if (uVar6 == 0x30 && ppppuVar12 == (undefined4 ****)0x3000) goto LAB_016e280c;
    }
    if ((undefined4 ****)0x1f < ppppuVar12) {
      uVar6 = (int)ppppuVar12 - 0x7f;
    }
    if ((undefined4 ****)0x1f < ppppuVar12 && 0x20 < uVar6) {
      uVar5 = SUB41(ppppuVar12,0);
      if (ppppuVar12 < (undefined4 ****)0x80) {
        local_28 = (undefined4 ******)((uint)ppppuVar12 & 0xff);
        ppppppuVar10 = (undefined4 ******)&DAT_00000001;
      }
      else {
        uVar3 = (undefined1)((uint)ppppuVar12 >> 6);
        if (ppppuVar12 < (undefined4 ****)0x800) {
          local_28 = (undefined4 ******)((CONCAT11(uVar5,uVar3) & 0x3fff | 0x8000) | 0xc0);
          ppppppuVar10 = (undefined4 ******)0x2;
        }
        else {
          uVar4 = (undefined1)((uint)ppppuVar12 >> 0xc);
          if ((uint)ppppuVar12 >> 0x10 == 0) {
            ppppppuVar10 = (undefined4 ******)&DAT_00000003;
            local_28 = (undefined4 ******)
                       ((CONCAT21(CONCAT11(uVar5,uVar3),uVar4) & 0xff3fff | 0x8000) & 0x3fffff |
                       0x8000e0);
          }
          else {
            ppppppuVar10 = (undefined4 ******)&SUB_00000004;
            local_28 = (undefined4 ******)
                       (CONCAT31(CONCAT21(CONCAT11(uVar5,uVar3),uVar4),
                                 (char)((uint)ppppuVar12 >> 0x12)) & 0x3f3f3fff | 0x808080f0);
          }
        }
      }
      pcVar9 = (code *)FUN_01298504(ppppppuVar10,1);
      if (pcVar9 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,ppppppuVar10);
      }
      FUN_01bed4e2(pcVar9,&local_28,ppppppuVar10);
      local_38 = ppppppuVar10;
      local_34 = pcVar9;
      local_30 = ppppppuVar10;
      goto LAB_016e2840;
    }
  }
LAB_016e280c:
  local_38 = (undefined4 ******)&local_1c;
  local_34 = FUN_012fdbc0;
  local_1c = ppppuVar12;
  FUN_00664898(&local_28,&DAT_005b90b1,&local_38);
  local_38 = local_28;
  local_34 = local_24;
  local_30 = ppppppuStack_20;
LAB_016e2840:
  uVar5 = (*(code *)param_2[1][3])(*param_2,"ClassUnicodeRange",0x11);
  local_24 = (code *)(CONCAT31((int3)((uint)local_24 >> 8),uVar5) & 0xffff00ff);
  local_28 = (undefined4 ******)param_2;
  FUN_01302c38(&local_28,"start",5,&local_44,&LAB_005fdc1c);
  FUN_01302c38(&local_28,"end",3,&local_38,&LAB_005fdc1c);
  uVar7 = FUN_01302e1c(&local_28);
  FUN_0134bd64(local_38,local_34);
  FUN_0134bd64(local_44,local_40);
  return uVar7;
}

