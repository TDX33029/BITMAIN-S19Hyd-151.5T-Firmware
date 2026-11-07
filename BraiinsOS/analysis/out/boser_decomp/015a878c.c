// FUN_015a878c @ 015a878c size=1000 calls_out=7 calls_in=1
// strings: record is expired; removing it from cache.Sent SearchStopped to the listener

undefined8 FUN_015a878c(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int *piVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 *puVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  int local_44;
  char *local_40;
  int local_3c;
  char *local_38;
  int local_34;
  undefined *local_30;
  int local_2c;
  int local_28;
  
  uVar20 = *param_2;
  iVar25 = param_2[1];
  iVar2 = (**(code **)(iVar25 + 0x10))(uVar20);
  uVar17 = *(uint *)(iVar2 + 0xc);
  uVar3 = *(uint *)(iVar2 + 8);
  uVar9 = *(uint *)*param_1;
  uVar23 = ((uint *)*param_1)[1];
  if (uVar23 <= uVar17 && (uint)(uVar3 <= uVar9) <= uVar23 - uVar17) goto LAB_015a8b4c;
  if (3 < DAT_01d51b00) {
    local_34 = 0x17;
    local_3c = 0x17;
    local_30 = &DAT_01cfcad8;
    local_38 = "m";
    local_40 = "m";
    FUN_015fb650("record is expired, removing it from cache.Sent SearchStopped to the listener",0x55
                 ,4,&local_40);
  }
  piVar18 = (int *)param_1[1];
  iVar2 = *piVar18;
  uVar28 = (**(code **)(iVar25 + 0x3c))(uVar20);
  uVar1 = (**(code **)(iVar25 + 0x40))(uVar20);
  if (uVar1 < 0x10) {
    if (uVar1 == 1) {
LAB_015a8894:
      iVar2 = iVar2 + 0x60;
    }
    else if (uVar1 != 0xc) goto LAB_015a8b4c;
  }
  else if (uVar1 == 0x10) {
    iVar2 = iVar2 + 0x40;
  }
  else {
    if (uVar1 != 0x21) {
      if (uVar1 != 0x1c) goto LAB_015a8b4c;
      goto LAB_015a8894;
    }
    iVar2 = iVar2 + 0x20;
  }
  iVar2 = FUN_015dda00(iVar2,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
  if ((iVar2 != 0) && (uVar4 = *(uint *)(iVar2 + 8), uVar4 != 0)) {
    puVar14 = *(undefined4 **)(iVar2 + 4);
    puVar6 = puVar14;
    uVar21 = 0;
    do {
      iVar5 = (**(code **)(puVar6[5] + 0x20))(puVar6[4],uVar20,iVar25);
      uVar12 = uVar21 + 1;
      if (iVar5 != 0) {
        FUN_015e65f0(puVar6);
        if (uVar12 < uVar4) {
          uVar13 = uVar21 + 1;
          uVar12 = uVar21;
          do {
            puVar24 = puVar6 + 6;
            iVar5 = (**(code **)(puVar6[0xb] + 0x20))(puVar6[10],uVar20,iVar25);
            if (iVar5 == 0) {
              uVar21 = uVar12 + 1;
              puVar27 = puVar14 + uVar12 * 6;
              uVar22 = puVar6[7];
              uVar26 = puVar6[8];
              uVar15 = puVar6[9];
              uVar16 = puVar6[10];
              uVar19 = puVar6[0xb];
              *puVar27 = *puVar24;
              puVar27[1] = uVar22;
              puVar27[2] = uVar26;
              puVar27[3] = uVar15;
              puVar27[4] = uVar16;
              puVar27[5] = uVar19;
            }
            else {
              FUN_015e65f0(puVar24);
              uVar21 = uVar12;
            }
            uVar13 = uVar13 + 1;
            uVar12 = uVar21;
            puVar6 = puVar24;
          } while (uVar13 < uVar4);
        }
        pcVar10 = *(code **)(iVar25 + 0x1c);
        *(uint *)(iVar2 + 8) = uVar21;
        uVar28 = (*pcVar10)(uVar20);
        iVar2 = (int)uVar28;
        (**(code **)((int)((ulonglong)uVar28 >> 0x20) + 0xc))(&local_40,iVar2);
        if ((local_40 == (char *)0xfd1f1978 && local_38 == (char *)0x901dc7f5) &&
            (local_3c == 0x4f0c4dfb && local_34 == -0x2ead107b)) {
          puVar6 = (undefined4 *)(iVar2 + 0x20);
          uVar20 = 0;
          piVar11 = (int *)(iVar2 + 0x24);
          if (*(int *)(iVar2 + 0x1c) == -0x80000000) {
            piVar11 = (int *)(iVar2 + 0x30);
            puVar6 = (undefined4 *)(iVar2 + 0x2c);
          }
          iVar25 = *piVar11;
          if (iVar25 < 0) {
LAB_015a8a40:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar20,iVar25);
          }
          uVar22 = 0;
          iVar5 = *piVar18;
          uVar26 = *puVar6;
          if (iVar25 == 0) {
            iVar7 = 1;
            local_44 = 0;
          }
          else {
            uVar20 = 1;
            iVar7 = FUN_01298504(iVar25,1);
            local_44 = iVar25;
            if (iVar7 == 0) goto LAB_015a8a40;
          }
          FUN_01bed4e2(iVar7,uVar26,iVar25);
          local_28 = *(int *)(iVar2 + 0x48);
          if (local_28 < 0) {
LAB_015a8ab4:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar22,local_28);
          }
          uVar20 = *(undefined4 *)(iVar2 + 0x44);
          if (local_28 == 0) {
            iVar8 = 1;
            iVar2 = 0;
          }
          else {
            iVar8 = FUN_01298504(local_28,1);
            if (iVar8 == 0) {
              uVar22 = 1;
              goto LAB_015a8ab4;
            }
            iVar2 = local_28;
          }
          FUN_01bed4e2(iVar8,uVar20,local_28);
          local_3c = local_44;
          local_40 = (char *)0x3;
          local_38 = (char *)iVar7;
          local_34 = iVar25;
          local_30 = (undefined *)iVar2;
          local_2c = iVar8;
          FUN_015a8be8(iVar5 + 0x120,uVar26,iVar25,&local_40);
        }
        break;
      }
      puVar6 = puVar6 + 6;
      uVar21 = uVar12;
    } while (uVar4 != uVar12);
  }
LAB_015a8b4c:
  return CONCAT44(uVar23 - (uVar17 + (uVar3 > uVar9)),
                  (uint)(uVar23 <= uVar17 && (uint)(uVar3 <= uVar9) <= uVar23 - uVar17));
}

