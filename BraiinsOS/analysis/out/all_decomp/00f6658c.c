// FUN_00f6658c @ 00f6658c size=1292 calls_out=3 calls_in=1
// strings: invalid rule day julian day | invalid rule day julian day | invalid rule day week day | invalid rule day week day | invalid day time hour | invalid day time hour

void FUN_00f6658c(uint *param_1,int *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  byte local_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  undefined1 local_34;
  undefined1 uStack_33;
  ushort uStack_32;
  char *local_30;
  uint local_2c;
  uint local_28;
  char *local_24;
  
  iVar5 = param_2[1];
  puVar3 = param_1;
  if (iVar5 != 0) {
    puVar3 = (uint *)*param_2;
  }
  if (iVar5 != 0 && puVar3 != (uint *)0x0) {
    if ((char)*puVar3 != 'J') {
      if ((char)*puVar3 == 'M') {
        param_2[1] = iVar5 + -1;
        *param_2 = (int)puVar3 + 1;
        param_2[2] = param_2[2] + 1;
        FUN_00f63e44(&local_38,param_2);
        uVar6 = (uint)local_38;
        if (local_30 != (char *)0x3b9aca10) {
          param_1[1] = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
          param_1[2] = (uint)local_30;
          *(uint *)((int)param_1 + 1) = CONCAT13(local_34,CONCAT21(uStack_36,uStack_37));
          param_1[3] = local_2c;
          *(byte *)param_1 = local_38;
          return;
        }
        if (param_2[1] == 0) {
LAB_00f668c0:
          pcVar4 = (char *)0x2501;
        }
        else {
          cVar1 = *(char *)*param_2;
          param_2[1] = param_2[1] + -1;
          param_2[2] = param_2[2] + 1;
          pcVar4 = (char *)0x1501;
          *param_2 = (int)((char *)*param_2 + 1);
          if (cVar1 == '.') {
            FUN_00f63e44(&local_38,param_2);
            uVar7 = (uint)local_38;
            if (local_30 != (char *)0x3b9aca10) {
              param_1[1] = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
              param_1[2] = (uint)local_30;
              *(uint *)((int)param_1 + 1) = CONCAT13(local_34,CONCAT21(uStack_36,uStack_37));
              param_1[3] = local_2c;
              *(byte *)param_1 = local_38;
              return;
            }
            if (param_2[1] == 0) goto LAB_00f668c0;
            cVar1 = *(char *)*param_2;
            param_2[1] = param_2[1] + -1;
            param_2[2] = param_2[2] + 1;
            pcVar4 = (char *)0x1501;
            *param_2 = (int)((char *)*param_2 + 1);
            if (cVar1 == '.') {
              FUN_00f63e44(&local_38,param_2);
              if (local_30 != (char *)0x3b9aca10) {
                param_1[1] = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
                param_1[2] = (uint)local_30;
                *(uint *)((int)param_1 + 1) = CONCAT13(local_34,CONCAT21(uStack_36,uStack_37));
                param_1[3] = local_2c;
                *(byte *)param_1 = local_38;
                return;
              }
              if (0xb < uVar6 - 1) {
                *param_1 = (uint)"invalid rule day month";
                param_1[1] = 0x16;
                param_1[2] = 0x3b9aca0c;
                return;
              }
              if (4 < uVar7 - 1) {
                *param_1 = (uint)"invalid rule day week";
                param_1[1] = 0x15;
                param_1[2] = 0x3b9aca0c;
                return;
              }
              if (6 < local_38) {
                *param_1 = (uint)"invalid rule day week day";
                param_1[1] = 0x19;
                param_1[2] = 0x3b9aca0c;
                return;
              }
              uVar6 = uVar6 << 8 | uVar7 << 0x10 | (uint)local_38 << 0x18 | 2;
              goto LAB_00f66738;
            }
          }
        }
        uVar6 = 0x3b9aca06;
        uVar7 = 1;
        goto LAB_00f665f4;
      }
      goto LAB_00f665bc;
    }
    param_2[1] = iVar5 + -1;
    *param_2 = (int)puVar3 + 1;
    param_2[2] = param_2[2] + 1;
    FUN_00f63c68(&local_38,param_2);
    uVar2 = CONCAT11(uStack_37,local_38);
    if (local_30 != (char *)0x3b9aca10) goto LAB_00f6683c;
    if (uVar2 - 1 < 0x16d) {
      uVar6 = (uint)uVar2 << 0x10;
      goto LAB_00f66738;
    }
  }
  else {
LAB_00f665bc:
    FUN_00f63c68(&local_38,param_2);
    uVar2 = CONCAT11(uStack_37,local_38);
    if (local_30 != (char *)0x3b9aca10) {
LAB_00f6683c:
      *(ushort *)((int)param_1 + 6) = uStack_32;
      *(uint *)((int)param_1 + 2) = CONCAT13(uStack_33,CONCAT12(local_34,uStack_36));
      param_1[2] = (uint)local_30;
      param_1[3] = local_2c;
      *(ushort *)param_1 = uVar2;
      return;
    }
    if (uVar2 >> 1 < 0xb7) {
      uVar6 = (uint)uVar2 << 0x10 | 1;
LAB_00f66738:
      iVar5 = param_2[1];
      pcVar4 = (char *)0x1c20;
      if ((iVar5 == 0) || (pcVar8 = (char *)*param_2, *pcVar8 != '/')) {
LAB_00f668b0:
        *param_1 = uVar6;
        param_1[1] = (uint)pcVar4;
        param_1[2] = 0x3b9aca10;
        return;
      }
      param_2[1] = iVar5 + -1;
      *param_2 = (int)(pcVar8 + 1);
      param_2[2] = param_2[2] + 1;
      if (param_3 == 0) {
        FUN_00f66314(&local_38,param_2);
        if (CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)) == 0) {
          uVar7 = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
          local_28 = 0x3b9aca05;
          local_24 = (char *)0x0;
          if (uVar7 < 0x19) {
            uVar9 = 0x17;
            if (local_30 < (char *)0x3c) {
              if (local_2c < 0x3c) {
                *param_1 = uVar6;
                param_1[1] = uVar7 * 0xe10 + (int)local_30 * 0x3c + local_2c;
                param_1[2] = 0x3b9aca10;
                return;
              }
              local_30 = "invalid day time second";
            }
            else {
              local_30 = "invalid day time minute";
            }
          }
          else {
            uVar9 = 0x15;
            local_30 = "invalid day time hour";
          }
        }
        else {
          pcVar4 = local_30;
          if (local_28 == 0x3b9aca10) goto LAB_00f668b0;
          uVar9 = local_2c;
        }
        *param_1 = (uint)local_30;
        param_1[1] = uVar9;
        param_1[2] = local_28;
        param_1[3] = (uint)local_24;
        return;
      }
      iVar10 = 1;
      if ((iVar5 + -1 != 0) && (cVar1 = pcVar8[1], cVar1 == '+' || cVar1 == '-')) {
        param_2[1] = iVar5 + -2;
        *param_2 = (int)(pcVar8 + 2);
        param_2[2] = param_2[2] + 1;
        if (cVar1 == '-') {
          iVar10 = -1;
        }
      }
      FUN_00f66314(&local_38,param_2);
      if (CONCAT22(uStack_36,CONCAT11(uStack_37,local_38)) == 0) {
        iVar5 = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
        local_28 = 0x3b9aca05;
        local_24 = (char *)0x14e;
        if (iVar5 + 0xa7U < 0x14f) {
          uVar7 = 0x17;
          local_24 = local_30;
          if (local_30 < (char *)0x3c) {
            if (local_2c < 0x3c) {
              *param_1 = uVar6;
              param_1[1] = (iVar5 * 0xe10 + (int)local_30 * 0x3c + local_2c) * iVar10;
              param_1[2] = 0x3b9aca10;
              return;
            }
            local_30 = "invalid day time second";
          }
          else {
            local_30 = "invalid day time minute";
          }
        }
        else {
          uVar7 = 0x15;
          local_30 = "invalid day time hour";
        }
      }
      else {
        pcVar4 = local_30;
        if (local_28 == 0x3b9aca10) goto LAB_00f668b0;
        uVar7 = local_2c;
      }
      *param_1 = (uint)local_30;
      param_1[1] = uVar7;
      param_1[2] = local_28;
      param_1[3] = (uint)local_24;
      return;
    }
  }
  uVar6 = 0x3b9aca0c;
  uVar7 = 0x1b;
  pcVar4 = "invalid rule day julian day";
LAB_00f665f4:
  *param_1 = (uint)pcVar4;
  param_1[1] = uVar7;
  param_1[2] = uVar6;
  return;
}

