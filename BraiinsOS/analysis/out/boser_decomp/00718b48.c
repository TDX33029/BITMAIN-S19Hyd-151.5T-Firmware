// FUN_00718b48 @ 00718b48 size=732 calls_out=4 calls_in=2
// strings: 

void FUN_00718b48(char *param_1,int *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined3 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined2 local_5c;
  char local_5a;
  int local_58;
  int local_54;
  undefined8 local_50;
  int *local_48;
  undefined2 local_44;
  int local_40;
  int local_3c;
  char local_38;
  undefined2 local_37;
  char local_35;
  int local_34;
  int local_30;
  undefined4 local_2c;
  
  uVar15 = CONCAT44(local_50._4_4_,(int)local_50);
  iVar10 = param_2[4];
  if (iVar10 == 0) {
    local_30 = param_2[1];
  }
  else {
    if (param_2[9] == 1) {
      uVar4 = param_2[10];
      if ((uint)param_2[5] < uVar4) {
        local_2c = 0;
        local_38 = '\x13';
        local_34 = 1;
        local_30 = iVar10;
LAB_00718d64:
        param_1[3] = local_5a;
        *(undefined2 *)(param_1 + 1) = local_5c;
        *(int *)(param_1 + 4) = local_34;
        *(int *)(param_1 + 8) = local_30;
        *(undefined4 *)(param_1 + 0xc) = local_2c;
        *param_1 = local_38;
        return;
      }
      local_34 = iVar10 + uVar4;
      local_30 = param_2[5] - uVar4;
    }
    else {
      iVar3 = param_2[5];
      uVar15 = FUN_0134c25c(param_2[6]);
      local_58 = iVar10;
      local_54 = iVar3;
      local_48 = param_2 + 4;
      while( true ) {
        local_50._4_4_ = (int)((ulonglong)uVar15 >> 0x20);
        local_50._0_4_ = (int)uVar15;
        iVar10 = (int)local_50;
        iVar3 = local_50._4_4_ + -1;
        if (iVar3 == -1) break;
        FUN_00716a3c(&local_40,&local_58,*(undefined4 *)(local_48[3] + 0x20),(int)local_50);
        local_50 = uVar15;
        if (local_40 == 0x2e && local_3c == 0) {
          local_44 = local_37;
          local_5c = local_37;
          local_5a = local_35;
          uVar15 = local_50;
          if (local_38 != 'O') goto LAB_00718d64;
          goto LAB_00718c7c;
        }
        uVar15 = CONCAT44(iVar3,iVar10 + 0x10);
      }
      if (local_48[5] == 0) {
        local_48[5] = 1;
        local_48[6] = local_58 - *local_48;
      }
      local_34 = local_58;
      local_30 = local_54;
    }
LAB_00718c7c:
    *param_2 = local_34;
    param_2[1] = local_30;
  }
  if (local_30 == 0) {
    param_2[0xb] = 0;
    param_2[4] = 0;
    uVar2 = 0x4f;
  }
  else {
    iVar7 = param_2[2];
    puVar8 = (undefined3 *)((uint)&local_40 | 1);
    iVar12 = *param_2;
    iVar11 = param_2[3];
    iVar10 = *(int *)(iVar7 + 0x18);
    iVar5 = *(int *)(iVar7 + 0x1c);
    iVar3 = *(int *)(iVar7 + 0x24);
    cVar1 = *(char *)(iVar7 + 0x21);
    local_50 = uVar15;
    FUN_00719bb8(&local_40,param_2);
    iVar14 = 4;
    if (cVar1 == '\b') {
      iVar14 = 0xc;
    }
    if ((char)local_40 != 'O') {
      iVar13 = *(int *)((int)puVar8 + 7);
      iVar9 = *(int *)((int)puVar8 + 0xb);
      uVar6 = CONCAT31(*puVar8,(char)local_40);
LAB_00718d40:
      param_2[0xb] = 0;
      *param_2 = 1;
      param_2[1] = 0;
      param_2[4] = 0;
      *(undefined4 *)param_1 = uVar6;
      *(int *)(param_1 + 4) = local_3c;
      *(int *)(param_1 + 8) = iVar13;
      *(int *)(param_1 + 0xc) = iVar9;
      return;
    }
    iVar13 = *(int *)((int)puVar8 + 7);
    iVar9 = *(int *)((int)puVar8 + 0xb);
    if (iVar13 != 0 || iVar9 != 0) {
      if ((iVar9 == 0) && (iVar13 - 1U < *(uint *)(iVar11 + 8))) {
        iVar11 = (iVar13 - 1U) * 0x68 + *(int *)(iVar11 + 4);
      }
      else {
        iVar11 = FUN_0134bfa8(*(undefined4 *)(iVar11 + 0xc),*(undefined4 *)(iVar11 + 0x10),iVar13,
                              iVar9);
        if (iVar11 == 0) {
          uVar6 = 0x12;
          local_3c = 0;
          goto LAB_00718d40;
        }
      }
      cVar1 = *(char *)(iVar11 + 0x62);
      param_2[6] = iVar11;
      param_1[0] = 'O';
      param_1[1] = '\x01';
      param_2[4] = *param_2;
      param_2[5] = param_2[1];
      param_2[7] = iVar7;
      param_2[8] = ((iVar14 + iVar3) - (iVar5 + iVar10)) + iVar12;
      param_2[9] = 0;
      param_2[0xb] = (uint)(cVar1 == '\x01');
      return;
    }
    param_2[4] = 0;
    param_2[0xb] = -1;
    uVar2 = 0x14f;
  }
  *(undefined2 *)param_1 = uVar2;
  return;
}

