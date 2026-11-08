// FUN_0166282c @ 0166282c size=756 calls_out=7 calls_in=1
// strings: 

int * FUN_0166282c(int *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int *local_60;
  int local_5c;
  int local_58;
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
  
  piVar10 = param_1 + 6;
  do {
    if (*piVar10 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar10);
      goto LAB_0166285c;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = 1;
  DataMemoryBarrier(0xb);
LAB_0166285c:
  uVar11 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)param_1[7];
    iVar9 = local_44;
    iVar5 = local_28;
  }
  else {
    uVar11 = FUN_015bf3f8();
    uVar11 = uVar11 ^ 1;
    cVar2 = (char)param_1[7];
    iVar9 = local_44;
    iVar5 = local_28;
  }
  if (cVar2 != '\0') {
    uVar4 = (uint)local_5c >> 8;
    local_5c = CONCAT31((int3)uVar4,(char)uVar11);
    local_60 = piVar10;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_60,&DAT_018ad534,&DAT_018ad414);
  }
  local_44._1_3_ = (uint3)((uint)iVar9 >> 8);
  local_28._1_3_ = (uint3)((uint)iVar5 >> 8);
  if ((char)param_1[0xe] != '\0') {
    local_40 = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = (uint)local_44._1_3_ << 8;
    local_30 = 0;
    local_34 = (int *)0x0;
    local_38 = 0;
    local_3c = 4;
    local_5c = 1;
    local_60 = (int *)&DAT_00000001;
    local_28 = CONCAT31(local_28._1_3_,1);
    local_2c = 1;
    piVar6 = (int *)thunk_FUN_016d4a50(0x3c);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x3c);
    }
    *piVar6 = (int)local_60;
    piVar6[1] = local_5c;
    piVar6[2] = local_58;
    piVar6[3] = local_54;
    piVar6[4] = local_50;
    piVar6[5] = local_4c;
    piVar6[6] = local_48;
    piVar6[7] = local_44;
    piVar6[8] = local_40;
    piVar6[9] = local_3c;
    piVar6[10] = local_38;
    piVar6[0xb] = (int)local_34;
    piVar6[0xc] = local_30;
    piVar6[0xd] = local_2c;
    piVar6[0xe] = local_28;
    if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = 0;
LAB_01662a54:
    if (iVar9 == 2) {
      FUN_016d6968(0xf0,piVar10,0x81,1);
      return piVar6;
    }
    return piVar6;
  }
  do {
    iVar7 = *param_1;
    bVar3 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar3);
  *param_1 = iVar7 + 1;
  if (-1 < iVar7) {
    local_40 = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = (uint)local_44._1_3_ << 8;
    local_28 = (uint)local_28._1_3_ << 8;
    local_38 = 0;
    iVar7 = param_1[10];
    local_3c = 4;
    local_5c = 1;
    local_60 = (int *)0x1;
    local_2c = 1;
    local_34 = param_1;
    local_30 = iVar7;
    piVar6 = (int *)thunk_FUN_016d4a50(0x3c);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x3c);
    }
    *piVar6 = (int)local_60;
    piVar6[1] = local_5c;
    piVar6[2] = local_58;
    piVar6[3] = local_54;
    piVar6[4] = local_50;
    piVar6[5] = local_4c;
    piVar6[6] = local_48;
    piVar6[7] = local_44;
    piVar6[8] = local_40;
    piVar6[9] = local_3c;
    piVar6[10] = local_38;
    piVar6[0xb] = (int)local_34;
    piVar6[0xc] = local_30;
    piVar6[0xd] = local_2c;
    piVar6[0xe] = local_28;
    do {
      iVar8 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar8 + 1;
    iVar9 = local_44;
    iVar5 = local_28;
    if (-1 < iVar8) {
      local_60 = piVar6;
      if (iVar7 == param_1[8]) {
        FUN_016639b4();
      }
      *(int **)(param_1[9] + iVar7 * 4) = piVar6;
      param_1[10] = iVar7 + 1;
      if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(param_1 + 7) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar10;
        bVar3 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar3);
      *piVar10 = 0;
      goto LAB_01662a54;
    }
  }
  local_28 = iVar5;
  local_44 = iVar9;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1662afc);
  (*pcVar1)();
}

