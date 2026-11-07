// FUN_012bdf18 @ 012bdf18 size=56 calls_out=3 calls_in=1
// strings: 

void FUN_012bdf18(int param_1)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint ******ppppppuVar7;
  uint ******ppppppuVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  uint *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *****pppppuVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint ******ppppppuStack_b8;
  uint *puStack_b4;
  uint ******ppppppuStack_b0;
  uint *****pppppuStack_a8;
  uint *****pppppuStack_a4;
  uint ******ppppppuStack_a0;
  uint *puStack_9c;
  uint ******ppppppuStack_98;
  uint *****pppppuStack_90;
  uint *****pppppuStack_8c;
  uint *****pppppuStack_88;
  uint *****pppppuStack_84;
  uint *****pppppuStack_80;
  uint *****pppppuStack_7c;
  uint *****pppppuStack_78;
  uint ******ppppppuStack_74;
  uint ******ppppppuStack_70;
  uint *puStack_6c;
  uint ******ppppppuStack_68;
  undefined *puStack_64;
  uint ******ppppppuStack_60;
  undefined *puStack_5c;
  uint ******ppppppuStack_58;
  undefined1 *puStack_54;
  uint *****pppppuStack_50;
  undefined *puStack_4c;
  uint *****pppppuStack_48;
  undefined *puStack_44;
  uint ******ppppppuStack_40;
  undefined1 *puStack_3c;
  int iStack_34;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  FUN_012bdf50(local_10,param_1);
  FUN_012bf460(local_10[0],local_c);
  uVar9 = 0;
  if ((*(byte *)(param_1 + 0xbd) & 0x1d) != 0xc) {
    uVar9 = 2;
  }
  uVar24 = FUN_019b44a0(uVar9);
  puVar16 = (uint *)((ulonglong)uVar24 >> 0x20);
  iStack_34 = param_1;
  if (*puVar16 != 2) {
    if ((*puVar16 & 1) == 0) {
      FUN_012bbc48(&ppppppuStack_b8,puVar16[2],puVar16[3],puVar16 + 0xf,0,0);
    }
    else {
      ppppppuStack_b8 = (uint ******)&DAT_80000000;
      puStack_b4 = puVar16 + 1;
    }
    goto LAB_012be38c;
  }
  pppppuStack_a8 = (uint *****)&pppppuStack_a4;
  pppppuVar21 = (uint *****)((int)puVar16 + 0x82);
  ppppppuStack_98 = (uint ******)0x0;
  ppppppuStack_a0 = (uint ******)0x0;
  ppppppuStack_74 = (uint ******)&ppppppuStack_b8;
  ppppppuStack_b8 = (uint ******)((int)puVar16 + 0x4a);
  puStack_9c = (uint *)&DAT_00000001;
  puStack_6c = (uint *)&DAT_012b59c8;
  pppppuStack_a4 = pppppuVar21;
  ppppppuStack_70 = (uint ******)&ppppppuStack_74;
  FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00420077,&ppppppuStack_70);
  puVar12 = puVar16 + 0xf;
  pppppuStack_8c = (uint *****)(puVar16 + 0x24);
  pppppuStack_88 = (uint *****)((int)puVar16 + 0x66);
  pppppuStack_90 = pppppuVar21;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)puVar16 + 0xbd)) {
  case 0:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,1);
    pcVar14 = (char *)FUN_012bdeb4(puVar16,5);
    if (pcVar11 != (char *)0x0 && pcVar14 != (char *)0x0) {
      cVar3 = *pcVar11;
      bVar23 = cVar3 == '\x02';
      if (bVar23) {
        cVar3 = *pcVar14;
      }
      if (bVar23 && cVar3 == '\x02') {
        pppppuStack_80 = (uint *****)(pcVar14 + 4);
        ppppppuStack_b8 = (uint ******)(pcVar11 + 4);
        if (*(int *)(pcVar14 + 0xc) == 0) {
          ppppppuStack_68 = (uint ******)&ppppppuStack_b8;
          ppppppuStack_70 = &pppppuStack_8c;
          puStack_64 = &LAB_0193a90c;
          puStack_6c = (uint *)&DAT_012b5b4c;
          FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00420124,&ppppppuStack_70);
        }
        else {
          ppppppuStack_58 = (uint ******)&ppppppuStack_b8;
          ppppppuStack_60 = &pppppuStack_88;
          ppppppuStack_68 = &pppppuStack_80;
          ppppppuStack_70 = &pppppuStack_8c;
          puStack_54 = &LAB_0193a90c;
          puStack_5c = &DAT_012b5b4c;
          puStack_64 = &LAB_0193a90c;
          puStack_6c = (uint *)&DAT_012b5b4c;
          FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_004200f5,&ppppppuStack_70);
        }
        uVar9 = FUN_012bdeb4(puVar16,4);
        FUN_012bb2c4(&DAT_00420160,0xf,&ppppppuStack_a0,pppppuVar21,uVar9);
        break;
      }
    }
  default:
switchD_012be008_caseD_b:
    uVar25 = FUN_012bb29c(*(undefined1 *)((int)puVar16 + 0xbd));
    if ((int)uVar25 == 0) {
      if ((uint ****)puVar16[0xd] != (uint ****)0x0) {
        ppppppuStack_70 = (uint ******)&ppppppuStack_b8;
        puStack_6c = (uint *)&LAB_019cf5b8;
        ppppppuStack_b8 = (uint ******)(puVar16 + 0xd);
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00590e5f,&ppppppuStack_70);
        break;
      }
      uVar25 = 0xd0041fe39;
    }
    FUN_012b2fd4(&ppppppuStack_a0,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
    break;
  case 1:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,1);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x02')) goto switchD_012be008_caseD_b;
    ppppppuStack_b8 = (uint ******)(pcVar11 + 4);
    ppppppuStack_68 = (uint ******)&ppppppuStack_b8;
    ppppppuStack_70 = &pppppuStack_8c;
    puStack_64 = &LAB_0193a90c;
    puStack_6c = (uint *)&DAT_012b5b4c;
    FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_0042016f,&ppppppuStack_70);
    break;
  case 2:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,0);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x02')) goto switchD_012be008_caseD_b;
    ppppppuStack_b8 = (uint ******)(pcVar11 + 4);
    ppppppuStack_68 = (uint ******)&ppppppuStack_b8;
    ppppppuStack_70 = &pppppuStack_8c;
    puStack_64 = &LAB_0193a90c;
    puStack_6c = (uint *)&DAT_012b5b4c;
    FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00420197,&ppppppuStack_70);
    break;
  case 3:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,1);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x02')) goto switchD_012be008_caseD_b;
    ppppppuStack_b8 = (uint ******)(pcVar11 + 4);
    ppppppuStack_68 = (uint ******)&ppppppuStack_b8;
    ppppppuStack_70 = &pppppuStack_8c;
    puStack_64 = &LAB_0193a90c;
    puStack_6c = (uint *)&DAT_012b5b4c;
    FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_004201bd,&ppppppuStack_70);
    break;
  case 4:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,1);
    pcVar14 = (char *)FUN_012bdeb4(puVar16,5);
    if (pcVar11 != (char *)0x0 && pcVar14 != (char *)0x0) {
      cVar3 = *pcVar11;
      bVar23 = cVar3 == '\x02';
      if (bVar23) {
        cVar3 = *pcVar14;
      }
      if (bVar23 && cVar3 == '\x02') {
        ppppppuStack_74 = (uint ******)(pcVar14 + 4);
        pppppuStack_78 = (uint *****)(pcVar11 + 4);
        ppppppuStack_58 = &pppppuStack_78;
        ppppppuStack_60 = &pppppuStack_88;
        ppppppuStack_70 = &pppppuStack_8c;
        puStack_54 = &LAB_0193a90c;
        puStack_5c = &DAT_012b5b4c;
        puStack_64 = &LAB_0193a90c;
        puStack_6c = (uint *)&DAT_012b5b4c;
        ppppppuStack_68 = (uint ******)&ppppppuStack_74;
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_004200f5,&ppppppuStack_70);
        if ((uint *****)puVar16[0xd] != (uint *****)0x0) {
          puStack_b4 = (uint *)puVar16[0xe];
          ppppppuStack_70 = (uint ******)&ppppppuStack_b8;
          puStack_6c = (uint *)&LAB_012c1d70;
          ppppppuStack_b8 = (uint ******)puVar16[0xd];
          FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00578eff,&ppppppuStack_70);
        }
        break;
      }
    }
    goto switchD_012be008_caseD_b;
  case 5:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,1);
    pcVar14 = (char *)FUN_012bdeb4(puVar16,5);
    if (pcVar11 != (char *)0x0 && pcVar14 != (char *)0x0) {
      cVar3 = *pcVar11;
      bVar23 = cVar3 == '\x02';
      if (bVar23) {
        cVar3 = *pcVar14;
      }
      if (bVar23 && cVar3 == '\x02') {
        ppppppuStack_b8 = (uint ******)(pcVar14 + 4);
        ppppppuStack_74 = (uint ******)(pcVar11 + 4);
        ppppppuStack_60 = &pppppuStack_88;
        ppppppuStack_68 = (uint ******)&ppppppuStack_b8;
        ppppppuStack_70 = &pppppuStack_8c;
        puStack_54 = &LAB_0193a90c;
        puStack_5c = &DAT_012b5b4c;
        puStack_64 = &LAB_0193a90c;
        puStack_6c = (uint *)&DAT_012b5b4c;
        ppppppuStack_58 = (uint ******)&ppppppuStack_74;
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_004201f9,&ppppppuStack_70);
        break;
      }
    }
    goto switchD_012be008_caseD_b;
  case 6:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,1);
    pcVar14 = (char *)FUN_012bdeb4(puVar16,6);
    pcVar15 = (char *)FUN_012bdeb4(puVar16,8);
    if (((pcVar11 != (char *)0x0) && (pcVar14 != (char *)0x0 && pcVar15 != (char *)0x0)) &&
       (*pcVar11 == '\x02')) {
      cVar3 = *pcVar14;
      bVar23 = cVar3 == '\x06';
      if (bVar23) {
        cVar3 = *pcVar15;
      }
      if (bVar23 && cVar3 == '\x06') {
        ppppppuStack_74 = (uint ******)(pcVar15 + 4);
        pppppuStack_7c = (uint *****)(pcVar11 + 4);
        pppppuStack_78 = (uint *****)(pcVar14 + 4);
        puStack_b4 = (uint *)&DAT_0000000d;
        if (1 < *(uint *)(pcVar14 + 4)) {
          puStack_b4 = (uint *)&DAT_0000000e;
        }
        ppppppuStack_b8 = (uint ******)&UNK_004200e7;
        if (*(uint *)(pcVar14 + 4) < 2) {
          ppppppuStack_b8 = (uint ******)&DAT_004200da;
        }
        ppppppuStack_40 = (uint ******)&ppppppuStack_b8;
        pppppuStack_48 = (uint *****)&pppppuStack_78;
        pppppuStack_50 = (uint *****)&pppppuStack_8c;
        ppppppuStack_58 = &pppppuStack_7c;
        ppppppuStack_60 = &pppppuStack_88;
        ppppppuStack_70 = &pppppuStack_90;
        puStack_3c = &LAB_018a13b8;
        puStack_44 = &DAT_012c04c4;
        puStack_4c = &DAT_012b5b4c;
        puStack_54 = &LAB_0193a90c;
        puStack_5c = &DAT_012b5b4c;
        puStack_64 = &DAT_012c04c4;
        puStack_6c = (uint *)&DAT_012b5b4c;
        ppppppuStack_68 = (uint ******)&ppppppuStack_74;
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00420248,&ppppppuStack_70);
        break;
      }
    }
    goto switchD_012be008_caseD_b;
  case 7:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,1);
    pcVar14 = (char *)FUN_012bdeb4(puVar16,6);
    pcVar15 = (char *)FUN_012bdeb4(puVar16,7);
    if (((pcVar11 != (char *)0x0) && (pcVar14 != (char *)0x0 && pcVar15 != (char *)0x0)) &&
       (*pcVar11 == '\x02')) {
      cVar3 = *pcVar14;
      bVar23 = cVar3 == '\x06';
      if (bVar23) {
        cVar3 = *pcVar15;
      }
      if (bVar23 && cVar3 == '\x06') {
        ppppppuStack_74 = (uint ******)(pcVar15 + 4);
        pppppuStack_7c = (uint *****)(pcVar11 + 4);
        pppppuStack_78 = (uint *****)(pcVar14 + 4);
        puStack_b4 = (uint *)&DAT_0000000d;
        if (1 < *(uint *)(pcVar14 + 4)) {
          puStack_b4 = (uint *)&DAT_0000000e;
        }
        ppppppuStack_b8 = (uint ******)&UNK_004200e7;
        if (*(uint *)(pcVar14 + 4) < 2) {
          ppppppuStack_b8 = (uint ******)&DAT_004200da;
        }
        ppppppuStack_40 = (uint ******)&ppppppuStack_b8;
        pppppuStack_48 = (uint *****)&pppppuStack_78;
        pppppuStack_50 = (uint *****)&pppppuStack_8c;
        ppppppuStack_58 = &pppppuStack_7c;
        ppppppuStack_60 = &pppppuStack_88;
        ppppppuStack_70 = &pppppuStack_90;
        puStack_3c = &LAB_018a13b8;
        puStack_44 = &DAT_012c04c4;
        puStack_4c = &DAT_012b5b4c;
        puStack_54 = &LAB_0193a90c;
        puStack_5c = &DAT_012b5b4c;
        puStack_64 = &DAT_012c04c4;
        puStack_6c = (uint *)&DAT_012b5b4c;
        ppppppuStack_68 = (uint ******)&ppppppuStack_74;
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_0042028a,&ppppppuStack_70);
        break;
      }
    }
    goto switchD_012be008_caseD_b;
  case 8:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,2);
    pcVar14 = (char *)FUN_012bdeb4(puVar16,1);
    if ((pcVar14 == (char *)0x0) || (*pcVar14 != '\x02')) {
      pcVar14 = (char *)FUN_012bdeb4(puVar16,0);
      if ((pcVar14 == (char *)0x0) || (*pcVar14 != '\x02')) {
        uVar25 = FUN_012bb29c(*(undefined1 *)((int)puVar16 + 0xbd));
        if ((int)uVar25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01ce2734);
        }
        FUN_012b2fd4(&ppppppuStack_a0,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
      }
      else {
        ppppppuStack_b8 = (uint ******)(pcVar14 + 4);
        ppppppuStack_68 = (uint ******)&ppppppuStack_b8;
        ppppppuStack_70 = &pppppuStack_8c;
        puStack_64 = &LAB_0193a90c;
        puStack_6c = (uint *)&DAT_012b5b4c;
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00420333,&ppppppuStack_70);
      }
    }
    else {
      pppppuStack_84 = (uint *****)(pcVar14 + 4);
      FUN_006666fc(&puStack_6c,*(undefined4 *)(pcVar14 + 8),*(undefined4 *)(pcVar14 + 0xc));
      ppppppuStack_70 = (uint ******)CONCAT31(ppppppuStack_70._1_3_,2);
      iVar13 = FUN_012bb408(&ppppppuStack_70,pcVar11);
      FUN_012b1800(&ppppppuStack_70);
      if (iVar13 != 0) {
        ppppppuStack_68 = &pppppuStack_84;
        ppppppuStack_70 = &pppppuStack_8c;
        puStack_64 = &LAB_0193a90c;
        puStack_6c = (uint *)&DAT_012b5b4c;
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_004202fa,&ppppppuStack_70);
        break;
      }
      ppppppuStack_68 = &pppppuStack_84;
      ppppppuStack_70 = &pppppuStack_8c;
      puStack_64 = &LAB_0193a90c;
      puStack_6c = (uint *)&DAT_012b5b4c;
      FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_004202cb,&ppppppuStack_70);
    }
    if (pcVar11 != (char *)0x0) {
      if (*pcVar11 == '\x02') {
        ppppppuStack_b8 = (uint ******)(pcVar11 + 4);
        puStack_64 = &LAB_0193a90c;
        ppppppuStack_68 = (uint ******)&ppppppuStack_b8;
        ppppppuStack_70 = &pppppuStack_8c;
        puStack_6c = (uint *)&DAT_012b5b4c;
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00420364,&ppppppuStack_70);
      }
      else if (*pcVar11 == '\x03') {
        FUN_012b2fd4(&ppppppuStack_a0,":",1);
        if (*(int *)(pcVar11 + 0xc) != 0) {
          pppppuVar21 = *(uint ******)(pcVar11 + 8);
          iVar13 = *(int *)(pcVar11 + 0xc) * 0xc;
          do {
            ppppppuStack_60 = (uint ******)&ppppppuStack_b8;
            puStack_5c = &LAB_0193a90c;
            puStack_64 = &DAT_012b5b4c;
            puStack_6c = (uint *)&LAB_018a13b8;
            ppppppuStack_70 = (uint ******)&DAT_01ce271c;
            ppppppuStack_b8 = (uint ******)pppppuVar21;
            ppppppuStack_68 = &pppppuStack_8c;
            FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00420373,&ppppppuStack_70);
            pppppuVar21 = pppppuVar21 + 3;
            iVar13 = iVar13 + -0xc;
          } while (iVar13 != 0);
        }
      }
      else {
        FUN_012b2fd4(&ppppppuStack_a0,&DAT_00420380,0x2d);
      }
    }
    break;
  case 9:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,1);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x03')) goto switchD_012be008_caseD_b;
    FUN_012b2fd4(&ppppppuStack_a0,&DAT_004203ad,0x33);
    if (*(int *)(pcVar11 + 0xc) != 0) {
      pppppuVar21 = *(uint ******)(pcVar11 + 8);
      iVar13 = *(int *)(pcVar11 + 0xc) * 0xc;
      do {
        ppppppuStack_60 = (uint ******)&ppppppuStack_b8;
        puStack_5c = &LAB_0193a90c;
        puStack_64 = &DAT_012b5b4c;
        puStack_6c = (uint *)&LAB_018a13b8;
        ppppppuStack_70 = (uint ******)&DAT_01ce271c;
        ppppppuStack_b8 = (uint ******)pppppuVar21;
        ppppppuStack_68 = &pppppuStack_90;
        FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_00420373,&ppppppuStack_70);
        pppppuVar21 = pppppuVar21 + 3;
        iVar13 = iVar13 + -0xc;
      } while (iVar13 != 0);
    }
    break;
  case 10:
    pcVar11 = (char *)FUN_012bdeb4(puVar16,0);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x02')) goto switchD_012be008_caseD_b;
    ppppppuStack_b8 = (uint ******)(pcVar11 + 4);
    ppppppuStack_68 = (uint ******)&ppppppuStack_b8;
    ppppppuStack_70 = &pppppuStack_8c;
    puStack_64 = &LAB_0193a90c;
    puStack_6c = (uint *)&DAT_012b5b4c;
    FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_004203e0,&ppppppuStack_70);
    uVar9 = FUN_012bdeb4(puVar16,3);
    FUN_012bb2c4(&DAT_0042041d,0xb,&ppppppuStack_a0,pppppuVar21,uVar9);
  }
  iVar13 = FUN_012bdeb4(puVar16,10);
  bVar23 = iVar13 != 0;
  if (bVar23) {
    FUN_012b2fd4(&ppppppuStack_a0,"\n",1);
    FUN_012b2fd4(&ppppppuStack_a0,"\n",1);
    FUN_012bb564(&ppppppuStack_a0,puVar12,&DAT_0041fe46,10,iVar13);
  }
  iVar10 = FUN_012bdeb4(puVar16,0xb);
  if (iVar10 != 0) {
    FUN_012b2fd4(&ppppppuStack_a0,"\n",1);
    if (iVar13 == 0) {
      FUN_012b2fd4(&ppppppuStack_a0,"\n",1);
    }
    bVar23 = true;
    FUN_012bb564(&ppppppuStack_a0,puVar12,"argument",8,iVar10);
  }
  iVar13 = FUN_012bdeb4(puVar16,0xc);
  if (iVar13 != 0) {
    FUN_012b2fd4(&ppppppuStack_a0,"\n",1);
    if (!bVar23) {
      FUN_012b2fd4(&ppppppuStack_a0,"\n",1);
    }
    bVar23 = true;
    FUN_012bb564(&ppppppuStack_a0,puVar12,"value",5,iVar13);
  }
  pcVar11 = (char *)FUN_012bdeb4(puVar16,0xe);
  if ((pcVar11 != (char *)0x0) && (*pcVar11 == '\x05')) {
    if (!bVar23) {
      FUN_012b2fd4(&ppppppuStack_a0,"\n",1);
    }
    iVar10 = *(int *)(pcVar11 + 8);
    for (iVar13 = *(int *)(pcVar11 + 0xc) * 0xc; iVar13 != 0; iVar13 = iVar13 + -0xc) {
      puStack_64 = &DAT_012b59c8;
      ppppppuStack_70 = (uint ******)&DAT_01ce271c;
      puStack_6c = (uint *)&LAB_018a13b8;
      ppppppuStack_68 = &pppppuStack_a8;
      FUN_012fa178(&ppppppuStack_a0,&DAT_01ce25b4,&DAT_0041fe50,&ppppppuStack_70);
      puVar17 = (undefined4 *)(iVar10 + 4);
      puVar4 = (undefined4 *)(iVar10 + 8);
      iVar10 = iVar10 + 0xc;
      FUN_012b255c(&ppppppuStack_a0,*puVar17,*puVar4);
    }
  }
  pcVar11 = (char *)FUN_012bdeb4(puVar16,0xf);
  if ((pcVar11 != (char *)0x0) && (*pcVar11 == '\x04')) {
    FUN_012b2fd4(&ppppppuStack_a0,&DAT_00420454,2);
    FUN_012b255c(&ppppppuStack_a0,*(undefined4 *)(pcVar11 + 8),*(undefined4 *)(pcVar11 + 0xc));
  }
  if (puVar16[10] == 0x80000001) {
    uVar20 = 0;
  }
  else {
    uVar20 = puVar16[0xb];
  }
  FUN_012bb784(&ppppppuStack_a0,puVar12,uVar20);
  ppppppuStack_b8 = ppppppuStack_a0;
  puStack_b4 = puStack_9c;
  ppppppuStack_b0 = ppppppuStack_98;
LAB_012be38c:
  bVar2 = *(byte *)((int)puVar16 + 0xbd);
  if (ppppppuStack_b8 == (uint ******)&DAT_80000000) {
    FUN_006666fc(&ppppppuStack_70,puStack_b4[1],puStack_b4[2]);
  }
  else {
    ppppppuStack_70 = ppppppuStack_b8;
    puStack_6c = puStack_b4;
    ppppppuStack_68 = ppppppuStack_b0;
  }
  FUN_0134bd64(0,1);
  ppppppuVar8 = ppppppuStack_68;
  puVar16 = puStack_6c;
  ppppppuVar7 = ppppppuStack_70;
  if ((bVar2 & 0x1d) == 0xc) {
    DataMemoryBarrier(0xb);
    uVar9 = 0;
    if (DAT_01d50330 != 0) {
      uVar9 = FUN_019a7d0c();
    }
    uVar25 = thunk_FUN_01bee35a(uVar9,0x238);
    puVar12 = (uint *)((int)uVar25 + (int)((ulonglong)uVar25 >> 0x20));
    uVar20 = *puVar12;
    uVar22 = puVar12[1];
    if (uVar20 == 0 && uVar22 == 0) {
      ClearExclusiveLocal();
      uVar18 = DAT_01d51ab8;
      uVar19 = DAT_01d51abc;
      do {
        uVar6 = DAT_01d51abc;
        uVar5 = DAT_01d51ab8;
        if (uVar18 == 0xffffffff && uVar19 == 0xffffffff) goto LAB_012bf030;
        uVar20 = uVar18 + 1;
        uVar22 = uVar19 + (0xfffffffe < uVar18);
        if (DAT_01d51ab8 == uVar18 && DAT_01d51abc == uVar19) {
          bVar23 = (bool)hasExclusiveAccess(0x1d51ab8);
          if (bVar23) {
            DAT_01d51ab8 = uVar20;
            DAT_01d51abc = uVar22;
          }
        }
        else {
          bVar23 = false;
          ClearExclusiveLocal();
        }
        uVar18 = uVar5;
        uVar19 = uVar6;
      } while (!bVar23);
      *puVar12 = uVar20;
      puVar12[1] = uVar22;
    }
    ClearExclusiveLocal();
    if (uVar20 == DAT_01d50308 && uVar22 == DAT_01d5030c) {
      iVar13 = DAT_01d50314 + 1;
      if (0xfffffffe < DAT_01d50314) goto LAB_012be594;
    }
    else {
      do {
        if (DAT_01d50310 != 0) {
          ClearExclusiveLocal();
          FUN_0197ade4();
          goto LAB_012be66c;
        }
        bVar23 = (bool)hasExclusiveAccess(0x1d50310);
      } while (!bVar23);
      DAT_01d50310 = 1;
      DataMemoryBarrier(0xb);
LAB_012be66c:
      do {
        bVar23 = (bool)hasExclusiveAccess(0x1d50308);
      } while (!bVar23);
      iVar13 = 1;
      DAT_01d50308 = uVar20;
      DAT_01d5030c = uVar22;
    }
    DAT_01d50314 = iVar13;
    FUN_019a7f74((int)uVar24,&DAT_01d50308,puVar16,ppppppuVar8);
    iVar13 = DAT_01d50310;
    DAT_01d50314 = DAT_01d50314 - 1;
    if (DAT_01d50314 != 0) goto LAB_012be6e4;
    do {
      bVar23 = (bool)hasExclusiveAccess(0x1d50308);
    } while (!bVar23);
    DAT_01d50308 = 0;
    DAT_01d5030c = 0;
    puVar17 = &DAT_01d50310;
    DataMemoryBarrier(0xb);
    do {
      bVar23 = (bool)hasExclusiveAccess(0x1d50310);
    } while (!bVar23);
    DAT_01d50310 = 0;
  }
  else {
    uVar25 = thunk_FUN_01bee35a(ppppppuStack_68,0x238);
    puVar12 = (uint *)((int)uVar25 + (int)((ulonglong)uVar25 >> 0x20));
    uVar20 = *puVar12;
    uVar22 = puVar12[1];
    if (uVar20 == 0 && uVar22 == 0) {
      ClearExclusiveLocal();
      uVar18 = DAT_01d51ab8;
      uVar19 = DAT_01d51abc;
      do {
        uVar6 = DAT_01d51abc;
        uVar5 = DAT_01d51ab8;
        if (uVar18 == 0xffffffff && uVar19 == 0xffffffff) {
LAB_012bf030:
          FUN_019a7340();
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x12bf26c);
          (*pcVar1)();
        }
        uVar20 = uVar18 + 1;
        uVar22 = uVar19 + (0xfffffffe < uVar18);
        if (DAT_01d51ab8 == uVar18 && DAT_01d51abc == uVar19) {
          bVar23 = (bool)hasExclusiveAccess(0x1d51ab8);
          if (bVar23) {
            DAT_01d51ab8 = uVar20;
            DAT_01d51abc = uVar22;
          }
        }
        else {
          bVar23 = false;
          ClearExclusiveLocal();
        }
        uVar18 = uVar5;
        uVar19 = uVar6;
      } while (!bVar23);
      *puVar12 = uVar20;
      puVar12[1] = uVar22;
    }
    ClearExclusiveLocal();
    if (uVar20 == DAT_01d51ad0 && uVar22 == DAT_01d51ad4) {
      iVar13 = DAT_01d51adc + 1;
      if (DAT_01d51adc == -1) {
LAB_012be594:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_00526837,0x26,&DAT_01d27c2c);
      }
    }
    else {
      do {
        if (DAT_01d51ad8 != 0) {
          ClearExclusiveLocal();
          FUN_0197ade4();
          goto LAB_012be5d4;
        }
        bVar23 = (bool)hasExclusiveAccess(0x1d51ad8);
      } while (!bVar23);
      DAT_01d51ad8 = 1;
      DataMemoryBarrier(0xb);
LAB_012be5d4:
      do {
        bVar23 = (bool)hasExclusiveAccess(0x1d51ad0);
      } while (!bVar23);
      iVar13 = 1;
      DAT_01d51ad0 = uVar20;
      DAT_01d51ad4 = uVar22;
    }
    DAT_01d51adc = iVar13;
    FUN_019a7368((int)uVar24,&DAT_01d51ad0,puVar16,ppppppuVar8);
    iVar13 = DAT_01d51ad8;
    DAT_01d51adc = DAT_01d51adc + -1;
    if (DAT_01d51adc != 0) goto LAB_012be6e4;
    do {
      bVar23 = (bool)hasExclusiveAccess(0x1d51ad0);
    } while (!bVar23);
    DAT_01d51ad0 = 0;
    DAT_01d51ad4 = 0;
    puVar17 = &DAT_01d51ad8;
    DataMemoryBarrier(0xb);
    do {
      bVar23 = (bool)hasExclusiveAccess(0x1d51ad8);
    } while (!bVar23);
    DAT_01d51ad8 = 0;
  }
  if (iVar13 == 2) {
    FUN_01be6c3c(0xf0,puVar17,0x81,1);
  }
LAB_012be6e4:
  FUN_0134bd64(ppppppuVar7,puVar16);
  return;
}

