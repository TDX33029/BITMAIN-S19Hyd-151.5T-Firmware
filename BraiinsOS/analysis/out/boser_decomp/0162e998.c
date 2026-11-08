// FUN_0162e998 @ 0162e998 size=412 calls_out=6 calls_in=1
// strings: failed to parse action nla | failed to parse TCA_ACT_KIND

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0162e998(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  int unaff_r11;
  undefined8 uVar10;
  int local_64;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  piVar5 = *(int **)(param_2 + 0xc);
  do {
    do {
      do {
        FUN_0162385c(&local_5c,param_2);
        iVar2 = local_54;
        iVar1 = local_58;
        if (local_5c == 0x80000001) {
          *param_1 = -0x80000000;
          return;
        }
        if (local_5c != 0x80000000) {
          local_40 = local_5c;
          iStack_3c = local_58;
          iStack_38 = local_54;
          puVar7 = &local_40;
          pcVar8 = "failed to parse action nla";
          uVar9 = 0x1a;
LAB_0162eadc:
          FUN_016403ac((uint)&local_50 | 4,puVar7,pcVar8,uVar9);
LAB_0162eaec:
          iVar3 = iStack_44;
          iVar2 = local_48;
          iVar1 = local_4c;
          if (*piVar5 != -0x80000000) {
            FUN_0134bd64(*piVar5,piVar5[1]);
          }
          *piVar5 = iVar1;
          piVar5[1] = iVar2;
          piVar5[2] = iVar3;
          iStack_3c = -0x80000000;
          iStack_34 = unaff_r11;
          goto LAB_0162eb24;
        }
        sVar4 = FUN_01623bc0(local_58,local_54);
      } while (sVar4 != 1);
      uVar10 = FUN_01623bf0(iVar1,iVar2);
      FUN_0160ef98(&local_40,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
      if ((local_40 & 1) != 0) {
        puVar6 = (uint *)((uint)&local_40 | 4);
        puVar7 = &local_30;
        local_30 = *puVar6;
        uStack_2c = puVar6[1];
        uStack_28 = puVar6[2];
        pcVar8 = "failed to parse TCA_ACT_KIND";
        uVar9 = 0x1c;
        goto LAB_0162eadc;
      }
      local_50 = local_40;
      local_4c = iStack_3c;
      local_48 = iStack_38;
      iStack_44 = iStack_34;
    } while (local_40 == 2);
    if ((local_40 & 1) != 0) goto LAB_0162eaec;
  } while ((iStack_3c == -0x80000000) ||
          (unaff_r11 = iStack_34, local_64 = iStack_38, iStack_3c == -0x7fffffff));
LAB_0162eb24:
  *param_1 = iStack_3c;
  param_1[1] = local_64;
  param_1[2] = iStack_34;
  return;
}

