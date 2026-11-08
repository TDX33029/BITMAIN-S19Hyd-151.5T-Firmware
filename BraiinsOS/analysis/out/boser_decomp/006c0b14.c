// FUN_006c0b14 @ 006c0b14 size=748 calls_out=5 calls_in=2
// strings: 

void FUN_006c0b14(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int local_a4;
  undefined1 auStack_6c [12];
  int in_stack_ffffffa0;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if (param_5 < param_4) {
    FUN_00664898(auStack_6c,&DAT_0059debf,auStack_6c + 0xc);
    FUN_006bd784(param_1,auStack_6c,auStack_6c + 0xc);
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      iVar18 = *(int *)(param_3 + 0xc);
      iVar15 = *(int *)(param_3 + 0x10) * 0x5c + iVar18;
      uVar1 = *(undefined4 *)(param_2 + 0x48);
      uVar2 = *(undefined4 *)(param_2 + 0x4c);
      uVar3 = *(undefined4 *)(param_2 + 0x50);
      uVar4 = *(undefined4 *)(param_2 + 0x54);
      iVar13 = *(int *)(param_2 + 0x38);
      uVar5 = *(uint *)(param_2 + 0x3c);
      iVar6 = *(int *)(param_2 + 0x44);
      do {
        uVar7 = *(int *)(iVar18 + 0x10) + 0x80000001U & *(int *)(iVar18 + 0x10) >> 0x1f;
        if (uVar7 == 0) {
          if (*(int *)(iVar18 + 0x38) != 0) goto LAB_006c0d58;
        }
        else if (uVar7 == 1) {
          if (iVar6 != 0) {
            iVar14 = *(int *)(iVar18 + 0x30);
            iVar17 = *(int *)(iVar18 + 0x34);
            uVar8 = FUN_00701e18(uVar1,uVar2,uVar3,uVar4,iVar14,iVar17);
            uVar7 = uVar8 >> 0x19;
            local_a4 = 0;
            while( true ) {
              uVar8 = uVar5 & uVar8;
              uVar16 = *(uint *)(iVar13 + uVar8);
              uVar9 = uVar16 ^ uVar7 * 0x1010101;
              uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
              while (uVar9 != 0) {
                uVar10 = uVar8 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                                (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                         uVar5;
                uVar9 = uVar9 - 1 & uVar9;
                piVar11 = (int *)(iVar13 + -0x48 + uVar10 * -0x48);
                if ((iVar17 == piVar11[1]) &&
                   (iVar12 = thunk_FUN_01bed842(iVar14 + 8,*piVar11 + 8,iVar17), iVar12 == 0)) {
                  FUN_006c0b14(auStack_6c + 0xc,param_2,iVar13 + -0x2c + uVar10 * -0x48,param_4 + 1,
                               param_5);
                  goto LAB_006c0dac;
                }
              }
              if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
              local_a4 = local_a4 + 4;
              uVar8 = uVar8 + local_a4;
            }
          }
        }
        else {
LAB_006c0d58:
          FUN_006c0b14(auStack_6c + 0xc,param_2,iVar18 + 0x28,param_4 + 1,param_5);
LAB_006c0dac:
          if (in_stack_ffffffa0 != 2) {
            param_1[1] = local_5c;
            param_1[2] = local_58;
            param_1[3] = iStack_54;
            param_1[4] = iStack_50;
            param_1[5] = local_4c;
            param_1[6] = iStack_48;
            param_1[7] = iStack_44;
            param_1[8] = iStack_40;
            param_1[9] = iStack_3c;
            param_1[10] = local_38;
            param_1[0xb] = iStack_34;
            param_1[0xc] = iStack_30;
            param_1[0xd] = iStack_2c;
            param_1[0xe] = iStack_28;
            *param_1 = in_stack_ffffffa0;
            return;
          }
        }
        iVar18 = iVar18 + 0x5c;
      } while (iVar18 != iVar15);
    }
    *param_1 = 2;
  }
  return;
}

