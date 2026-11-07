// FUN_0078288c @ 0078288c size=576 calls_out=4 calls_in=2
// strings: 

void FUN_0078288c(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined *local_d0;
  int local_cc;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  
  iVar11 = (int)param_3 * 0x5c;
  uVar8 = 0;
  if (&UNK_01642c85 < param_3) {
LAB_007828bc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,iVar11);
  }
  if (iVar11 == 0) {
    local_cc = 4;
    local_d0 = (undefined *)0x0;
  }
  else {
    uVar8 = 4;
    local_cc = FUN_01298504(iVar11,4);
    if (local_cc == 0) goto LAB_007828bc;
    local_d0 = param_3;
    if (param_3 != (undefined *)0x0) {
      iVar17 = 0;
      puVar15 = (undefined *)0x0;
      piVar12 = param_2;
      do {
        if (iVar11 == iVar17) break;
        iVar2 = piVar12[0x16];
        if (*piVar12 == -0x80000000) {
          local_68 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_68,*(undefined4 *)((int)param_2 + iVar17 + 4),
                       *(undefined4 *)((int)param_2 + iVar17 + 8));
        }
        if (piVar12[3] == -0x80000000) {
          local_58 = 0x80000000;
        }
        else {
          FUN_006666fc(&local_58,*(undefined4 *)((int)param_2 + iVar17 + 0x10),
                       *(undefined4 *)((int)param_2 + iVar17 + 0x14));
        }
        iVar3 = piVar12[0xe];
        uVar1 = *(undefined1 *)((int)piVar12 + 0x59);
        if ((short)iVar3 != 2) {
          FUN_01bed4e2(&local_48,(int)param_2 + iVar17 + 0x3a,0x1e);
        }
        puVar15 = puVar15 + 1;
        iVar4 = piVar12[6];
        iVar6 = piVar12[7];
        iVar9 = piVar12[8];
        iVar13 = piVar12[9];
        iVar5 = piVar12[10];
        iVar7 = piVar12[0xb];
        iVar10 = piVar12[0xc];
        iVar14 = piVar12[0xd];
        local_88 = local_48;
        uStack_84 = uStack_44;
        uStack_80 = uStack_40;
        local_7c = local_3c;
        uStack_78 = uStack_38;
        uStack_74 = uStack_34;
        uStack_70 = uStack_30;
        local_6c = local_2c;
        puVar16 = (undefined4 *)(local_cc + iVar17);
        *puVar16 = local_68;
        puVar16[1] = uStack_64;
        puVar16[2] = uStack_60;
        puVar16[3] = local_58;
        puVar16[4] = uStack_54;
        puVar16[5] = uStack_50;
        puVar16[6] = iVar4;
        puVar16[7] = iVar6;
        puVar16[8] = iVar9;
        puVar16[9] = iVar13;
        puVar16[10] = iVar5;
        puVar16[0xb] = iVar7;
        puVar16[0xc] = iVar10;
        puVar16[0xd] = iVar14;
        *(short *)(puVar16 + 0xe) = (short)iVar3;
        FUN_01bed4e2((int)puVar16 + 0x3a,&local_88,0x1e);
        iVar17 = iVar17 + 0x5c;
        *(undefined1 *)((int)puVar16 + 0x59) = uVar1;
        *(char *)(puVar16 + 0x16) = (char)iVar2;
        piVar12 = piVar12 + 0x17;
      } while (param_3 != puVar15);
    }
  }
  *param_1 = local_d0;
  param_1[1] = local_cc;
  param_1[2] = param_3;
  return;
}

