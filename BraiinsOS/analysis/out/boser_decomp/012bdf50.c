// FUN_012bdf50 @ 012bdf50 size=4760 calls_out=22 calls_in=1
// strings: argument | value

void FUN_012bdf50(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint ******ppppppuVar7;
  uint ******ppppppuVar8;
  uint *puVar9;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *****pppppuVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  uint ******local_a8;
  uint *local_a4;
  uint ******ppppppuStack_a0;
  uint *****local_98;
  uint *****local_94;
  uint ******local_90;
  uint *local_8c;
  uint ******local_88;
  uint *****local_80;
  uint *****local_7c;
  uint *****local_78;
  uint *****local_74;
  uint *****local_70;
  uint *****local_6c;
  uint *****local_68;
  uint ******local_64;
  uint ******local_60;
  uint *local_5c;
  uint ******local_58;
  undefined *local_54;
  uint ******local_50;
  undefined *local_4c;
  uint ******local_48;
  undefined1 *local_44;
  uint *****local_40;
  undefined *local_3c;
  uint *****local_38;
  undefined *local_34;
  uint ******local_30;
  undefined1 *local_2c;
  
  if (*param_2 != 2) {
    if ((*param_2 & 1) == 0) {
      FUN_012bbc48(&local_a8,param_2[2],param_2[3],param_2 + 0xf,0,0);
    }
    else {
      local_a8 = (uint ******)&DAT_80000000;
      local_a4 = param_2 + 1;
    }
    goto LAB_012be38c;
  }
  local_98 = (uint *****)&local_94;
  pppppuVar21 = (uint *****)((int)param_2 + 0x82);
  local_88 = (uint ******)0x0;
  local_90 = (uint ******)0x0;
  local_64 = (uint ******)&local_a8;
  local_a8 = (uint ******)((int)param_2 + 0x4a);
  local_8c = (uint *)&DAT_00000001;
  local_5c = (uint *)&DAT_012b59c8;
  local_94 = pppppuVar21;
  local_60 = (uint ******)&local_64;
  FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00420077,&local_60);
  puVar9 = param_2 + 0xf;
  local_7c = (uint *****)(param_2 + 0x24);
  local_78 = (uint *****)((int)param_2 + 0x66);
  local_80 = pppppuVar21;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0xbd)) {
  case 0:
    pcVar11 = (char *)FUN_012bdeb4(param_2,1);
    pcVar14 = (char *)FUN_012bdeb4(param_2,5);
    if (pcVar11 != (char *)0x0 && pcVar14 != (char *)0x0) {
      cVar3 = *pcVar11;
      bVar23 = cVar3 == '\x02';
      if (bVar23) {
        cVar3 = *pcVar14;
      }
      if (bVar23 && cVar3 == '\x02') {
        local_70 = (uint *****)(pcVar14 + 4);
        local_a8 = (uint ******)(pcVar11 + 4);
        if (*(int *)(pcVar14 + 0xc) == 0) {
          local_58 = (uint ******)&local_a8;
          local_60 = &local_7c;
          local_54 = &LAB_0193a90c;
          local_5c = (uint *)&DAT_012b5b4c;
          FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00420124,&local_60);
        }
        else {
          local_48 = (uint ******)&local_a8;
          local_50 = &local_78;
          local_58 = &local_70;
          local_60 = &local_7c;
          local_44 = &LAB_0193a90c;
          local_4c = &DAT_012b5b4c;
          local_54 = &LAB_0193a90c;
          local_5c = (uint *)&DAT_012b5b4c;
          FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_004200f5,&local_60);
        }
        uVar16 = FUN_012bdeb4(param_2,4);
        FUN_012bb2c4(&DAT_00420160,0xf,&local_90,pppppuVar21,uVar16);
        break;
      }
    }
  default:
switchD_012be008_caseD_b:
    uVar24 = FUN_012bb29c(*(undefined1 *)((int)param_2 + 0xbd));
    if ((int)uVar24 == 0) {
      if ((uint ****)param_2[0xd] != (uint ****)0x0) {
        local_60 = (uint ******)&local_a8;
        local_5c = (uint *)&LAB_019cf5b8;
        local_a8 = (uint ******)(param_2 + 0xd);
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00590e5f,&local_60);
        break;
      }
      uVar24 = 0xd0041fe39;
    }
    FUN_012b2fd4(&local_90,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
    break;
  case 1:
    pcVar11 = (char *)FUN_012bdeb4(param_2,1);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x02')) goto switchD_012be008_caseD_b;
    local_a8 = (uint ******)(pcVar11 + 4);
    local_58 = (uint ******)&local_a8;
    local_60 = &local_7c;
    local_54 = &LAB_0193a90c;
    local_5c = (uint *)&DAT_012b5b4c;
    FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_0042016f,&local_60);
    break;
  case 2:
    pcVar11 = (char *)FUN_012bdeb4(param_2,0);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x02')) goto switchD_012be008_caseD_b;
    local_a8 = (uint ******)(pcVar11 + 4);
    local_58 = (uint ******)&local_a8;
    local_60 = &local_7c;
    local_54 = &LAB_0193a90c;
    local_5c = (uint *)&DAT_012b5b4c;
    FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00420197,&local_60);
    break;
  case 3:
    pcVar11 = (char *)FUN_012bdeb4(param_2,1);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x02')) goto switchD_012be008_caseD_b;
    local_a8 = (uint ******)(pcVar11 + 4);
    local_58 = (uint ******)&local_a8;
    local_60 = &local_7c;
    local_54 = &LAB_0193a90c;
    local_5c = (uint *)&DAT_012b5b4c;
    FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_004201bd,&local_60);
    break;
  case 4:
    pcVar11 = (char *)FUN_012bdeb4(param_2,1);
    pcVar14 = (char *)FUN_012bdeb4(param_2,5);
    if (pcVar11 != (char *)0x0 && pcVar14 != (char *)0x0) {
      cVar3 = *pcVar11;
      bVar23 = cVar3 == '\x02';
      if (bVar23) {
        cVar3 = *pcVar14;
      }
      if (bVar23 && cVar3 == '\x02') {
        local_64 = (uint ******)(pcVar14 + 4);
        local_68 = (uint *****)(pcVar11 + 4);
        local_48 = &local_68;
        local_50 = &local_78;
        local_60 = &local_7c;
        local_44 = &LAB_0193a90c;
        local_4c = &DAT_012b5b4c;
        local_54 = &LAB_0193a90c;
        local_5c = (uint *)&DAT_012b5b4c;
        local_58 = (uint ******)&local_64;
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_004200f5,&local_60);
        if ((uint *****)param_2[0xd] != (uint *****)0x0) {
          local_a4 = (uint *)param_2[0xe];
          local_60 = (uint ******)&local_a8;
          local_5c = (uint *)&LAB_012c1d70;
          local_a8 = (uint ******)param_2[0xd];
          FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00578eff,&local_60);
        }
        break;
      }
    }
    goto switchD_012be008_caseD_b;
  case 5:
    pcVar11 = (char *)FUN_012bdeb4(param_2,1);
    pcVar14 = (char *)FUN_012bdeb4(param_2,5);
    if (pcVar11 != (char *)0x0 && pcVar14 != (char *)0x0) {
      cVar3 = *pcVar11;
      bVar23 = cVar3 == '\x02';
      if (bVar23) {
        cVar3 = *pcVar14;
      }
      if (bVar23 && cVar3 == '\x02') {
        local_a8 = (uint ******)(pcVar14 + 4);
        local_64 = (uint ******)(pcVar11 + 4);
        local_50 = &local_78;
        local_58 = (uint ******)&local_a8;
        local_60 = &local_7c;
        local_44 = &LAB_0193a90c;
        local_4c = &DAT_012b5b4c;
        local_54 = &LAB_0193a90c;
        local_5c = (uint *)&DAT_012b5b4c;
        local_48 = (uint ******)&local_64;
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_004201f9,&local_60);
        break;
      }
    }
    goto switchD_012be008_caseD_b;
  case 6:
    pcVar11 = (char *)FUN_012bdeb4(param_2,1);
    pcVar14 = (char *)FUN_012bdeb4(param_2,6);
    pcVar15 = (char *)FUN_012bdeb4(param_2,8);
    if (((pcVar11 != (char *)0x0) && (pcVar14 != (char *)0x0 && pcVar15 != (char *)0x0)) &&
       (*pcVar11 == '\x02')) {
      cVar3 = *pcVar14;
      bVar23 = cVar3 == '\x06';
      if (bVar23) {
        cVar3 = *pcVar15;
      }
      if (bVar23 && cVar3 == '\x06') {
        local_64 = (uint ******)(pcVar15 + 4);
        local_6c = (uint *****)(pcVar11 + 4);
        local_68 = (uint *****)(pcVar14 + 4);
        local_a4 = (uint *)&DAT_0000000d;
        if (1 < *(uint *)(pcVar14 + 4)) {
          local_a4 = (uint *)&DAT_0000000e;
        }
        local_a8 = (uint ******)&UNK_004200e7;
        if (*(uint *)(pcVar14 + 4) < 2) {
          local_a8 = (uint ******)&DAT_004200da;
        }
        local_30 = (uint ******)&local_a8;
        local_38 = (uint *****)&local_68;
        local_40 = (uint *****)&local_7c;
        local_48 = &local_6c;
        local_50 = &local_78;
        local_60 = &local_80;
        local_2c = &LAB_018a13b8;
        local_34 = &DAT_012c04c4;
        local_3c = &DAT_012b5b4c;
        local_44 = &LAB_0193a90c;
        local_4c = &DAT_012b5b4c;
        local_54 = &DAT_012c04c4;
        local_5c = (uint *)&DAT_012b5b4c;
        local_58 = (uint ******)&local_64;
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00420248,&local_60);
        break;
      }
    }
    goto switchD_012be008_caseD_b;
  case 7:
    pcVar11 = (char *)FUN_012bdeb4(param_2,1);
    pcVar14 = (char *)FUN_012bdeb4(param_2,6);
    pcVar15 = (char *)FUN_012bdeb4(param_2,7);
    if (((pcVar11 != (char *)0x0) && (pcVar14 != (char *)0x0 && pcVar15 != (char *)0x0)) &&
       (*pcVar11 == '\x02')) {
      cVar3 = *pcVar14;
      bVar23 = cVar3 == '\x06';
      if (bVar23) {
        cVar3 = *pcVar15;
      }
      if (bVar23 && cVar3 == '\x06') {
        local_64 = (uint ******)(pcVar15 + 4);
        local_6c = (uint *****)(pcVar11 + 4);
        local_68 = (uint *****)(pcVar14 + 4);
        local_a4 = (uint *)&DAT_0000000d;
        if (1 < *(uint *)(pcVar14 + 4)) {
          local_a4 = (uint *)&DAT_0000000e;
        }
        local_a8 = (uint ******)&UNK_004200e7;
        if (*(uint *)(pcVar14 + 4) < 2) {
          local_a8 = (uint ******)&DAT_004200da;
        }
        local_30 = (uint ******)&local_a8;
        local_38 = (uint *****)&local_68;
        local_40 = (uint *****)&local_7c;
        local_48 = &local_6c;
        local_50 = &local_78;
        local_60 = &local_80;
        local_2c = &LAB_018a13b8;
        local_34 = &DAT_012c04c4;
        local_3c = &DAT_012b5b4c;
        local_44 = &LAB_0193a90c;
        local_4c = &DAT_012b5b4c;
        local_54 = &DAT_012c04c4;
        local_5c = (uint *)&DAT_012b5b4c;
        local_58 = (uint ******)&local_64;
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_0042028a,&local_60);
        break;
      }
    }
    goto switchD_012be008_caseD_b;
  case 8:
    pcVar11 = (char *)FUN_012bdeb4(param_2,2);
    pcVar14 = (char *)FUN_012bdeb4(param_2,1);
    if ((pcVar14 == (char *)0x0) || (*pcVar14 != '\x02')) {
      pcVar14 = (char *)FUN_012bdeb4(param_2,0);
      if ((pcVar14 == (char *)0x0) || (*pcVar14 != '\x02')) {
        uVar24 = FUN_012bb29c(*(undefined1 *)((int)param_2 + 0xbd));
        if ((int)uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01ce2734);
        }
        FUN_012b2fd4(&local_90,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
      }
      else {
        local_a8 = (uint ******)(pcVar14 + 4);
        local_58 = (uint ******)&local_a8;
        local_60 = &local_7c;
        local_54 = &LAB_0193a90c;
        local_5c = (uint *)&DAT_012b5b4c;
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00420333,&local_60);
      }
    }
    else {
      local_74 = (uint *****)(pcVar14 + 4);
      FUN_006666fc(&local_5c,*(undefined4 *)(pcVar14 + 8),*(undefined4 *)(pcVar14 + 0xc));
      local_60 = (uint ******)CONCAT31(local_60._1_3_,2);
      iVar13 = FUN_012bb408(&local_60,pcVar11);
      FUN_012b1800(&local_60);
      if (iVar13 != 0) {
        local_58 = &local_74;
        local_60 = &local_7c;
        local_54 = &LAB_0193a90c;
        local_5c = (uint *)&DAT_012b5b4c;
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_004202fa,&local_60);
        break;
      }
      local_58 = &local_74;
      local_60 = &local_7c;
      local_54 = &LAB_0193a90c;
      local_5c = (uint *)&DAT_012b5b4c;
      FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_004202cb,&local_60);
    }
    if (pcVar11 != (char *)0x0) {
      if (*pcVar11 == '\x02') {
        local_a8 = (uint ******)(pcVar11 + 4);
        local_54 = &LAB_0193a90c;
        local_58 = (uint ******)&local_a8;
        local_60 = &local_7c;
        local_5c = (uint *)&DAT_012b5b4c;
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00420364,&local_60);
      }
      else if (*pcVar11 == '\x03') {
        FUN_012b2fd4(&local_90,":",1);
        if (*(int *)(pcVar11 + 0xc) != 0) {
          pppppuVar21 = *(uint ******)(pcVar11 + 8);
          iVar13 = *(int *)(pcVar11 + 0xc) * 0xc;
          do {
            local_50 = (uint ******)&local_a8;
            local_4c = &LAB_0193a90c;
            local_54 = &DAT_012b5b4c;
            local_5c = (uint *)&LAB_018a13b8;
            local_60 = (uint ******)&DAT_01ce271c;
            local_a8 = (uint ******)pppppuVar21;
            local_58 = &local_7c;
            FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00420373,&local_60);
            pppppuVar21 = pppppuVar21 + 3;
            iVar13 = iVar13 + -0xc;
          } while (iVar13 != 0);
        }
      }
      else {
        FUN_012b2fd4(&local_90,&DAT_00420380,0x2d);
      }
    }
    break;
  case 9:
    pcVar11 = (char *)FUN_012bdeb4(param_2,1);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x03')) goto switchD_012be008_caseD_b;
    FUN_012b2fd4(&local_90,&DAT_004203ad,0x33);
    if (*(int *)(pcVar11 + 0xc) != 0) {
      pppppuVar21 = *(uint ******)(pcVar11 + 8);
      iVar13 = *(int *)(pcVar11 + 0xc) * 0xc;
      do {
        local_50 = (uint ******)&local_a8;
        local_4c = &LAB_0193a90c;
        local_54 = &DAT_012b5b4c;
        local_5c = (uint *)&LAB_018a13b8;
        local_60 = (uint ******)&DAT_01ce271c;
        local_a8 = (uint ******)pppppuVar21;
        local_58 = &local_80;
        FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_00420373,&local_60);
        pppppuVar21 = pppppuVar21 + 3;
        iVar13 = iVar13 + -0xc;
      } while (iVar13 != 0);
    }
    break;
  case 10:
    pcVar11 = (char *)FUN_012bdeb4(param_2,0);
    if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x02')) goto switchD_012be008_caseD_b;
    local_a8 = (uint ******)(pcVar11 + 4);
    local_58 = (uint ******)&local_a8;
    local_60 = &local_7c;
    local_54 = &LAB_0193a90c;
    local_5c = (uint *)&DAT_012b5b4c;
    FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_004203e0,&local_60);
    uVar16 = FUN_012bdeb4(param_2,3);
    FUN_012bb2c4(&DAT_0042041d,0xb,&local_90,pppppuVar21,uVar16);
  }
  iVar13 = FUN_012bdeb4(param_2,10);
  bVar23 = iVar13 != 0;
  if (bVar23) {
    FUN_012b2fd4(&local_90,"\n",1);
    FUN_012b2fd4(&local_90,"\n",1);
    FUN_012bb564(&local_90,puVar9,&DAT_0041fe46,10,iVar13);
  }
  iVar10 = FUN_012bdeb4(param_2,0xb);
  if (iVar10 != 0) {
    FUN_012b2fd4(&local_90,"\n",1);
    if (iVar13 == 0) {
      FUN_012b2fd4(&local_90,"\n",1);
    }
    bVar23 = true;
    FUN_012bb564(&local_90,puVar9,"argument",8,iVar10);
  }
  iVar13 = FUN_012bdeb4(param_2,0xc);
  if (iVar13 != 0) {
    FUN_012b2fd4(&local_90,"\n",1);
    if (!bVar23) {
      FUN_012b2fd4(&local_90,"\n",1);
    }
    bVar23 = true;
    FUN_012bb564(&local_90,puVar9,"value",5,iVar13);
  }
  pcVar11 = (char *)FUN_012bdeb4(param_2,0xe);
  if ((pcVar11 != (char *)0x0) && (*pcVar11 == '\x05')) {
    if (!bVar23) {
      FUN_012b2fd4(&local_90,"\n",1);
    }
    iVar10 = *(int *)(pcVar11 + 8);
    for (iVar13 = *(int *)(pcVar11 + 0xc) * 0xc; iVar13 != 0; iVar13 = iVar13 + -0xc) {
      local_54 = &DAT_012b59c8;
      local_60 = (uint ******)&DAT_01ce271c;
      local_5c = (uint *)&LAB_018a13b8;
      local_58 = &local_98;
      FUN_012fa178(&local_90,&DAT_01ce25b4,&DAT_0041fe50,&local_60);
      puVar17 = (undefined4 *)(iVar10 + 4);
      puVar4 = (undefined4 *)(iVar10 + 8);
      iVar10 = iVar10 + 0xc;
      FUN_012b255c(&local_90,*puVar17,*puVar4);
    }
  }
  pcVar11 = (char *)FUN_012bdeb4(param_2,0xf);
  if ((pcVar11 != (char *)0x0) && (*pcVar11 == '\x04')) {
    FUN_012b2fd4(&local_90,&DAT_00420454,2);
    FUN_012b255c(&local_90,*(undefined4 *)(pcVar11 + 8),*(undefined4 *)(pcVar11 + 0xc));
  }
  if (param_2[10] == 0x80000001) {
    uVar20 = 0;
  }
  else {
    uVar20 = param_2[0xb];
  }
  FUN_012bb784(&local_90,puVar9,uVar20);
  local_a8 = local_90;
  local_a4 = local_8c;
  ppppppuStack_a0 = local_88;
LAB_012be38c:
  bVar2 = *(byte *)((int)param_2 + 0xbd);
  if (local_a8 == (uint ******)&DAT_80000000) {
    FUN_006666fc(&local_60,local_a4[1],local_a4[2]);
  }
  else {
    local_60 = local_a8;
    local_5c = local_a4;
    local_58 = ppppppuStack_a0;
  }
  FUN_0134bd64(0,1);
  ppppppuVar8 = local_58;
  puVar9 = local_5c;
  ppppppuVar7 = local_60;
  if ((bVar2 & 0x1d) == 0xc) {
    DataMemoryBarrier(0xb);
    uVar16 = 0;
    if (DAT_01d50330 != 0) {
      uVar16 = FUN_019a7d0c();
    }
    uVar24 = thunk_FUN_01bee35a(uVar16,0x238);
    puVar12 = (uint *)((int)uVar24 + (int)((ulonglong)uVar24 >> 0x20));
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
    FUN_019a7f74(param_1,&DAT_01d50308,puVar9,ppppppuVar8);
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
    uVar24 = thunk_FUN_01bee35a(local_58,0x238);
    puVar12 = (uint *)((int)uVar24 + (int)((ulonglong)uVar24 >> 0x20));
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
    FUN_019a7368(param_1,&DAT_01d51ad0,puVar9,ppppppuVar8);
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
  FUN_0134bd64(ppppppuVar7,puVar9);
  return;
}

