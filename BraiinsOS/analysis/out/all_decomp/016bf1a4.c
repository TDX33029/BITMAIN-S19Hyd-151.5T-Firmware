// FUN_016bf1a4 @ 016bf1a4 size=496 calls_out=0 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x016bf308) */

void FUN_016bf1a4(uint *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar12 = param_1 + 10;
  iVar9 = 0;
  iVar13 = 0;
  do {
    puVar5 = puVar12 + -10;
    if (*puVar12 == 0) {
      if (((*puVar5 & 1) == 0) &&
         (cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                            (**(undefined4 **)*param_3,puVar12 + 2,puVar12 + -8), cVar1 == -1))
      goto LAB_016bf274;
    }
    else if ((*puVar5 & 1) == 0) {
LAB_016bf274:
      uVar4 = *puVar12;
      uVar6 = puVar12[1];
      uStack_48 = puVar12[2];
      uStack_44 = puVar12[3];
      uStack_40 = puVar12[4];
      local_3c = puVar12[5];
      uStack_38 = puVar12[6];
      uStack_34 = puVar12[7];
      uStack_30 = puVar12[8];
      uStack_2c = puVar12[9];
      *puVar12 = *puVar5;
      puVar12[1] = puVar12[-9];
      puVar12[2] = puVar12[-8];
      puVar12[3] = puVar12[-7];
      puVar12[4] = puVar12[-6];
      puVar12[5] = puVar12[-5];
      puVar12[6] = puVar12[-4];
      puVar12[7] = puVar12[-3];
      puVar12[8] = puVar12[-2];
      puVar12[9] = puVar12[-1];
      puVar2 = param_1;
      if (puVar5 != param_1) {
        iVar3 = iVar13;
        if (uVar4 == 0) {
          do {
            puVar14 = puVar5 + -10;
            if (((*puVar14 & 1) != 0) ||
               (cVar1 = (**(code **)((*(undefined4 **)*param_3)[1] + 0x10))
                                  (**(undefined4 **)*param_3,&uStack_48,puVar5 + -8), cVar1 != -1))
            {
              puVar2 = puVar5;
              break;
            }
            iVar3 = iVar3 + 0x28;
            *puVar5 = *puVar14;
            puVar5[1] = puVar5[-9];
            puVar5[2] = puVar5[-8];
            puVar5[3] = puVar5[-7];
            puVar5[4] = puVar5[-6];
            puVar5[5] = puVar5[-5];
            puVar5[6] = puVar5[-4];
            puVar5[7] = puVar5[-3];
            puVar5[8] = puVar5[-2];
            puVar5[9] = puVar5[-1];
            puVar5 = puVar14;
          } while (iVar3 != 0);
        }
        else {
          iVar3 = iVar9;
          do {
            puVar2 = (uint *)((int)param_1 + iVar3);
            puVar5 = (uint *)((int)param_1 + iVar3 + -0x28);
            if (*puVar5 != 0) goto LAB_016bf1f0;
            uVar7 = puVar5[1];
            uVar8 = puVar5[2];
            uVar10 = puVar5[3];
            uVar11 = puVar5[4];
            iVar3 = iVar3 + -0x28;
            *puVar2 = *puVar5;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar10;
            puVar2[4] = uVar11;
            uVar7 = puVar5[6];
            uVar8 = puVar5[7];
            uVar10 = puVar5[8];
            uVar11 = puVar5[9];
            puVar2[5] = puVar5[5];
            puVar2[6] = uVar7;
            puVar2[7] = uVar8;
            puVar2[8] = uVar10;
            puVar2[9] = uVar11;
          } while (iVar3 != 0);
          puVar2 = param_1;
        }
      }
LAB_016bf1f0:
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      puVar2[2] = uStack_48;
      puVar2[3] = uStack_44;
      puVar2[4] = uStack_40;
      puVar2[5] = local_3c;
      puVar2[6] = uStack_38;
      puVar2[7] = uStack_34;
      puVar2[8] = uStack_30;
      puVar2[9] = uStack_2c;
    }
    puVar12 = puVar12 + 10;
    iVar9 = iVar9 + 0x28;
    iVar13 = iVar13 + -0x28;
    if (puVar12 == param_1 + param_2 * 10) {
      return;
    }
  } while( true );
}

