// FUN_016e6040 @ 016e6040 size=692 calls_out=6 calls_in=0
// strings: 

void FUN_016e6040(uint *param_1,uint param_2,uint param_3,uint *param_4,int *param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar1 = *param_5;
  if (*param_4 == 0x80000000) {
LAB_016e6068:
    if (iVar1 != -0x80000000) {
      iVar1 = param_5[2];
      bVar7 = true;
LAB_016e6250:
      param_5[2] = 0;
      local_40 = 0;
      local_50 = param_5[1];
      local_4c = local_50 + iVar1 * 0x10;
      local_48 = param_5;
      local_44 = iVar1;
      if (bVar7) {
        FUN_016f1e44(&local_50);
      }
      else {
        local_30 = param_5;
        local_28 = 0;
        local_38 = local_50;
        local_34 = local_4c;
        local_2c = iVar1;
        FUN_016e435c(param_4);
        if (*param_4 != 0x80000000) {
          FUN_016e34a4(param_4);
          uVar3 = *param_4;
          bVar7 = 0x7fffffff < uVar3;
          bVar6 = uVar3 != 0x80000000;
          if (bVar6) {
            uVar3 = param_4[2];
            bVar7 = param_2 <= uVar3;
          }
          if (bVar7 && (bVar6 && uVar3 != param_2)) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_004d0288,0x44,&DAT_01d0a310);
          }
        }
      }
      goto LAB_016e62cc;
    }
  }
  else {
    if (iVar1 != -0x80000000) {
      uVar3 = param_4[2];
      iVar1 = param_5[2];
      if (iVar1 + uVar3 <= param_2) {
LAB_016e624c:
        bVar7 = false;
        goto LAB_016e6250;
      }
      iVar5 = uVar3 << 4;
      if ((param_3 & 1) == 0) {
        if (uVar3 != 0) {
          puVar2 = (uint *)(param_4[1] + 8);
          do {
            if (4 < *puVar2) {
              *puVar2 = 4;
              *(undefined1 *)(puVar2 + 1) = 0;
            }
            puVar2 = puVar2 + 4;
            iVar5 = iVar5 + -0x10;
          } while (iVar5 != 0);
        }
        if (iVar1 != 0) {
          iVar1 = iVar1 << 4;
          puVar2 = (uint *)(param_5[1] + 8);
          do {
            if (4 < *puVar2) {
              *puVar2 = 4;
              *(undefined1 *)(puVar2 + 1) = 0;
            }
            puVar2 = puVar2 + 4;
            iVar1 = iVar1 + -0x10;
          } while (iVar1 != 0);
        }
      }
      else {
        if (uVar3 != 0) {
          uVar3 = param_4[1];
          do {
            if (4 < *(uint *)(uVar3 + 8)) {
              local_2c = *(uint *)(uVar3 + 8) - 4;
              local_28 = 4;
              local_38 = *(int *)(uVar3 + 4);
              local_34 = local_38 + local_2c;
              *(undefined1 *)(uVar3 + 0xc) = 0;
              *(undefined4 *)(uVar3 + 8) = 0;
              local_30 = (int *)uVar3;
              FUN_01445cc0(&local_38);
            }
            uVar3 = uVar3 + 0x10;
            iVar5 = iVar5 + -0x10;
          } while (iVar5 != 0);
        }
        if (iVar1 != 0) {
          uVar3 = param_5[1];
          iVar1 = iVar1 << 4;
          do {
            if (4 < *(uint *)(uVar3 + 8)) {
              local_38 = *(int *)(uVar3 + 4);
              local_2c = *(uint *)(uVar3 + 8) - 4;
              local_34 = local_38 + local_2c;
              *(undefined1 *)(uVar3 + 0xc) = 0;
              *(undefined4 *)(uVar3 + 8) = 0;
              local_28 = 4;
              local_30 = (int *)uVar3;
              FUN_01445cc0(&local_38);
            }
            uVar3 = uVar3 + 0x10;
            iVar1 = iVar1 + -0x10;
          } while (iVar1 != 0);
        }
      }
      FUN_016e34a4(param_4);
      FUN_016e34a4(param_5);
      iVar1 = *param_5;
      if (*param_4 == 0x80000000) goto LAB_016e6068;
      if (iVar1 != -0x80000000) {
        iVar1 = param_5[2];
        if (iVar1 + param_4[2] <= param_2) goto LAB_016e624c;
        FUN_016c904c(param_5);
        *param_5 = -0x80000000;
      }
    }
    FUN_016c904c(param_4);
  }
  *param_4 = 0x80000000;
LAB_016e62cc:
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  *param_1 = *param_4;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  return;
}

