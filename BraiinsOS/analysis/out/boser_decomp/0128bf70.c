// FUN_0128bf70 @ 0128bf70 size=1216 calls_out=5 calls_in=1
// strings: invalid rule day week day | invalid rule day julian day | invalid rule day julian day | invalid day time hour | invalid day time minute | invalid day time second

void FUN_0128bf70(uint *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte local_38;
  byte bStack_37;
  undefined2 uStack_36;
  undefined1 local_34;
  undefined1 uStack_33;
  ushort uStack_32;
  char *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar4 = param_2[1];
  uVar7 = 0x3b9aca05;
  if (iVar4 == 0) {
LAB_0128c0c4:
    FUN_01285c00(&local_38,param_2);
    uVar3 = CONCAT11(bStack_37,local_38);
    if (local_30 != (char *)0x3b9aca10) {
LAB_0128c17c:
      *(ushort *)((int)param_1 + 6) = uStack_32;
      *(uint *)((int)param_1 + 2) = CONCAT13(uStack_33,CONCAT12(local_34,uStack_36));
      param_1[2] = (uint)local_30;
      param_1[3] = local_2c;
      *(ushort *)param_1 = uVar3;
      return;
    }
    if (0xb6 < uVar3 >> 1) {
LAB_0128c19c:
      param_1[1] = 0x1b;
      *param_1 = (uint)"invalid rule day julian day";
      param_1[2] = 0x3b9aca0c;
      return;
    }
    uVar8 = (uint)uVar3 << 0x10 | 1;
  }
  else {
    pcVar5 = (char *)*param_2;
    if (*pcVar5 != 'J') {
      if (*pcVar5 == 'M') {
        param_2[1] = iVar4 + -1;
        *param_2 = pcVar5 + 1;
        param_2[2] = param_2[2] + 1;
        FUN_01285a38(&local_38,param_2);
        uVar8 = (uint)local_38;
        if (local_30 != (char *)0x3b9aca10) {
          param_1[1] = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
          param_1[2] = (uint)local_30;
          *(uint *)((int)param_1 + 1) = CONCAT13(local_34,CONCAT21(uStack_36,bStack_37));
          param_1[3] = local_2c;
          *(byte *)param_1 = local_38;
          return;
        }
        if (param_2[1] != 0) {
          cVar1 = *(char *)*param_2;
          param_2[1] = param_2[1] + -1;
          param_2[2] = param_2[2] + 1;
          uVar6 = 0x1501;
          *param_2 = (char *)*param_2 + 1;
          if (cVar1 != '.') goto LAB_0128c258;
          FUN_01285a38(&local_38,param_2);
          uVar9 = (uint)local_38;
          if (local_30 != (char *)0x3b9aca10) {
            param_1[1] = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
            param_1[2] = (uint)local_30;
            *(uint *)((int)param_1 + 1) = CONCAT13(local_34,CONCAT21(uStack_36,bStack_37));
            param_1[3] = local_2c;
            *(byte *)param_1 = local_38;
            return;
          }
          if (param_2[1] != 0) {
            cVar1 = *(char *)*param_2;
            param_2[1] = param_2[1] + -1;
            param_2[2] = param_2[2] + 1;
            uVar6 = 0x1501;
            *param_2 = (char *)*param_2 + 1;
            if (cVar1 != '.') goto LAB_0128c258;
            FUN_01285a38(&local_38,param_2);
            if (local_30 != (char *)0x3b9aca10) {
              param_1[1] = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
              param_1[2] = (uint)local_30;
              *(uint *)((int)param_1 + 1) = CONCAT13(local_34,CONCAT21(uStack_36,bStack_37));
              param_1[3] = local_2c;
              *(byte *)param_1 = local_38;
              return;
            }
            if (0xb < uVar8 - 1) {
              uVar7 = 0x16;
              pcVar5 = "invalid rule day month";
LAB_0128c410:
              *param_1 = (uint)pcVar5;
              param_1[1] = uVar7;
              param_1[2] = 0x3b9aca0c;
              return;
            }
            if (4 < uVar9 - 1) {
              uVar7 = 0x15;
              pcVar5 = "invalid rule day week";
              goto LAB_0128c410;
            }
            if (6 < local_38) {
              uVar7 = 0x19;
              pcVar5 = "invalid rule day week day";
              goto LAB_0128c410;
            }
            uVar8 = uVar8 << 8 | uVar9 << 0x10 | (uint)local_38 << 0x18 | 2;
            goto LAB_0128c148;
          }
        }
        uVar6 = 0x2501;
LAB_0128c258:
        *param_1 = uVar6;
        param_1[1] = 0;
        param_1[2] = 0x3b9aca06;
        return;
      }
      goto LAB_0128c0c4;
    }
    param_2[1] = iVar4 + -1;
    *param_2 = pcVar5 + 1;
    param_2[2] = param_2[2] + 1;
    FUN_01285c00(&local_38,param_2);
    uVar3 = CONCAT11(bStack_37,local_38);
    if (local_30 != (char *)0x3b9aca10) goto LAB_0128c17c;
    if (0x16c < uVar3 - 1) goto LAB_0128c19c;
    uVar8 = (uint)uVar3 << 0x10;
  }
LAB_0128c148:
  FUN_0128578c(&local_38,param_2,&DAT_005327c4);
  bVar2 = bStack_37;
  if (local_38 != 4) {
    if (local_38 != 4) {
      *param_1 = CONCAT22(uStack_36,CONCAT11(bStack_37,local_38));
      param_1[1] = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
      param_1[2] = 0x3b9aca06;
      return;
    }
    bVar2 = bStack_37 & 1;
  }
  pcVar5 = (char *)0x1c20;
  if (bVar2 == 0) {
LAB_0128c294:
    *param_1 = uVar8;
    param_1[1] = (uint)pcVar5;
    param_1[2] = 0x3b9aca10;
    return;
  }
  if (param_3 != 0) {
    FUN_0128c5e8();
    if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) == 0) {
      local_24 = 0x14e;
      if (local_30 + 0xa7 < (char *)0x14f) {
        uVar6 = 0x17;
        local_24 = local_2c;
        if (local_2c < 0x3c) {
          if (local_28 < 0x3c) {
            pcVar5 = (char *)(((int)local_30 * 0xe10 + local_2c * 0x3c + local_28) *
                             CONCAT22(uStack_32,CONCAT11(uStack_33,local_34)));
            goto LAB_0128c294;
          }
          local_30 = "invalid day time second";
        }
        else {
          local_30 = "invalid day time minute";
        }
      }
      else {
        uVar6 = 0x15;
        local_30 = "invalid day time hour";
      }
    }
    else {
      pcVar5 = local_30;
      if (local_28 == 0x3b9aca10) goto LAB_0128c294;
      uVar6 = local_2c;
      uVar7 = local_28;
    }
    *param_1 = (uint)local_30;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = local_24;
    return;
  }
  FUN_0128c45c(&local_38,param_2);
  if (CONCAT22(uStack_36,CONCAT11(bStack_37,local_38)) == 0) {
    uVar6 = CONCAT22(uStack_32,CONCAT11(uStack_33,local_34));
    local_24 = 0;
    if (uVar6 < 0x19) {
      uVar9 = 0x17;
      if (local_30 < (char *)0x3c) {
        if (local_2c < 0x3c) {
          pcVar5 = (char *)(uVar6 * 0xe10 + (int)local_30 * 0x3c + local_2c);
          goto LAB_0128c294;
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
    pcVar5 = local_30;
    if (local_28 == 0x3b9aca10) goto LAB_0128c294;
    uVar9 = local_2c;
    uVar7 = local_28;
  }
  *param_1 = (uint)local_30;
  param_1[1] = uVar9;
  param_1[2] = uVar7;
  param_1[3] = local_24;
  return;
}

