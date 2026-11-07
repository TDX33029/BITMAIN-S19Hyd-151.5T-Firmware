// FUN_006e83b8 @ 006e83b8 size=548 calls_out=5 calls_in=29
// strings: 

void FUN_006e83b8(uint *param_1,char param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  undefined2 *puVar11;
  int local_54;
  undefined2 *local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined2 *local_34;
  undefined2 *local_30;
  int local_2c;
  undefined2 *local_28;
  
  iVar9 = 0;
  pcVar10 = (char *)param_1[1] + param_1[2] * 2;
  puVar11 = (undefined2 *)&DAT_00000001;
  local_4c = 0;
  local_50 = (undefined2 *)&DAT_00000001;
  local_54 = 0;
  uVar5 = param_3;
  pcVar4 = (char *)param_1[1];
  bVar3 = false;
  do {
    bVar8 = bVar3;
    pcVar7 = pcVar4;
    if (uVar5 == 0) {
      if (pcVar7 == pcVar10) goto LAB_006e8480;
    }
    else {
      if ((uint)((int)pcVar10 - (int)pcVar7) >> 1 <= uVar5) {
LAB_006e8480:
        if ((bVar8) && (iVar9 == 0)) {
          if (local_54 == 0) {
            FUN_016f5378(&local_54);
          }
          iVar9 = 1;
          local_4c = 1;
          *local_50 = 0x4f4f;
        }
        local_3c = param_1[2];
        if (local_3c < param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(param_3,local_3c,local_3c,&DAT_01d2fe30);
        }
        local_28 = local_50 + iVar9;
        param_1[2] = param_3;
        local_38 = 0;
        local_2c = local_54;
        local_30 = local_50;
        local_34 = local_50;
        local_44 = 1;
        local_48 = 1;
        local_40 = param_1;
        FUN_006f6b60(param_1,&local_34);
        FUN_00700ec0(&local_48);
        FUN_0134aee0(local_2c,local_34,1,2);
        uVar5 = param_1[2];
        if (3 < uVar5 - param_3) {
          if (param_3 <= uVar5) {
            param_1[2] = param_3;
            uVar5 = param_3;
          }
          if (uVar5 == *param_1) {
            FUN_016f5378(param_1);
          }
          pcVar4 = (char *)(param_1[1] + uVar5 * 2);
          *pcVar4 = param_2;
          pcVar4[1] = 'O';
          param_1[2] = uVar5 + 1;
          return;
        }
        pcVar10 = (char *)param_1[1];
        pcVar4 = pcVar10 + uVar5 * 2;
        do {
          if (param_3 == 0) {
            pcVar7 = pcVar10;
            if (pcVar10 == pcVar4) {
              return;
            }
          }
          else {
            if ((uint)((int)pcVar4 - (int)pcVar10) >> 1 <= param_3) {
              return;
            }
            pcVar7 = pcVar10 + param_3 * 2;
          }
          param_3 = 0;
          pcVar10 = pcVar7 + 2;
          if (*pcVar7 == 'O') {
            *pcVar7 = param_2;
          }
          else {
            pcVar7[1] = param_2;
          }
        } while( true );
      }
      pcVar7 = pcVar7 + uVar5 * 2;
    }
    cVar1 = *pcVar7;
    uVar5 = 0;
    pcVar4 = pcVar7 + 2;
    bVar3 = true;
    if (cVar1 != 'O') {
      cVar2 = pcVar7[1];
      if (iVar9 == local_54) {
        FUN_016f5378(&local_54);
        puVar11 = local_50;
      }
      pcVar6 = (char *)(puVar11 + iVar9);
      *pcVar6 = cVar1;
      iVar9 = iVar9 + 1;
      pcVar6[1] = cVar2;
      uVar5 = 0;
      local_4c = iVar9;
      bVar3 = bVar8;
    }
  } while( true );
}

