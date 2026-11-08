// FUN_01a3b3a4 @ 01a3b3a4 size=508 calls_out=6 calls_in=3
// strings: 

int * FUN_01a3b3a4(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *local_68;
  undefined1 local_64;
  int *local_60;
  int *local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  FUN_01656cb0(&local_60,param_1 + 6);
  piVar3 = local_5c;
  if (local_60 == (int *)0x1) {
    local_64 = (undefined1)local_58;
    local_68 = local_5c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_68,&DAT_01d2bd10,&DAT_01d2bbf0);
  }
  uVar8 = local_58 & 0xff;
  if ((char)local_5c[8] != '\0') {
    local_50 = 0;
    local_54 = (uint)local_54._1_3_ << 8;
    local_58 = 0;
    local_5c = (int *)0x1;
    local_60 = (int *)&DAT_00000001;
    local_4c = 0;
    local_48 = 0;
    local_44 = (uint)local_44._1_3_ << 8;
    local_28 = CONCAT31(local_28._1_3_,1);
    local_2c = 1;
    local_30 = 0;
    local_34 = (int *)0x0;
    local_38 = 0;
    local_40 = 0;
    local_3c = 4;
    piVar4 = (int *)thunk_FUN_01be5118(0x3c);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x3c);
    }
    *piVar4 = (int)local_60;
    piVar4[1] = (int)local_5c;
    piVar4[2] = local_58;
    piVar4[3] = local_54;
    piVar4[4] = local_50;
    piVar4[5] = local_4c;
    piVar4[6] = local_48;
    piVar4[7] = local_44;
    piVar4[8] = local_40;
    piVar4[9] = local_3c;
    piVar4[10] = local_38;
    piVar4[0xb] = (int)local_34;
    piVar4[0xc] = local_30;
    piVar4[0xd] = local_2c;
    piVar4[0xe] = local_28;
LAB_01a3b534:
    FUN_00a97e8c(piVar3,uVar8);
    return piVar4;
  }
  piVar7 = local_5c + 2;
  do {
    iVar5 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar5 + 1;
  if (-1 < iVar5) {
    local_5c = (int *)0x1;
    local_60 = (int *)0x1;
    local_2c = 1;
    iVar5 = piVar3[4];
    local_38 = 0;
    local_50 = 0;
    local_54 = (uint)local_54._1_3_ << 8;
    local_58 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = (uint)local_44._1_3_ << 8;
    local_28 = (uint)local_28._1_3_ << 8;
    local_40 = 0;
    local_3c = 4;
    local_34 = param_1;
    local_30 = iVar5;
    piVar4 = (int *)thunk_FUN_01be5118(0x3c);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x3c);
    }
    *piVar4 = (int)local_60;
    piVar4[1] = (int)local_5c;
    piVar4[2] = local_58;
    piVar4[3] = local_54;
    piVar4[4] = local_50;
    piVar4[5] = local_4c;
    piVar4[6] = local_48;
    piVar4[7] = local_44;
    piVar4[8] = local_40;
    piVar4[9] = local_3c;
    piVar4[10] = local_38;
    piVar4[0xb] = (int)local_34;
    piVar4[0xc] = local_30;
    piVar4[0xd] = local_2c;
    piVar4[0xe] = local_28;
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + 1;
    local_68 = piVar4;
    if (-1 < iVar6) {
      local_60 = piVar4;
      if (iVar5 == *piVar7) {
        FUN_019ee1a8(piVar7);
      }
      *(int **)(piVar3[3] + iVar5 * 4) = piVar4;
      piVar3[4] = iVar5 + 1;
      goto LAB_01a3b534;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a3b5a4);
  (*pcVar1)();
}

