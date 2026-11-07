// FUN_0187b658 @ 0187b658 size=476 calls_out=2 calls_in=17
// strings: 

void FUN_0187b658(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint local_90;
  uint local_8c;
  uint local_80;
  uint local_7c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  iVar8 = param_3 * 0x34;
  uVar9 = 0;
  if (0x2762762 < param_3) {
LAB_0187b688:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar9,iVar8);
  }
  if (iVar8 == 0) {
    local_7c = 4;
    local_80 = 0;
  }
  else {
    uVar9 = 4;
    local_7c = FUN_01298504(iVar8,4);
    if (local_7c == 0) goto LAB_0187b688;
    local_80 = param_3;
    if (param_3 != 0) {
      iVar10 = 0;
      uVar12 = 0;
      piVar11 = param_2;
      do {
        if (iVar8 == iVar10) break;
        iVar1 = piVar11[0xc];
        if ((undefined4 *)piVar11[8] == (undefined4 *)0x0) {
          local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)((int)param_2 + iVar10 + 0x24));
          local_38 = 0;
        }
        else {
          (**(code **)piVar11[8])
                    (&local_38,(int)param_2 + iVar10 + 0x2c,
                     *(undefined4 *)((int)param_2 + iVar10 + 0x24),
                     *(undefined4 *)((int)param_2 + iVar10 + 0x28));
        }
        uVar5 = uStack_2c;
        uVar4 = uStack_30;
        uVar3 = local_34;
        uVar2 = local_38;
        (**(code **)piVar11[3])(&local_38,piVar11 + 6,piVar11[4],piVar11[5]);
        iVar6 = *piVar11;
        local_28 = CONCAT31(local_28._1_3_,(char)piVar11[7]);
        if (iVar6 == 1) {
          local_8c = *(uint *)((int)param_2 + iVar10 + 4);
          local_90 = *(uint *)((int)param_2 + iVar10 + 8);
        }
        uVar12 = uVar12 + 1;
        piVar11 = piVar11 + 0xd;
        puVar7 = (uint *)(local_7c + iVar10);
        *puVar7 = (uint)(iVar6 == 1);
        iVar10 = iVar10 + 0x34;
        puVar7[1] = local_8c;
        puVar7[2] = local_90;
        puVar7[3] = local_38;
        puVar7[4] = local_34;
        puVar7[5] = uStack_30;
        puVar7[6] = uStack_2c;
        puVar7[7] = local_28;
        puVar7[8] = uVar2;
        puVar7[9] = uVar3;
        puVar7[10] = uVar4;
        puVar7[0xb] = uVar5;
        *(short *)(puVar7 + 0xc) = (short)iVar1;
      } while (param_3 != uVar12);
    }
  }
  *param_1 = local_80;
  param_1[1] = local_7c;
  param_1[2] = param_3;
  return;
}

