// FUN_01ab2378 @ 01ab2378 size=100 calls_out=1 calls_in=3
// strings: 

void FUN_01ab2378(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  char cVar12;
  undefined8 uVar13;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_78;
  int iStack_74;
  int *piStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  int **ppiStack_58;
  code *pcStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  int *piStack_40;
  undefined1 *puStack_3c;
  int ***pppiStack_38;
  code *pcStack_34;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar2 = (undefined4 *)FUN_01306fc8(&DAT_01d2ec30);
    piVar4 = &iStack_98;
    uVar13 = thunk_FUN_01bee35a(puVar2,0x70);
    piVar8 = (int *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
    if ((char)piVar8[4] != '\x01') {
      if ((char)piVar8[4] == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_019b0950(&DAT_01d301c0);
      }
      FUN_019a2bcc(piVar8,&LAB_01abe6ec);
      *(undefined1 *)(piVar8 + 4) = 1;
    }
    iVar9 = *piVar8;
    if (iVar9 == 0) {
      piVar4 = piVar8 + 1;
      *piVar8 = -1;
    }
    else {
      uStack_90 = 0;
      iStack_98 = 0;
      uStack_94 = 1;
    }
    piVar10 = (int *)puVar2[4];
    piVar11 = (int *)puVar2[5];
    uStack_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    iVar3 = *piVar10;
    iStack_74 = *piVar11;
    iStack_78 = iVar3 + 0x10;
    ppiStack_58 = &piStack_8c;
    pcStack_54 = (code *)&DAT_01d2ec18;
    iStack_50 = CONCAT31(iStack_50._1_3_,*(undefined1 *)(iVar3 + 0xe));
    piStack_8c = piVar4;
    iVar3 = FUN_01abb59c(iVar3,&uStack_88,&ppiStack_58);
    if (iVar3 == 0) {
      uVar5 = (**(code **)(*piVar10 + 8))();
      FUN_019ba5b8(&piStack_70,uVar5,piStack_8c[1],piStack_8c[2]);
      uVar6 = (uint)piStack_70 & 0xff;
      if ((*(char *)(*piVar10 + 0xf) == '\x01') && (uVar6 != 4)) {
        pcStack_54 = FUN_019a7d7c;
        ppiStack_58 = &piStack_40;
        puStack_3c = puStack_6c;
        piStack_40 = piStack_70;
        FUN_019a896c(&DAT_0057a6ad,&ppiStack_58);
        FUN_0069d8a4((uint)piStack_40 & 0xff,puStack_3c);
      }
      else if (uVar6 != 4) {
        FUN_0069d8a4(uVar6,puStack_6c);
      }
    }
    else if (*(char *)(*piVar10 + 0xf) == '\x01') {
      iVar3 = *piVar11;
      iVar7 = *(int *)(iVar3 + 0x14);
      iStack_60 = *(int *)(iVar7 + 0xc);
      uStack_5c = *(undefined4 *)(iVar7 + 0x10);
      piVar4 = *(int **)(*(int *)(iVar3 + 0x10) + 8);
      ppiStack_58 = (int **)*piVar4;
      pcStack_54 = (code *)piVar4[1];
      iStack_50 = piVar4[2];
      iStack_4c = piVar4[3];
      piStack_40 = &iStack_60;
      uStack_48 = 0;
      pcStack_34 = FUN_01208280;
      puStack_3c = &LAB_018a13b8;
      pcStack_44 = pcStack_54;
      pppiStack_38 = &ppiStack_58;
      FUN_00664898(&piStack_70,&DAT_005b68f9,&piStack_40);
      puVar1 = puStack_6c;
      piVar4 = piStack_70;
      uVar5 = (**(code **)(*piVar10 + 8))();
      FUN_019ba5b8(&piStack_70,uVar5,puVar1,uStack_68);
      if ((char)piStack_70 != '\x04') {
        puStack_3c = puStack_6c;
        piStack_40 = piStack_70;
        pcStack_54 = FUN_019a7d7c;
        ppiStack_58 = &piStack_40;
        FUN_019a896c(&DAT_005b9489,&ppiStack_58);
        FUN_0069d8a4((uint)piStack_40 & 0xff,puStack_3c);
      }
      FUN_0134bd64(piVar4,puVar1);
    }
    piStack_8c[2] = 0;
    if (iVar9 == 0) {
      *piVar8 = *piVar8 + 1;
    }
    else {
      FUN_0134bd64(iStack_98,uStack_94);
    }
    return;
  }
  cVar12 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 0:
    cVar12 = '\x01';
    if (param_2 == '\0') break;
  case 3:
    *(char *)(param_1 + 0xc) = cVar12;
    break;
  case 2:
    if (param_2 != '\x02') {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

