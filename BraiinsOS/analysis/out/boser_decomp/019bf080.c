// FUN_019bf080 @ 019bf080 size=800 calls_out=7 calls_in=2
// strings: status

void FUN_019bf080(int param_1,int param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  ulonglong uVar15;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (param_3 != '\0') {
    iVar7 = 1;
    if (param_3 != '\x01') {
      iVar7 = *(int *)(param_1 + 8);
    }
    if (param_3 == '\x01' || iVar7 == 0) {
      FUN_019afed4(param_2);
      FUN_019b0140(param_2,"status",6);
      FUN_019caabc(&local_50,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),0x4001);
      if (local_50 == -0x80000000) {
        FUN_019bd494(&local_50);
      }
      else {
        bVar14 = false;
        uVar9 = 0;
        bVar6 = true;
        bVar1 = false;
        uVar13 = 0;
        bVar2 = false;
        bVar5 = false;
LAB_019bf144:
        bVar4 = true;
        do {
          bVar3 = bVar6;
          uVar10 = uVar9;
          do {
            if (bVar14) goto LAB_019bf330;
            do {
              if (local_48 < uVar13) {
LAB_019bf1f0:
                bVar14 = true;
                uVar8 = local_48;
                uVar9 = uVar10;
                if (uVar10 == local_48) goto LAB_019bf330;
                goto LAB_019bf204;
              }
              uVar9 = local_48 - uVar13;
              iVar7 = local_4c + uVar13;
              if (uVar9 < 8) {
                uVar8 = 0;
                if (uVar9 == 0) {
                  uVar15 = 0;
                }
                else {
                  do {
                    if (*(char *)(iVar7 + uVar8) == '\n') {
                      uVar15 = CONCAT44(uVar8,1);
                      goto LAB_019bf1b8;
                    }
                    uVar8 = uVar8 + 1;
                  } while (uVar9 != uVar8);
                  uVar15 = (ulonglong)uVar9 << 0x20;
                }
              }
              else {
                uVar15 = FUN_01307168(10,iVar7);
              }
LAB_019bf1b8:
              iVar11 = (int)(uVar15 >> 0x20);
              if ((uVar15 & 1) == 0) {
                uVar13 = local_48;
                goto LAB_019bf1f0;
              }
              uVar9 = iVar11 + uVar13;
              uVar13 = uVar9 + 1;
            } while ((local_48 <= uVar9) || (*(char *)(iVar7 + iVar11) != '\n'));
            bVar14 = false;
            uVar8 = uVar13;
            uVar9 = uVar13;
LAB_019bf204:
            iVar7 = uVar8 - uVar10;
            iVar11 = local_4c + uVar10;
            if ((iVar7 == 0) || (*(char *)(local_4c + -1 + uVar8) != '\n')) {
              iVar12 = iVar7;
            }
            else {
              iVar12 = iVar7 + -1;
              if (iVar12 == 0) {
                iVar12 = 0;
              }
              else if (*(char *)(local_4c + -2 + uVar8) == '\r') {
                iVar12 = iVar7 + -2;
              }
            }
            if (iVar11 == 0) goto LAB_019bf330;
            FUN_019bf3ac(&local_44,iVar11,iVar12,&DAT_0056e0a8);
            if ((local_44 == 1) && (local_3c != 0)) {
              local_7c = local_40;
              local_78 = local_38;
              bVar1 = true;
              bVar6 = false;
              if (!bVar4) goto LAB_019bf330;
              goto LAB_019bf144;
            }
            FUN_019bf3ac(&local_34,iVar11,iVar12,&DAT_0056cf48);
            uVar10 = uVar9;
          } while ((local_34 != 1) || (local_2c == 0));
          bVar4 = false;
          local_84 = local_30;
          local_80 = local_28;
          bVar2 = true;
          bVar5 = true;
          bVar6 = true;
        } while (bVar3);
        bVar5 = true;
LAB_019bf330:
        FUN_0134bd64(local_50,local_4c);
        if (((bVar1) && (bVar5)) && (bVar2)) {
          *(undefined4 *)(param_1 + 0xc) = local_7c;
          *(undefined4 *)(param_1 + 0x14) = local_78;
          *(undefined4 *)(param_1 + 8) = 1;
          *(undefined4 *)(param_1 + 0x10) = 1;
          *(undefined4 *)(param_1 + 0x18) = 1;
          *(undefined4 *)(param_1 + 0x20) = 1;
          *(undefined4 *)(param_1 + 0x1c) = local_84;
          *(undefined4 *)(param_1 + 0x24) = local_80;
        }
      }
    }
  }
  return;
}

