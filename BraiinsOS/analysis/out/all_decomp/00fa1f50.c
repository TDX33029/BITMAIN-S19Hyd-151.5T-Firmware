// FUN_00fa1f50 @ 00fa1f50 size=4896 calls_out=11 calls_in=1
// strings: argument

void FUN_00fa1f50(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int ***pppiVar10;
  int **ppiVar11;
  undefined *puVar12;
  uint uVar13;
  bool bVar14;
  int ***local_98;
  int **local_94;
  int local_90;
  int local_8c;
  int local_88;
  int **local_80;
  int **local_7c;
  int ***local_78;
  int **local_74;
  int ***local_70;
  int ****local_6c;
  undefined4 *local_68;
  int ***local_64;
  code *local_60;
  int ***local_5c;
  undefined *local_58;
  int ****local_54;
  undefined1 *local_50;
  int ***local_4c;
  undefined *local_48;
  int ****local_44;
  code *local_40;
  int ***local_3c;
  undefined4 *local_38;
  int **local_34;
  undefined4 local_30;
  int ***local_2c;
  int ***local_28;
  
  local_98 = &local_94;
  ppiVar11 = (int **)(param_2 + 0x82);
  local_88 = 0;
  local_90 = 0;
  local_28 = &local_34;
  local_34 = (int **)(param_2 + 0x4a);
  local_6c = &local_28;
  local_8c = 1;
  local_68 = (undefined4 *)&DAT_00fa02fc;
  local_94 = ppiVar11;
  FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035df0e,&local_6c);
  iVar3 = param_2 + 0x3c;
  local_7c = (int **)(param_2 + 0x90);
  pppiVar10 = (int ***)(param_2 + 0x66);
  uVar2 = *(undefined1 *)(param_2 + 0xbd);
  local_80 = ppiVar11;
  local_78 = pppiVar10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    pcVar4 = (char *)FUN_00f98440(param_2,1);
    pcVar6 = (char *)FUN_00f98440(param_2,5);
    if (pcVar4 != (char *)0x0 && pcVar6 != (char *)0x0) {
      cVar1 = *pcVar4;
      bVar14 = cVar1 == '\x02';
      if (bVar14) {
        cVar1 = *pcVar6;
      }
      if (bVar14 && cVar1 == '\x02') {
        local_28 = (int ***)(pcVar4 + 4);
        local_34 = (int **)(pcVar6 + 4);
        if (*(int *)(pcVar6 + 0xc) == 0) {
          local_64 = (int ***)&local_28;
          local_6c = (int ****)&local_7c;
          local_60 = (code *)&LAB_01110b14;
          local_68 = (undefined4 *)&DAT_00fa17d8;
          FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035df71,&local_6c);
        }
        else {
          local_54 = &local_28;
          local_5c = (int ***)&local_78;
          local_64 = &local_34;
          local_6c = (int ****)&local_7c;
          local_50 = &LAB_01110b14;
          local_58 = &DAT_00fa17d8;
          local_60 = (code *)&LAB_01110b14;
          local_68 = (undefined4 *)&DAT_00fa17d8;
          FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035dfad,&local_6c);
        }
        uVar5 = FUN_00f98440(param_2,4);
        FUN_00fa3564(&DAT_0035dfdc,0xf,&local_90,local_80,uVar5);
        goto LAB_00fa293c;
      }
    }
    break;
  case 1:
    pcVar4 = (char *)FUN_00f98440(param_2,1);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x02')) {
      local_34 = (int **)(pcVar4 + 4);
      local_64 = &local_34;
      local_6c = (int ****)&local_7c;
      local_60 = (code *)&LAB_01110b14;
      local_68 = (undefined4 *)&DAT_00fa17d8;
      FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035dfeb,&local_6c);
      goto LAB_00fa293c;
    }
    break;
  case 2:
    pcVar4 = (char *)FUN_00f98440(param_2,0);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x02')) {
      local_34 = (int **)(pcVar4 + 4);
      local_64 = &local_34;
      local_6c = (int ****)&local_7c;
      local_60 = (code *)&LAB_01110b14;
      local_68 = (undefined4 *)&DAT_00fa17d8;
      FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e013,&local_6c);
      goto LAB_00fa293c;
    }
    break;
  case 3:
    pcVar4 = (char *)FUN_00f98440(param_2,1);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x02')) {
      local_34 = (int **)(pcVar4 + 4);
      local_64 = &local_34;
      local_6c = (int ****)&local_7c;
      local_60 = (code *)&LAB_01110b14;
      local_68 = (undefined4 *)&DAT_00fa17d8;
      FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e039,&local_6c);
      goto LAB_00fa293c;
    }
    break;
  case 4:
    pcVar4 = (char *)FUN_00f98440(param_2,1);
    pcVar6 = (char *)FUN_00f98440(param_2,5);
    if (pcVar4 != (char *)0x0 && pcVar6 != (char *)0x0) {
      cVar1 = *pcVar4;
      bVar14 = cVar1 == '\x02';
      if (bVar14) {
        cVar1 = *pcVar6;
      }
      if (bVar14 && cVar1 == '\x02') {
        local_28 = (int ***)(pcVar6 + 4);
        local_2c = (int ***)(pcVar4 + 4);
        local_54 = &local_2c;
        local_5c = (int ***)&local_78;
        local_64 = (int ***)&local_28;
        local_6c = (int ****)&local_7c;
        local_50 = &LAB_01110b14;
        local_58 = &DAT_00fa17d8;
        local_60 = (code *)&LAB_01110b14;
        local_68 = (undefined4 *)&DAT_00fa17d8;
        FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035dfad,&local_6c);
        if (*(int ***)(param_2 + 0x34) != (int **)0x0) {
          local_30 = *(undefined4 *)(param_2 + 0x38);
          local_6c = (int ****)&local_34;
          local_68 = (undefined4 *)&LAB_01656d18;
          local_34 = *(int ***)(param_2 + 0x34);
          FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0057523e,&local_6c);
        }
        goto LAB_00fa293c;
      }
    }
    break;
  case 5:
    pcVar4 = (char *)FUN_00f98440(param_2,1);
    pcVar6 = (char *)FUN_00f98440(param_2,5);
    if (pcVar4 != (char *)0x0 && pcVar6 != (char *)0x0) {
      cVar1 = *pcVar4;
      bVar14 = cVar1 == '\x02';
      if (bVar14) {
        cVar1 = *pcVar6;
      }
      if (bVar14 && cVar1 == '\x02') {
        local_34 = (int **)(pcVar6 + 4);
        local_28 = (int ***)(pcVar4 + 4);
        local_54 = &local_28;
        local_5c = (int ***)&local_78;
        local_64 = &local_34;
        local_6c = (int ****)&local_7c;
        local_50 = &LAB_01110b14;
        local_58 = &DAT_00fa17d8;
        local_60 = (code *)&LAB_01110b14;
        local_68 = (undefined4 *)&DAT_00fa17d8;
        FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e075,&local_6c);
        goto LAB_00fa293c;
      }
    }
    break;
  case 6:
    pcVar4 = (char *)FUN_00f98440(param_2,1);
    pcVar6 = (char *)FUN_00f98440(param_2,6);
    pcVar7 = (char *)FUN_00f98440(param_2,8);
    if (((pcVar4 != (char *)0x0) && (pcVar6 != (char *)0x0 && pcVar7 != (char *)0x0)) &&
       (*pcVar4 == '\x02')) {
      cVar1 = *pcVar6;
      bVar14 = cVar1 == '\x06';
      if (bVar14) {
        cVar1 = *pcVar7;
      }
      if (bVar14 && cVar1 == '\x06') {
        local_28 = (int ***)(pcVar7 + 4);
        local_70 = (int ***)(pcVar4 + 4);
        local_2c = (int ***)(pcVar6 + 4);
        local_30 = 0xd;
        if (1 < *(uint *)(pcVar6 + 4)) {
          local_30 = 0xe;
        }
        local_34 = (int **)&UNK_0035e0d1;
        if (*(uint *)(pcVar6 + 4) < 2) {
          local_34 = (int **)&DAT_0035e0c4;
        }
        local_3c = &local_34;
        local_44 = &local_2c;
        local_4c = &local_7c;
        local_54 = &local_70;
        local_5c = (int ***)&local_78;
        local_64 = (int ***)&local_28;
        local_6c = (int ****)&local_80;
        local_38 = &DAT_0157d360;
        local_40 = FUN_00fa1780;
        local_48 = &DAT_00fa17d8;
        local_50 = &LAB_01110b14;
        local_58 = &DAT_00fa17d8;
        local_60 = FUN_00fa1780;
        local_68 = (undefined4 *)&DAT_00fa17d8;
        FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e0df,&local_6c);
        goto LAB_00fa293c;
      }
    }
    break;
  case 7:
    pcVar4 = (char *)FUN_00f98440(param_2,1);
    pcVar6 = (char *)FUN_00f98440(param_2,6);
    pcVar7 = (char *)FUN_00f98440(param_2,7);
    if (((pcVar4 != (char *)0x0) && (pcVar6 != (char *)0x0 && pcVar7 != (char *)0x0)) &&
       (*pcVar4 == '\x02')) {
      cVar1 = *pcVar6;
      bVar14 = cVar1 == '\x06';
      if (bVar14) {
        cVar1 = *pcVar7;
      }
      if (bVar14 && cVar1 == '\x06') {
        local_28 = (int ***)(pcVar7 + 4);
        local_70 = (int ***)(pcVar4 + 4);
        local_2c = (int ***)(pcVar6 + 4);
        local_30 = 0xd;
        if (1 < *(uint *)(pcVar6 + 4)) {
          local_30 = 0xe;
        }
        local_34 = (int **)&UNK_0035e0d1;
        if (*(uint *)(pcVar6 + 4) < 2) {
          local_34 = (int **)&DAT_0035e0c4;
        }
        local_3c = &local_34;
        local_44 = &local_2c;
        local_4c = &local_7c;
        local_54 = &local_70;
        local_5c = (int ***)&local_78;
        local_64 = (int ***)&local_28;
        local_6c = (int ****)&local_80;
        local_38 = &DAT_0157d360;
        local_40 = FUN_00fa1780;
        local_48 = &DAT_00fa17d8;
        local_50 = &LAB_01110b14;
        local_58 = &DAT_00fa17d8;
        local_60 = FUN_00fa1780;
        local_68 = (undefined4 *)&DAT_00fa17d8;
        FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e121,&local_6c);
        goto LAB_00fa293c;
      }
    }
    break;
  case 8:
    pcVar4 = (char *)FUN_00f98440(param_2,2);
    pcVar6 = (char *)FUN_00f98440(param_2,1);
    if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x02')) {
      pcVar6 = (char *)FUN_00f98440(param_2,0);
      if ((pcVar6 == (char *)0x0) || (*pcVar6 != '\x02')) {
        uVar13 = 0x2d;
        puVar12 = &DAT_0035dcfa;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0xbd)) {
        case 0:
          break;
        case 1:
          uVar13 = 0x19;
          puVar12 = &DAT_0035dd27;
          break;
        case 2:
          uVar13 = 0x17;
          puVar12 = &DAT_0035dd40;
          break;
        case 3:
          uVar13 = 0x3d;
          puVar12 = &DAT_0035dd57;
          break;
        case 4:
          uVar13 = 0x26;
          puVar12 = &DAT_0035dd94;
          break;
        case 5:
          uVar13 = 0x26;
          puVar12 = &DAT_0035ddba;
          break;
        case 6:
          uVar13 = 0x24;
          puVar12 = &DAT_0035dde0;
          break;
        case 7:
          uVar13 = 0x2a;
          puVar12 = &DAT_0035de04;
          break;
        case 8:
          uVar13 = 0x4c;
          puVar12 = &DAT_0035de2e;
          break;
        case 9:
          uVar13 = 0x30;
          puVar12 = &DAT_0035de7a;
          break;
        case 10:
          uVar13 = 0x31;
          puVar12 = &DAT_0035deaa;
          break;
        case 0xb:
          uVar13 = 0x33;
          puVar12 = &DAT_0035dedb;
          break;
        default:
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018809dc);
        }
        if ((uint)(local_90 - local_88) < uVar13) {
          FUN_00f991dc(&local_90,local_88,uVar13,1,1);
        }
        iVar8 = local_88;
        FUN_016dd1aa(local_8c + local_88,puVar12,uVar13);
        local_88 = iVar8 + uVar13;
      }
      else {
        local_34 = (int **)(pcVar6 + 4);
        local_64 = &local_34;
        local_6c = (int ****)&local_7c;
        local_60 = (code *)&LAB_01110b14;
        local_68 = (undefined4 *)&DAT_00fa17d8;
        FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e1ca,&local_6c);
      }
    }
    else {
      local_74 = (int **)(pcVar6 + 4);
      FUN_00602a1c(&local_68,*(undefined4 *)(pcVar6 + 8),*(undefined4 *)(pcVar6 + 0xc));
      local_6c = (int ****)CONCAT31(local_6c._1_3_,2);
      if ((pcVar4 != (char *)0x0) && (iVar8 = FUN_00fa3774(&local_6c,pcVar4), iVar8 != 0)) {
        FUN_00f9abb0(&local_6c);
        local_68 = (undefined4 *)&DAT_00fa17d8;
        local_6c = (int ****)&local_7c;
        local_60 = (code *)&LAB_01110b14;
        local_64 = &local_74;
        FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e191,&local_6c);
        goto LAB_00fa293c;
      }
      FUN_00f9abb0(&local_6c);
      local_68 = (undefined4 *)&DAT_00fa17d8;
      local_6c = (int ****)&local_7c;
      local_60 = (code *)&LAB_01110b14;
      local_64 = &local_74;
      FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e162,&local_6c);
    }
    if (pcVar4 != (char *)0x0) {
      if (*pcVar4 == '\x02') {
        local_34 = (int **)(pcVar4 + 4);
        local_60 = (code *)&LAB_01110b14;
        local_64 = &local_34;
        local_6c = (int ****)&local_7c;
        local_68 = (undefined4 *)&DAT_00fa17d8;
        FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e1fb,&local_6c);
      }
      else if (*pcVar4 == '\x03') {
        FUN_00f9a370(&local_90,&DAT_00418eb8,1);
        if (*(int *)(pcVar4 + 0xc) != 0) {
          ppiVar11 = *(int ***)(pcVar4 + 8);
          iVar8 = *(int *)(pcVar4 + 0xc) * 0xc;
          do {
            local_5c = &local_34;
            local_58 = &LAB_01110b14;
            local_60 = (code *)&DAT_00fa17d8;
            local_68 = &DAT_0157d360;
            local_6c = (int ****)&DAT_018809d4;
            local_64 = &local_7c;
            local_34 = ppiVar11;
            FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e20a,&local_6c);
            ppiVar11 = ppiVar11 + 3;
            iVar8 = iVar8 + -0xc;
          } while (iVar8 != 0);
        }
      }
      else {
        FUN_00f9a370(&local_90,&DAT_0035e217,0x2d);
      }
    }
    goto LAB_00fa293c;
  case 9:
    pcVar4 = (char *)FUN_00f98440(param_2,1);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x03')) {
      FUN_00f9a370(&local_90,&DAT_0035e244,0x33);
      if (*(int *)(pcVar4 + 0xc) != 0) {
        ppiVar11 = *(int ***)(pcVar4 + 8);
        iVar8 = *(int *)(pcVar4 + 0xc) * 0xc;
        do {
          local_5c = &local_34;
          local_58 = &LAB_01110b14;
          local_60 = (code *)&DAT_00fa17d8;
          local_68 = &DAT_0157d360;
          local_6c = (int ****)&DAT_018809d4;
          local_64 = &local_80;
          local_34 = ppiVar11;
          FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e20a,&local_6c);
          ppiVar11 = ppiVar11 + 3;
          iVar8 = iVar8 + -0xc;
        } while (iVar8 != 0);
      }
      goto LAB_00fa293c;
    }
    break;
  case 10:
    pcVar4 = (char *)FUN_00f98440(param_2,0);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x02')) {
      local_34 = (int **)(pcVar4 + 4);
      local_64 = &local_34;
      local_6c = (int ****)&local_7c;
      local_60 = (code *)&LAB_01110b14;
      local_68 = (undefined4 *)&DAT_00fa17d8;
      FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e277,&local_6c);
      uVar5 = FUN_00f98440(param_2,3);
      FUN_00fa3564(&DAT_0035e2b4,0xb,&local_90,local_80,uVar5);
      goto LAB_00fa293c;
    }
    break;
  default:
    goto switchD_00fa1ffc_caseD_b;
  }
  uVar2 = *(undefined1 *)(param_2 + 0xbd);
switchD_00fa1ffc_caseD_b:
  uVar13 = 0x2d;
  puVar12 = &DAT_0035dcfa;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar13 = 0x19;
    puVar12 = &DAT_0035dd27;
    break;
  case 2:
    uVar13 = 0x17;
    puVar12 = &DAT_0035dd40;
    break;
  case 3:
    uVar13 = 0x3d;
    puVar12 = &DAT_0035dd57;
    break;
  case 4:
    uVar13 = 0x26;
    puVar12 = &DAT_0035dd94;
    break;
  case 5:
    uVar13 = 0x26;
    puVar12 = &DAT_0035ddba;
    break;
  case 6:
    uVar13 = 0x24;
    puVar12 = &DAT_0035dde0;
    break;
  case 7:
    uVar13 = 0x2a;
    puVar12 = &DAT_0035de04;
    break;
  case 8:
    uVar13 = 0x4c;
    puVar12 = &DAT_0035de2e;
    break;
  case 9:
    uVar13 = 0x30;
    puVar12 = &DAT_0035de7a;
    break;
  case 10:
    uVar13 = 0x31;
    puVar12 = &DAT_0035deaa;
    break;
  case 0xb:
    uVar13 = 0x33;
    puVar12 = &DAT_0035dedb;
    break;
  default:
    if (*(int **)(param_2 + 0x34) != (int *)0x0) {
      local_6c = (int ****)&local_34;
      local_68 = (undefined4 *)&LAB_0135a8cc;
      local_34 = (int **)(param_2 + 0x34);
      FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_00590e71,&local_6c);
      goto LAB_00fa293c;
    }
    uVar13 = 0xd;
    puVar12 = &DAT_0035dcd0;
  }
  if ((uint)(local_90 - local_88) < uVar13) {
    FUN_00f991dc(&local_90,local_88,uVar13,1,1);
  }
  iVar8 = local_88;
  FUN_016dd1aa(local_8c + local_88,puVar12,uVar13);
  local_88 = iVar8 + uVar13;
LAB_00fa293c:
  iVar8 = FUN_00f98440(param_2,10);
  bVar14 = false;
  if (iVar8 != 0) {
    bVar14 = true;
    if (local_90 == local_88) {
      FUN_00f991dc(&local_90,local_88,1,1,1);
    }
    *(undefined1 *)(local_8c + local_88) = 10;
    local_88 = local_88 + 1;
    if (local_90 == local_88) {
      FUN_00f991dc(&local_90,local_88,1,1,1);
    }
    *(undefined1 *)(local_8c + local_88) = 10;
    local_88 = local_88 + 1;
    FUN_00fa38dc(&local_90,iVar3,&DAT_0035dcdd,10,iVar8);
  }
  iVar9 = FUN_00f98440(param_2,0xb);
  if (iVar9 != 0) {
    if (local_90 == local_88) {
      FUN_00f991dc(&local_90,local_88,1,1,1);
    }
    *(undefined1 *)(local_8c + local_88) = 10;
    local_88 = local_88 + 1;
    if (iVar8 == 0) {
      if (local_90 == local_88) {
        FUN_00f991dc(&local_90,local_88,1,1,1);
      }
      *(undefined1 *)(local_8c + local_88) = 10;
      local_88 = local_88 + 1;
    }
    bVar14 = true;
    FUN_00fa38dc(&local_90,iVar3,"argument",8,iVar9);
  }
  iVar8 = FUN_00f98440(param_2,0xc);
  if (iVar8 != 0) {
    if (local_90 == local_88) {
      FUN_00f991dc(&local_90,local_88,1,1,1);
    }
    *(undefined1 *)(local_8c + local_88) = 10;
    local_88 = local_88 + 1;
    if (!bVar14) {
      if (local_90 == local_88) {
        FUN_00f991dc(&local_90,local_88,1,1,1);
      }
      *(undefined1 *)(local_8c + local_88) = 10;
      local_88 = local_88 + 1;
    }
    bVar14 = true;
    FUN_00fa38dc(&local_90,iVar3,&DAT_00414725,5,iVar8);
  }
  pcVar4 = (char *)FUN_00f98440(param_2,0xe);
  if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x05')) {
    if (!bVar14) {
      if (local_90 == local_88) {
        FUN_00f991dc(&local_90,local_88,1,1,1);
      }
      *(undefined1 *)(local_8c + local_88) = 10;
      local_88 = local_88 + 1;
    }
    iVar8 = *(int *)(pcVar4 + 8);
    for (iVar3 = *(int *)(pcVar4 + 0xc) * 0xc; iVar3 != 0; iVar3 = iVar3 + -0xc) {
      local_60 = (code *)&DAT_00fa02fc;
      local_68 = &DAT_0157d360;
      local_6c = (int ****)&DAT_018809d4;
      local_64 = (int ***)&local_98;
      FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035dce7,&local_6c);
      uVar5 = *(undefined4 *)(iVar8 + 4);
      uVar13 = *(uint *)(iVar8 + 8);
      if ((uint)(local_90 - local_88) < uVar13) {
        FUN_00f991dc(&local_90,local_88,uVar13,1,1);
      }
      iVar9 = local_88;
      iVar8 = iVar8 + 0xc;
      FUN_016dd1aa(local_8c + local_88,uVar5,uVar13);
      local_88 = iVar9 + uVar13;
    }
  }
  pcVar4 = (char *)FUN_00f98440(param_2,0xf);
  if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\x04')) {
    if ((uint)(local_90 - local_88) < 2) {
      FUN_00f991dc(&local_90,local_88,2,1,1);
    }
    iVar3 = local_88 + 2;
    *(undefined2 *)(local_8c + local_88) = 0xa0a;
    uVar5 = *(undefined4 *)(pcVar4 + 8);
    uVar13 = *(uint *)(pcVar4 + 0xc);
    local_88 = iVar3;
    if ((uint)(local_90 - iVar3) < uVar13) {
      FUN_00f991dc(&local_90,iVar3,uVar13,1,1);
    }
    iVar3 = local_88;
    FUN_016dd1aa(local_8c + local_88,uVar5,uVar13);
    local_88 = iVar3 + uVar13;
  }
  if (*(int *)(param_2 + 0x28) == -0x7fffffff) {
    if (local_90 == local_88) {
      FUN_00f991dc(&local_90,local_88,1,1,1);
    }
    *(undefined1 *)(local_8c + local_88) = 10;
    local_88 = local_88 + 1;
  }
  else {
    local_34 = *(int ***)(param_2 + 0x2c);
    local_30 = *(undefined4 *)(param_2 + 0x30);
    local_2c = (int ***)&local_28;
    local_64 = &local_34;
    local_60 = (code *)&DAT_0157d360;
    local_68 = (undefined4 *)&DAT_00fa02fc;
    local_6c = &local_2c;
    local_28 = pppiVar10;
    FUN_00fa948c(&local_90,&DAT_018809bc,&DAT_0035e2bf,&local_6c);
  }
  *param_1 = local_90;
  param_1[1] = local_8c;
  param_1[2] = local_88;
  return;
}

