// FUN_006c0854 @ 006c0854 size=692 calls_out=5 calls_in=2
// strings: 

void FUN_006c0854(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int local_a8;
  uint local_70;
  undefined1 auStack_6c [12];
  int local_60;
  undefined1 *local_5c;
  uint *local_58;
  code *local_54;
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
  
  iVar14 = *(int *)(param_3 + 0xc);
  if (*(int *)(param_3 + 0x10) != 0) {
    iVar15 = *(int *)(param_3 + 0x10) * 0x5c + iVar14;
    uVar10 = *(undefined4 *)(param_2 + 0x48);
    uVar11 = *(undefined4 *)(param_2 + 0x4c);
    uVar12 = *(undefined4 *)(param_2 + 0x50);
    uVar1 = *(undefined4 *)(param_2 + 0x54);
    iVar13 = *(int *)(param_2 + 0x38);
    uVar2 = *(uint *)(param_2 + 0x3c);
    iVar3 = *(int *)(param_2 + 0x44);
    local_70 = param_4;
    do {
      uVar4 = *(int *)(iVar14 + 0x10) + 0x80000001U & *(int *)(iVar14 + 0x10) >> 0x1f;
      if (uVar4 == 0) {
        if (param_4 < *(uint *)(iVar14 + 0x24)) {
          local_5c = &LAB_00701524;
          local_60 = iVar14 + 0x44;
          local_54 = FUN_012fd02c;
          local_58 = &local_70;
          FUN_00664898(auStack_6c,&DAT_005720c2,&local_60);
          local_5c = *(undefined1 **)(iVar14 + 8);
          local_58 = *(uint **)(iVar14 + 0xc);
          local_60 = 1;
          FUN_006bd784(param_1,auStack_6c,&local_60);
          return;
        }
LAB_006c0a1c:
        iVar17 = iVar14 + 0x28;
LAB_006c0a38:
        FUN_006c0854(&local_60,param_2,iVar17,param_4);
        if (local_60 != 2) {
          param_1[1] = (int)local_5c;
          param_1[2] = (int)local_58;
          param_1[3] = (int)local_54;
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
          *param_1 = local_60;
          return;
        }
      }
      else {
        if (uVar4 != 1) goto LAB_006c0a1c;
        if (iVar3 != 0) {
          iVar17 = *(int *)(iVar14 + 0x30);
          iVar18 = *(int *)(iVar14 + 0x34);
          uVar5 = FUN_00701e18(uVar10,uVar11,uVar12,uVar1,iVar17,iVar18);
          uVar4 = uVar5 >> 0x19;
          local_a8 = 0;
          while( true ) {
            uVar5 = uVar2 & uVar5;
            uVar16 = *(uint *)(iVar13 + uVar5);
            uVar6 = uVar16 ^ uVar4 * 0x1010101;
            uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
            while (uVar6 != 0) {
              uVar7 = uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                             (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                      uVar2;
              uVar6 = uVar6 - 1 & uVar6;
              piVar8 = (int *)(iVar13 + -0x48 + uVar7 * -0x48);
              if ((iVar18 == piVar8[1]) &&
                 (iVar9 = thunk_FUN_01bed842(iVar17 + 8,*piVar8 + 8,iVar18), iVar9 == 0)) {
                iVar17 = iVar13 + -0x2c + uVar7 * -0x48;
                goto LAB_006c0a38;
              }
            }
            if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) break;
            local_a8 = local_a8 + 4;
            uVar5 = uVar5 + local_a8;
          }
        }
      }
      iVar14 = iVar14 + 0x5c;
    } while (iVar14 != iVar15);
  }
  *param_1 = 2;
  return;
}

